#include <stdio.h>
#include <iostream>

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
    int i, n;
    printf("\nNhap n:  ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0)
        printf("Uoc cua n = %d", i);
    }
    




    
    return 0;
}