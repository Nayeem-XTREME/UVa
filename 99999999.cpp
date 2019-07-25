#include <stdio.h>
int main(){
    int a,b,c,d,e,f[50],g,sum,i,h;
    scanf("%d",&a);
    for(b=0;b<a;b++){
        i=0;
        sum=0;
        scanf("%d %d %d",&c,&d,&e);
        for(h=0;h<c;h++){
            scanf("%d",&f[h]);
        }
        for(g=0;g<d&&g<c;g++){
            sum=sum+f[g];
            if(sum<=e){
                i++;
            }
        }
        printf("Case %d: %d\n",(b+1),i);
    }
    return 0;
 
}
