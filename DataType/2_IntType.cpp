/**
 * File : IntType.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/10 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     *  语法 : 数据类型 变量名 = 变量初始值
     *        int a = 10
     *  数据类型存在的意义:
     *      给变量分配一个合适的内存空间（减少空间浪费）
     *  空间占用（字节）：直接影响了取值范围
     *      short  2
     *      int    4
     *      long   4
     *      long long  8
     */
    short a = 10;
    int b = 10;
    long c = 10;
    long long d = 10;

    cout << "short 占用空间：" << sizeof(a) << endl;
    cout << "int 占用空间：" << sizeof(b) << endl;
    cout << "long 占用空间：" << sizeof(c) << endl;
    cout << "long long 占用空间：" << sizeof(d) << endl;

    return 0;
}