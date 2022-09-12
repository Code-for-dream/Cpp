/**
 * File : 1_if.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 三种程序运行结构：
     *   顺序结构：程序按顺序执行，不发生跳转
     *   选择结构：依据条件是否满足，有选择的执行相应的功能
     *   循环结构：依据条件是否满足，循环多次执行某段代码
     */
    // if 选择结构
    int score = 0;
    cout << "请输入一个分数：" << ends;
    cin >> score;

    // 单层if
    // if (score > 100) cout << "无效分数！" << endl;

    // 多重if
    if (score < 60) {
        cout << "不及格！" << endl;
    } else if (score >= 60 && score < 70) {
        cout << "及格！" << endl;
    } else if (score >= 70 && score < 80) {
        cout << "中等！" << endl;
    } else if (score >= 80 && score < 90) {
        cout << "良好！" << endl;
    } else if (score >= 90 && score < 100) {
        // 嵌套if
        if (score >= 95) {
            cout << "优秀+！" << endl;
        } else {
            cout << "优秀！" << endl;
        }
    } else if (score > 100) {
        cout << "无效分数！" << endl;
    } else {
        cout << "满分！" << endl;
    }

    return 0;
}