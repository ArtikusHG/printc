#include <stdio.h>
#include <sys/ioctl.h>
int main(int argc, char **argv) {
    struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);
    if(argc < 2) {
    printf("Usage: printc \"Hello, world!\"\nWarning: this only works great with small words. Bigger words might not be properly centered.\n");
    } else {
    printf("%*s\n", w.ws_col/2, argv[1]);
    return 0;
    }
}
