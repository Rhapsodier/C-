/* 
The first line integer means the number of input integer a and b. Your task is to Calculate a + b.
输入格式
Your task is to Calculate a + b. The first line integer means the numbers of pairs of input integers.
输出格式
For each pair of input integers a and b you should output the sum of a and b in one line, and with one line of output for each line in input.
样例输入
2
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
    cout << "请输入要计算的整数对的数量：" << endl;
    int n;
    cin >> n;
    cout << "请输入两个数，程序将实现加法功能，注意二者之间要用空格分开" << endl;
    while(n-- && cin >> a >> b) cout << (a + b) << endl;
    return 0;
}