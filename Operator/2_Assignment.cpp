/**
 * File : 2_Assignment.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 赋值运算
     */

    int a = 2;
    int b = 3;

    // = 赋值
    int c1 = a + b;
    cout << c1 << endl;

    // += 加等于
    b += a;
    cout << b << endl;

    // -= 减等于
    b -= a;
    cout << b << endl;

    // *= 乘等于
    b *= a;
    cout << b << endl;

    // /= 除等于
    b /= a;
    cout << b << endl;

    // %= 模等于
    b %= 2;
    cout << b << endl;

    return 0;
}