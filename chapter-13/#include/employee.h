/*
 * Author  : Saud Zahir
 * Date    : October 16, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: #include Preprocessor Directive
*/

typedef enum {
    MALE = 'M',
    FEMALE = 'F'
} Gender;

typedef struct {
    char name[40];
    unsigned int age;
    Gender gender;
    double salary;
} Employee;

void updateSalary(Employee *, double);
