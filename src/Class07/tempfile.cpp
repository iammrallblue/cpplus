#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int singleNumber(string str)
{
    int ret = 0;
    for (auto e : str)
        ret ^= e;
    return ret;
}

int StrToInt3(string str)
{
    int value = 0;
    for (auto ch : str) //ch依次取的是str里面的字符,直到取完为止
    {
        value *= 10;
        value += (ch - '0');
    }
    return value;
}

int main()
{
    // using stringstream to split a string
    string str_value = "2 1 55 3 2 1 4 4 2 2 55";
    istringstream ss(str_value);

    string element;

    // while
    while (getline(ss, element, ' '))
    {
        // cout << "result: " << element << endl;
    } // while

    // call singleNumber function
    singleNumber(str_value);

} // main



// ①常规方式（下标+operator[])

#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;
 
int StrToInt1(string str)
{
    int value = 0;
    for (size_t i = 0; i < str.size(); i++)
    {
        value *= 10;
        value += str[i] - '0';
    }
    return value;
}
 
int main()
{
    cout << StrToInt1("1234") << endl;
    system("pause");
    return 0;
}

// ②使用迭代器遍历字符串

#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;
 
int StrToInt2(string str)
    {
        //迭代器--在STL中，不破坏封装的情况下去访问容器
    int value = 0;
    string::iterator it = str.begin();//返回第一个位置的迭代器（类似于指针）
    while (it != str.end())//str.end()是最后一个数据的下一个位置
    {
        value *= 10;
        value += (*it - '0');
        it++;
    }
    cout << endl;
 
    vector<int> v;//顺序表的迭代器
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    vector<int>::iterator vit = v.begin();
    while (vit != v.end())
    {
        cout << *vit << "";
        vit++;
    }
    cout << endl;
 
    /*list<int> l;链表的迭代器
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    list<int>::iterator lit = l.begin();
    while (lit != l.end())
    {
        cout << *lit << " ";
        lit++;
    }
    cout << endl;*/
    return value;
}
 
int main()
{
    cout << StrToInt2("1234") << endl;
    system("pause");
    return 0;
}

// ③新式for循环  （第三种字符串遍历方式源自于c++11）

#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;
 
int StrToInt3(string str)
    {
        int value = 0;
        for (auto ch : str)//ch依次取的是str里面的字符,直到取完为止
        {
            value *= 10;
            value += (ch - '0');
        }
        return value;
    }
 
int main()
{
    cout << StrToInt3("1234") << endl;
    system("pause");
    return 0;
}
// 需要注意的是：新式for循环的底层是用迭代器实现的