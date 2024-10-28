/*
 * Author  : Saud Zahir
 * Date    : October 28, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * Topic: _Noreturn Function Specifier
*/

#include <stdio.h>
#include <stdlib.h>

_Noreturn void terminate();

int main(void)
{
	puts("Hello, world!");
	terminate();
	puts("C How to Program");

	return 0;
}

_Noreturn void terminate() {
	puts("Terminating ...");
	exit(EXIT_FAILURE);
}

/*
NOTE:
    The _Noreturn function specifier indicates that a function
	will not return to its caller. For example, function exit
	terminates a program, so it does not return to its caller.
	Such functions in the C Standard Library are now declared
	with _Noreturn. For example, the C11 standard shows function
	exit’s prototype as:

		_Noreturn void exit(int status);

	If the compiler knows that a function does not return, it can
	perform various optimizations. It can also issue error messages
	if a _Noreturn function is inadvertently written to return.

	This specifier is typically used through the convenience macro
	noreturn, which is provided in the header <stdnoreturn.h>.
	_Noreturn function specifier is deprecated. [[noreturn]] attribute
	should be used instead. The macro noreturn is also deprecated.

	The following functions are noreturn in the standard library:

		abort()
		exit()
		_Exit()
		quick_exit()
		thrd_exit()
		longjmp()
*/
