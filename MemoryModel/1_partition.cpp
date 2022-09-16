/**
 * File : 1_partition.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/15 
 */
# include <iostream>

using namespace std;

// 全局变量
int g_a = 10;
int g_b = 10;

// 全局常量
// const全局常量
const int c_g_a = 10;
const int c_g_b = 10;

static int s_c = 10;
static int s_d = 10;

int main() {

    // 局部变量
    int a = 10;
    int b = 10;
    // const局部常量
    const int c_l_a = 10;
    const int c_l_b = 10;
    // 打印地址
    cout << "局部变量a地址为： " << (int) (size_t) &a << endl;
    cout << "局部变量b地址为： " << (int) (size_t) &b << endl;
    cout << "const局部常量c_l_a地址为： " << (int) (size_t) &c_l_a << endl;
    cout << "const局部常量c_l_b地址为： " << (int) (size_t) &c_l_b << endl;

    cout << "全局变量g_a地址为： " << (int) (size_t) &g_a << endl;
    cout << "全局变量g_b地址为： " << (int) (size_t) &g_b << endl;
    cout << "const全局常量c_g_a地址为： " << (int) (size_t) &c_g_a << endl;
    cout << "const全局常量c_g_b地址为： " << (int) (size_t) &c_g_b << endl;

    // 静态变量
    static int s_a = 10;
    static int s_b = 10;
    // 打印地址
    cout << "静态变量s_a地址为： " << (int) (size_t) &s_a << endl;
    cout << "静态变量s_b地址为： " << (int) (size_t) &s_b << endl;
    cout << "静态变量s_c地址为： " << (int) (size_t) &s_c << endl;
    cout << "静态变量s_d地址为： " << (int) (size_t) &s_d << endl;

    cout << "字符串常量地址为： " << (int) (size_t) &"hello world" << endl;
    cout << "字符串常量地址为： " << (int) (size_t) &"hello world1" << endl;

    return 0;
}