#include <stdio.h>
#include <conio.h>

#define Boyut   7


/*
GRUP ÜYELERÝ
Yasin CAN 201613172907 
Eren ÞAKRAK 201913172041
*/

int main()
{
  int enb, temp, enk, i,j, n,k, birlestir[Boyut];
  int dizi[Boyut];

  for (i = 0; i < Boyut; i++)
  {
    printf("%d . elememani giriniz : ", i);
    scanf("%d", &dizi[i]);
  }
  
  for(i=0;i<Boyut;i++)
  printf("%d",dizi[i]);
  
  
    
    for(i=0; i<Boyut;i++){
	
    	for(j=i+1; j<Boyut; j++){
		
    		if(dizi[j]<dizi[i]){
    			temp=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;
    			
			}
		}
    
}


	printf("\n");
	for(i=0;i<Boyut;i++)
	printf("%3d",dizi[i]);
    
    printf("\n\n");
    printf("%3d",dizi[0]);
    printf("%3d",dizi[Boyut-1]);
    
    printf("\n\n");
  
           
	i=0; j=Boyut;	    
    for(k=0; k<Boyut/2; k++){
	
    printf("%3d",dizi[i]);
    i++;
    
	j--;
    printf("%3d",dizi[j]);

}

if(Boyut%2!=0)
printf("%3d",dizi[i]);



	
  getch();
}
