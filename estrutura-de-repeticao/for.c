// Nesse caso, a condição if (i % 2 == 0) verifica se i é par. Se for, o valor de i é impresso.
 
#include <stdio.h>
 
int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
   
    return 0;
}