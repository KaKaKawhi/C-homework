#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main() {
//
//    double a = 0.0;
//    double b = 0.0;
//    double c = 0.0;
//    double flag = 1.0;
//    while (~scanf("%lf %lf %lf", &a, &b, &c)) {
//        double x1 = 0.0;
//        double x2 = 0.0;
//        if (!a) {
//            printf("Not quadratic equation\n");
//        }
//        else {
//            double jud = flag * (b * b - 4 * a * c);
//            if (!jud) {
//                printf("x1=x2=%.2lf\n", flag * ((-b) / (2 * a)));
//            }
//            else {
//                if (jud > 0) {
//                    printf("x1=%.2lf;x2=%.2lf\n", flag * ((-b) - sqrt(jud)) / (2 * a)
//                        , flag * ((-b) + sqrt(jud)) / (2 * a));
//                }
//                else {
//                    printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi",
//                        (-b / (2 * a), sqrt(-jud) / (2 * a)) * flag
//                        , (-b / (2 * a), sqrt(-jud) / (2 * a)) * flag);
//                }
//            }
//        }
//    }
//
//    return 0;
//}

//�Ż����˵�һ��д��
int main() {

    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    //double flag = 1.0; û��Ҫ�������ʱ�򣬱��ʽ��double���͵����ݣ���������ת�������Ϊdouble����
    while (~scanf("%lf %lf %lf", &a, &b, &c)) {
        //double x1 = 0.0; û�У�ֱ�������ʽ����
        //double x2 = 0.0;
        if (!a) {
            printf("Not quadratic equation\n");
        }
        else {
            double jud = b * b - 4 * a * c;
            if (!jud) {
                printf("x1=x2=%.2lf\n", (-b) / (2 * a));
            }
            else {
                if (jud > 0) {
                    printf("x1=%.2lf;x2=%.2lf\n", ((-b) - sqrt(jud)) / (2 * a) ,
                        ((-b) + sqrt(jud)) / (2 * a));
                }
                else {
                    printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n",
                        (-b) / (2 * a), sqrt(-jud) / (2 * a)
                        , (-b) / (2 * a), sqrt(-jud) / (2 * a));
                }
            }
        }
    }

    return 0;
}


//��
//int main()
//{
//    float a = 0.0;
//    float b = 0.0;
//    float c = 0.0;
//    while (scanf("%f %f %f", &a, &b, &c) != EOF)
//    {
//        if (a != 0)
//        {
//            float disc = b * b - 4 * a * c;
//            if (disc > 0.0)                     //???????????Ϊɶ��Ҫ��0.0
//            {
//                printf("x1=%.2f;x2=%.2f\n",
//                    (-b - sqrt(disc)) / (2 * a),
//                    (-b + sqrt(disc)) / (2 * a)
//                );
//            }
//            else if (disc < 0.0)
//            {
//                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",
//                    (-b) / (2 * a), sqrt(-disc) / (2 * a),
//                    (-b) / (2 * a), sqrt(-disc) / (2 * a));
//            }
//            else
//            {
//                printf("x1=x2=%.2f\n", (-b) / (2 * a));
//            }
//        }
//        else
//        {
//            printf("Not quadratic equation\n");
//        }
//    }
//    return 0;
//}