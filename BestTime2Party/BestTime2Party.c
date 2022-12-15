#include <stdio.h>
#include "simpio.h"
#include "genlib.h"


#define bands 27

int main(){

int i,celebs[6],k,max,hour,j,arrivals[bands],departures[bands];

for (i=0;i<bands;i++){

    printf ("Give the name of the band:");
    getchar();

    printf ("For the %d band \n",i+1);
    printf ("Arrival:");
    arrivals[i]=GetInteger();
    printf ("Departure:");
    departures[i]=GetInteger();
}


for(j=0;j<6;j++)
{
    celebs[j]=0;
}

for (j=0;j<6;j++){
        for (i=0;i<bands;i++){
            if ((j+18)>=arrivals[i]&&(j+18)<departures[i])
            {celebs[j]=celebs[j]+1;}
            }
}

max=celebs[0];
for (k=1;k<6;k++){
    if (celebs[k]>max){
        max=celebs[k];
        hour=k+18;
    }
}

printf ("The best time 2 party is %d.00",hour);
return 0;}
