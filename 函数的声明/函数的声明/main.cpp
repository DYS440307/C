/*
 函数可以声明多次，定义只有一次
 */
#include<iostream>
using namespace std;
//比较函数，实现两个整型数字进行返回值比较，返回较大的数
int max(int a,int b)//函数声明
{
    return a>b?a:b;
}

int main()
{
    int a=10;
    int b=20;
    
    cout<<max(a,b)<<endl;
    return 0;
}

