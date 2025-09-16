#include <stdio.h>
#include <ctype.h>
#include <math.h>
​
int is_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
​
float trump_detector(const char *trump_speech) {
    int extra_vowels = 0;
    int base_vowel_groups = 0;
    int i = 0;
​
    while (trump_speech[i] != '\0') {
        if (is_vowel(trump_speech[i])) {
            base_vowel_groups++;
            
            char current_vowel = tolower(trump_speech[i]);
            int j = i + 1;
            
            while (trump_speech[j] != '\0' && tolower(trump_speech[j]) == current_vowel) {
                extra_vowels++;
                j++;
            }
            
            i = j;
        } else {
            i++;
        }
    }
​
    if (base_vowel_groups == 0) {
        return 0.0f;
    }
​
    float score = (float)extra_vowels / base_vowel_groups;
    
    return roundf(score * 100.0f) / 100.0f;
}