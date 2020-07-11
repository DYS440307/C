/*
 const修饰指针
 1.const修饰指针——常量指针（在指针前加一个const）
      const int*p=&a
特点：指针的指向可以修改，但是指向的值不可以修改
*p=20//错误，指针的值不可以改
p=&b//正确，指针的指向可以改
 
 2.const修饰常量——指针常量
      int*const p=&a
 指针的指向不可以改，指针指向的值可以改
 *p=20//正确，指针的值可以改
 p=&b//错误，指针的指向不可以改
 
 3.const即修饰指针，又修饰常量
 const int *const p=&a
 指针的指向不可以改，指针指向的值不可以改
 *p=20//错误，指针的值不可以改
 p=&b//错误，指针的指向不可以改
 */

#include<iostream>
using namespace std;

int main()
{
//    1.const修饰指针——常量指针
    int a=10;
    int b=10;
    
    const int *p=&a;//指针的指向可以修改，但是指向的值不可以修改
//    *p=20;错误
    p=&b;
    
//     2.const修饰常量——指针常量
    int * const p2=&a;//指针的指向不可以改，指针指向的值可以改
    *p2=100;
//   p2=&b;错误
    
//    3.const即修饰指针，又修饰常量
    const int *const p3=&a;
    //*p3=100;错
    //p3=&b；
    
    
    
    
    
    
    return 0;
}
