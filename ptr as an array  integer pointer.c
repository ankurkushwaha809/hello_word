//                 It declares ptr as an array of MAX integer pointers

#include <stdio.h>
const int MAX = 3;
int main ()
 {
int var[] = {10, 100, 200};
int i,*ptr[MAX];
for (i = 0; i < MAX; i++) {
ptr[i] = &var[i];
printf("Value of var[%d] = %d\n", i, *ptr[i] );
}
return 0;
}