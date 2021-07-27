#include <stdio.h>
#include <time.h>

int main() {
	char* time_str = ctime(time());

	printf("%s\n", time_str);

	return 0;
}
