#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    int n = 0;
    int m = 0;
    // ��ʼ�������СΪ����n��m���������֣�����ֵ����Ԫ��Ϊ0
    int arr[10][10] = { 0 };
    int k = 0;
    char t = 0;
    int a = 0;
    int b = 0;
    scanf("%d %d", &n, &m);
    
    // ��������Ԫ��
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    scanf("%d", &k);
    // ����ִ�еĲ�����
    while (k) {
        // �ع�11.14-5����
        // ������һ��scanf�����ڻ�������\n
        getchar();                             //!!!!!!!!!!��һ��дûд�Ĵ���
        scanf("%c %d %d", &t, &a, &b);
        // -1�õ��±�
        a--;                                   //!!!!!!!!!!
        b--;                                   //!!!!!!!!!!
        
        // ������if���ƹ涨���ַ��ٲ��������򲻹�ֱ�����
        //if ('r' == t || 'c' == t) {
        if ('r' == t) {
            int j = 0;
            for (j = 0; j < m; j++) {
                int tmp = arr[a][j];
                arr[a][j] = arr[b][j];
                arr[b][j] = tmp;
            }
        }
        if ('c' == t) {
            int i = 0;
            for (i = 0; i < n; i++) {
                int tmp = arr[i][a];
                arr[i][a] = arr[i][b];
                arr[i][b] = tmp;
            }
        }
        //}
        k--;
    }

    // ������յ�����
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


//(1) ���� n m ��2ά����ķ�Χ
//(2) ���� n��m�� ����
//(3) ���� k ��������Ҫ���� k �β���
//(4) ���� r(�б任)    c(�б任)    a,(b�任������)


//int main()
//{
//    int arr[10][10] = { 0 };
//
//    int i, j;
//    int n, m;
//    int a, b, k;
//    scanf("%d%d", &n, &m);
//
//    //(1)����������
//    for (i = 0; i < n; i++)
//        for (j = 0; j < m; j++)
//            scanf("%d", &arr[i][j]);
//
//    //(2)���� K �ν��� 
//    scanf("%d", &k);
//    while (k)
//    {
//
//        //���� ch , a , b  ��ȡ�߻������е� '\n'������������������������������������������
//        char ch = 0;
//        getchar();
//        scanf("%c %d %d", &ch, &a, &b);
//
//        // -1 ���±�
//        a = a - 1;
//        b = b - 1;
//
//        // r  = �н���
//        int tmp = 0;
//        if (ch == 'r')
//        {
//            for (i = 0; i < m; i++)
//            {
//                tmp = arr[a][i];
//                arr[a][i] = arr[b][i];
//                arr[b][i] = tmp;
//            }
//        }
//
//        // c = �н���
//        if (ch == 'c')
//        {
//            for (i = 0; i < n; i++)
//            {
//                tmp = arr[i][a];
//                arr[i][a] = arr[i][b];
//                arr[i][b] = tmp;
//            }
//        }
//        k--;
//    }
//
//    //(3)���������Ķ�ά����
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//            printf("%d ", arr[i][j]);
//        printf("\n");
//    }
//
//    return 0;
//}