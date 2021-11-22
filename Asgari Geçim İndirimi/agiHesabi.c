#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
GRUP �YELER�
Yasin CAN 201613172907 
Eren �AKRAK 201913172041
*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Turkish");
	
	int i;
	
	struct personel {
		int yas;
		int evliMi;
		int esCalisiyor;
		int cocukVar;
		int cocukSayisi;
		
	}calisan;
	
	
	const double netAsgari=2324.7;
	double brutAsgari;		// netAsgari + agi 
	double agiPuani=0;		// calisan=0,5; calismayanEs=0,1; cocuk1=0,075; cocuk2=0,075; cocuk3=0,1; cocuk4+=0,05;
	double agiMatrahi;		// 12*netAsgari*agiPuani
	double aylikAgiTutari;	//(agiMatrahi*0,15)/12
	
	struct cocukBilgi{
		int yas;
		int egitim;
	}cocuk;
	
	
	printf("Ka� Ya��ndas�n�z ?\t:");
	scanf("%d",&calisan.yas);
	if(calisan.yas<=16)
	{
		printf("AG� i�in 16 ya��ndan b�y�k olman�z gerekmektedir!");
		return 0;
	}
	 
	if(calisan.yas>=16)
		agiPuani+=0.5;
	
	printf("Evli misiniz ? (0 veya 1)\t:");
	scanf("%d",&calisan.evliMi);
		if(calisan.evliMi){
		
			printf("E�iniz �al���yor mu? (0 veya  1)\t:");
			scanf("%d", &calisan.esCalisiyor);
			if(!(calisan.esCalisiyor))
				agiPuani+=0.1;
		
		}
			
	if(calisan.evliMi){

	printf("�ocu�unuz var m� ? (0 veya 1)\t:");
	scanf("%d",&calisan.cocukVar);
	
		if(calisan.cocukVar){
				printf("Ka� �ocu�unuz var?\t:");
				scanf("%d",&calisan.cocukSayisi);
				for(i=1; i<=calisan.cocukSayisi; i++){
					printf("%d. �ocu�unuz Ka� Ya��nda?\t:",i);
					scanf("%d",&cocuk.yas);
					printf("%d. �ocu�unuz e�itimine devam ediyor mu? (0 veya 1)\t:",i);
					scanf("%d",&cocuk.egitim);				
				
					
					if(cocuk.yas>=25)
						agiPuani+=0;
					else if(cocuk.yas>18 && !(cocuk.egitim))
						agiPuani+=0;
					else if(i==1)
						agiPuani+=0.075;
					else if(i==2)
						agiPuani+=0.075;
					else if(i==3)
						agiPuani+=0.1;
					else if(i>3)
						agiPuani+=0.05;			
				}		
		}
	}
	printf("Agi Puan�:%d ",agiPuani);
	
	agiMatrahi= (12*netAsgari)*agiPuani;
	aylikAgiTutari = (agiMatrahi*0.15)/12;
	brutAsgari= netAsgari + aylikAgiTutari;
	
	
	printf("�al��an�n alaca�� br�t asgari �cret: %.3f TL",brutAsgari);
	

	
	return 0;
}
