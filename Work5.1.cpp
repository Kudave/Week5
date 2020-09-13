#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, a, tmp;
	int num[1000];
	scanf("%d", &a);
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

    for (i = 0; i < a; i++)
    {
        printf("%d", num[i]);
    }
}