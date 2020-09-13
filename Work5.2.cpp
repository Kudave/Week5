#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n,i,num[1000],maxCount=0,maxValue=0;
	scanf("%d", &n);
	for (i=0; i < n; i++) {
		scanf("%d", &num[i]);
	} 
	i = 0;

	for (int i = 0; i < n; ++i) { 
		int count = 0; 
		for (int j = 0; j < n; ++j) { 
			if (num[j] == num[i])
				++count;
		}
		if (count > maxCount) { 
			maxCount = count;
			maxValue = num[i];
		}
	}
	printf("%d", maxValue);
}