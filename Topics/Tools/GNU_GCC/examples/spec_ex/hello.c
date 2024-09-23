#include <stdio.h>

#ifdef USE_CHECKFILE
#include <stdio.h>

int main() {
    printf("Check file is defined!\n");
    return 0;
}
#else
int main() {
    printf("Check file is not defined.\n");
    return 0;
}
#endif
