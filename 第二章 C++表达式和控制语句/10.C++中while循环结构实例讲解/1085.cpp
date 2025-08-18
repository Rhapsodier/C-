/* 
题目 1085: A+B for Input-Output Practice (I)
时间限制: 2s 内存限制: 128MB 提交: 19154 解决: 12708
题目描述
Your task is to Calculate a + b. Too easy?! Of course! I specially designed the problem for acm beginners. You must have found that some problems have the same titles with this one, yes, all these problems were designed for the same aim
输入格式
The input will consist of a series of pairs of integers a and b, separated by a space, one pair of integers per line.
输出格式
For each pair of input integers a and b you should output the sum of a and b in one line, and with one line of output for each line in input.
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
    int a,b;
    cout << "请输入两个数，程序将实现加法功能，注意二者之间要用空格分开" << endl;
    while(cin>>a>>" ">>b)cout<<(a+b)<<endl;
    return 0;
}