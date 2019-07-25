#include <stdio.h>
#include <string.h>
int main()
{
	int T, i, sum, sum1, sum2, sum3, sum4, sum5, sum6, sum7, sum8, s1, s2, s3, s4;
	char A[5], B[5], C[5], D[5];
	scanf("%d", &T);
	
	for (i = 0; i < T; i++) {
		
		sum = sum1 = sum2 = sum3 = sum4 = sum5 = sum6 = sum7 = sum8 = 0;
		s1 = s2 = s3 = s4 = 0;
		
		scanf("%s %s %s %s", A, B, C, D);
		
		sum1 = ((A[0] - '0') * 2) / 10 + ((A[0] - '0') * 2) % 10;
		sum2 = ((A[2] - '0') * 2) / 10 + ((A[2] - '0') * 2) % 10;
		sum3 = ((B[0] - '0') * 2) / 10 + ((B[0] - '0') * 2) % 10;
		sum4 = ((B[2] - '0') * 2) / 10 + ((B[2] - '0') * 2) % 10;
		sum5 = ((C[0] - '0') * 2) / 10 + ((C[0] - '0') * 2) % 10;
		sum6 = ((C[2] - '0') * 2) / 10 + ((C[2] - '0') * 2) % 10;
		sum7 = ((D[0] - '0') * 2) / 10 + ((D[0] - '0') * 2) % 10;
		sum8 = ((D[2] - '0') * 2) / 10 + ((D[2] - '0') * 2) % 10;
		
		s1 = A[1] - '0' + A[3] - '0';
		s2 = B[1] - '0' + B[3] - '0';
		s3 = C[1] - '0' + C[3] - '0';
		s4 = D[1] - '0' + D[3] - '0';
		
		sum = sum1 + sum2 + sum3 + sum4 + sum5 + sum6 + sum7 + sum8 + s1 + s2 + s3 + s4;
		
		if (sum % 10 == 0)
			printf("Valid\n");
		else
			printf("Invalid\n");
		
	}
	
	return 0;
}
