#include <stdio.h>
#include <stdlib.h>

/*
GRUP �YELER�
Yasin CAN 201613172907 
Eren �AKRAK 201913172041
*/

int main(int argc, char *argv[]) {
	
	int temp=0, m=0, n=0;
	
	int i=0, j=0 , k=0, l=0;

	
	printf("Matris boyutlar�n� giriniz:\n");
	scanf("%d%d",&m,&n);

	int matrisA[m][n], matrisB[m][n], matrisC[m][(m+n)];
	
	printf("A matrisi de�erlerini s�ras�yla giriniz:\n");
	
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
		scanf("%d",&matrisA[i][j]);
		

		
	printf("B matrisi de�erlerini s�ras�yla giriniz:\n");
	
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
		
	//Matrisleri matrisC'de birle�tiriyoruz;
		
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
		
	//S�ralama algoritmas� i�in MatrisC haz�r;

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

	
	//S�ralama Sonucu Ekrana Yaz�d�rabiliriz
		printf("\n");
	for(i=0;i<m;i++){
	
		for(j=0;j<(m+n);j++)
	
		printf("%3d ",matrisC[i][j]);
	
	printf("\n");	
	}
	
	
	return 0;
}
