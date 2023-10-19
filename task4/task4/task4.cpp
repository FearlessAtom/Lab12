#include <stdio.h>
int main() {
    int array[11] = {-4, 2, -10, 9, -7, -2, 5, -3, 1, -6, 6};
    int sorting[11];
    int negativenumbers = 0, positivenumbers = 0;
    for (int index = 0; index < 11; index++) {
        int max = -999999;
        int maxIndex = -1;
        for (int j = 0; j < 11; j++) {
            if (array[j] > max){max = array[j];
                maxIndex = j;}}
        sorting[index] = max;
        array[maxIndex] = -99999999;}
    for (int index = 0; index < 11; index++) {
        if (sorting[index] > 0){positivenumbers++;}
        else if (sorting[index] < 0){negativenumbers++;}
        printf("%d", sorting[index]);
        if (index < 10) {
            printf(", ");}}
    printf("\nThere were %d positive and %d negative numbers", positivenumbers, negativenumbers);
    return 0;}