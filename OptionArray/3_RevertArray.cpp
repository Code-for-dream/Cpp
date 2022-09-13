/**
 * File : 3_RevertArray.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 练习案例：数组元素逆置
       案例描述：请声明一个5个元素的数组，并且将元素逆置.
       (如原数组元素为：1,3,2,5,4;逆置后输出结果为:4,5,2,3,1);
     */
    int arr[] = {1, 3, 2, 5, 4};
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    // 数组倒序输出
    cout << "数组倒序输出：" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << endl;
    }

    // 数组逆序
    for (int i = start; i < end; i++) {
        if (i < end) {
            int tmp = arr[i];
            arr[i] = arr[end];
            arr[end] = tmp;
        }
        end--;
    }
    
    cout << "--------数组逆置之后--------" << endl;
    for (int i:arr) {
        cout << i << endl;
    }



    return 0;
}