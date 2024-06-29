#include<stdio.h>
#include <stdlib.h>
int main(){
    int a=8,b=9;
    FILE *f;
   //Mo file
      f = fopen("E:/NguyenTT/Giang day/PRF192 C/exam/file/test3.txt", "w");
    if(f==NULL){
        printf("Khong mo duoc file");
        exit (0);
    }
    //Doc file
    fscanf(f, "%d\n%d",&a,&b);
    printf("a = %d, b = %d", a, b);
    printf("\nTong hai so la %d\n", a+b);
    //Ghi file
    fprintf(f, "%d\n", a);
    fprintf(f, "%d\n",b);
    fprintf(f, "%d", a+b);
   //Dong file
    fclose(f);
}
               