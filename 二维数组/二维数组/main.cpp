/*
 二维数组的定义：
 1.数据类型 数组名[行数][列数]；
 2.数据类型 数组名[行数][列数]={数据1，数据2},{数据3，数据4}；//更直观可读性强
 3.数据类型 数组名[行数][列数]={数据1，数据2，数据3，数据4}；
 数据类型 数组名[][列数]={数据1，数据2},{数据3，数据4}；
 */
//#include<iostream>
//using namespace std;
//
//int main()
//{
////    1.数据类型 数组名[行数][列数]；
//    //用嵌套循环打印全部数据
//
//    int arr[2][3];
//    arr[0][0]=1;
//    arr[0][1]=2;
//    arr[0][2]=3;
//    arr[1][0]=4;
//    arr[1][1]=5;
//    arr[1][2]=6;
// //外层循环打印行数，内层打印列数
//    for(int i=0;i<2;i++)
//    {
//        for(int j=0;j<3;j++)
//        {
//            cout<<arr[i][j]<<endl;
//        }
//
//    }
//    return 0;
//}


// 数据类型 数组名[行数][列数]={数据1，数据2},{数据3，数据4}；//更直观可读性强
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int arr2[2][3]=
//    {
//        {1,2,3},
//        {4,5,6}
//
//    };
//        for(int i=0;i<2;i++)
//        {
//            for(int j=0;j<3;j++)
//            {
//                cout<<arr2[i][j]<<" ";
//            }
//           cout<<endl;
//        }
//
//    return 0;
//}


#include<iostream>
using namespace std;

int main()
{
    //二维数组名称的用途
    //1.查看内存占用的空间大小
    int arr[2][3]=
    {
        {1,2,3},
        {4,5,6}
    };
cout<<"二维数组占用的内存空间大小: "<<sizeof(arr)<<endl;
cout<<"二维数组的第一行占用的内存为： "<<sizeof(arr[0])<<endl;
    //[0]代表的是行数
cout<<"二维数组一个元素占用的内存为： "<<sizeof(arr[0][0])<<endl;
cout<<"二维数组的行数为多少："<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"二维数组的列数为多少："<<sizeof(arr[0])/sizeof(arr[0])<<endl;
    /////2.可以查看二维数组的首地址
    cout<<"二维数组的首地址为："<<(int)arr<<endl;
//xcode:x64cout强转<<"二维数组的首地址为："<<(int)(size_t)arr<<endl;强制转换为10进制  //cout<<"二维数组的首地址为："<<(int)arr<<endl;强制转换为10进制
    cout<<"二维数组第一行的首地址为： "<<arr[0]<<endl;
     cout<<"二维数组第二行的首地址为： "<<arr[1]<<endl;
   
      cout<<"二维数组第一个元素的首地址为： "<<&arr[0][0]<<endl;
       cout<<"二维数组第二个元素的首地址为： "<<&arr[0][2]<<endl;
    
    return 0;
}
