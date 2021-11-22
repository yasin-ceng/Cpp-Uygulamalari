#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


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
	
	
	printf("Kaç Yaþýndasýnýz ?\t:");
	scanf("%d",&calisan.yas);
	if(calisan.yas<=16)
	{
		printf("AGÝ için 16 yaþýndan büyük olmanýz gerekmektedir!");
		return 0;
	}
	 
	if(calisan.yas>=16)
		agiPuani+=0.5;
	
	printf("Evli misiniz ? (0 veya 1)\t:");
	scanf("%d",&calisan.evliMi);
		if(calisan.evliMi){
		
			printf("Eþiniz Çalýþýyor mu? (0 veya  1)\t:");
			scanf("%d", &calisan.esCalisiyor);
			if(!(calisan.esCalisiyor))
				agiPuani+=0.1;
		
		}
			
	if(calisan.evliMi){

	printf("Çocuðunuz var mý ? (0 veya 1)\t:");
	scanf("%d",&calisan.cocukVar);
	
		if(calisan.cocukVar){
				printf("Kaç çocuðunuz var?\t:");
				scanf("%d",&calisan.cocukSayisi);
				for(i=1; i<=calisan.cocukSayisi; i++){
					printf("%d. Çocuðunuz Kaç Yaþýnda?\t:",i);
					scanf("%d",&cocuk.yas);
					printf("%d. Çocuðunuz eðitimine devam ediyor mu? (0 veya 1)\t:",i);
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
	printf("Agi Puaný:%d ",agiPuani);
	
	agiMatrahi= (12*netAsgari)*agiPuani;
	aylikAgiTutari = (agiMatrahi*0.15)/12;
	brutAsgari= netAsgari + aylikAgiTutari;
	
	
	printf("Çalýþanýn alacaðý brüt asgari ücret: %.3f TL",brutAsgari);
	

	
	return 0;
}
