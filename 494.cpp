#include <stdio.h>
#include <string.h>
int main()
{
	char A[200], count, l, i;
	
	while (gets(A)) {
		l = strlen(A);
		
		count = 0;
		for (i = 0; i < l; i++) {
			if (((A[i] >= 'a' && A[i] <= 'z') || (A[i] >= 'A' && A[i] <= 'Z')) && A[i - 1] == ' ')
				count++;
		}
		
		printf("Count = %d\n", count + 1);
	}
	
	return 0;
}
