//
//  main.cpp
//  一维数组案例五只小猪称体重
//访问数组中的每个元素，更新最大值
//找出最终的小猪体重并打印
//  Created by gaga on 2020/4/9.
//  Copyright © 2020 gaga. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int arr[5]={300,350,200,400,250};//1.创建小猪体重
   //访问数组中的每个元素，更新最大值
    int max = 0;//先认定一个最大值
    for(int i=0;i<5;i++)
    {
       // cout<<arr[i]<<endl;
        if(arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    //3.打印最大值
    cout<<"最重的小猪的体重为："<<max<<endl;
    
    return 0;
}
