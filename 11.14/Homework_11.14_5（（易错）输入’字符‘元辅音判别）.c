#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {

    char word = 0;  //初始化为0即可
    char arr[] = "AEIOUaeiou";  //小心最后有\0
    //缓冲区拿取字符时，一定要小心
    while ((scanf("%c", &word) != EOF)) {    //oj多组输入技巧，构造循环
        //相当于while（~scanf("%c", &word)）
        getchar(); //只有一个字符，不用循环，直接一个getchar（） 

        //第一次输入数字+回车，这个回车被编译器默认为分隔符，相当于scanf（）只接受了“%d”，与其格式不匹配，
        // 继续要求你输入数据，当第二次随便输入一个数据之后，按下回车，这时编译器知道第一个回车不是分隔符，而是需要的匹配的格式。
        //补充：scanf("%c", &a);
        //当输入字符的时候，我们按下任意字符 + 回车的时候，回车没有被当作为分隔符，而是作为一个转义字符与
        //输入的字符一起保存在缓存区。第一次scanf从缓存区中取出的是字符，第二次的话取出的是回车转义字符，即\n。


        //方法1：吸收换行符  因为循环第二次进来之后，上次你调用scanf的\n
                 //还在缓冲区，因为，第一次调用scanf，他在缓冲区什么也没找到，只能等待输入，
                 // 为了让scanf读取到a，我们输入a，但是为了使得scanf将a读取到%c必须再输入\n,
                 // 两者都在缓冲区，然后scanf才可以在缓冲区发现数据，又因为scanf只读取格式
                 // “%c”，所以它取走a，留下\n
                 //第二次首先在缓冲区找，一旦碰到\n就将a读取到“%c”里，

        //方法2：仅限拿取字符：scanf("%c\n", &word),%c是从缓冲区拿走一个字符，后边如果有\n，格式控制
                 //也会把缓冲区的\n也拿走，其实在输入时候就会消化掉这个\n字符，我自己试好像有点问题，
                 // 因为vs和牛客网的处理方式不同，牛客网这样可以通过，vs我们不用这个写法
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

//2刷写的指针版本：
//int main() {
//    char arr[] = "AEIOUaeiou";
//    char n = 0;
//    while (scanf("%c", &n) != EOF) {
//        getchar();
//        char* mask = arr;    //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//          //必须要来代替数组名来进行指针偏移，数组名不能当做指针进行偏移，
//          //否则就找不到数组了，这是与指针之间的一个区别
//        int index = 0;
//        while (*mask != '\0') {
//            if (n == *mask) {
//                index = 1;
//                break;
//            }
//            mask++;
//        }
//        if (1 == index) {
//            printf("Vowel\n");
//        }
//        else {
//            printf("Consonant\n");
//        }
//    }
//
//    return 0;
//}


//三刷oj版

#include<stdio.h>
#include<string.h>

int main() {

    char str[] = "A, E, I ,O ,U, a, e, i, o, u";
    char c = 0;
    while (~scanf("%c", &c)) {
        getchar();
        // 判定和某个元音字母相同的指标
        int index = 0;
        int len = strlen(str);
        int i = 0;
        for (i = 0; i < len; i++) {
            if (str[i] == c) {
                index = 1;
                break;
            }
        }
        if (index) {
            printf("Vowel\n");
        }
        else {
            printf("Consonant\n");
        }
    }// 多组输入结尾

    return 0;
}