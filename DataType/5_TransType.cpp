/**
 * File : 5_TransType.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/11 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 转义字符:用于表示一些不能显示出来的ASCII字符
     * 语法： \X
     * 常用：
     *   \n 换行
     *   \t 制表符 - 格式化
     *   \\ 表示 \
     *
     */
     cout << "Hello\nWorld!" << endl;

     cout << "Hello aaa\tWorld!" << endl;
     cout << "Hello aaaa\tWorld!" << endl;
     cout << "Hello aa\tWorld!" << endl;

     cout << "Hello\\World!" << endl;

    return 0;
}