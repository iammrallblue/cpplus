// testc.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int cnt_lines = 0;
    int cnt_bytes = 0;
    int i = 0;
    char *input_files[100];
    int cnt_files = 0;
    int f_in, f_out;
    char buf[1000]; //读取缓冲区

    //   std::cout << "Hello World!\n";

    //-----------------开始解析命令行参数
    // sample:   -c 10   file1 file2  file3
    // sample:   -n 5 file1 file2 file3 file4
    i = 1; // i=0 表示程序本身
    while (i < argc)
    {
        if (cnt_lines > 0 || cnt_bytes > 0) //表示已经读取到行数或者字节数参数，剩下的是文件数
        {
            input_files[cnt_files++] = argv[i];
            // printf("%s", input_files[cnt_files-1]);
            i++;
        }
        else if (strcmp(argv[i], "-c") == 0)
        {
            cnt_lines = atoi(argv[i + 1]); //下一个参数值为行数。
            i += 2;                        //跳过下一个参数
        }
        else if (strcmp(argv[i], "-n") == 0)
        {
            cnt_bytes = atoi(argv[i + 1]); //下一个参数值为字节。
            i += 2;                        // 跳过下一个参数
        }
    }
    //结束解析命令行参数
    // printf(" head %d lines,%d bytes\n", cnt_lines, cnt_bytes);
    // printf("files:");

    //开始处理文件
    int n = 0;
    for (int j = 1; j <= cnt_files; j++)
    {
        printf("%d,%s\r\n", j, input_files[j - 1]);
        f_in = open(input_files[j - 1], O_RDONLY);
        if (f_in != -1)
        {
            n = read(f_in, buf, 1000); //长度最好定义成常量
            if (n > 0)
            {
                //处理数据
            }

            close(f_in);
        }

        // printf("%d", j);
    }
    return 0;
} // main

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧:
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
