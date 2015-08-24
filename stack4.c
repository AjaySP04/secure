#include<stdio.h>
#include<string.h>
void main(){
 int cookies;
 int buf[80];

 printf("buf : %08x \t cookies : %08x \n", &buf, &cookies);
 gets(buf);

 if(cookies == 0x000a0d00){
   printf("You win!\n ");
  }
}
