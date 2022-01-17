#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

//输入描述：
//第一行包含一个正整数n，表示老师给出的序列有n个数。接下来有n行，
//每行一个正整数k，为序列中每一个元素的值。(1 ≤ n ≤ 105，1 ≤ k ≤ n)
//输出描述：
//输出一行，为去重排序后的序列，每个数后面有一个空格。
//输入：
//4
//2
//2
//1
//1
//输出：
//1 2
//输入：
//5
//5
//4
//3
//2
//1
//输出：
//1 2 3 4 5

int main() {

    int n = 0;
    scanf("%d", &n);
    int arr[100000] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    //对输入的数组进行排序，而且重复数字算一个
    int count = n;//记录除了重复数字还有几个数
    int j = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == arr[i - 1]) 
        {
            n--;
            count--;
            for (j = i; j < n; j++) 
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    //排序
    for (i = 0; i < count - 1; i++)  //比较n-1轮
    {
        for (j = 0; j < count - 1 - i; j++)  //每轮比较n-1-i次,
        {
            if (arr[j + 1] < arr[j])  //这里是j！！！！！，不是i
            {
                int buf = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = buf;
            }
        }
    }
    for (i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

//答案绝了！
//int main()
//{
//    int n = 0;
//    int arr[100000] = { 0 };
//    int i = 0;
//    int tmp = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;    //这样存储数据，小数被存到下标小的数组元素里，且一旦有重复就会覆盖
//    }
//    for (i = 0; i < 100000; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d ", arr[i]);   //这样打印，直接按上面储存的不为零的数据的从小到大打印！
//    }
//    return 0;
//}

// 开课讲后再写的
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[100000] = { 0 };
    int i = 0;
    // 记录输入的最大数字
    int max = 0;
    while (n) {
        scanf("%d", &i);
        arr[i] = i;
        if (i > max) {
            max = i;
        }
        n--;
    }
    for (i = 0; i <= max; i++) {
        if (0 != arr[i]) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}


// 老师讲：（(1 ≤ n ≤ 105，1 ≤ k ≤ n)，所以不用求输入的最大数，因为输入的数字最大为n）

// 或者编译器支持C99可以使用动态内存arr[n]
int arr[100001] = { 0 };// 放为全局变量，对栈区的浪费少

int main()
{
    // 输入
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int k = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &k);
        arr[k] = k;
    }
    // 输出
    for (i = 0; i <= n; i++) {
        if (0 != arr[i]) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}