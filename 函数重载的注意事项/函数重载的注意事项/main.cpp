//引用作为重载条件
//函数重载碰到函数默认参数

#include <iostream>
using namespace std;
//1.引用作为重载条件
void func(int &a)//可读可写   int &a=10;不合法
{
    cout<<"func(int &a)的调用"<<endl;
}

void func(const int&a)//只读不可写   const int &a = 10；合法
{
    cout<<"func(const int &a)的调用"<<endl;
}



//2.函数重载碰到函数默认参数,写重载的时候尽量别加默认参数

void func2(int a,int b=10)
{
    cout<<"func2(int a,int b)的调用"<<endl;
}

void func2(int a)
{
    cout<<"func2(int a)的调用"<<endl;
}


int main()
{
    int a= 10;//调用可读可写的func
    func(a);
    
    func(10);//调用只可读
    
    func2(10);//报错
    return 0;
}
