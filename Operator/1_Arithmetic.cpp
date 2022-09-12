/**
 * File : Arithmetic.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/11 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 运算符：用于执行代码的运算
     * 算数运算符：用于处理四则运算
     * 赋值运算符：用于将表达式的值赋给变量
     * 比较运算符：用于表达式的比较，并返回一个真值或假值
     * 逻辑运算符：用于根据表达式的值返回真值或假值
     */
    // 加减乘除
    cout << "============================" << endl;
    int a = 10;
    int b = 3;
    int c = 0;
    double d1 = 0.5;
    double d2 = 0.25;
    double d3 = 0.2;
    double d4 = 0.22;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl; // 3 整数相除的结果依然是整数

    // cout << a / c << endl; // Process finished with exit code -1073741676 (0xC0000094)
    cout << d1 / d2 << endl; // 2   整除就是整数
    cout << d1 / d3 << endl; // 2.5 有小数就显示小数
    cout << d1 / d4 << endl; // 2.27273 最多六位有效数字

    // 取余 %
    cout << "============================" << endl;
    int e = 10;
    int f = 3;
    int g = 0;
    double h = 10.0;
    double i = 5.0;
    cout << e%f << endl; // 10%3=1
    cout << f%e << endl; // 3%10=3
    // cout << e%g << endl; // 10%0 报错：除数不为0
    // cout << h%i << endl; // 报错：（小数不能做取余运算） Invalid operands to binary expression ('double' and 'double')

    /* 自增、自减
     *   前置：++i --i
     *   后置：i++ i--
     * */
    cout << "============================" << endl;
    int k = 1 ;
    int j = 3 ;
    cout << "前置递增 k：" << ++k << endl;
    cout << "前置递减 j：" << --j << endl;
    cout << "k：" << k << endl;
    cout << "j：" << j << endl;

    int m = 1 ;
    int n = 3 ;
    cout << "后置递增 m：" << m++ << endl;
    cout << "后置递减 n：" << n-- << endl;
    cout << "m：" << m << endl;
    cout << "n：" << n << endl;

    return 0;
}