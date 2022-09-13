/**
 * File : 2_type.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/13 
 */
# include <iostream>

using namespace std;

//函数常见样式
// 1、 无参无返
void test01() {
    //void a = 10; //无类型不可以创建变量,原因无法分配内存
    cout << "this is test01" << endl;
    //test01(); 函数调用
}

// 2、 有参无返
void test02(int a) {
    cout << "this is test02" << endl;
    cout << "a = " << a << endl;
}

// 3、无参有返
int test03() {
    cout << "this is test03 " << endl;
    return 10;
}

// 4、有参有返
int test04(int a, int b) {
    cout << "this is test04 " << endl;
    int sum = a + b;
    return sum;
}

int main() {
    /**
     * 常见的函数样式有4种
        1. 无参无返
        2. 有参无返
        3. 无参有返
        4. 有参有返
     */
    test01();
    test02(10);
    int result1 = test03();
    cout << result1 << endl;
    int result2 = test04(10, 20);
    cout << result2 << endl;
    return 0;
}