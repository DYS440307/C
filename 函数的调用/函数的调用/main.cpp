#include<iostream>
using namespace std;
 
int add(int num1,int num2)
{
    int sum=num1+num2;//形式上的参数，形参
    return sum;
}

int main()
{
    //调用add函数
    int a=10;//a,b为实际参数，实参
    int b=20;
    //函数调用语法：函数名（参数）
//  cin>>a;
//  cin>>b;
  int c = add(a,b);//调用时实参传递给形参
    cout<<"c="<<c<<endl;
    
    return 0;
 }

