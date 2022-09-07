/**
 * File : test.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/8
 */
# include <iostream>

using namespace std;

// 宏常量
#define day 7

int main() {
    // 变量的定义
    // 语法：数据类型  变量名 = 初始值
    int a = 10;
    cout << "a = " << a << endl;

    /*C++定义常量两种方式
       1. #define 宏常量：
            #define 常量名 常量值
          通常在文件上方定义，表示一个常量
       2. const 修饰的变量
            const 数据类型 常量名 = 常量值
          通常在变量定义前加关键字const，修饰该变量为常量，不可修改
    */
    cout << "一周里总共有 " << day << " 天" << endl;
    //day = 8;  // 报错，宏常量不可以修改

    // const修饰变量
    const int month = 12;
    cout << "一年里总共有 " << month << " 个月份" << endl;
    //month = 24; // 报错，常量是不可以修改的

    return 0;
}
