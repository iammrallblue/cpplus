#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
    FILE *in;
    int count=0;
    int argvline;
    long int pos;
    char s[100];
    argvline=get_line(argc,argv);
    in=fopen(argv[argc-1],"r");
    if(in==NULL){
     perror("fopen");
     exit(EXIT_FAILURE);
    }
    fseek(in,0,SEEK_END);
    pos=ftell(in);
    //从后往前读的技巧就在这儿
    while(pos){
     fseek(in,--pos,SEEK_SET);
     if(fgetc(in)=='\n'){
      if(count++==argvline) break;
     }
    }//end while(pos)

    //当文件内行数不足指定输出的行数时，默认输出文件所有内容
    //注意，这儿一定的先--count,因为之前的循环内多加了
    if(--count!=argvline){
     // printf("\ncount=%d,argvline=%d\n",count,argvline);
     //直接定位到文件头
     fseek(in,0,SEEK_SET); 
    }
    while(fgets(s,sizeof(s),in)!=NULL){
       printf("%s",s);
    }

    fclose(in);
    return 0;
}//end main


int get_line(int argc,char *argv[])
{
 int line=10;
 int ch;
 //判断用户是否输入了 -n参数 
 //有的话即取用户的，否则用命令默认的10
 while((ch=getopt(argc,argv,"n:"))!=-1){
  line=atoi(argv[2]);
  break;
 }
// printf("%d",line);
 return line;
}