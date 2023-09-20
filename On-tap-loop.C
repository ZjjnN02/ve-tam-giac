#include <stdio.h>
#include <iostream>

//khong su dung loop -> Yeu cau tinh tong cac so 1 + 2 + ... + N -> Trong do N nhap tu ban phim
/*
int sum(int n) {
    if(n == 1) return 1;
    return sum(n -1) + n;
}
int main(){
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while(n <= 0);
    cout << "Tong cua day so la: " << sum(n) <<endl;
    system("pause");


    return 0;
}
*/

int main()
{

    //Nhap so nguyen N tu ban phim. Yeu cau in ra tat ca cac uoc so chung cua N
    /*
    int i, n;
    printf("\nNhap n:  ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0)
        printf("Uoc cua n = %d", i);
    }
    */

    //Nhap so nguyen num tu ban phim. In ra bang cuu chuong cua num
    /*
    int num;
    printf("Nhap vao mot so: ");
    scanf("%d", &num);

    printf("Bang cuu chuong %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    */
    
    return 0;
}