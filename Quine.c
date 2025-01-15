#include <stdio.h>

int main() {
    char *text = "#include <stdio.h>%1$c%1$cint main() {%1$c    char *text = %2$c%3$s%2$c;%1$c    printf(text, 10, 34, text);%1$c    return 0;%1$c}";
    printf(text, 10, 34, text);
    return 0;
}