  # _Holbertonschool-printf-project_
  <p> In this #C project, we recreated the working of the printf function from the C library. We had to take into account edge cases.</p>
  <p> To be able to do this we use our own functions, in addition to the functions and macros that are allowed to us.</p>

  |<h2>Our created functions</h2>|<h2>What are they for</h2>|
  |------------------------------|--------------------------|
  |<b> int _putchar(char c)</b>|It is a function that helps us print a single character, in the prototype c is the character to print and it is of type int since the characters are represented as integers according to their number in the ASCII table|
  |<b>int _strlen(char *s)</b>| It is used to calculate the length of character strings, this function contains a loop that iterates over each of the characters as long as it is different from the null character ('\0')|
  |<b>int _print_str(char *str)</b>| It is a function that is used to print strings of characters, it contains a condition in which it asks us that if the string is empty, it should print "Null" and if not, it should print the string.|
  |<b>int _print_num(int n)</b>| Prints a number, where n is the number to print and tells us that if n is less than 0, to print a '-' before the number, then we make a recursive call to print the positive number converting it to its representation in the ASCII table|
