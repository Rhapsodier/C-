# C++ do while循环实例讲解

do while循环也是C++循环之一，一般形式如下：

```cpp
do {
    // 循环体语句
} while (表达式);
```

与while循环不同的是，它的执行流程是，遇到do先进入循环执行一次循环体里的语句，然后再判断while里的表达式是否成立，来决定是否进入循环执行第二次。可以看到，它的特点是无论条件成立与否，都会至少执行一次循环体里的语句。

---

例如题目N以内累加求和，就是一个通过循环累加的一道题，我们可以用do while循环来解决，代码如下：

```cpp
#include <iostream>
using namespace std;
int main() {
    int N, sum = 0, i = 1;
    cin >> N;
    do {
        sum += i;
        i++;
    } while (i <= N);
    cout << sum << endl;
    return 0;
}
```

---

注意while后面的小括号后面是有分号的，这点与while循环不同，切记！

---

大家可以先自行完成再参考代码。

---

### 作业

- 2544 N以内累加求和

如需批量转换其它文件，也可以继续