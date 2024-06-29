#include<stdio.h>
#include<stdlib.h>
#define FILENAM "E:/NguyenTT/Giang day/PRF192 C/exam/file/arr.txt"

void nhapmang (int a[], int n){
   for (int i=0;i<n;i++){
       printf("a[%d] ",i+1);
        scanf ("%d", &a[i]);
    }
}
void hienthimang (int a[],int n){
    for (int i=0;i<n;i++)
       printf("%3d", a[i]);
   }
void ghitaptin(int a[], int n){
   FILE *f;
    //Mo file
     f =fopen(FILENAM, "w");
    if(f==NULL){
        printf("\nkhong mo duoc tap tin");
        return;
    }
    //Ghi so phan tu vao file
    fprintf(f, "%d\n",n);
    //Ghi noi dung mang vao file
    for (int i=0;i<n;i++){
        fprintf(f, "%3d", a[i]);
    }
    //Dong file
    fclose(f);
    printf("\nGhi thanh cong\n");
}
void doctaptin(){
    FILE *f;
      f =fopen(FILENAM, "r");
   if(f==NULL){
        printf("\nKhong mo duoc tap tin");
        return;
    }
    //Doc so phan tu
    int n;
    fscanf(f, "%d",&n);
    printf("\nSo phan tu cua mang la %d\n",n);
    int tmp;
    //Duyet mang tu file
    for (int i=0;i<n;i++){
        fscanf (f, "%d",&tmp);
        printf("%3d", tmp);
    }
    //Dong file
    fclose(f);
}
main(){ 
    int n, a[100];
    while(true){
        printf("\n1. Nhap mang");
        printf("\n2.Hien thi mang");
        printf("\n3.Ghi ra tap tin");
        printf("\n4.Doc noi dung tu tap tin");
        printf("\n5.Thoat");
        printf("\nHay chon xu ly ");
        int opt;
         scanf ("%d",&opt);
        Switch(opt){
            case 1:
                printf("\nNhap so phan tu n = ");scanf("%d",&n);
               nhapmang (a,n);
                break;
            case 2:
                hienthimang(a,n);
                break;
            case 3:
                ghitaptin(a,n);
                break;
            case 4:
                doctaptin();
                break;
            case 5:
                exit(0);
            }
        }
    }