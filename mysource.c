#include<stdio.h>
#include"myheader.h"

int main(){
 int a = 10;
 int *p = &a; 
 incrementor(p);
 printf("%d\n", *p);
 return *p;
}

void incrementor(int *a){
 ++(*a);
}
