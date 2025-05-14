#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//nr par sau impar

int main(){
int a;
printf("Introduceti o valoare pentru a:");
scanf("%d",&a);
if(a%2 !=0){
    printf("Nr este impar!");
}else{
    printf("Nr este par!");
}



getch();
return 0;
}
