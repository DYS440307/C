/*
 1。数据类型   数组名[数组长度]；
2. 数据类型   数组名[数组长度]={值1，值2，值3...}；
 3.数据类型   数组名[]={值1，值2，值3...}；
 */
//#include<iostream>
//using namespace std;
//
//int main()
//{
////1.数据类型   数组名[数组长度]；
//    int arr[5];
//     //给元素赋值
//    //下标从0开始
//      arr[0]=10;
//      arr[1]=20;
//      arr[2]=30;
//      arr[3]=40;
//      arr[4]=50;
//
////    访问数据元素
//    cout<<arr[0]<<endl;
//    return 0;
//}


//2.数据类型   数组名[数组长度]={值1，值2，值3...}；
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int arr2[5] = {10,20,30,40,50};
//
////    cout<<arr2[0]<<endl;
////    cout<<arr2[1]<<endl;
////    cout<<arr2[2]<<endl;
////    cout<<arr2[3]<<endl;
////    cout<<arr2[4]<<endl;
////    利用循环输出
////
//    for(int i =0;i<5;i++)
//    {
//        cout<<arr2[i]<<endl;
//    }
//
//
//    return 0;
//
//}

//如果在初始化的时候没有全部填写完，会用0来填补其余数据
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int arr2[5] = {10,20,30};
//
////    cout<<arr2[0]<<endl;
////    cout<<arr2[1]<<endl;
////    cout<<arr2[2]<<endl;
////    cout<<arr2[3]<<endl;
////    cout<<arr2[4]<<endl;
////    利用循环输出
////
//    for(int i =0;i<5;i++)
//    {
//        cout<<arr2[i]<<endl;
//    }
//
//
//    return 0;
//
//}


//3.数据类型   数组名[]={值1，值2，值3...}；
#include<iostream>
using namespace std;

int main()
{
    int arr3[] = {90,80,70,60,50,40,30,20,10};
    for(int i = 0;i < 9;i++)
    {
        
        cout<<arr3[i]<<endl;
    }
    
    return 0;
}
