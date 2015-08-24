#include<string.h>

#define goodPass "GOODPASS"

void main(){
 char passIsGood = 0;
 char buf[80];

 printf("Enter Password : \n");
 gets(buf);

 if(strcmp(buf, goodPass) == 0)
   passIsGood = 1;
  

 if(passIsGood ==  1)
    printf("\nCongrats....You Win!!\n");
  
  else{
    printf("\nWrong Password!!\n");
  }
}// USE [ python -c " print 'x' * 80 + '\x01'"| ./outFilename]
