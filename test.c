#include <stdio.h>

int main() {

   if (month==4 || month == 6 || month == 9|| month ==11)
       printf("The month has 30 days. \n");
   else if (month == 2)
       printf("The month has 28 or 29 days. \n");
   else
       printf("The month has 31 days. \n");

}