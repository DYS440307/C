//
//  main.cpp
//  for
//从0打印到九
//  Created by gaga on 2020/4/8.
//  Copyright © 2020 gaga. All rights reserved.
//
#include<iostream>
using namespace std;

int main()
{
    for(int i = 0;i<10;i++)
    {
        cout<<i<<endl;
    }
    return 0;
}



//等效的for循环语句
int main()
{
    int i=0;
    for(;;)
    {
        
        if(i>=10)
        {
            break;
            
         }
   cout<<i<<endl;
        i++
    }
        return 0;
}
