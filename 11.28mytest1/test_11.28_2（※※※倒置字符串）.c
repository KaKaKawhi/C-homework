#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
//将一句话的单词进行倒置，标点不倒置。比如 I like beijing. 经过函数后变为：beijing. like I
//输入描述：每个测试输入包含1个测试用例： I like beijing. 输入用例长度不超过100
//输出描述：依次输出倒置之后的字符串,以空格分割
//输入：
//I like beijing.
//输出：
//beijing. like I

void TitleReverse(char* left, char* right) {
    assert(left && right);   //防止空指针
    while (left < right) {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

//可画图理解
void SingleReverse(char* arr) {
    char* start = arr;
    char* end = arr;
    while ((*end) != '\0') {
        //最后一个元素后是以'\0'为结束，如果是或，或前面条件'\0' != ' '满足，进入循环了end++
        while ((*end != ' ') && (*end != '\0')) {  
            end++;
        }
        TitleReverse(start, end - 1);
        
        if (*end != '\0') {  
            end++;
        }
        start = end;
        //也可以
        /*if (*end == '\0') {
            start = end;
        }
        else {
            start = end + 1;
        }
        end = start;*/
    }

}

int main() {

    char arr[100] = "";
    gets(arr);  //注意不能使用scanf，scanf遇到空格，一次输入接收就结束了
    //gets()函数从STDIN(标准输入)读取字符并把它们加载到str(字符串)里,
    //直到遇到新行(\n)或到达EOF. 新行字符翻译为一个null中断符. 
    //gets()的返回值是读入的字符串,如果错误返回NULL.

    //思路，先整体倒置，再以空格为分界，每个字符串单独倒置即可达到效果
    int len = strlen(arr);
    TitleReverse(arr, arr + len - 1);  //传入两个参数而不是数组是因为这样在单个字符逆序也可以用
    SingleReverse(arr);
    // 先整体逆序，再分个逆序和先分个再整体同理
    printf("%s\n", arr);

    return 0;
}

//答案：（讲的版本和它的区别在于没有用循环开始赋值，和我自己想的赋值方法一样，更好理解，且将*end换为 *end！=0）
//int main() {
//
//    char arr[100] = "";
//    gets(arr);  //注意不能使用scanf，scanf遇到空格，一次输入接收就结束了
//
//    //思路，先整体倒置，再以空格为分界，每个字符串单独倒置即可达到效果
//    TitleReverse(arr, arr + strlen(arr) - 1);  //传入两个参数而不是数组是因为这样在单个字符逆序也可以用
//
//    //翻转单词：
//    char* start = arr;
//                end++;
//        while (*start) {  //while(*end)同理，但是这里必须用start，和赋值有关
//        char* end = start;
//        while ((*end != ' ') && *end) {
//}
//        reverse(start, end - 1);
//        if (*end) {
//            start = end + 1;
//        }
//        else {
//            start = end;
//        }
//        //end在每轮循环开始用start来赋值
//    }
//    
//    printf("%s\n", arr);
//
//    return 0;
//}