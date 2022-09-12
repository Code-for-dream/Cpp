/**
 * File : 3_Compare.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 比较运算
     */
    int a = 3;
    int b = 4;

    cout << (a == b) << endl; // 等于
    cout << (a != b) << endl; // 不等于
    cout << (a > b) << endl;  // 大于
    cout << (a < b) << endl;  // 小于
    cout << (a >= b) << endl; // 大于等于
    cout << (a <= b) << endl; // 小于等于

    return 0;
}