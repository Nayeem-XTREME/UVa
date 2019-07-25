#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream> 
using namespace std;
 
int main ()
{
    long Flag, Mod4, Mod100, Mod400, Mod15, Mod55, I, Len, leap;
    char Y[1000000];
    int print = 0;
 
    while (cin >> Y) {
 
        if ( print != 0 )
            printf("\n");
        print = 1;
         
        leap = Flag = Mod4 = Mod100 = Mod400 = Mod15 = Mod55 = 0;
 
        Len = strlen (Y);
 
        for (I=0; I< Len; I++) {
 
            Mod4 = ((Mod4 * 10) + (Y[I]-'0')) % 4;
            Mod100 = ((Mod100 * 10) + (Y[I]-'0')) % 100;
            Mod400 = ((Mod400 * 10) + (Y[I]-'0')) % 400;
            Mod15 = ((Mod15 * 10) + (Y[I]-'0')) % 15;
            Mod55 = ((Mod55 * 10) + (Y[I]-'0')) % 55;
        }
 
        if ((Mod4==0 && Mod100!=0) || Mod400==0){
            printf("This is leap year.\n");
            leap = 1;
            Flag = 1;
        }
 
        if (Mod15==0){
            printf("This is huluculu festival year.\n");
            Flag = 1;
        }
 
        if (leap==1 && Mod55==0)
            printf("This is bulukulu festival year.\n");
 
        if (Flag==0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}
