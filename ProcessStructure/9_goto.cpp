/**
 * File : 9_goto.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 作用：可以无条件跳转语句
     * 语法：goto 标记;
     * 解释：如果标记的名称存在，执行到goto语句时，会跳转到标记的位置
     * 注意：在程序中不建议使用goto语句，以免造成程序流程混乱
     */
    cout << "1" << endl;
    goto FLAG;
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;
    FLAG:
    cout << "5" << endl;
    return 0;
}