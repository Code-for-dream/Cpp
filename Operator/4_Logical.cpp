/**
 * File : 4_Logical.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 逻辑运算
     */
    int a = 0;
    int b = 1;

    // !   非  (C++中非零为真！)
    cout << !a << endl;
    cout << (a != 0) << endl;

    // &&  与
    cout << (a && b) << endl;

    // ||  或
    cout << (a || b) << endl;

    return 0;
}