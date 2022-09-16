/**
 * File : 2_prams.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/16 
 */
# include <iostream>

using namespace std;

// 1、值传递
void fun1(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

// 2、地址传递
void fun2(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// 3、引用传递
void fun3(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}


int main() {

    int a = 10;
    int b = 20;

    fun1(a, b);
    cout << "a:" << a << " b:" << b << endl;

    fun2(&a, &b);
    cout << "a:" << a << " b:" << b << endl;

    fun3(a, b);
    cout << "a:" << a << " b:" << b << endl;

    return 0;
}