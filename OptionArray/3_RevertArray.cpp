/**
 * File : 3_RevertArray.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * ��ϰ����������Ԫ������
       ����������������һ��5��Ԫ�ص����飬���ҽ�Ԫ������.
       (��ԭ����Ԫ��Ϊ��1,3,2,5,4;���ú�������Ϊ:4,5,2,3,1);
     */
    int arr[] = {1, 3, 2, 5, 4};
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    // ���鵹�����
    cout << "���鵹�������" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << endl;
    }

    // ��������
    for (int i = start; i < end; i++) {
        if (i < end) {
            int tmp = arr[i];
            arr[i] = arr[end];
            arr[end] = tmp;
        }
        end--;
    }
    
    cout << "--------��������֮��--------" << endl;
    for (int i:arr) {
        cout << i << endl;
    }



    return 0;
}