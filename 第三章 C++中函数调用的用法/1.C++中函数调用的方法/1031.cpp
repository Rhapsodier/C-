/* 
题目 1031: [编程入门]自定义函数之字符串反转
时间限制: 2s 内存限制: 192MB 提交: 55310 解决: 31611
题目描述
写一函数，使输入的一个字符串按反序存放，在主函数中输入并输出反序后的字符串（不包含空格）。
输入格式
一行字符
输出格式
逆序后的字符串
样例输入
123456abcdef 
样例输出
fedcba654321
 */

#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
}

int main() {
    char str[100];
    cin >> str;  
    reverseString(str);
    cout << str << endl;
    return 0;
}