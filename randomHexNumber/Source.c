#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomHex();
int main()
{
	randomHex();
	system("PAUSE");
	return 0;
}

void randomHex()
{
	int hexLen = 0, i, hexNum = 0;
	int letterArray[16] = { 'A','B','C','D','E','F',0,1,2,3,4,5,6,7,8,9 };
	
	printf("Enter The Hex Number Length:");
	scanf_s("%d", &hexLen);

	if (hexLen<=3)
		for (i = 0; i < hexLen; i++)
		{
			hexNum = rand() % 10;
			printf("%d", hexNum);
		}
	else
			
		for (i = 0; i < hexLen; i++)
		{
			hexNum = rand() % 99;
			printf("%d", hexNum);
		}

	
	
}
