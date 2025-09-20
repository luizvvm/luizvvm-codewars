#include <string.h>
​
char *strrev (char *string){
    int len = strlen(string);
    char stringtemp[len + 1]; 
    int i;
    int j = 0;
​
    for (i = len - 1; i >= 0; i--) {
        stringtemp[j] = string[i];
        j++;
    }
    
    stringtemp[j] = '\0';
    strcpy(string, stringtemp);
​
    return string;
}