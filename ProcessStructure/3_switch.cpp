/**
 * File : 3_Switch.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 执行多条件分支语句
     * > 注意1：switch语句中表达式类型只能是整型或者字符型
       > 注意2：case里如果没有break，那么程序会一直向下执行
       > 总结：与if语句比，对于多条件判断时，switch的结构清晰，执行效率高，缺点是switch不可以判断区间
     */

    //请给电影评分:
    //  10 ~ 9  经典
    //  8 ~ 7   非常好
    //  6 ~ 5   一般
    //  5分以下  烂片
    int score = 0;
    cout << "请给电影打分:" << endl;
    cin >> score;

    switch (score) {
        case 10:
        case 9:
            cout << "经典" << endl;
            break;
        case 8:
            cout << "非常好" << endl;
            break;
        case 7:
        case 6:
            cout << "一般" << endl;
            break;
        default:
            cout << "烂片" << endl;
            break;
    }
    return 0;
}