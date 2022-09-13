/**
 * File : 1_define.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/13 
 */
# include <iostream>

using namespace std;

// 函数定义
int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

void swap(int num1, int num2) {
    cout << "交换前：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "交换后：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    //return ; 当函数声明时候，不需要返回值，可以不写return
}

int main() {
    /**
     * 函数的定义一般主要有5个步骤：
        1、返回值类型
        2、函数名
        3、参数表列
        4、函数体语句
        5、return 表达式
     * 语法：
     *   返回值类型 函数名 （参数列表）{
            函数体语句
            return表达式
         }
     * 返回值类型 ：一个函数可以返回一个值。在函数定义中
     * 函数名：给函数起个名称
     * 参数列表：使用该函数时，传入的数据
     * 函数体语句：花括号内的代码，函数内需要执行的语句
     * return表达式： 和返回值类型挂钩，函数执行完后，返回相应的数据
     */
    // 函数的调用: 函数名（参数）
    int result = add(1, 3);
    cout << result << endl;

    int a = 10;
    int b = 20;
    /*调用add函数
     * 所谓值传递，就是函数调用时实参将数值传入给形参
     * 值传递时，如果形参发生，并不会影响实参
     *
     * */
    int sum = add(a, b); //调用时的a，b称为实际参数，简称实参
    cout << "sum = " << sum << endl;

    swap(a, b);
    cout << "mian中的 a = " << a << endl;
    cout << "mian中的 b = " << b << endl;


    return 0;
}