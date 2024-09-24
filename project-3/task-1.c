#include <stdio.h>

main(){
     char al = 'a'; 

    do {
        printf("%c ", al); 
        al += 4;          
    } while (al <= 'z');   

    printf("\n");
}