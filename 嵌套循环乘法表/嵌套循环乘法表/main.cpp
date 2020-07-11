//
//  main.cpp
//  嵌套循环(乘法表)
//j列数，i行数
//  Created by gaga on 2020/4/8.
//  Copyright © 2020 gaga. All rights reserved.
#include<iostream>
using namespace std;

int main()
{
    for(int i = 1;i <= 9;i++)
    {
        //cout<<i<<endl;
         for(int j = 1;j <= i;j++)
         {
             cout<<j<<"*"<<i<<"="<<j*i<<" ";
         }
        cout<<endl;
        
   }
    
    
    return 0;
}
