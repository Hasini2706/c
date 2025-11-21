#include<stdio.h> 
int main() 
{ 
 char str[30]; 
 int i; 
 int digits=0,lower=0,upper=0,vowels=0,consonants=0; 
 scanf("%[^\n]s",str); 
     for(i = 0; str[i] != '\0'; i++)  
 { 
          char ch = str[i]; 
 
          if (ch>='0' && ch<='9')  
  { 
               digits++;   
          }  
  else if(ch>='A' && ch<='Z')  
  { 
   upper++; 
      } 
      else if(ch>='a' && ch<='z') 
      { 
    lower++; 
  }  
          if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
  { 
                  vowels++; 
          }  
  else  
  { 
                  consonants++;  
  } 
     } 
    printf("Lower: %d\n", lower); 
    printf("Upper: %d\n", upper); 
    printf("Vowels: %d\n", vowels); 
    printf("Consonants: %d\n", consonants); 
    printf("Digits: %d\n", digits); 
    return 0; 
}


