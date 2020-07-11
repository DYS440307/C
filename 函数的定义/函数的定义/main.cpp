//分为若干个程序块，将一段常用的代码封装起来，减少重复代码
/*
 函数一般的5个步骤：
 1.返回值类型
 2.函数名
 3.参数列表：使用该函数时传入的数据
 4.函数体语句
 5.return 表达式:函数执行完成后返回的相应的数据
 */
/*
 返回值类型    函数名（参数列表）
 {
 函数体语句
 
 return 表达式
 }
 */

//需求：实现加法的函数
/*
 功能是传入两个整型数据，计算相加的结果，并返回
 1. 返回值类型    int
 2.函数名        add
 3.参数列表      （int num1,int num2）
 4.函数体语句      int sum=num1+num2
 5。return表达式   return sum;
  */
#include<iostream>
using namespace std;
 
int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}

int main()
{
    return 0;
 }
