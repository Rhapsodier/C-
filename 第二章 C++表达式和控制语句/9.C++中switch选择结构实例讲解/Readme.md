## C++中switch选择结构实例讲解

C++中的switch结构同样也可以实现多种分支结构，类似else if结构，即对于多种情况可以根据条件让程序判断选择走哪个分支，丰富了程序的可能性，使用方法与C语言类似，一般结构如下：

```cpp
switch(表达式)     
{ 
    case 常量表达式1: 语句1; 
    case 常量表达式2: 语句2; 
    case 常量表达式3: 语句3; 
    // … … 
    case 常量表达式n: 语句n; 
    default: 语句n+1; 
}
```

请注意，switch括号后面没有分号！这一点是新手容易犯的错误。

程序的执行流程是，首先执行switch后面小括号里表达式的值，然后和case后面的常量比较，看看哪个相等，一旦相等，那么就从这个case冒号后面的语句开始执行，即执行完对应的语句后，把后面case的语句也执行完，并且不再去判断case的值相等与否了。而如果比较完一遍发现所有case都不相等的话，那么就执行default后面的语句了。这就是switch结构的执行特点。

下面我们以一道实际问题来例，给大家详细讲解用法，1783题星期判断机，请大家先自行读题并尝试解决提交，然后再参考答案。

参考答案如下：

```cpp
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n)
    {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        default: cout << "input error!";
    }
    return 0;
}
```

请大家亲自上机编码，切记不要眼高手低！