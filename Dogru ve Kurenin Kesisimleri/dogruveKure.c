#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	struct p1XYZ {
   	float x;
   	float y;
   	float z;
   } p1;
   
   struct p2XYZ {
   	float x;
   	float y;
   	float z;
   } p2;
   
   struct scXYZ {
   	float x;
   	float y;
   	float z;
   } sc;

	float r,k1,k2;
	
	
	printf("***Program Daire ile Doğru Parçasının Kesişimini Hesaplar***");
	printf("\nDoğru parçasının üzerinden düzlem boyunca p1 ve p2 noktaları alınmıştır");
	printf("\nKürenin yarıcapi r ve merkezi ise sc olarak tanımlanmıstır");
	printf("\nEn fazla iki kesişme noktası olabilir ve bunlar aşağıda verilmiştir:");
	printf("\np = p1 + k1 (p2 - p1)");
	printf("\np = p1 + k2 (p2 - p1)");
	printf("\nEger hiçbir kesişim yok ise bu durumda program bilgi verir");
	
	printf("\n\n p1 noktasının x,y ve z koordinatlarını sırayla giriniz\n");
	scanf("%f%f%f",&p1.x,&p1.y,&p1.z);
	
	
	printf("\n\n p2 noktasının x,y ve z koordinatlarını sırayla giriniz\n");
	scanf("%f%f%f",&p2.x,&p2.y,&p2.z);
	
	printf("\n\n Kürenin merkez koordinatlarını sırayla x,y ve z olarak giriniz:\n");
	scanf("%f%f%f",&sc.x,&sc.y,&sc.z);
	
	printf("\n\n Kürenin yarıçapını (r) giriniz:\n");
	scanf("%f",&r);
	
	
	
	
   float a,b,c;
   float delta;
   
   struct dpXYZ {
   	float x;
   	float y;
   	float z;
   } dp;

   dp.x = p2.x - p1.x;
   dp.y = p2.y - p1.y;
   dp.z = p2.z - p1.z;
   
   
   a = dp.x * dp.x + dp.y * dp.y + dp.z * dp.z;
   
   b = 2 * (dp.x * (p1.x - sc.x) + dp.y * (p1.y - sc.y) + dp.z * (p1.z - sc.z));
   
   c = sc.x * sc.x + sc.y * sc.y + sc.z * sc.z;
   c += p1.x * p1.x + p1.y * p1.y + p1.z * p1.z;
   c -= 2 * (sc.x * p1.x + sc.y * p1.y + sc.z * p1.z);
   c -= r * r;
   
   delta = b * b - 4 * a * c;
   
   if (delta < 0) {
      k1 = 0;
      k2 = 0;
      printf("\nKesişim Noktası Yoktur");
      return(0);
   }

   k1 = (-b + sqrt(delta)) / (2 * a);
   k2 = (-b - sqrt(delta)) / (2 * a);
	
	printf("\nKesişim Noktaları:");
	printf("%f %f",k1,k2);	
	
	return 0;

}
