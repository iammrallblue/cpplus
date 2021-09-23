#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

// // prime sum the one of the best solutions.
int main()
{

    int n, i, j, sum, a;
    cin >> n;

    a = 0;
    i = 2;
    sum = 0;
    while (a < n)
    {
        for (j = 2; j <= i; j++)
            if (i % j == 0)
                break;
        if (j == i)
        {
            sum += i;
            ++a;
        }
        ++i;
    }
    cout << sum;

    return EXIT_SUCCESS;
} // main


// int num, i, upto, sum = 0;

// // Take input from user
// cout << "Find sum of prime numbers upto : ";
// cin >> upto;

// for (num = 2; num <= upto; num++)
// {

//     for (i = 2; i <= (num / 2); i++)
//     {

//         if (num % i == 0)
//         {
//             i = num;
//             break;
//         }
//     }

//     // If the number is prime then add it.
//     if (i != num)
//     {
//         sum += num;
//         num++;
//     }
// }

// cout << endl
//      << "Sum of all prime numbers upto " << upto << " : " << sum;

//     int N, i, j, isPrime, n;
//     long int sum = 0;
//     int k = 0;
//     cout << "Enter integer:" << endl;
//     cin >> N;
//     for (i = 2; k < N; i++)
//     {
//         isPrime = 0;
//         /* Check whether i is prime or not */
//         for (j = 2; j <= i / 2; j++)
//         {
//             /* Check If any number between 2 to i/2 divides I
// completely If yes the i cannot be prime number */
//             if (i % j == 0)
//             {
//                 isPrime = 1;
//                 break;
//             }
//         }
//         if (isPrime == 0)
//         {
//             sum = sum + i;
//             k++;
//         }
//     }
//     cout << "The sum of the first " << N << " prime numbers is " << sum << endl;
//     return 0;
// }

// prime sum
// int check_prime(int n);
// int main()
// {
//     int n;
//     cout << "Enter integer: ";
//     cin >> n;
//     long long int primeSum = 0;
//     int i = 2, cnt = 0;
//     while (1)
//     {
//         int d = check_prime(i);
//         if (d == 1)
//         {
//             primeSum += i;
//             cnt++;
//         }
//         if (cnt == n)
//             break;
//         i++;
//     } //end of while loop
//     cout << "Prime Sum: " << primeSum;
//     return 0;
// } //end of main function

// int check_prime(int n)
// {
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//             return 0;
//     }
//     return 1;
// } //end of check_prime function

// int main()
// {

//     int N, i, j, isPrime, n;
//     long int sum = 0;
//     int k = 0;
//     cout << "Enter integer:" << endl;
//     cin >> N;
//     for (i = 2; k < N; i++)
//     {
//         isPrime = 0;
//         /* Check whether i is prime or not */
//         for (j = 2; j <= i / 2; j++)
//         {
//             /* Check If any number between 2 to i/2 divides I
// completely If yes the i cannot be prime number */
//             if (i % j == 0)
//             {
//                 isPrime = 1;
//                 break;
//             }
//         }
//         if (isPrime == 0)
//         {
//             sum = sum + i;
//             k++;
//         }
//     }
//     cout << "The sum of the first " << N << " prime numbers is " << sum << endl;
//     return 0;
// }

// example 1
// int main()
// {
//     for (int i = 2; i < 100; i++)
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//                 break;
//             else if (i == j + 1)
//                 cout << i << " ";
//         }
//     return 0;
// } // main

// example 2
// int main(void)
// {
//     int max=100000,num=0;
//     int i,j;

//     for(i=1;i<max;i++)
//     {
//         for(j=2;j<i;j++)//判断是不是素数
//         {
//             if(i%j==0)
//             {
//                 break;
//             }
//         }
//         if(j==i)
//         {
//             printf("%d\t",i);
//             num++;
//         }
//     }
//     printf("\n%d",num);

//     return 0;
// }

// example 3
// int main(void)
// {
//     int max = 5, num = 0;
//     int i, j, sum;

//     printf("%d\t", 2); //2是偶数里唯一的素数
//     num++;
//     for (i = 3; i < max; i += 2) //优化1：i+=2,排除偶数
//     {
//         for (j = 2; j <= i / 2; j++) //优化2：j<=i/2,只计算了前半段的数字
//         {
//             if (i % j == 0)
//             {
//                 break;
//             }
//         }
//         if (j > i / 2)
//         {
//             printf("%d\t", i);
//             num++;

//         }
//         sum += ++num;
//     }
//     printf("\n%d", num);
//     cout << "the sum of primes: " << sum << endl;
//     return 0;
// }

// example 4
// int main()
// {
//     int i, j, maximum, counter, sum = 0;
//     cout << "Enter the maximum value: ";
//     cin >> maximum;

//     for (i = 2; i <= maximum; i++)
//     {
//         counter = 1;
//         for (j = 2; j <= i / 2; j++)
//         {
//             if (i % j == 0)
//             {
//                 counter = 0;
//                 break;
//             }
//         }
//         if (counter == 1)
//         {
//             sum += i;
//         }
//     }
//     cout << "sum of all prime numbers between 1 to " << maximum << " is: " << sum;
//     return 0;
// }

// example 5
// int main()
// {
//     int i, j, maximum, counter, sum = 0;
//     cout << "Enter the maximum value: ";
//     cin >> maximum;
//     i = 2;
//     while (i <= maximum)
//     {
//         counter = 1;
//         j = 2;
//         while (j <= i / 2)
//         {
//             if (i % j == 0)
//             {
//                 counter = 0;
//                 break;
//             }
//             j++;
//         }
//         if (counter == 1)
//         {
//             sum += i;
//         }
//         i++;
//     }
//     cout << "sum of all prime numbers between 1 to " << maximum << " is: " << sum;

//     return 0;
// }

// example 6
// int main()
// {
// 	int sum = 0;
// 	for (int counter = 2; counter <= 100; counter++)
// 	{
// 		int isPrime = 1;
// 		for (int lower = 2; lower < counter; lower++)
// 		{
// 			if (counter % lower == 0)
// 			{
// 				isPrime = 0;
// 				break;
// 			}
// 		} // inner for
// 		if (isPrime == 1)
// 		{
// 			cout << ("%d", counter) << endl;
// 			sum += counter;
// 		}
// 	} // outer for
// 	cout << endl;
// 	cout << "amount of primes is: " << sum << endl;Ï
// 	return EXIT_SUCESS;Ï
// } // main

// example 7
// #include <iostream>
// using namespace std;

// int main() {
//     int low, high, i;
//     bool isPrime = true;

//     cout << "Enter two numbers (intervals): ";
//     cin >> low >> high;

//     cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;

//     while (low < high) {
//         isPrime = true;
//         if (low == 0 || low == 1) {
//             isPrime = false;
//         }
//         else {
//             for (i = 2; i <= low / 2; ++i) {
//                 if (low % i == 0) {
//                     isPrime = false;
//                     break;
//                 }
//             }
//         }

//         if (isPrime)
//             cout << low << " ";

//         ++low;
//     }

//     return 0;
// }

// int singleNumber(string str)
// {
//     int ret = 0;
//     for (auto e : str)
//         ret ^= e;
//     return ret;
// }

// int StrToInt3(string str)
// {
//     int value = 0;
//     for (auto ch : str) //ch依次取的是str里面的字符,直到取完为止
//     {
//         value *= 10;
//         value += (ch - '0');
//     }
//     return value;
// }

// int main()
// {
//     // using stringstream to split a string
//     string str_value = "2 1 55 3 2 1 4 4 2 2 55";
//     istringstream ss(str_value);

//     string element;

//     // while
//     while (getline(ss, element, ' '))
//     {
//         // cout << "result: " << element << endl;
//     } // while

//     // call singleNumber function
//     singleNumber(str_value);

// } // main

// // ①常规方式（下标+operator[])

// #include <iostream>
// #include <string>
// #include <vector>
// #include <list>
// using namespace std;

// int StrToInt1(string str)
// {
//     int value = 0;
//     for (size_t i = 0; i < str.size(); i++)
//     {
//         value *= 10;
//         value += str[i] - '0';
//     }
//     return value;
// }

// int main()
// {
//     cout << StrToInt1("1234") << endl;
//     system("pause");
//     return 0;
// }

// // ②使用迭代器遍历字符串

// #include <iostream>
// #include <string>
// #include <vector>
// #include <list>
// using namespace std;

// int StrToInt2(string str)
//     {
//         //迭代器--在STL中，不破坏封装的情况下去访问容器
//     int value = 0;
//     string::iterator it = str.begin();//返回第一个位置的迭代器（类似于指针）
//     while (it != str.end())//str.end()是最后一个数据的下一个位置
//     {
//         value *= 10;
//         value += (*it - '0');
//         it++;
//     }
//     cout << endl;

//     vector<int> v;//顺序表的迭代器
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     vector<int>::iterator vit = v.begin();
//     while (vit != v.end())
//     {
//         cout << *vit << "";
//         vit++;
//     }
//     cout << endl;

//     /*list<int> l;链表的迭代器
//     l.push_back(10);
//     l.push_back(20);
//     l.push_back(30);
//     list<int>::iterator lit = l.begin();
//     while (lit != l.end())
//     {
//         cout << *lit << " ";
//         lit++;
//     }
//     cout << endl;*/
//     return value;
// }

// int main()
// {
//     cout << StrToInt2("1234") << endl;
//     system("pause");
//     return 0;
// }

// // ③新式for循环  （第三种字符串遍历方式源自于c++11）

// #include <iostream>
// #include <string>
// #include <vector>
// #include <list>
// using namespace std;

// int StrToInt3(string str)
//     {
//         int value = 0;
//         for (auto ch : str)//ch依次取的是str里面的字符,直到取完为止
//         {
//             value *= 10;
//             value += (ch - '0');
//         }
//         return value;
//     }

// int main()
// {
//     cout << StrToInt3("1234") << endl;
//     system("pause");
//     return 0;
// }
// // 需要注意的是：新式for循环的底层是用迭代器实现的

// exclusive example 1
//exclusive no.
// #include<iostream>
// using namespace std;

// int main()
// {
// int num, n, exclusive = 0;
// cout<<"Enter number of odd integers: ";
// cin>>n;
// cout<<"Enter Integers: ";
// while(n!=0)
// {
// cin>>num;
// exclusive = exclusive ^ num;
// n--;
// }
// cout<<"Exclusive Number: "<<exclusive;
// return 0;
// }//end of main function