/**
 * File : 5_defaultValue.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/16 
 */
# include <iostream>

using namespace std;

//1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
int func1(int a, int b = 10, int c = 10) {
    return a + b + c;
}

//2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
int func2(int a = 10, int b = 10);
int func2(int a, int b) {
    return a + b;
}

//3. 函数占位参数 ，占位参数也可以有默认参数
void func3(int a, int) {
    cout << "this is func" << endl;
}


int main() {

    cout << "ret = " << func1(20, 20,10) << endl;
    cout << "ret = " << func2(20, 20) << endl;
    cout << "ret = " << func2(100) << endl;
    func3(10,10); // 占位参数必须填补

    return 0;
}