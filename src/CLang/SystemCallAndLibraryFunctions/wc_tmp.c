#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int cnt_lines = 0;  //统计多少行
    int cnt_bytes = 0;//字节数
    int cnt_words = 0;//词语数

    int cnt_lines_total = 0;  //合计统计多少行
    int cnt_bytes_total = 0;//合计字节数
    int cnt_words_total = 0;//合计词语数


    int flag_lines = 0;//是否统计行数
    int flag_bytes = 0;//是否统计字节
    int flag_words = 0; //是否统计词数

    int i = 0;
    char* input_files[100];
    char std[]={'-',0}; //- as standard input string
    int cnt_files = 0;
    int f_in;

 
    //-----------------开始解析命令行参数
    //sample:   -c 10   file1 file2  file3
    //sample:   -n 5 file1 file2 file3 file4
    //逻辑 ，遍历所有的命令行参数，因为选项是 - 开头的，所以先判断是不是-开头的，如果是- 开头，分析 后面跟的字符是什么。
    i = 1; //i=0 表示程序本身
    for (i = 1; i < argc; i++)  //argv[1]= -c or -n
    {
        if (argv[i][0] == '-' && strlen(argv[i])>1)   //如果是- 开头，表示选项
        {
            for (unsigned int j = 1; j < strlen(argv[i]); j++)   //-w -l -c     -wl -cl -wlc  这几种情况都要分析，所以是循环遍历  - 后面的字符
            {
                switch (argv[i][j])  //判断- 后面的字符是什么
                {
                case 'c':
                    flag_bytes = 1;
                    break;
                case 'l':
                    flag_lines = 1;
                    break;
                case 'w':
                    flag_words = 1;
                    break;
                default:
                    printf("unknown options:%c", argv[i][j]);
                }
            }
        }
        else  //如果不是 -开头的，认为是文件。 允许多个文件。
        {
            input_files[cnt_files++] = argv[i];

        }
    }

	if(cnt_files==0)
	{input_files[cnt_files++]=std;}


    if(flag_bytes==0 && flag_lines==0 && flag_words==0)
    //if ((flag_bytes + flag_lines + flag_words) == 0)  //假如没有任何选项，默认是输出  in other words, the default behavior matcheshaving the options-clw) 这里取巧用加法，正常是判断
    {
        flag_bytes =1;
	flag_lines =1;
        flag_words = 1; //default values  其实后面flag只是控制输出，统计的时候还是统计了
    }

    //结束解析命令行参数
    //printf(" head %d lines,%d bytes\n", cnt_lines, cnt_bytes);
    //printf("files:");

    //开始处理文件
    char c;
    for (int j = 0; j < cnt_files; j++)
    {
        //printf("%d,%s\r\n", j, input_files[j - 1]);

        if (strcmp(input_files[j], "-") == 0)
            f_in = STDIN_FILENO;
        else
            f_in = open(input_files[j], O_RDONLY);

        if (f_in != -1)
        {
		c=0;
		cnt_lines=0;
		cnt_words=0;
		cnt_lines=0;
                while (read(f_in, &c, 1) > 0) //长度最好定义成常量
                {
                    cnt_bytes++;
                    if (c == '\n')  //换行  其实后面flag只是控制输出，统计的时候还是统计了
                    {
                        cnt_lines++;
			            cnt_words++;
                        
                    }
                    else if (c == ' ')
                    {
                        cnt_words++;
                    }

                    //处理数据
                }

        //这里对最后一行进行特殊处理。  
		if(c!=0 && c!= ' ' && c!= '\n')  //last line end without space and new line
		{
			 cnt_lines++;
                        cnt_words++;
		}
		else if (c==' ')  //last line end with space but not new line
		{
			cnt_lines++;
		}


                if (flag_lines == 1)printf("%d\t", cnt_lines);
                if (flag_words == 1)printf("%d\t", cnt_words);
                if(flag_bytes==1)printf("%d\t",cnt_bytes);
                printf("%s\n", input_files[j]);

                cnt_lines_total+=cnt_lines;
                cnt_words_total+=cnt_words;
                cnt_bytes_total+=cnt_bytes;
                //if(flag_bytes==1)printf("bytes:%d",cnt_bytes);

            if (f_in != STDIN_FILENO) //stdin need not close
                close(f_in);
        }

    }

    if (flag_lines == 1)printf("%d\t", cnt_lines_total);
    if (flag_words == 1)printf("%d\t", cnt_words_total);
    if(flag_bytes==1)printf("%d\t",cnt_bytes_total);
    printf("total\n");


}
