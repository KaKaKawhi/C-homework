#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，
//序列中未被删除数字的前后位置没有发生改变。
//数据范围：序列长度和序列中的值都满足 1 \le n \le 501≤n≤50
//输入描述：第一行输入一个整数(0≤N≤50)。第二行输入N个整数，输入用空格分隔的N个整数。第三行输入想要进行删除的一个整数。
//输出描述：输出为一行，删除指定数字之后的序列。
//示例1
//输入：
//6
//1 2 3 4 5 9
//4
//输出：
//1 2 3 5 9
//示例2
//输入：
//5
//1 2 3 4 6
//5
//输出：
//1 2 3 4 6

//自己写
int main() {

    int n = 0;
    scanf("%d", &n);
    if (n >= 1 && n <= 50) {
        int arr[50] = { 0 };
        int tmp = 0;
        int i = 0;
        for (i = 0; i < n; i++) {
            scanf("%d ", &arr[i]);
        }
        //输入删除数字
        int num = 0;
        scanf("%d", &num);
        //输出结果
        int count = n;   //记录新数组的元素个数
        for (i = 0; i < n; i++) {
            if (num == arr[i]) {
                n--;    //数组元素减1
                count--;
                int j = 0;
                for (j = i; j < n; j++) {  //从此位置数组元素向前移动，将要删除的数覆盖
                    arr[j] = arr[j + 1];
                }
                i--;  //重新从当前位置再次测，因为可能要删除的数字是连续的
            }
        }
        //答案方法，通过利用新下标将数组翻新，我自己写的是移动数组
        //scanf("%d", &del);//要删除的元素
        //int j = 0;
        //for (i = 0; i < n; i++)
        //{
        //    if (arr[i] != del)
        //    {
        //        arr[j++] = arr[i];
        //    }
        //}
        // for(i=0; i<j; i++)
        //{
        //   printf("%d ", arr[i]);
        //}
        
        //打印新数组
        for (i = 0; i < count; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

//int main() {  //错误，这样的话如果有重复数字就不行
//
//    int n = 0;
//    scanf("%d", &n);
//    if (n >= 1 && n <= 50) {
//        int arr[50] = { 0 };
//        int tmp = 0;
//        while (n) {
//            scanf("%d ", &tmp);
//            arr[tmp] = tmp;
//            n--;
//        }
//        //输入删除数字
//        int num = 0;
//        scanf("%d", &num);
//        //输出结果
//        if (num == arr[num]) {
//            arr[num] = 0;
//        }
//        int i = 0;
//        for (i = 0; i < 50; i++) {
//            if (arr[i] != 0) {
//                printf("%d ", arr[i]);
//            }
//        }
//    }
//
//    return 0;
//}