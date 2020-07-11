/*
 new开辟堆区数据
 delete释放
 语法：new 数据类型
 利用new创建的数据会返回该数据对应的类型数据
 */
#include <iostream>
using namespace std;
//1.new基本语法
int * func()
{
    //在堆区创建整形的数据
    //new返回的是该类型的 指针
    int * p =  new int(10);
    return p;
}

void test01()
{
    int * p = func();
    cout<<*p<<endl;
    cout<<*p<<endl;
    cout<<*p<<endl;
    delete p;
    cout<<*p<<endl;//非法操作，内存以及被释放再次访问就是非法
    //由程序员释放
   // 如果想释放用delete
       
}

void test02()
{
    //创建10个整型数组，在堆区
   int * arr =  new int[10];//10ge元素
    for(int i =0;i<10;i++)
    {
        arr[i] = i+100;//给10个元素赋值100～109
    }
    
    //打印
     for(int i =0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }

    //释放栈区数组要加[]
    delete[]arr;
}


int main()
{
    test01();
    test02();
    
    
    return 0;
}
