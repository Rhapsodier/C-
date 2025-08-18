/* 
题目 1087: A+B for Input-Output Practice (III)
时间限制: 2s 内存限制: 128MB 提交: 16725 解决: 8875
题目描述
Your task is to Calculate a + b.
输入格式
Input contains multiple test cases. Each test case contains a pair of integers a and b, one pair of integers per line. A test case containing 0 0 terminates the input and this test case is not to be processed.
输出格式
For each pair of input integers a and b you should output the sum of a and b in one line, and with one line of output for each line in input.
样例输入
1 5
10 20
0 0
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
    while(cin>>a>>b && (a || b)) cout<<(a+b)<<endl;
    return 0;
}