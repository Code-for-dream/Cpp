/**
 * File : 8_continue.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 作用：在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
     * 注意：continue并没有使整个循环终止，而break会跳出循环
     */
    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}