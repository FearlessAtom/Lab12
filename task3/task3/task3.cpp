#include <stdio.h>
int main(){
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int index = -1, j = -1; index < 5; index++, j = j + 2){array[index] = array[j];}
    printf("array = {");
    for (int index = 0; index < 5; index++) {
        printf("%d", array[index]);
        if(index < 4){printf(", ");}}
    printf("}");
    return 0;}