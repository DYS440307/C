//
//  main.cpp
//  敲套循环
//打印10*10星图
//  Created by gaga on 2020/4/8.
//  Copyright © 2020 gaga. All rights reserved.
#include<iostream>
using namespace std;

int main()
{
    
    for(int i= 0;i < 10;i++)//打印一行星图
    {
        for(int j = 0;j < 10;j++)//内层循环
    {
       
        cout<<"* ";//cout<<"* "<<i<<endl;就近原则i跟上一条的i
    }
    cout<<endl;//换行
    }
    return 0;
}
