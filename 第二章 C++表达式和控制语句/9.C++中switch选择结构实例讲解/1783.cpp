/* 
题目 1783: 星期判断机
时间限制: 2s 内存限制: 192MB 提交: 8006 解决: 3580
题目描述
刚学完switch语句，来试试身手吧！

输入一个数字0~6，输出对应的星期，比如输入0，输出Sunday,1~6分别是周一到周六

用英文输出哦！

如果不是0~6的数字，提示：input error!

输入格式
一个数字
输出格式
对应的星期
样例输入
6
样例输出
Saturday
 */

#include <iostream>
using namespace std;
int main() {
int day;
cout << "请输入一个数字(0-6),将会输出数字对应的日期,其中1-6分别是周一刀周六,0是周日:" << endl;
cin >> day;
switch(day) {
    case 0: cout << "Sunday" << endl; break; 
    case 1: cout << "Monday" << endl; break;
    case 2: cout << "Tuesday" << endl; break;
    case 3: cout << "Wednesday" << endl; break;
    case 4: cout << "Thursday" << endl; break;
    case 5: cout << "Friday" << endl; break;
    case 6: cout << "Saturday" << endl; break;
    default: cout << "input error!" << endl; break;
}
}