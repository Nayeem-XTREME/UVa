#include <stdio.h>
int f = -1, r = -1;
#define N 100
int Q[N];

int enq(int data)
{
	if (f == -1 && r == -1) {
		Q[++r] = data;
		f++;
	}
	
	else if (r == N - 1) {
		printf("Queue is full\n");
	}
	
	else
		Q[++r] = data;
}

int deq()
{
	if (f == -1 && r == -1) {
		printf("Queue is empty\n");
	}
	
	else if (f == r) {
		return Q[f];
		f = -1;
		r = -1;
	}
	
	else
		return Q[f++];
}


int main()
{
	int cn, i, card;
	printf("Enter card number: ");
	scanf("%d", &cn);
	
	for (i = 1; i <= cn; i++) {
		enq(i);
	}
	
	printf("\n\nDequed cards:\n");
	
	while (1) {
		printf("%d\n", deq());
		enq(deq());
		
		if (r - f == 2)
			break;
			
		printf("Remaining cards = %d\n", Q[r]);
	}
	
	return 0;
}
