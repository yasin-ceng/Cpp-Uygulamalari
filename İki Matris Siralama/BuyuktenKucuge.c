#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int temp=0, m=0, n=0;
	
	int i=0, j=0 , k=0, l=0;

	
	printf("Matris boyutlarýný giriniz:\n");
	scanf("%d%d",&m,&n);

	int matrisA[m][n], matrisB[m][n], matrisC[m][(m+n)];
	
	printf("A matrisi deðerlerini sýrasýyla giriniz:\n");
	
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
		scanf("%d",&matrisA[i][j]);
		

		
	printf("B matrisi deðerlerini sýrasýyla giriniz:\n");
	
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
		scanf("%d",&matrisB[i][j]);
		
		
		
		
		for(i=0; i<m; i++){
		
			for(j=0; j<n; j++)
			printf("%3d",matrisA[i][j]);
		
		printf("\n");
	}
	printf("\n");
	
	for(i=0; i<m; i++){
		
			for(j=0; j<n; j++)
			printf("%3d",matrisB[i][j]);
		
		printf("\n");
	}
		
	//Matrisleri matrisC'de birleþtiriyoruz;
		
		printf("\n\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		matrisC[i][j]=matrisA[i][j];
		
	for(i=0;i<m;i++)
		for(j=n;j<(m+n);j++)
		matrisC[i][j]=matrisB[i][(j-n)];
		
		for(i=0; i<m; i++){
		
			for(j=0; j<(m+n); j++)
			printf("%3d",matrisC[i][j]);
		
		printf("\n");
	}
		
	//Sýralama algoritmasý için MatrisC hazýr;

	for(i=0;i<m;i++){
		for(j=0;j<(m+n);j++)
			for(k=0;k<m;k++)
				for(l=0;l<(m+n);l++)
					if(matrisC[k][l] <= matrisC[i][j]){
						temp = matrisC[k][l];
						matrisC[k][l] = matrisC[i][j];	
						matrisC[i][j] = temp;
					}
	}

	
	//Sýralama Sonucu Ekrana Yazýdýrabiliriz
		printf("\n");
	for(i=0;i<m;i++){
	
		for(j=0;j<(m+n);j++)
	
		printf("%3d ",matrisC[i][j]);
	
	printf("\n");	
	}
	
	
	return 0;
}
