#include <stdio.h>
#include <time.h>

int main()
{
    // int age;
    // scanf("%d", &age);
    // if(age>=20)
    //     printf("일반인 입니다");
    // else
    //     printf("학생입니다");

    // 초등학생 8~13 / 중학생 14~16 / 고등학생 17~19 / 성인 20~
    // if / else if / else
    // int age;
    // printf("나이를 입력해주세요\n");
    // scanf("%d", &age);

    // if (age >= 8 && age <= 13)
    // {
    //     printf("초등학생입니다\n");
    // }
    // else if (age >= 14 && age <= 16)
    // {
    //     printf("중학생입니다\n");
    // }
    // else if (age >= 17 && age <= 19)
    // {
    //     printf("고등학생입니다\n");
    // }
    // else if (age >= 20)
    // {
    //     printf("성인입니다\n");
    // }
    // else
    // {
    //     printf("미취학생입니다\n");
    // }

    // break / continue
    // 1번부터 30번까지 있는 반에서 1~5번까지 조별 발표를 합니다.
    // for (int i = 1; i <= 30; i++)
    // {
    //     if (i >= 6)
    //     {
    //         printf("나머지 학생은 집에 가세요\n");
    //         break;
    //     }
    //     printf("%d번 학생은 조별발표 준비를 하세요\n", i);
        
    // }

    // 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
    // 7번을 제외하고 6번부터 10번까지 조별발표
    // for (int i = 1; i <= 30; i++)
    // {
    //     if (i >= 6 && i <= 10)
    //     {
    //         if (i == 7)
    //         {
    //             printf("%d번 학생은 결석입니다\n",i);
    //             continue;
    //         }
    //         printf("%d번 학생은 조별발표 준비를 하세요\n", i);
    //     }
    // }

    // && / ||
    // int a = 10;
    // int b = 11;
    // int c = 12;
    // int d = 13;
    // if (a == b && c == d)
    // {
    //     printf("a와 b는 같고, c와 d도 같습니다\n");
    // }
    // else
    // {
    //     printf("값이 서로 다릅니다\n");
    // }

    // 가위 0 바위 1 보 2
    // srand(time(NULL));
    // int i = rand() % 3;
    // switch(i)
    // {
    //     case 0:
    //     printf("가위\n");
    //     break;
    //     case 1:
    //     printf("바위\n");
    //     break;
    //     case 2:
    //     printf("보\n");
    //     break;
    //     default:printf("몰라요\n");
    // }

    // int age = 17;  // 케이스에 break 가 없으면 이후 케이스를 모두 실행함
    // switch (age)
    // {
    // case 8:
    // case 9:
    // case 10:
    // case 11:
    // case 12:
    // case 13: printf("초등학생입니다\n"); break;
    // case 14:
    // case 15:
    // case 16: printf("중학생입니다\n"); break;
    // case 17:
    // case 18:
    // case 19: printf("고등학생입니다\n"); break;
    // default: printf("학생이 아닌가봐요\n"); break;
    // }

    // 프로젝트
    srand(time(NULL));
    int num = rand() % 100 + 1;  // 1~100까지의 숫자
    printf("숫자 : %d\n", num);
    int answer = 0;
    int chance = 5;
    while (chance > 0)  // 1은 참, 0은 거짓
    {
        printf("남은 기회 %d번\n", chance--);
        printf("숫자를 맞춰보세요 (1~100) : \n");
        scanf("%d", &answer);

        if (answer > num)
        {
            printf("DOWN \n\n");
        }
        else if (answer < num)
        {
            printf("UP \n\n");
        }
        else if (answer == num)
        {
            printf("정답입니다! \n\n");
            break;
        }

        if (chance == 0)
        {
            printf("모든 기회를 사용하셨습니다. 실패!\n");
            break;
        }
    }

    return 0;
}