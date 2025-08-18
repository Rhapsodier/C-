/* 
题目 1149: C语言训练-计算1~N之间所有奇数之和
时间限制: 2s 内存限制: 192MB 提交: 9707 解决: 6714
题目描述
计算1~N之间所有奇数之和

输入格式
正整数N

输出格式
1~N之间所有奇数之和

样例输入
10
样例输出
25
 */

 #include <iostream>
 using namespace std;
    int main()
    {
        int n, sum = 0;
        cin >> n;
        for(int i = 1; i <= n; i += 2) 
        {
           sum = sum + i; 
        }
        cout << sum << endl;
    }