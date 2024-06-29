#include <stdio.h>
int reverse(int n)
{
    int reNum = n % 10; // b1 lấy chữ số cuối cùng
    n /= 10;            // bỏ chữ số cuối cùng
    int last;
    while (n > 0)
    {
        last = n % 10;             // lấy chữ số cuối cùng
        n /= 10;                   // bỏ chữ số cuối cùng
        reNum = reNum * 10 + last; // vòng lặp để thực hiện bước 2 3 4
    }
    return reNum;
}
int main()
{
	
    int n;
    printf("INPUT NUMBER: ");
    scanf("%d", &n);
    printf("REVERSE NUMBER OF %d IS %d ", n, reverse(n));
    return 0;
}

