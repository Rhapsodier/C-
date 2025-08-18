/* 
题目 1057: 二级C语言-分段函数
时间限制: 2s 内存限制: 192MB 提交: 23782 解决: 14885
题目描述
有一个函数如下，写一程序，输入x，输出y值。
y = x (x<1)
y = 2x-1 (1<=x<10)
y = 3x-11 (x>=10)

保留两位小数

输入格式
无
输出格式
无
样例输入
1
样例输出
1.00
 */

 #include<iostream>
#include <iomanip>
using namespace std;
int main()
{
double x, y;
cout << "请输入一个数：" << endl;
cin >> x;
if(x < 1) {
    y = x;
} else if(x < 10) {
    y = 2 * x - 1;
} else {
    y = 3 * x - 11;
}
cout << fixed << setprecision(2) << y << endl;
}