/**
 * File : 6_StrType.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/11 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 字符串型：用于表示一串字符
     * 语法： char 变量名[] = "...";
     *       string 变量名 = "...";
     */
    char str1[] = "HelloWorld！";
    string str2 = "你好世界！";
    string str3 = "Hello！";

    cout << str1 << endl;
    cout << str2 << endl;

    // string 中符号不占空间
    cout << "str1的大小：" << sizeof(str1) << endl;
    cout << "Str2的大小：" << sizeof(str2) << endl;
    cout << "Str3的大小：" << sizeof(str3) << endl;

    return 0;
}