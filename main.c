#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,D,E,F,a,i,EF,ABC,bolum,BC,AB,n,asal,sayi,j;

    for(i=0;i<=9;i++){
        EF=i*i;

    bolum=EF/10;
    E=bolum;
    F=EF%10;

        for(j=5;j<=9;j++){
        ABC=j*j*j;

        bolum=ABC/100;
        A=bolum;

        BC=ABC%100;

        bolum=BC/10;
        B=bolum;
        C=BC%10;

        for(D=1; D <= 9; D++) {
        sayi=D*100+E*10+F*1;
        asal = 1;
        for(n = 2; n < sayi; n++) {
            if(sayi % n == 0) {
                asal = 0;
                break;
            }
        }
        if(asal == 0) {
                continue;

        }
        if(A==E+1){

        }
        else{
                continue;
        }

        AB=A*10+B*1;
        if(AB%3==0){

        }
        else{
            continue;
        }

    if(A==B||A==C||A==D||A==E||A==F||
       B==C||B==D||B==E||B==F||
       C==D||C==E||C==F||
       D==E||D==F||
       D==F ){
            continue;
        }

        printf("sonuc=%d%d%d%d%d%d\n",A,B,C,D,E,F);
    }
    }

    }

    return 0;
}
