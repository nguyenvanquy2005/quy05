#include <stdio.h>

int main() {
   long long isbn;
   int i, weight, sum;

   printf("ISBN Validator ==============\n");

   do {
       printf("ISBN (0 to quit): ");
       scanf("%lld", &isbn);

     
       if (isbn == 0) {
           break;
       } else if (isbn < 1000000000 || isbn > 9999999999) {
           printf("Invalid ISBN length. Please enter a 10-digit number.\n");
           continue;
       }

      
       sum = 0;
       weight = 10;
       for (i = 9; i >= 0; i--) {
           int digit = isbn % 10;
           sum += digit * weight--;
           isbn /= 10;
       }

       
       if (sum % 11 == 0) {
           printf("This is a valid ISBN.\n");
       } else {
           printf("This is not a valid ISBN.\n");
       }
   } while (isbn != 0);

   printf("Have a Nice Day!\n");

   return 0;
}

