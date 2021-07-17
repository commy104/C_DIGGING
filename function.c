#include <stdio.h>

// 선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int one, int two, int three);
int apple(int total, int ate);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void)
{
    //function
    //계산기
    int num = 2;
    // printf("num은 %d입니다\n", num);  // 2
    p(num);

    // 2 + 3은?
    num = num + 3;
    // printf("num은 %d입니다\n", num);  // 5
    p(num);

    // 5 - 1은?
    num -= 1;  // num = num - 1
    // printf("num은 %d입니다\n", num);  // 4
    p(num);

    // 4 * 3은?
    num *= 3;
    // printf("num은 %d입니다\n", num);  // 12
    p(num);

    // 12 / 6은?
    num /= 6;
    // printf("num은 %d입니다\n", num);  // 2
    p(num);

    
    // 함수 호출
    function_without_return();
    function_with_return();
    function_without_params();
    function_with_params(1, 2, 3);
    int ret = apple(5, 2);

    // 계산 함수
    int num = 2;
    num = add(num, 3);
    p(num);

    num = sub(num, 1);
    p(num);

    num = mul(num, 3);
    p(num);

    num = sub(num, 6);
    p(num);

    return 0;
}

// 함수: 반환형 함수이름(전달값) => void p(num)
// 정의
void p(int num)
{
    printf("num은 %d입니다\n", num);
}

// 함수 종류
// 반환값이 없는 함수
void function_without_return()
{
    printf("반환 값이 없는 함수입니다\n");
}
// 반환값이 있는 함수
int function_with_return()
{
    printf("반환값이 있는 함수입니다\n");
    return 10;
}
// 파라미터(전달값)가 없는 함수
void function_without_params()
{
    printf("전달값이 없는 함수입니다\n");
}
// 파라미터(전달값)가 있는 함수
void function_with_params(int one, int two, int three)
{
    printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d입니다\n", one, two, three);
}
// 파라미터(전달값)도 받고, 반환값이 있는 함수
int apple(int total, int ate)
{
    printf("전달값과 반환값이 있는 함수입니다\n");
    return total - ate;
}
// 계산기 함수
int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int mul(int num1, int num2)
{
    return num1 * num2;
}
int div(int num1, int num2)
{
    return num1 / num2;
}