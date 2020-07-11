
// 总结：不想修改实参，就用值传递，想修改实参就用地址传递
#include<iostream>
using namespace std;

//两个数字交换
void swap01(int a,int b)
{
    int  temp = a;
    a = b;
    b = temp;
    
    cout<<"swap01 a="<<a<<endl;
    cout<<"swap01 b= "<<b<<endl;
    
}

void swap02(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    
    
}




int main()
{
    //1.值传递
    int a=10;
    int b=20;
    swap01(a,b);//形式参数发生改变不会影响实际参数
    
    //2.地址传递,可以修饰实参
    swap02(&a,&b);
    cout<<"a="<<a<<endl;
    cout<<" b= "<<b<<endl;


    
    
    
    return 0;
}
