/* 
题目 1007: [编程入门]分段函数求值
时间限制: 2s 内存限制: 192MB 提交: 139752 解决: 76878
题目描述
有一个函数
y={  x      x<1
    |  2x-1   1<=x<10
    { 3x-11  x>=10

写一段程序，输入x，输出y

输入格式
一个数x

输出格式
一个数y

样例输入
14
样例输出
31
 */

 #include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "请输入一个数x: ";
    cin >> x;
    int y;
    if (x < 1) {
        y = x;
    } else if (x < 10) {
        y = 2 * x - 1;
    } else {
        y = 3 * x - 11;
    }
    cout << "y = " << y << endl;
    return 0;
}