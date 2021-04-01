#include <stdio.h>

void other() {
    printf("\nFunction had been returned to function <<other>>\n");
    fflush(stdout);
    return;
}

void input() {
    char buff[10];
    printf("Enter text:\n");
    scanf("%s", buff);
    printf("%p", &other);
    printf("\nEntered text: %s", buff);
    fflush(stdout);
}

int main() {
    printf("%p\n", &main);
    printf("%p\n", &other);
    input();
    printf("\nFunction had been output to function <<main>>\n");
    return 0;
}
