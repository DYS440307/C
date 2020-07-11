//指针变量指向非法的内存空间
//空指针和野指针不是我们申请的空间不要随意访问它
#include<iostream>
using namespace std;

int main()
{
    //野指针
    //尽量避免野指针
    int *p=(int *)0x1100;//强转地址
    
    cout<<*p<<endl;//报错
    
    return 0;
}

