#include <stdio.h>

int main() {
#if defined(__STDC_VERSION__)
    // Check for C99 or later
    #if __STDC_VERSION__ >= 199901L
        printf("Using C99 or later (C%d)\n", (int)(__STDC_VERSION__ - 199901L + 1));
    #else
        printf("Using an older version of C\n");
    #endif
#else
    printf("Could not determine C version\n");
#endif

    return 0;
}
