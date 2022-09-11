/**
 * File : 4_CharType.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/11 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 字符型:用于显示单个字符
     * 语法： char ch = 'a'；
     *   * 单引号内只能是一个字符，不能是字符串
     * 空间占用： 1字节
     * 字符变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元中共
     *
     */
    char ch = 'a';
    cout << "a:" << ch << endl;
    cout << "char占用:" << sizeof(ch) << endl;

    int a = ch;
    cout << "ASCII -> ch：" << a << endl;

    return 0;
}