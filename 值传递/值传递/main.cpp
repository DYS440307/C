/*
 值传递：实际参数传给形式参数
 值传递时：形式参数发生改变不会影响实际参数
 */
#include<iostream>
using namespace std;

//两个数字进行交换
//函数不需要返回值用void
void swap(int num1, int num2)
{
    
    cout<<"交换前的数字："<<endl;
    cout<<"num1= "<<num1<<endl;
    cout<<"num2= "<<num2<<endl;

    int temp=num1;
    num1=num2;
    num2=temp;
  
    cout<<endl;
    cout<<"交换后的数字："<<endl;
    cout<<"num1= "<<num1<<endl;
    cout<<"num2= "<<num2<<endl;

}

int main()
{
    int a=10;//内存开辟数据，赋予10的值
    int b=20;//内存开辟数据，赋予20的值
    //值传递时：形式参数发生改变不会影响实际参数
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    
    swap(a,b);

      
    cout<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    
    return 0;
}
