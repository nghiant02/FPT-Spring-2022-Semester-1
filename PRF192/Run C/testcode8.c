#include<stdio.h>

#include<math.h>

int main() {
  double r;
  double l, w;
  double perimeter_c;
  double area_c;
  double perimeter_r;
  double area_r;
  printf("nhap r=");
  scanf("%lf", & r);
  perimeter_c = 2 * 3.14 * r;
  printf("nhap l,w=");
  scanf("%lf %lf", & l, & w);
  perimeter_r = (l + w) * 2;
  area_c = 3.14 * pow(r, 2);
  area_r = l * w;

  if (perimeter_c > perimeter_r) {
    printf("hinh tron co chu vi lon hon\n");

  } else if (perimeter_c == perimeter_r) {
    printf("chung co chu vi bang nhau\n");
  } else {
    printf("hinh chu nhat co chu vi lon hon\n");
  }
  if (area_c > area_r) {
    printf("hinh tron co dien tich lon hon\n");
  } else if (area_c == area_r) {
    printf("chung co dien tich bang nhau\n");
  } else {
    printf("hinh chu nhat co dien tich lon hon");
  }

  //check chu vi dien tich//		
  /*	printf("perimeter_c= %lf\n",perimeter_c);  
  	printf("perimeter_r= %lf\n",perimeter_r);
  	printf("area_c= %lf\n", area_c);
  	printf("area_r= %lf\n", area_r);*/
  getchar();
  return 0;
}
