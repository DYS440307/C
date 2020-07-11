/*
 案例：
 每名老师带领5个学生，总共3名老师
 */

#include<iostream>
using namespace std;
#include<string>



struct student
{
    string sname;
    int score;
};





struct teacher
{
    string tname;
    struct student sarray[5];
    
};





void allocatespace(struct teacher tarray[],int len)
{
    string nameseed = "ABCDE";
    //给老师赋值
    for(int i =0;i<len;i++)
    {
        tarray[i].tname = "teacher_";
        tarray[i].tname  += nameseed[i];//自动往teacher_后补齐ABCDE
        
        
        //给学生赋值
        for(int j = 0;j<5;j++)
        {
            tarray[i].sarray[j].sname = "student_";
            tarray[i].sarray[j].sname  += nameseed[j];
            
            //给学生成绩赋随机值
            int random = rand()%60+40;//rand()%60  0~59
            tarray[i].sarray[j].score = random;
        }
    }
}



//打印所有信息
void printinfo(struct teacher tarray[],int len)
{
    for(int i =0;i<len;i++)
    {
        cout<<"老师的姓名： "<<tarray[i].tname<<endl;
        
        for(int j = 0;j<5;j++)
        {
            cout<<"\t学生姓名"<<tarray[i].sarray[j].sname<<"考试分数: "<<tarray[i].sarray[j].score<<endl;
        }
    }
}




int main()
{
    //随机数种子
    srand((unsigned int)time(NULL));//真随机数
    
    //创建三名老师的数组
    struct teacher tarray[3];
    
    //通过函数给三名老师的信息赋值
    int len = sizeof(tarray)/sizeof(tarray[0]);
    allocatespace(tarray,len);
    //打印所有的老师及学生的信息
    printinfo(tarray,len);
    
    
    
    
    return 0;
}
