/**
 * File : 4_BubbleArray.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**冒泡排序
     * 1. 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
     * 2. 对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
     * 3. 重复以上的步骤，每次比较次数-1，直到不需要比较
     */
    // 构建数组
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};

    for (int i = 9; i > 0; i--) {
        for (int j = 0; j < i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    for (int i:arr) {
        cout << i << endl;
    }

    return 0;
}