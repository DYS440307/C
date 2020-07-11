//将数组中的英雄冒泡排序

#include<iostream>
using namespace std;
#include <string>





//1.创建一个英雄的结构体
struct hero
{
    string name;
    int age;
   string sex;
};




//冒泡
void bubblesort(struct hero heroarray[],int len)
{
    for(int i= 0;i<len-1;i++)
        for(int j =0;j<len-i-1;j++)
        {
            if(heroarray[j].age>heroarray[j+1].age)
            {
                struct hero temp = heroarray[j];
                heroarray[j] = heroarray[j+1];
                heroarray[j+1] = temp;
            
            }
        }
}

//打印
void printhero(struct hero heroarray[],int len)
{
    for(int i=0;i<len;i++)
    {
                   cout<<"姓名： "<<heroarray[i].name
                       <<"年龄： "<<heroarray[i].age
                       <<"性别： "<<heroarray[i].sex<<endl;
    }
    
}





int main()
{
    //2.创建一的数组存放英雄
    struct hero heroarray[5] =
{
    {"刘备",23,"男"},
     {"关羽",22,"男"},
     {"张飞",20,"男"},
     {"赵云",21,"男"},
     {"貂蝉",19,"女"},
     
};
    
    int len = sizeof(heroarray)/sizeof(heroarray[0]);
    for(int i =0;i<5;i++)
    {
    cout<<"姓名： "<<heroarray[i].name
        <<"年龄： "<<heroarray[i].age
        <<"性别： "<<heroarray[i].sex<<endl;
    }

    
    //3.对数组进行排序，按年龄进行升序排列
    bubblesort(heroarray,len);
//4.将排序后的结果打印输出
    printhero(heroarray,len);


    return 0;
}
