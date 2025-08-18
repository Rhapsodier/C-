/* 
题目 1089: A+B for Input-Output Practice (V)
时间限制: 2s 内存限制: 128MB 提交: 11010 解决: 7425
题目描述
Your task is to calculate the sum of some integers.
输入格式
Input contains an integer N in the first line, and then N lines follow. Each line starts with a integer M, and then M integers follow in the same line.
输出格式
For each group of input integers you should output their sum in one line, and with one line of output for each line in input.
样例输入
2
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
    cin >> n;
    while(n--)
    {
        int m;
        cin >> m;
        int sum = 0, x;
        for(int i = 0; i < m; i++)
        {
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}