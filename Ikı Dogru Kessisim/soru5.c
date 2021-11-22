#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
GRUP ÜYELERÝ
Yasin CAN 201613172907 
Eren ÞAKRAK 201913172041
*/

int main(int argc, char *argv[]) {
	
	 int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,Ex,Ey;
	 int T;
	
	
	//Her iki doðrunun deðerlerini alýyoruz
	
	printf("[AB] dogrusunun Ax koordinatini giriniz:");
	scanf("%d",&Ax);
	printf("[AB] dogrusunun Ay koordinatini giriniz:");
	scanf("%d",&Ay);
	
	printf("[AB] dogrusunun Bx koordinatini giriniz:");
	scanf("%d",&Bx);
	printf("[AB] dogrusunun By koordinatini giriniz:");
	scanf("%d",&By);
	
	printf("[CD] dogrusunun Cx koordinatini giriniz:");
	scanf("%d",&Cx);
	printf("[CD] dogrusunun Cy koordinatini giriniz:");
	scanf("%d",&Cy);
	
	printf("[CD] dogrusunun Dx koordinatini giriniz:");
	scanf("%d",&Dx);
	printf("[CD] dogrusunun Dy koordinatini giriniz:");
	scanf("%d",&Dy);
	
	T=(((Dy-Cy)*(Cx-Ax))-((Cy-Ay)*(Dx-Cx))/((Dy-Cy)*(Bx-Ax)-(By-Ay)*(Dx-Cx)));
	
	
	Ex = (Ax+(Bx-Ax)*T);
	
	Ey = (Ay + (By-Ay)*T);
	
	
	printf("[AB] ve [CD] Doðru Parçasýnýn Kesiþimi Olan E noktasý koordinatlarý:");
	printf("\nEx:%d\nEy:%d",Ex,Ey);
	
	
	return 0;
}
