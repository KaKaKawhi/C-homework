#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() {
//
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int num = 0;
//    for (i = 0; i < n * m; i++) {
//        scanf("%d", &num);
//        // ����һ��iΪ0������ų�����
//        if (i != 0 && (i % m == 0)) {
//            printf("\n");
//        }
//        printf("%d ", num);
//    }
//
//    return 0;
//}
    

// ����д�ķ���
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[100] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i]);
//            printf("%d ", arr[i]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

// �Լ�����Լ������˵ķ�����������·���
int main() {

    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    // ��������
    int i = 0;
    int j = 0;
    int num = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &num);
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}