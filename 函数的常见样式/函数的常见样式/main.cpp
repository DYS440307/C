/*
 1.无参无返
 2.有参无返
 3.无参有返
 4.有参有返
 */
 
#include<iostream>
using namespace std;
 //1.无参无返
void test01()
{
    cout<<"this is test 01"<<endl;
}

//2.有参无返
void test02(int a)
{
    cout<<"this is test02a ="<<a<<endl;
}


//3.无参有返
int test03()
{
    cout<<"this is test03 "<<endl;
    return 1000;
}

 //4.有参有返
int test04(int a)
{
    cout<<"this is test04="<<a<<endl;
    return 0;
}


int main()
{
   //  1.无参无返
    test01();
  //  2.有参无返
    test02(100);
   // 3.无参有返
    int num1 = test03();
    cout<<"num1="<<num1<<endl;
   //  4.有参有返
    int num2=test04(100000);
    cout<<"num2 ="<<num2<<endl;
    
    return 0;
}
