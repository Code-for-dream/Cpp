/**
 * File : 4_BubbleArray.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**ð������
     * 1. �Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������������
     * 2. ��ÿһ������Ԫ����ͬ���Ĺ�����ִ����Ϻ��ҵ���һ�����ֵ��
     * 3. �ظ����ϵĲ��裬ÿ�αȽϴ���-1��ֱ������Ҫ�Ƚ�
     */
    // ��������
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