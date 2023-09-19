#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>


int main(){
    int h;
    printf("\nNhap do cao tam giac h = ");
    scanf("%d", &h);
    


    //Cau a: Ve tam can
    if  ( h > 0) {
        int i, j;
        for(i = 1; i <= h; i++) {
            for(j = 1; j < 2 * h; j++) {
                if(abs(h - j) <= (i - 1)) {
                    printf(" * ");
                } else {
                    printf("   ");
                }
            }
            printf("\n");
        }
    } else {
        printf("Nhap h > 0!");
    }
    
    
    
    
    
    //Cau b: Ve tam giac can rong
    /*
    int k = h - 1;
    for(int i = 0; i < h - 1; i++){
        for(int j = 0; j < 2 * h - 1; j++){
            if( j == k - i || j == k + i) printf(" * ");
            else printf("   ");
        }
        printf("\n");
    }
    for(int i = 0; i < 2 * h - 1; i++) printf(" * ");
    */
    
     
     
     
     
    //cau c: Ve tam giac vuong can dac
    /*
    if(h > 0) {
        int i, j;
        for(i = 1; i <= h; i++) {
            for(j = 1; j <= i; j++) {
                printf(" * ");
            }
            printf("\n");
        }
    } else {
        printf("Nhap vao so duong h!");
    }
    */

    //cau d: Ve tam giac vuong can rong
    
    






     return 0;
}