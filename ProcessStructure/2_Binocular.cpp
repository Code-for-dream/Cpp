/**
 * File : 2_Binocular.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /** 三目运算
     * 作用： 通过三目运算符实现简单的判断
     * 语法：表达式1 ? 表达式2 ：表达式3
     * 解释：
        如果表达式1的值为真，执行表达式2，并返回表达式2的结果；
        如果表达式1的值为假，执行表达式3，并返回表达式3的结果。

     * 总结：和if语句比较，三目运算符优点是短小整洁，缺点是如果用嵌套，结构不清晰
     */
    int a = 10;
    int b = 20;
    int c = 0;

    c = a > b ? a : b;
    cout << "c = " << c << endl;

    // C++中三目运算符返回的是变量,可以继续赋值
    (a > b ? a : b) = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}