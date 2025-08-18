/* 
题目 1088: A+B for Input-Output Practice (IV)
时间限制: 2s 内存限制: 128MB 提交: 14560 解决: 8332
题目描述
Your task is to Calculate the sum of some integers.
输入格式
Input contains multiple test cases. Each test case contains a integer N, and then N integers follow in the same line. A test case starting with 0 terminates the input and this test case is not to be processed.
输出格式
For each group of input integers you should output their sum in one line, and with one line of output for each line in input.
样例输入
4 1 2 3 4
5 1 2 3 4 5
0 
样例输出
10
15
 */

#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n)
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