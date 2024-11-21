#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rolls = 36000;  
    int counts[13] = { 0 };  

    srand(time(NULL));

    for (int i = 0; i < rolls; i++) {
        int die1 = rand() % 6 + 1;  
        int die2 = rand() % 6 + 1;  
        int sum = die1 + die2;      
        counts[sum]++;
    }

    printf("點數\t出現次數\t理論機率\t實際機率\n");
    for (int i = 2; i <= 12; i++) {
        double theoretical_probability = (i == 7 ? 6 : (i <= 6 ? i - 1 : 13 - i)) / 36.0;
        double actual_probability = (double)counts[i] / rolls;
        printf("%d\t%d\t\t%.2f%%\t\t%.2f%%\n", i, counts[i], theoretical_probability * 100, actual_probability * 100);
    }

    return 0;
}
