#include <stdio.h>

int main(){
    // int age = 24;
    // printf("%d\n", age);

    // float f = 46.5f;
    // printf("%.2f\n", f);

    // double d = 4.428;
    // printf("%.2lf\n", d);

    // const int YEAR = 2000;
    // printf("태어난 년도 : %d\n", YEAR);

    // int add = 3 + 7;
    // printf("3 + 7 = %d\n", add);
    // printf("%d X %d = %d\n", 30, 79, 30 * 79);

    // int input;
    // printf("값을 입력하세요 : ");
    // scanf("%d", &input);
    // printf("입력값 : %d\n", input);

    // int one, two, three;
    // printf("3개의 정수를 입력하세요 : ");
    // scanf("%d %d %d", &one, &two, &three);
    // printf("첫번째 값 : %d\n", one);

    // char str[256];
    // scanf("%s", str, sizeof(str));
    // printf("%s\n", str);

    // 프로젝트
    // 이름 나이 몸무게 키 범죄명
    char name[256];
    printf("이름이 뭐에요? ");
    scanf("%s", name, sizeof(name));

    int age;
    printf("몇살이에요? ");
    scanf("%d", &age);

    float weight;
    printf("몸무게는 몇 kg 이에요? ");
    scanf("%f", &weight);

    double height;
    printf("키는 몇 cm 이에요?");
    scanf("%lf", &height);

    char what[256];
    printf("무슨 범죄를 저질렀나요? ");
    scanf("%s", what, sizeof(what));

    // 정보
    printf("\n\n--- 범죄자 정보 ---\n\n");
    printf(" 이름   : %s\n", name);
    printf(" 나이   : %d\n", age);
    printf(" 몸무게   : %.2f\n", weight);
    printf(" 키   : %.2lf\n", height);
    printf(" 범죄   : %s\n", what);

    return 0;
}