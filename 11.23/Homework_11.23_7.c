#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

// 日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

// 思考，凶手是谁，谁就是1，不是谁，谁就是2,说谁胡说就相当观点和它的观点相反
// 分别假设凶手是a，b，c，d，如果哪一个可以同时满足三个条件，那就是他

int main() {
    
    int killer = 0;
    for (killer = 'a'; killer <= 'd'; killer++) {
        if ((killer != 'a') + (killer == 'c') +
            (killer == 'd') + (killer != 'd') == 3) {
            printf("%c是凶手", killer);
        }
    }


    return 0;
}
