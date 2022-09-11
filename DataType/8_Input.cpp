/**
 * File : 8_Input.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/11 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 数据的输入：从键盘获取数据
     * 关键字： cin
     * 语法： cin >> 变量名
     */
    // 整型输入
    int a = 0;
    cout << "请输入整型变量:" << endl;
    cin >> a;
    cout << a << endl;

    // 浮点型输入
    float b = 0.0f;
    cout << "请输入浮点型变量:" << endl;
    cin >> b;
    cout << b << endl;

    // 字符型输入
    char c = 'a';
    cout << "请输入字符型变量:" << endl;
    cin >> c;
    cout << c << endl;

    // 字符串型输入
    string d = "abc";
    cout << "请输入字符串型变量:" << endl;
    cin >> d;
    cout << d << endl;

    // 布尔型输入
    bool e = false;
    cout << "请输入布尔型变量:" << endl;
    cin >> e;
    cout << e << endl;

    return 0;
}