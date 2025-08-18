# C++中函数调用的用法

## 基本概念
C++中函数调用的方法与C语言并无区别，依旧是在调用方函数中执行函数调用语句来实现函数调用。

## 实例讲解
下面，我们以训练场的1031题为例，为大家展示C++中函数调用及传参的使用方法。

### 1031题：字符串逆序问题
代码如下：

```cpp
#include<iostream>
#include<cstring>
using namespace std;
int Reverse(char a[],char b[])
{
    int i=0,n;
    n=strlen(a);
    while(a[i]!='\0')
    {
        b[n-i-1]=a[i];
        i++;
    }
    b[n]='\0';
    return 0;
}
int main()
{
    char str1[100];
    char str2[100];
    cin>>str1;
    Reverse(str1,str2);
    cout<<str2<<endl;
    return 0;
}
```

### 代码说明
本代码中自定义函数有两个形参，都为数组类型，需要传入两个数组来实现函数间的相互通信，请大家仔细阅读代码，通过这个程序来快速掌握C++的函数调用方法，亲自上机敲代码并提交通过！

## 作业
- 1031	[编程入门]自定义函数之字符串反转