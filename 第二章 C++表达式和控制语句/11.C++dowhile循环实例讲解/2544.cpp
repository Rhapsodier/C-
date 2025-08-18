/* 
题目 2544: N以内累加求和
时间限制: 2s 内存限制: 192MB 提交: 6608 解决: 4048
题目描述
输入一个数字N，输出N以内（包含N）的数字之和 （N不超过1000）
输入格式
数字N
输出格式
N以内（包含N）的数字之和
样例输入
10
样例输出
55
 */

#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    do{
sum += n; 
n--; 
    }while(n > 0);
    cout << sum << endl;
    return 0;
}