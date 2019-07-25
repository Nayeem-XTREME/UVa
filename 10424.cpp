#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int digit_sum(int n)
{
	int temp, i, rem, sum;
	temp = n;
	for (i = 0; temp >= 10 ; i++) {
		sum = 0;
		while (temp != 0) {
			rem = temp % 10;
	        temp = temp / 10;
	        sum = sum + rem;
		}
		
		temp = sum;
	}
	
	return sum;
}

int main()
{
	char A[26], B[26];
	int l1, l2, s1, s2, i, sum1, sum2;
	float r;
	
	while (gets(A) && gets(B)) {
		l1 = strlen(A);
		l2 = strlen(B);
		
		sum1 = sum2 = 0;
		
		for (i = 0; i < l1; i++) {
			if (A[i] == 'A' || A[i] == 'a')
				sum1 = sum1 + 1;
			else if (A[i] == 'B' || A[i] == 'b')
				sum1 = sum1 + 2;
			else if (A[i] == 'C' || A[i] == 'c')
				sum1 = sum1 + 3;
			else if (A[i] == 'D' || A[i] == 'd')
				sum1 = sum1 + 4;
			else if (A[i] == 'E' || A[i] == 'e')
				sum1 = sum1 + 5;
			else if (A[i] == 'F' || A[i] == 'f')
				sum1 = sum1 + 6;
			else if (A[i] == 'G' || A[i] == 'g')
				sum1 = sum1 + 7;
			else if (A[i] == 'H' || A[i] == 'h')
				sum1 = sum1 + 8;
			else if (A[i] == 'I' || A[i] == 'i')
				sum1 = sum1 + 9;
			else if (A[i] == 'J' || A[i] == 'j')
				sum1 = sum1 + 10;
			else if (A[i] == 'K' || A[i] == 'k')
				sum1 = sum1 + 11;
			else if (A[i] == 'L' || A[i] == 'l')
				sum1 = sum1 + 12;
			else if (A[i] == 'M' || A[i] == 'm')
				sum1 = sum1 + 13;
			else if (A[i] == 'N' || A[i] == 'n')
				sum1 = sum1 + 14;
			else if (A[i] == 'O' || A[i] == 'o')
				sum1 = sum1 + 15;
			else if (A[i] == 'P' || A[i] == 'p')
				sum1 = sum1 + 16;
			else if (A[i] == 'Q' || A[i] == 'q')
				sum1 = sum1 + 17;
			else if (A[i] == 'R' || A[i] == 'r')
				sum1 = sum1 + 18;
			else if (A[i] == 'S' || A[i] == 's')
				sum1 = sum1 + 19;
			else if (A[i] == 'T' || A[i] == 't')
				sum1 = sum1 + 20;
			else if (A[i] == 'U' || A[i] == 'u')
				sum1 = sum1 + 21;
			else if (A[i] == 'V' || A[i] == 'v')
				sum1 = sum1 + 22;
			else if (A[i] == 'W' || A[i] == 'w')
				sum1 = sum1 + 23;
			else if (A[i] == 'X' || A[i] == 'x')
				sum1 = sum1 + 24;
			else if (A[i] == 'Y' || A[i] == 'y')
				sum1 = sum1 + 25;
			else if (A[i] == 'Z' || A[i] == 'z')
				sum1 = sum1 + 26;
				
		}
		
		for (i = 0; i < l2; i++) {
			if (B[i] == 'A' || B[i] == 'a')
				sum2 = sum2 + 1;
			else if (B[i] == 'B' || B[i] == 'b')
				sum2 = sum2 + 2;
			else if (B[i] == 'C' || B[i] == 'c')
				sum2 = sum2 + 3;
			else if (B[i] == 'D' || B[i] == 'd')
				sum2 = sum2 + 4;
			else if (B[i] == 'E' || B[i] == 'e')
				sum2 = sum2 + 5;
			else if (B[i] == 'F' || B[i] == 'f')
				sum2 = sum2 + 6;
			else if (B[i] == 'G' || B[i] == 'g')
				sum2 = sum2 + 7;
			else if (B[i] == 'H' || B[i] == 'h')
				sum2 = sum2 + 8;
			else if (B[i] == 'I' || B[i] == 'i')
				sum2 = sum2 + 9;
			else if (B[i] == 'J' || B[i] == 'j')
				sum2 = sum2 + 10;
			else if (B[i] == 'K' || B[i] == 'k')
				sum2 = sum2 + 11;
			else if (B[i] == 'L' || B[i] == 'l')
				sum2 = sum2 + 12;
			else if (B[i] == 'M' || B[i] == 'm')
				sum2 = sum2 + 13;
			else if (B[i] == 'N' || B[i] == 'n')
				sum2 = sum2 + 14;
			else if (B[i] == 'O' || B[i] == 'o')
				sum2 = sum2 + 15;
			else if (B[i] == 'P' || B[i] == 'p')
				sum2 = sum2 + 16;
			else if (B[i] == 'Q' || B[i] == 'q')
				sum2 = sum2 + 17;
			else if (B[i] == 'R' || B[i] == 'r')
				sum2 = sum2 + 18;
			else if (B[i] == 'S' || B[i] == 's')
				sum2 = sum2 + 19;
			else if (B[i] == 'T' || B[i] == 't')
				sum2 = sum2 + 20;
			else if (B[i] == 'U' || B[i] == 'u')
				sum2 = sum2 + 21;
			else if (B[i] == 'V' || B[i] == 'v')
				sum2 = sum2 + 22;
			else if (B[i] == 'W' || B[i] == 'w')
				sum2 = sum2 + 23;
			else if (B[i] == 'X' || B[i] == 'x')
				sum2 = sum2 + 24;
			else if (B[i] == 'Y' || B[i] == 'y')
				sum2 = sum2 + 25;
			else if (B[i] == 'Z' || B[i] == 'z')
				sum2 = sum2 + 26;
		}
		
		s1 = digit_sum(sum1);
		s2 = digit_sum(sum2);
		
		if (s1 > s2) {
			r = (float(s2) / float(s1)) * 100;
			printf("%0.2f %c\n", r, 37);
		}
		
		else if (s2 > s1) {
			r = (float(s1) / float(s2)) * 100;
			printf("%0.2f %c\n", r, 37);
		}
		
		else if (s1 == s2) {
			r = (float(s2) / float(s1)) * 100;
			printf("%0.2f %c\n", r, 37);
		}
		
	}
	
	return 0;
}
