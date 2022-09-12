/**
 * File : 4_while.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/12 
 */
# include <iostream>
#include <ctime>

using namespace std;

int main() {
    /**
     * 作用：满足循环条件，执行循环语句
       语法： while(循环条件){ 循环语句 }
       解释：只要循环条件的结果为真，就执行循环语句
       注意：在执行循环语句时候，程序必须提供跳出循环的出口，否则出现死循环
     */
    /**
	   系统随机生成一个1到100之间的数字，玩家进行猜测，
	   如果猜错，提示玩家数字过大或过小，
	   如果猜对恭喜玩家胜利，并且退出游戏。
	*/
    // 添加随机数种子：利用当前系统时间生成随机数，防止每一次随机数一样
    srand((unsigned int) time(nullptr));

    // 生成1-100的随机数
    int a;
    a = rand() % 100 + 1;
    int b = 0;

    while (true) {
        cout << "请输入您猜测的数字：" << endl;
        cin >> b;

        if (a > b) {
            cout << "您猜测的数字过小！" << endl;
            continue;
        } else if (a < b) {
            cout << "您猜测的数字过大！" << endl;
            continue;
        } else {
            cout << "恭喜您猜对了！" << endl;
            break;
        }
    }
    return 0;
}