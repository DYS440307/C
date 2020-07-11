/*
 函数中形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置
 语法：返回值类型 函数名 （数据类型）{}
 
 */

#include <iostream>
using namespace std;
//占位参数,int占位的
//占位参数，还可以有默认参数：出虐= 10
void func(int a,int)
{
    cout<<"this is func:"<<endl;
}





int main()
{
    func(10,10);//占位上必须传数值
    
    
    
    
    
    return 0;
}
