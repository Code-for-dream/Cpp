/**
 * File : 2_new.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/15 
 */
# include <iostream>

using namespace std;

int *func() {
    // 利用new关键字将数据开辟到堆取
    int *a = new int(10);
    return a;
}

int main() {

    int *p = func();
    cout << *p << endl;

    // 利用delete释放堆区数据
    delete p;
    //cout << *p << endl; //报错，释放的空间不可访问

    // 堆区开辟数组
    int *arr = new int[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = i + 100;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
    //释放数组 delete 后加 []
    delete[] arr;

    return 0;
}