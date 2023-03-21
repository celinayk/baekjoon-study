#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int x,y;
	int sum = 0;
	scanf("%d %d\n", &x, &y);  

	int month[12] = { 31, 28, 31, 30, 31, 30, 
		             31, 31, 30, 31, 30, 31 };

	for (int i = 1; i < x; i++) {
		sum += month[i - 1];
	}
	sum += y;

	switch (sum % 7) 
	{
	    case 0: printf("SUN\n"); break;
		case 1: printf("MON\n"); break;
		case 2: printf("TUE\n"); break;
		case 3: printf("WED\n"); break;
		case 4: printf("THU\n"); break;
		case 5: printf("FRI\n"); break;
		case 6: printf("SAT\n"); break;

	}

	return 0;
}