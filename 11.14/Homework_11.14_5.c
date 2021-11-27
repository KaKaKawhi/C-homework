#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {

    char word = 0;
    char arr[] = "AEIOUaeiou";
    //缓冲区拿取字符时，一定要小心
    while ((scanf("%c", &word) != EOF)) {    //oj多组输入技巧，构造循环
        //相当于while（~scanf("%c", &word)）
        getchar(); //只有一个字符，不用循环，直接一个getchar（） 

        //方法1：吸收换行符  因为循环第二次进来之后，上次你调用scanf的\n
                 //还在缓冲区，因为，第一次调用scanf，他在缓冲区什么也没找到，只能等待输入，
                 // 为了让scanf读取到a，我们输入a，但是为了使得scanf将a读取到%c必须再输入\n,
                 // 两者都在缓冲区，然后scanf才可以在缓冲区发现数据，又因为scanf只读取格式
                 // “%c”，所以它取走a，留下\n
                 //第二次首先在缓冲区找，一旦碰到\n就将a读取到“%c”里，

        //方法2：仅限拿取字符：scanf("%c\n", &word),%c是从缓冲区拿走一个字符，后边如果有\n，格式控制
                 //也会把缓冲区的\n也拿走，其实在输入时候就会消化掉这个\n字符
                 // 
        //方法3：scanf(" %c", &word)，前加空格，会跳过空白字符，循环第一次不影响，第二次就会跳过\n
        int i = 0;
        int index = 0;
        for (i = 0; i < strlen(arr); i++) {
            if (arr[i] == word) {
                index = 1;
                printf("Vowel\n");   //oj小心，必须加换行才格式一样
                break;
            }
        }
        if (0 == index) {       //或者if（i == 10）
            printf("Consonant\n");  //oj小心，必须加换行才格式一样
        }
    }

    return 0;
}

