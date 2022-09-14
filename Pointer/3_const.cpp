/**
 * File : 3_const.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/14 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * const修饰指针有三种情况
        1. const修饰指针   --- 常量指针
        2. const修饰常量   --- 指针常量
        3. const即修饰指针，又修饰常量
     */

    int a = 10;
    int b = 100;

    // const修饰的是指针，指针指向可以改，指针指向的值不可以更改
    const int *p1 = &a;
    cout << *p1 << endl; // 10
    p1 = &b; //正确
    cout << *p1 << endl; // 100
    //*p1 = 100;  报错

    //const修饰的是常量，指针指向不可以改，指针指向的值可以更改
    int *const p2 = &a;
    //p2 = &b; //错误
    cout << *p2 << endl; // 10
    *p2 = 20; //正确
    cout << *p2 << endl; // 20

    //const既修饰指针又修饰常量
    const int *const p3 = &a;
    //p3 = &b; //错误
    //*p3 = 100; //错误

    /**
     * 技巧：看const右侧紧跟着的是指针还是常量:
     *    指针就是常量指针
     *    常量就是指针常量
     */

    return 0;
}