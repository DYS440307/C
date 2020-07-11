/*
  数名可以相同，提高复用性
 函数重载满足的条件：
1. 统一作用域下
2.函数名相同
 3.函数参数类型不同，或者个数不同，或者顺序不同
 注意：函数的返回值不可以作为函数重载的条件
 */



#include <iostream>
using namespace std;
//1. 统一作用域下(全局)
void func()//先调上面
{
  cout<<"func调用"<<endl;
}


void func(int a)
{
  cout<<"func调用!"<<endl;
}

void func(double a)
{
  cout<<"func(double)调用!"<<endl;
}

void func(int a,double b)//int  func(int a,double b)不行
{
    cout<<"func(double a,int b)调用!"<<endl;
}
int main()
{
//    func();
    func(10);
    func(3.14);
    func(10,3.14);
    return 0;
}
