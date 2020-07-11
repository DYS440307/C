//
//  main.cpp
//  break
//break在不同语句应用
//  Created by gaga on 2020/4/8.
//  Copyright © 2020 gaga. All rights reserved.

//switch语句

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    cout<<"选择副本的难度"<<endl;
//    cout<<"1.普通"<<endl;
//    cout<<"2.中等"<<endl;
//    cout<<"3.困难"<<endl;
//
//
//    int select = 0;//创建选择结果变量
//
//    cin>>select;//等待用户输入
//
//    switch(select)
//    {
//        case 1:
//            cout<<"您选的是普通"<<endl;
//            break;
//            case 2:
//            cout<<"您选的是中等"<<endl;
//            break;
//            case 3:
//            cout<<"您选的是困难"<<endl;
//            break;
//        default:
//            break;
//    }
//    return 0;
//}


//出现在循环语句中（打印是十个数）


//#include<iostream>
//using namespace std;
//
//int main()
//{
//    for(int i = 0;i<10;i++)
//    {
//        //如果i=5，退出循环，不再打印
//        if(i == 5)
//        {
//            break;
//        }
//        cout<<i<<endl;
//    }
//
//
//    return 0;
//}


//  嵌套循环————星图
#include<iostream>
using namespace std;

int main()
{
    
    for(int i= 0;i < 10;i++)//打印一行星图
    {
        for(int j = 0;j < 10;j++)//内层循环
    {
        if(j == 5)
        {
            break;//退出内层循环（不影响i）
        }
       
        cout<<"* ";//cout<<"* "<<i<<endl;就近原则i跟上一条的i
    }
    cout<<endl;//换行
    }
    return 0;
}
