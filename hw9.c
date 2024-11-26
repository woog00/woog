#include <stdio.h>

int convCase(int ch) {
    const int diff = 'a' - 'A'; 
    if (ch >= 'A' && ch <= 'Z') 
        return ch + diff;      
    else if (ch >= 'a' && ch <= 'z') 
        return ch - diff;            
    else
        return ch; 
}

int main(void) {
    char ch[100];
    printf("Input> ");
    fgets(ch, sizeof(ch), stdin);
    int length = strlen(ch);
    printf("Output> ");
    for (int i = 0; i < length; i++) {
        int converted = convCase(ch[i]);
        putchar(converted);
    }
    return 0;
}
