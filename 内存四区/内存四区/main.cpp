//面向对象
/*
 内存的分区模型：
 代码区：存放函数体的二进制代码，由操作系统管理
 全局区:   存放全局变量和静态变量以及常量
 栈区：有编译器自动分配释放，存放的参数值，局部变量
堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收
内存四区的意义：不同区域的数据，赋予不同的生命周期 */

/*
 代码区：存放cpu执行的机器指令
 大妈去是共享的，公里的目的是对于频繁执行的程序，只需要在代码区内有一份代码即可
 代码区是只读的，使其只读的原因的是防止程序意外的修改了指令
 
 全局区:   存放全局变量和静态变量以及常量，字符串和其他常量(const修饰的)
 该区域的数据在程序结束后由操作系统释放
 */

#include <iostream>
using namespace std;

int main()
{
    //全局区
    int g_a = 10;
    int g_b =10;
    
    //全局变量，静态变量，常量
    int c_g_a = 10;
    int c_g_b = 10;
    //创建普通局部变量
    int a = 10;
    int b = 10;
    
    cout<<"局部变量a的地址： "<<&a<<endl;
    cout<<"局部变量b的地址： "<<&b<<endl;
    
    cout<<"全局变量a的地址： "<<&g_a<<endl;
    cout<<"全局变量b的地址： "<<&g_b<<endl;
    
    //  静态变量,普通变量前加static
    static int s_a = 10;
    static  int s_b = 10;
    cout<<"静态变量a的地址： "<<&s_a<<endl;
    cout<<"静态变量b的地址： "<<&s_b<<endl;
    
    
    //常量
    //字符串常量
    cout<<"字符串常量的地址"<<&"hellw world: "<<endl;
    //const修饰的变量
    //const修饰的全局变量,const修饰的局部变量
    
    cout<< "全局常量c_g_a的地址为： "<<&c_g_a<<endl;
    cout<< "全局常量c_g_b的地址为： "<<&c_g_b<<endl;
    
    
     const   int c_l_a = 10;//c:const   g:global 全局  l:local 局部
     const   int c_l_b = 10;
    
      cout<< "局部常量c_g_a的地址为： "<<&c_l_a<<endl;
      cout<< "局部常量c_g_b的地址为： "<<&c_l_b<<endl;
    
    
    return 0;
}
