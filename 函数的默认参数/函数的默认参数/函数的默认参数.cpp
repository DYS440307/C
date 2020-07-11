/*
 函数的形参列表中的形参是可以有默认值的
 
语法：返回值类型  函数名  （参数 = 默认值）
 {}
 */

#include <iostream>
using namespace std;
//函数的默认参数
//自己传入的数据就用自己的吃，没传就用默认值
//int func(int a,int b,int c)
int func(int a,int b=20,int c=30)
{
    return a+b+c;
}

//注意：1.如果某个位置有了默认参数，从这个位置往后从这个位置往后都要有默认值
//2.函数的声明有了默认参数，函数实现就不能有默认参数
int func2(int a=10,int b=10);

int func2(int a,int b )//从定义了参数报错,用歧义

{
    return a+b;
}





int main()
{
//    cout<<func(10,20,30)<<endl;
      cout<<func(10)<<endl;
    cout<<func2(10,10)<<endl;
    return 0;
}
