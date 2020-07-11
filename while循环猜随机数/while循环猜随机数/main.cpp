//
//  main.cpp
//  while循环(猜随机数1~100)
//
//  Created by gaga on 2020/4/7.
//  Copyright © 2020 gaga. All rights reserved.
//
#include<iostream>
using namespace std;
//time系统时间的头文件包含
#include<ctime>

int main()
{
    //添加随机数利用系统当前时间
    //1系统生成随机数(用rand函数来生成随机数(伪随机数))
    srand((unsigned int)time(NULL)) ;
    int num = rand()%100+1;
    cout<<num<<endl;
    //2玩家猜测
    int val = 0;//玩家输入的数据
    
    while(1)
    {
  cin>>val;
    //3判断玩家的猜测
        //猜错 提示猜的过大或过小，重新返回第二步
        if(val > num)
        {
            cout<<"猜测过大"<<endl;
           
        }
        else if (val < num)
        {
            cout<<"猜测过小"<<endl;
           
        }
        else
        {
            cout<<"猜对了"<<endl;
            break;
//猜对退出游戏
        }
        

    }
    return 0;
}
