/**
 * File : BoolType.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/11 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 布尔类型：代表真或假的值
     *   true  - （真，本质是 1 ）
     *   false - （假，本质是 0）
     * 空间占用： 1 个字节
     */
    bool flag = true;
    cout << flag << endl;
    flag = false;
    cout << flag << endl;

    cout << "bool类型占用空间：" << sizeof(flag) << endl;

    return 0;
}