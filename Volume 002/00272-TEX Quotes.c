#include <stdio.h>

enum State { N = 0, Y = 1 };

int main() {
    enum State s = N;
    char c;
    
    while ((c = getchar()) != EOF) {
        if (c == '"' && s == N) {
            s = Y;
            printf("``");
        } else if (c == '"' && s == Y) {
            s = N;
            printf("''");
        } else {
            putchar(c);
        }
    }
    
    return 0;
}
