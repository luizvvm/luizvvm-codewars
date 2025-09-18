#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h> 
​
char *number_to_string(int number) {
    if (number == 0) {
        char *str = (char *) malloc(2 * sizeof(char));
        str[0] = '0';
        str[1] = '\0';
        return str;
    }
​
    int is_negative = 0;
    if (number < 0) {
        is_negative = 1;
    }
​
    long long temp_num_long = number; 
    if (is_negative) {
        temp_num_long = -temp_num_long; 
    }
​
    int len = is_negative ? 1 : 0;
    len += floor(log10(temp_num_long)) + 1;
​
    char *string = (char *) malloc((len + 1) * sizeof(char));
    string[len] = '\0';
​
    int i = len - 1;
    while (temp_num_long > 0) {
        string[i] = (temp_num_long % 10) + '0'; 
        temp_num_long /= 10;                  
        i--;
    }
​
    if (is_negative) {
        string[0] = '-';
    }
​
    return string;
}