/* 
题目 1091: A+B for Input-Output Practice (VII)
时间限制: 2s 内存限制: 128MB 提交: 11065 解决: 6490
题目描述
Your task is to Calculate a + b.
输入格式
The input will consist of a series of pairs of integers a and b, separated by a space, one pair of integers per line.
输出格式
For each pair of input integers a and b you should output the sum of a and b, and followed by a blank line.
样例输入
1 5
10 20
样例输出
6

30
 */

#include<iostream>
using namespace std;
int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        cout << a + b << endl << endl;
    }
    return 0;
}