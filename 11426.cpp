#include <stdio.h>
#include <math.h>

long* phi(int n){
        long arr [n+1];
        long ans [n];
        int i,j;
        for (i = 0; i < n; i++){
            arr[i]=ans[i]=0;
        }
        arr[n]=0;
        arr[1] = 1;
        for (i = 2; i < n+1; i++) {
            if (arr[i] == 0) {
                arr[i] = i - 1;
                for (j =2*i; j < n+1; j += i) {
                    if (arr[j] == 0) {
                        arr[j] = j;
                    }
                    arr[j] = arr[j]/i * (i - 1);
                }
            }
        }
        for (i = 1; i < n; i++) {
            for (j = 2*i; j < n; j += i) {
                ans[j] += (i * arr[j / i]);
            }
        }
        for (i = 2; i < n; i++) {
            ans[i] += ans[i - 1];
        }
        return ans;
    }

int main()
{
    long* arr=phi(200001);
    int x;
    while(scanf("%d",&x)==1){
        if(x==0)
            break;
        printf("%ld\n",arr[x]);
    }
}
