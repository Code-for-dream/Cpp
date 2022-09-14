/**
 * File : 6_PointerBubble.cpp
 * Author: ������ţ��׷����'
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
     * ����������
     *   ��װһ������������ð������ʵ�ֶ������������������
     */
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    // ����ָ��ָ������
    int *p = arr;
    int len = sizeof(arr) / sizeof(arr[0]);
    // ���ú���
    bubble(p, len);
    for (int i:arr) {
        cout << i << endl;
    }

    return 0;
}