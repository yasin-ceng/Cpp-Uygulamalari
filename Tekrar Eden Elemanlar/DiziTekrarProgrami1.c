#include <stdio.h>

#include <conio.h>
/*
GRUP ÜYELERÝ
Yasin CAN 201613172907 
Eren ÞAKRAK 201913172041
*/
int main()
{
   int y[12];
   
   int j, t=1,c;
   
   printf("Y dizisinin Elemanlarini giriniz= \n");
   
   for(j=0;j<12;j++)
   
 scanf("%d",&y[j]);
 
   printf("\n Elemanlarin Dizideki Tekrar Sayisi \n");
   
   for(j=0;j<12;j++)
   
 if(y[j]!=-1){
 	
  for(c=j+1;c<12;c++)
  
   if(y[j]==y[c]){
   	
    t++;
    
    y[c]=-1;
    
   }
   
  printf("%d adet %d vardir\n",t,y[j]);
  
  t=1;
  
 }
 
}
