#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    //��ʦ ������������float���͵ı���������80.845��Ȼ����.2f���Ϊ80.85
    //    ������double���ͣ���.2lf���Ϊ80.84?????????
    // ����洢�������Ⱥ���;��в�ȷ����, С�����Զ����ƴ洢�ģ��Ƿ񳬳���Χ������λС��û��ϵ
    // �����˽�һ��С��ת�����ƴ洢
    // �ǳ���2ȡģ1ǡ����0��ʱ�����������ÿ������λ�����ݾ��Ƕ�Ӧ�Ķ�����

    int num = 0;
    float ch = 0.0;
    float math = 0.0;
    float eng = 0.0;
    scanf("%d;%f,%f,%f", &num, &ch, &math, &eng);
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.",
        num, ch, math, eng);

    return 0;
}

//�𰸣�
//ʹ�õ���C����
//#include <stdio.h>
//int main() {
//    long Num;
//    float CLanguage, Math, English;
//    scanf("%ld;%f,%f,%f", &Num, &CLanguage, &Math, &English);
//    printf("The each subject score of  No. %ld is %.2f, %.2f, %.2f.", Num, CLanguage, Math, English);
//}