#include<stdio.h>
#include<string.h>

#define goodPass "GOODPASS"
#define STRSIZE 80

void main(){
  char passIsGood = 0;
  char buf[STRSIZE + 1];

  printf("Enter password : \n");
  fgets(buf, STRSIZE, stdin);
  
  if(strncmp(buf, goodPass, STRSIZE) == 0){
    passIsGood = 1;
   } 
 
  if(passIsGood == 1){
    printf("Congo.. You win!\n");
   }else{
    printf("Wrong Password!\n");
   }
}
