//指针也是一种数据类型
//32位操作系统下，指针占用4个字节
//64位下，占8个字节
#include<iostream>
using namespace std;

int main()
{
    //指针所占的内占的空间大小
    int a=10;
//    int *p;
//    p=&a;
    
    int *p=&a;
    /*
     32位指针占用4个字节，不管是什么数据类型
     64位指针占用8个字节，
     */
    cout<<"sizeof int *="<<sizeof(int *)<<endl;
     cout<<"sizeof float *="<<sizeof(float *)<<endl;
    
    
    
    return 0;
}
