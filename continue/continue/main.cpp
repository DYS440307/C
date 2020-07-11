//
//  main.cpp
//  continue
//
//  Created by gaga on 2020/4/9.
//  Copyright © 2020 gaga. All rights rese
#include<iostream>
using namespace std;
 
int main()
{
    for(int i = 1;i<=100;i++)
    {
        
        //奇数输出，偶数不输出
       if(i%2 == 0)
        {
            continue;
            
        }
        
        cout<<i<<endl;
    }
    
    
    return 0;
}
