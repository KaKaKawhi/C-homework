#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int My_Strlen(char str[]) {
    char* mask = str;
    //���д��'\0' != *mask
    // �Ż������д��if(*mask)
    if (*mask != '\0') {
        return 1 + My_Strlen(mask + 1);
    }
    else {
        return 0;
    }
    // ���˾��ô���else��������
}

//δʹ�õݹ鷽ʽ��
void Reverse_Str(char str[]) {
    int left = 0;                //Ҳ������ָ��
    int right = My_Strlen(str) - 1;
    while (left < right) {
        char mask = str[left]; 
        str[left] = str[right];
        str[right] = mask;
        left++;
        right--;
    }
}

int main()
{
    char str[20] = "";
    scanf("%s", str);
    Reverse_Str(str);
    printf("%s\n", str);

    return 0;
}