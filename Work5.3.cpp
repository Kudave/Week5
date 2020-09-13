#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <Windows.h>
int main() {
    int i, a=3, tmp,count=0;
    int num[1000];
    for (i = 0; i < a; i++) {
        scanf("%d", &num[i]);
    }
    i = 0;
    do
    {
        if (i < a - 1 && num[i] > num[i + 1])
        {
            tmp = num[i + 1];
            num[i + 1] = num[i];
            num[i] = tmp;
            i = 0;
        }
        else
        {
            i++;
        }

    } while (i < a);
    i = 0;
    int b = num[0];
    while (count < 3) {
        for (; b > 0; b--) {
            i = 0;
            count = 0;
            for (; i < 3; i++) {
                if (num[i] % b == 0)
                    count++;
                if (count == 3) {
                    a = 10;
                    break;
                }
                    
            }
            if (a == 10)
                break;
        }
    }
    printf("gcd=%d", b);
}