## C++ if选择结构实例讲解

C++中的选择结构，依旧用if选择结构、if-else选择结构、else-if多选择结构以及switch多选择结构，与C语言没有异同。下面通过训练场的1119题来为大家演示选择结构的用方法，加深理解：

```cpp
#include<iostream>
using namespace std;
int main()
{
    int a; // 待判断的这个三位数
    int ge; // 三位数中的个位
    int shi; // 三位数中的十位
    int bai; // 三位数中的百位
    cin >> a;
    ge = a % 10;
    shi = a % 100 / 10;
    bai = a / 100;
    if (ge * ge * ge + shi * shi * shi + bai * bai * bai == a)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    return 0;
}
```

请大家务必上机试验，完成1119题并提交正确。

---

再看一个题目，1057题分段函数的题，是一道二级的题。读题后很明显我们应该使用else-if多选择结构实现，最后注意用setprecision控制小数位数即可。

用C++代码实现如下：

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   double x;
   double y;
   cin >> x;
  
   if (x < 1)
   {
      y = x;
   }
   else if (x >= 1 && x < 10)
   {
      y = 2 * x - 1;
   }
   else
   {
      y = 3 * x - 11;
   }
   cout << fixed << setprecision(2) << y << endl;
   return 0;
}
```

请大家自行上机完成1057题，提交正确之后再阅读后面的章节。