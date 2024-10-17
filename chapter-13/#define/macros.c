/*
 * Author  : Saud Zahir
 * Date    : October 17, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: #define Preprocessor Directive: Macros
*/

#include <stdio.h>

#define PI 3.141593
// Macro with One Argument
#define VOLUME(r) (4/3) * (PI) * ((r) * (r) * (r))
// Macro with Two Arguments
#define ADD(a, b) ((a) + (b))
// Macro Continuation Character
#define MAX(a, b) a > b ? \
                  a : b

int main(void) {
    double radius = 3;
    double volume = VOLUME(radius);

    printf("%lf\n", volume);
    printf("%d\n", ADD(2, 3));
    printf("%d\n", MAX(2, 3));

    return 0;
}

/*
NOTE:
    A macro is an identifier defined in a #define preprocessor directive.
    As with symbolic constants, the macro-identifier is replaced with
    replacement-text before the program is compiled. Macros may be defined
    with or without arguments. A macro without arguments is processed like
    a symbolic constant. In a macro with arguments, the arguments are
    substituted in the replacement text, then the macro is expanded—the
    replacement-text replaces the identifier and argument list in the program.
    A symbolic constant is a type of macro.

    The parentheses around each x in the replacement-text force the proper
    order of evaluation when the macro argument is an expression. Enclose
    macro arguments in parentheses in the replacement-text to prevent logic errors.

    In the past, macros were often used to replace function calls with
    inline code to eliminate the function-call overhead. Today’s optimizing
    compilers often inline function calls for you, so many programmers no longer
    use macros for this purpose. You can also use the C standard’s inline keyword
    (see Appendix E).

    The replacement-text for a macro or symbolic constant is normally
    any text on the line after the identifier in the #define directive.
    If the replacement-text for a macro or symbolic constant is longer than
    the remainder of the line, a backslash (\) continuation character must be
    placed at the end of the line, indicating that the replacement-text
    continues on the next line.

    Expressions with side effects (e.g., variable values are modified) should
    not be passed to a macro because macro arguments may be evaluated more than once.
    For instance,
            volume = VOLUME(++radius);

    expands to:
            volume = (4/3) * (PI) * ((++r) * (++r) * (++r));

    which increments radius more than once in the statement. In addition, the result of
    the preceding statement is undefined because C allows a variable to be modified only
    once in a statement. In a function call, the argument is evaluated only once before
    it’s passed to the function. So, functions are always preferred to unsafe macros.
*/
