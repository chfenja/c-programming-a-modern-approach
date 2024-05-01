#include <stdio.h>

int main(void)
{
        int num;

        printf("Enter a two-digit number: ");
        scanf("%d", &num);

        switch (num) {
        case 10:
                printf("ten\n");
                return 0;
        case 11:
                printf("eleven\n");
                return 0;
        case 12:
                printf("twelve\n");
                return 0;
        case 13:
                printf("thirteen\n");
                return 0;
        case 14:
                printf("fourteen\n");
                return 0;
        case 15:
                printf("fiften\n");
                return 0;
        case 16:
                printf("sixteen\n");
                return 0;
        case 17:
                printf("seventeen\n");
                return 0;
        case 18:
                printf("eighteen\n");
                return 0;
        case 19:
                printf("nineteen\n");
                return 0;
        }

        switch (num / 10) {
        case 2:
                printf("twenty-");
                break;
        case 3:
                printf("thirty-");
                break;
        case 4:
                printf("fourty-");
                break;
        case 5:
                printf("fifty-");
                break;
        case 6:
                printf("sixty-");
                break;
        case 7:
                printf("seventy-");
                break;
        case 8:
                printf("eighty-");
                break;
        case 9:
                printf("ninety-");
                break;
        }

        switch (num % 10) {
        case 1:
                printf("one\n");
                break;
        case 2:
                printf("two\n");
                break;
        case 3:
                printf("three\n");
                break;
        case 4:
                printf("four\n");
                break;
        case 5:
                printf("five\n");
                break;
        case 6:
                printf("six\n");
                break;
        case 7:
                printf("seven");
                break;
        case 8:
                printf("eight\n");
                break;
        case 9:
                printf("nine\n");
                break;
        }
        return 0;
}
