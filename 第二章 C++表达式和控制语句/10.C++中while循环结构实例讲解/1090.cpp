/* 
题目 1090: A+B for Input-Output Practice (VI)
时间限制: 2s 内存限制: 128MB 提交: 10805 解决: 6513
题目描述
Your task is to calculate the sum of some integers.
输入格式
Input contains multiple test cases, and one case one line. Each case starts with an integer N, and then N integers follow in the same line.
输出格式
For each test case you should output the sum of N integers in one line, and with one line of output for each line in input.
样例输入
4 1 2 3 4
5 1 2 3 4 5
样例输出
10
15
 */

#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int sum = 0, x;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}
