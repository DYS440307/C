 /*
  一维数组名称的用途：
  1.统计整个数组在内存中的长度
  2.可以获取数组在内存中的首地址
  */

#include<iostream>
using namespace std;

int main()
{
//     1.统计整个数组在内存中的长度
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"整个数组占用的内存空间"<<sizeof(arr)<<endl;
    cout<<"每个数组占用的内存空间"<<sizeof(arr[0])<<endl;
    cout<<"数组中元素的个数"<<sizeof(arr)/sizeof(arr[0])<<endl;

    
    
//    2.可以获取数组在内存中的首地址
    cout<<"数组首地址为："<<arr<<endl;
   /*
cout<<"数组首地址为："<<(int)arr<<endl；将16进制强制转换为10进制
    在XCode上使用的为x64的编译，X64下的void*地址为8字节，而int为4字节，强转时会导致越界，故出现此错误。
    */
    cout<<"数组中第一个元素地址为： "<<&arr[0]<<endl;
    //整个元素和第一个元素地址重合
     cout<<"数组中第二个元素地址为： "<<&arr[1]<<endl;
    // 数组名必须为常量，不可进行赋值操作



    return 0;
}
