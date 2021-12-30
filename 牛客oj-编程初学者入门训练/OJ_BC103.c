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
//        // 将第一次i为0的情况排除在外
//        if (i != 0 && (i % m == 0)) {
//            printf("\n");
//        }
//        printf("%d ", num);
//    }
//
//    return 0;
//}
    

// 别人写的方法
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

// 自己结合自己和他人的方法想出来的新方法
int main() {

    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    // 控制行列
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