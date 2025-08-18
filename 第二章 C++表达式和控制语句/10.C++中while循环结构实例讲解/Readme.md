# C++中while循环结构实例讲解

C++中的循环结构主要包括：`while` 循环、`do-while` 循环以及 `for` 循环。这些循环的基本用法与C语言类似，`break` 和 `continue` 的使用方法也没有变化。下面通过例题来巩固相关语法。

---

## 例题1：判断素数（训练场1143题）

**题目描述：**

判断一个数 N 是否为素数。对于任意一个数 N，需要从2到N-1依次判断是否存在能整除N的数，如果没有则为素数，否则不是。

**C++代码实现：**

```cpp
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i >= n)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
```

---

老规矩，亲自上机敲代码本地测试没问题，提交通过之后再往后进行。

---

## 例题2：多组数据求和（训练场1085题）

**题目描述：**

计算多组测试数据的A+B的和，直到没有数据为止。

**C++代码实现：**

```cpp
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << a + b << endl;
    }
    return 0;
}
```

---

需要注意的是，`while` 循环中的条件部分是一个 `cin` 语句。这是因为 `cin` 的返回值是一个 `istream` 的流对象，当遇到输入问题时，返回值会转为 `false`，从而结束循环。这与C语言中的写法 `while(scanf("%d%d",&a,&b)==2)` 原理相同，都是通过判断返回值来控制循环。

请大家务必亲自上机测试，并用C++完成训练场1085~1092题。