#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time = time(NULL);
    char* time_str = ctime(&current_time);

    printf("%s\n", time_str);

    return 0;
}
