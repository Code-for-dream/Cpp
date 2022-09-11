/**
 * File : 3_FloatDoubleType.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/11 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 实型（浮点型）
     *   1、单精度 float
     *   2、双精度 double
     * 两者的区别在于占用的空间、表示的有效数字范围不同
     *   float  4  7位有效数字
     *   double 8  15-16位有效数字
     *
     * 默认情况下，小数显示6位有效数字!!!
     */
    float f1 = 3.1415926f;
    double d1 = 3.1415926;

    cout << "f1:" << f1 << endl;
    cout << "d1:" << d1 << endl;

    // 内存占用
    cout << "float :" << sizeof(f1) << endl;
    cout << "double :" << sizeof(d1) << endl;

    // 科学计数法
    float f2 = 3e2; // e后为正数，表示 3*10^2
    float f3 = 3e-2; // e后为负数，表示 3*0.1^2
    cout << "f2 :" << f2 << endl;
    cout << "f3 :" << f3 << endl;

    return 0;
}