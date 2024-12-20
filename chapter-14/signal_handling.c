/*
 * Author  : Saud Zahir
 * Date    : October 19, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Signal Handling
 */

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <time.h>

void CtrlHandler(int); // prototype

int main(void) {
    signal(SIGINT, CtrlHandler); // register signal handler
    srand(time(NULL));

    for (unsigned int i = 1; i <= 100; i++) {
        int x = 1 + rand() % 50;

        if (x == 31) {
            raise(SIGINT);
        }

        printf("%d\n", x);
    }

    return 0;
}

void CtrlHandler(int _signal) {
    printf("Caught signal %d: Interrupt received\n", _signal);
    exit(0);
}

/*
NOTE:
    An external asynchronous event, or signal, can cause
    a program to terminate prematurely. Some events include
    interrupts (typing <Ctrl> c on a Linux/UNIX or Windows
    system or <command> c on OS X) and termination orders from
    the operating system. The signal-handling library (<signal.h>)
    provides the capability to trap unexpected events with
    function signal. Function signal receives two arguments—an
    integer signal number and a pointer to the signal-handling
    function. Signals can be generated by function raise, which
    takes an integer signal number as an argument. function raise
    is used to simulate a signals.

    SIGABRT
        Abnormal termination of the program (such as a call to function abort).
    
    SIGFPE
        An erroneous arithmetic operation, such as a divide-by-zero or an
        operation resulting in overflow.

    SIGILL
        Detection of an illegal instruction.

    SIGINT
        Receipt of an interactive attention signal (<Ctrl> c or <command> c).

    SIGSEGV
        An attempt to access memory that is not allocated to a program.

    SIGTERM
        A termination request sent to the program.
*/
