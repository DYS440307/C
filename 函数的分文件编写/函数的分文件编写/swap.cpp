#include"swap.hpp"//函数的定义
void swap(int a,int b)
{
    int temp =a;
    a=b;
    b=temp;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    //在。hpp的头文件中要include<iostream>
   // using namespace std;cout才不报错
}
