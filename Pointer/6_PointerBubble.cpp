/**
 * File : 6_PointerBubble.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/14 
 */
# include <iostream>

using namespace std;

void bubble(int *p, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (p[j] > p[j + 1]) {
                int tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
            }
        }
    }
}

int main() {
    /**
     * 案例描述：
     *   封装一个函数，利用冒泡排序，实现对整型数组的升序排序
     */
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    // 创建指针指向数组
    int *p = arr;
    int len = sizeof(arr) / sizeof(arr[0]);
    // 调用函数
    bubble(p, len);
    for (int i:arr) {
        cout << i << endl;
    }

    return 0;
}