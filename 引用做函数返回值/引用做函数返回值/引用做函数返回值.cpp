//引用作返回值
#include <iostream>
using namespace std;

//引用函数返回值
//1.不要返回局部变量的引用
int & test01()//void test01()  正确的写法
{
    int a=10;//局部变量，在栈区
    return a;
}


//2.函数的调用可以作为左值
int & test02()
{
   static  int a = 10;//静态变量，存放在全局区，在整个程序结束后由系统释放
    return a;
}


int main()
{
    
//    int &ref  = test01();
//    cout<<"ref="<<ref<<endl;//第一次堆，编译器做了保留
//     cout<<"ref="<<ref<<endl;//第二次是错的，a的内存已经释放，非法操作
    
    int &ref2 = test02();
    cout<<"ref2="<<ref2<<endl;
    cout<<"ref2="<<ref2<<endl;
    cout<<"ref2="<<ref2<<endl;
    
    test02() = 1000;//返回值是个引用，这个函数可以作为左值继续赋值
    cout<<"ref2="<<ref2<<endl;
    cout<<"ref2="<<ref2<<endl;

    return 0;
}
