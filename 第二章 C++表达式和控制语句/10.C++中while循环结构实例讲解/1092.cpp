/* 
题目描述
Your task is to calculate the sum of some integers
输入格式
Input contains an integer N in the first line, and then N lines follow. Each line starts with a integer M, and then M integers follow in the same line
输出格式
For each group of input integers you should output their sum in one line, and you must note that there is a blank line between outputs.
样例输入
3
4 1 2 3 4
5 1 2 3 4 5
3 1 2 3
样例输出
10

15

6
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--){
      int m;
          int sum = 0, x;
      cin >> m;
      while(m--){  
    cin >> x;
    sum += x;
      }
      cout << sum << endl << endl;
    }
}