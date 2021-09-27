#include <signal.h>
#include <stdio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

void signal_handler(int signal) {
    printf("Received signal %d\n", signal);
}

int main(void) {
    // Install a signal handler.
    signal(SIGTERM, signal_handler);

    printf("Sending signal %d\n", SIGTERM);
    raise(SIGTERM);
    printf("Exit main()\n");

    _getch();
    return 0;
}