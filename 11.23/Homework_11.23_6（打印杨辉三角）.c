#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

// ����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1
//����

// �Լ���ķ�������ʵ��
//void printyh(int row) {
//    int arr[99][99] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < row; i++) {
//        for (j = 0; j <= i; i++) { //�ҵ����ɣ����е���Ŀ��ͬ
//            arr[i][0] = 1;
//            arr[i][i] = 1;
//            int k = 0;
//            for (k = 0; k <= i; k++) {
//                printf("%d ", arr[i][k]);
//            }
//        }
//        printf("\n");
//    }
//}

void printyh(int row) {
    //����һ���ö�ά���������幹���ٴ�ӡ
    int arr[99][99] = { 1 }; //ֱ�ӳ�ʼ����һ��1
    //��һ��ȫΪ1��ֱ����������һ��ͬ��
    int i = 0;
    int j = 0;
    for (i = 1; i < row; i++) {  //ֱ�Ӵӵ�2�п�ʼ
        arr[i][0] = arr[i][i] = 1;  //��ʼ������Ϊ1,ÿ�����һ��Ԫ��Ϊ1
        for (j = 1; j < i; j++) {  //ֱ�Ӵ���ӵ�2�п�ʼ��ÿ�г�ȥ���һ��Ԫ��
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j]; 
        }
    }
    //��ӡ��
    for (i = 0; i < row; i++) {
        for (j = 0; j <= i; j++) {  //��ӡ��ʱ��<=
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    //����������һά���鹹��һ�д�ӡһ��
    //int arr[99] = { 1 }; //������һ��Ԫ��Ϊ1��һά����
    //printf("1\n"); //ֱ�ӽ���һ���ֶ���ӡ����
    //int i = 0; //��¼�к�
    //for(i = 1; i < )
}

int main() {
    
    int row = 0;//����
    scanf("%d", &row);
    printyh(row);

    return 0;
}
