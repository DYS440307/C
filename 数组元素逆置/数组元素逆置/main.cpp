//
//  main.cpp
//  数组元素逆置
//如：原数组1，3，2，5，4。逆置：4，5，2，3，1
/*
 创建临时内存：把其实元素保存着再交换数值
 */

#include <iostream>
using namespace std;
int main()
{
    
//1.创建数组
    int arr[5]={1,3,2,5,4};
    cout<<" 数组逆置前:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
  //2.实现逆置
    //2.1记录下标的位置
    //2.2记录结束下标的位置
    //2.3起始下标和结束下标的互换
    //2.4起始位置++，结束位置--
    //2.5循环执行2.1操作，直到起始位置》=结束位置
            int start = 0;//起始元素下标
            int end =sizeof(arr)/sizeof(arr[0])-1;//末尾元素下标
while(start<end)
    {
        //实现元素互换
                    int temp =arr[start];
                    arr[start]=arr[end];
                    arr[end]=temp;
        //下标更新
            start++;//首位后移
            end--;//末尾前移
    }
    cout<<"逆置后："<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
