  # _Holbertonschool-printf-project_
  <p> In this #C project, we recreated the working of the printf function from the C library. We had to take into account edge cases.To do this we had to take a first argument (%) and see the next one to know what we would have to print, we made a switch to analyze the different cases and in each of them we specified what action to take.</p>
  <p> To be able to do this we use our own functions, in addition to the functions and macros that are allowed to us.</p>

  ## Functions
  |<h2>Our created functions</h2>|<h2>What are they for</h2>|
  |------------------------------|--------------------------|
  |<b> int _putchar(char c)</b>|It is a function that helps us print a single character, in the prototype c is the character to print and it is of type int since the characters are represented as integers according to their number in the ASCII table|
  |<b>int _strlen(char *s)</b>| It is used to calculate the length of character strings, this function contains a loop that iterates over each of the characters as long as it is different from the null character ('\0')|
  |<b>int _print_str(char *str)</b>| It is a function that is used to print strings of characters, it contains a condition in which it asks us that if the string is empty, it should print "Null" and if not, it should print the string.|
  |<b>int _print_num(int n)</b>| Prints a number, where n is the number to print and tells us that if n is less than 0, to print a '-' before the number, then we make a recursive call to print the positive number converting it to its representation in the ASCII table|

## Macros
|<b>Allowed functions and macros</b>|<b>What were they used for?</b>|
|-----------------------------------|-------------------------------|
|<b>Write</b>                       |It was used to print an error in case a string is empty, its syntax consists of a specifying number that will tell us what it will do is print something on the stdout, a string or whatever you want to print and the number of bytes that will be needed to print
|<b>va_list</b>                     |Defines a variable that is used to access the function arguments|
|<b>va_start</b>                    |Initialize the va_list to access the arguments
|<b>va_arg</b>                      |Take the next argument from the list, you must specify what type of data it expects
|<b>va_end</b>                      |Clear the va_list, similar to the free function

## Main function
Our <b>main.c</b> file contains everything we want to print inside, it looks like this:
```
int main(void)
{
        int len = 0;
        int len2 = 0;

        len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        _printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);
        _printf("Negative:[%d]\n", -762534);
        printf("Negative:[%d]\n", -762534);
        _printf("Character:[%c]\n", 'H');
        printf("Character:[%c]\n", 'H');
        _printf("String:[%s]\n", "I am a string !");
        printf("String:[%s]\n", "I am a string !");
        len = _printf("Percent:[%%]\n");
        len2 = printf("Percent:[%%]\n");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
        return (0);
}
```
## Compilation
To <b>compile</b> our code we use the following:
```
-gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o test -
```
## Standard output

After using that code your <b>output</b> should show something like this
```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
```
## Authors
- Mauricio Urroz https://github.com/Mauriciourrozz
- Julieta Bobadilla https://github.com/julietab28
