#include <stdio.h>
#include <sys/ioctl.h>
int main(int argc, char **argv) {
    struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);
    if(argc < 2) {
    printf("Usage: printc \"Hello, world!\"\n");
    } else {
    int sp = (strlen(argv[1]) + w.ws_col)/2;
    printf("%*s\n", sp, argv[1]);
    return 0;
    }
}
