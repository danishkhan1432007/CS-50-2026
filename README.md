# CS-50-2026
Solutions and notes from Harvard's CS50 — covering C, Python, SQL, algorithms, and data structures — as part of my ongoing software engineering coursework and self-study.

######
# Hello, World

A simple C program that prints a greeting to the console. This is the classic first program written when learning any new programming language, and marks the starting point of my CS50 journey in C.

## Description

The program uses the `printf` function from the C Standard I/O library to output the text `hello, world` to the terminal.

## Code

```c
#include<stdio.h>

int main(void)
{
    printf("hello,world  \n");
}
```

## How it Works

- `#include<stdio.h>` includes the Standard Input Output library, which provides the `printf` function.
- `int main(void)` is the entry point of every C program; execution starts here.
- `printf("hello,world  \n")` prints the given text to the console, followed by a newline (`\n`).

## How to Compile and Run

```bash
gcc hello.c -o hello
./hello
```

## Sample Output

```
hello,world
```

## What I Learned

- Basic structure of a C program (`#include`, `main`, `return`)
- How to use `printf` to output text
- How to compile and run a C program using `gcc`

######

# Hello

A C program that asks the user for their name and greets them by name. This builds on the classic "Hello, World" program by introducing user input using CS50's library.

## Description

The program uses `get_string` from the CS50 library to prompt the user for their name, then uses `printf` to print a personalized greeting.

## Code

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("what is your name :");
    printf("hello,%s\n",name);

}
```

## How it Works

- `#include <cs50.h>` includes the CS50 library, which provides the `string` type and `get_string` function.
- `get_string("what is your name :")` displays a prompt and waits for the user to type input, returning it as a `string`.
- `printf("hello,%s\n", name)` prints a greeting, substituting `%s` with the value of `name`.

## How to Compile and Run

```bash
gcc -o hello hello.c -lcs50
./hello
```

## Sample Output

```
what is your name :David
hello,David
```

## What I Learned

- How to accept user input in C using `get_string` from the CS50 library
- Using format specifiers (`%s`) with `printf` to print variables
- The `string` data type provided by CS50 (a wrapper around `char *`)

######

# Compare

A C program that compares two integers entered by the user and reports whether the first is greater than, less than, or equal to the second.

## Description

The program uses `get_int` from the CS50 library to read two integers, then uses `if` / `else if` / `else` conditionals to compare them and print the result.

## Code

```c
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int x = get_int("What is the value of x : ");
    int y = get_int("What is the value of y : ");

    if (x > y)
    {
        printf("x is greater than y \n");
    }
    else if (x < y)
    {
        printf("x is less than y \n");
    }
    else
     {
        printf("x is equal to y \n");
    }
}
```

## How it Works

- `get_int(...)` prompts the user and reads an integer value, storing it in `x` and `y`.
- The `if` block checks if `x` is greater than `y`.
- The `else if` block checks if `x` is less than `y`.
- The `else` block handles the remaining case, where `x` and `y` are equal.
- Only one of the three `printf` statements executes, depending on the comparison result.

## How to Compile and Run

```bash
gcc -o compare compare.c -lcs50
./compare
```

## Sample Output

```
What is the value of x : 5
What is the value of y : 8
x is less than y
```

## What I Learned

- How to read integer input using `get_int` from the CS50 library
- Using `if`, `else if`, and `else` to branch based on conditions
- Comparing numeric variables using relational operators (`>`, `<`)

######

# Grade Calculator

A C program that calculates a student's percentage from their exam marks (out of 500) and assigns a letter grade based on that percentage.

## Description

The program asks the user for their name and marks scored out of 500, converts the marks into a percentage, then uses conditional statements to determine and print the corresponding grade.

## Code

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string name = get_string("What is your name : ");
    int marks = get_int("How many marks you have got in the exam (total marks 500): ");
    marks = (marks * 100)/500;
    if (marks >= 90)
    {
        printf("Congratulations , %s ",name );
        printf("you have got the A+ grade \n");
    }  
    else if (marks >= 80)
    {
        printf("Congratulations , %s ",name );
        printf("you have got the A grade \n");
    }
    else if (marks >= 70)
    {
        printf("Congratulations , %s ",name );
        printf("You have got the B grade \n");
    }
    else
    {
        printf("Congratulations , %s ",name );
        printf("You have got the C grade \n");
    }
}
```

## How it Works

- `get_string(...)` reads the student's name as text.
- `get_int(...)` reads the marks scored out of a total of 500.
- `marks = (marks * 100) / 500` converts the raw marks into a percentage.
- A chain of `if` / `else if` / `else` statements checks the percentage against grade thresholds (90, 80, 70) and prints the matching grade, from A+ down to C.

## How to Compile and Run

```bash
gcc -o grade_calculator grade_calculator.c -lcs50
./grade_calculator
```

## Sample Output

```
What is your name : Danish
How many marks you have got in the exam (total marks 500): 450
Congratulations , Danish you have got the A+ grade
```

## What I Learned

- Converting a raw score into a percentage using integer arithmetic
- Chaining multiple conditions with `if` / `else if` / `else`
- Combining string and integer input in the same program
- Using multiple `printf` calls to build up a single line of output

## Notes

- Integer division truncates decimals, so the calculated percentage is always a whole number (e.g., 89.8% would be truncated to 89, falling into the B grade instead of A).

######

# Agree

A C program that asks the user for a yes/no response and prints whether they agreed or not.

## Description

The program uses `get_char` from the CS50 library to read a single character input, then checks it against `'y'` or `'Y'` to determine if the user agreed.

## Code

```c
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    char c = get_char("Do you agree y/n: ");

    if (c == 'y' || c == 'Y')
{
    printf("Agreed. \n");
}
else 
{
    printf("Not agreed. \n");
}
}
```

## How it Works

- `get_char(...)` prompts the user and reads a single character, storing it in `c`.
- The `if` condition uses the logical OR operator (`||`) to check whether `c` is a lowercase `'y'` or an uppercase `'Y'`.
- If the condition is true, `"Agreed."` is printed; otherwise, `"Not agreed."` is printed.

## How to Compile and Run

```bash
gcc -o agree agree.c -lcs50
./agree
```

## Sample Output

```
Do you agree y/n: y
Agreed.
```

```
Do you agree y/n: n
Not agreed.
```

## What I Learned

- How to read a single character using `get_char` from the CS50 library
- Using the logical OR operator (`||`) to check multiple conditions
- Handling case-insensitive input (accepting both `y` and `Y`)

## Notes

- Any input other than `'y'` or `'Y'` (including `'n'`, `'N'`, or any other character) falls into the `else` branch and is treated as "Not agreed."

######

# Question Marks

A simple C program that prints a row of four question marks using a `for` loop.

## Description

The program uses a `for` loop to print `"?"` four times in a row, followed by a newline.

## Code

```c
#include <stdio.h>

int main(void)
{
    for (int i = 0; i< 4; i++){
        printf("?");
    }
    printf("\n");
}
```

## How it Works

- `for (int i = 0; i < 4; i++)` initializes a counter `i` at 0, repeats the loop while `i` is less than 4, and increments `i` after each iteration — running the loop body 4 times.
- Inside the loop, `printf("?")` prints a single question mark without a newline, so all four end up on the same line.
- After the loop finishes, `printf("\n")` moves to a new line.

## How to Compile and Run

```bash
gcc -o question_marks question_marks.c
./question_marks
```

## Sample Output

```
????
```

## What I Learned

- Basic `for` loop syntax: initialization, condition, and increment
- How loop iteration count is controlled by the loop condition
- Printing repeated characters without newlines between them

######


# Hash Column

A simple C program that prints a vertical column of three hash (`#`) symbols using a `for` loop.

## Description

The program uses a `for` loop to print `"#"` followed by a newline, three times — producing a column rather than a row of hashes.

## Code

```c
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++){
        printf("#\n");
    }
}
```

## How it Works

- `for (int i = 0; i < 3; i++)` runs the loop body 3 times, starting `i` at 0 and stopping once `i` reaches 3.
- Each iteration calls `printf("#\n")`, which prints a hash symbol and then moves to a new line.
- Because the newline is printed after every hash, the output forms a vertical column instead of a single row.

## How to Compile and Run

```bash
gcc -o hash_column hash_column.c
./hash_column
```

## Sample Output

```
#
#
#
```

## What I Learned

- How the placement of `\n` inside `printf` affects whether output appears on one line or multiple lines
- Using a `for` loop to repeat an action a fixed number of times

## Notes

- If the goal was a single row like `###`, the newline (`\n`) would need to be moved outside the loop, similar to the earlier "Question Marks" exercise.

######

# Hash Square

A C program that prints a 3x3 square of hash (`#`) symbols using nested `for` loops.

## Description

The program uses an outer loop to control the number of rows and an inner loop to print the hash symbols within each row, producing a solid square of `#` characters.

## Code

```c
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
```

## How it Works

- The outer loop (`i`) runs 3 times, once for each row.
- For every row, the inner loop (`j`) runs 3 times, printing a `#` on each iteration without a newline — building up one row of three hashes.
- After the inner loop finishes, `printf("\n")` moves to the next line, starting a new row.
- The result is a 3x3 grid of `#` symbols.

## How to Compile and Run

```bash
gcc -o hash_square hash_square.c
./hash_square
```

## Sample Output

```
###
###
###
```

## What I Learned

- Using nested `for` loops to build two-dimensional patterns
- How the outer loop controls rows and the inner loop controls columns
- Where to place `printf("\n")` to separate rows correctly

######

# Hash Square (with Function)

A C program that prints a 3x3 square of hash (`#`) symbols, refactored to use a custom function, `print_row`, for printing each row.

## Description

The program defines a helper function, `print_row`, which prints a row of hash symbols. The `main` function calls `print_row` three times in a loop to build a square, adding a newline after each row.

## Code

```c
#include <stdio.h>

void print_row(int width)
{
    for (int i = 0; i < 3; i++)
    {
        printf("#");
    }
}

int main(void)
{
    const int n = 3;
    for (int i = 0; i < 3; i++){
        print_row(n);
        printf("\n");
    }
}
```

## How it Works

- `print_row(int width)` is a custom function that prints a row of `#` symbols using an internal `for` loop.
- `const int n = 3` defines the square's size and is passed into `print_row` as the `width` argument.
- In `main`, a `for` loop runs 3 times, calling `print_row(n)` to print a row, then `printf("\n")` to move to the next line.

## How to Compile and Run

```bash
gcc -o hash_square_function hash_square_function.c
./hash_square_function
```

## Sample Output

```
###
###
###
```

## What I Learned

- Breaking a program into functions to organize repeated logic (`print_row`)
- Passing parameters into functions
- Separating "what to repeat" (main's loop) from "how to print a row" (print_row's loop)

## Notes

- `print_row` currently takes a `width` parameter but doesn't actually use it — the inner loop is hardcoded to `i < 3`. To make the function truly reusable for any square size, the loop condition should be changed to `i < width` so it responds to the argument passed in.

######

# Left-Aligned Triangle

A C program that prints a left-aligned triangle of asterisks (`*`), 8 rows tall, using nested `for` loops.

## Description

The program uses an outer loop to control the number of rows and an inner loop, whose length grows with each row, to print an increasing number of asterisks per line.

## Code

```c
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
```

## How it Works

- The outer loop (`i`) runs 8 times (`i = 0` to `7`), once for each row of the triangle.
- The inner loop (`j`) runs from `0` to `i` (inclusive), so it executes `i + 1` times — meaning row 0 prints 1 asterisk, row 1 prints 2, and so on up to row 7 printing 8 asterisks.
- After each row's asterisks are printed, `printf("\n")` moves to the next line.
- The growing inner loop length is what produces the triangle shape.

## How to Compile and Run

```bash
gcc -o left_triangle left_triangle.c
./left_triangle
```

## Sample Output

```
*
**
***
****
*****
******
*******
********
```

## What I Learned

- Using a loop variable's bound (`j <= i`) to create a growing pattern
- How the outer loop index can directly control the inner loop's range
- Building triangle/pyramid shapes with nested loops, a common stepping stone to CS50's Mario problem

######

# Sum

A C program that adds two integers entered by the user and prints their sum.

## Description

The program uses `get_int` from the CS50 library to read two integers, then adds them together and prints the result using `printf`.

## Code

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What's the x ? ");
    int y = get_int("What's the y ? ");

    printf("%i \n", x + y);
}
```

## How it Works

- `get_int(...)` prompts the user and reads an integer, storing it in `x` and `y`.
- `x + y` computes the sum of the two values directly inside the `printf` call.
- `%i` is the format specifier used to print an integer value.

## How to Compile and Run

```bash
gcc -o sum sum.c -lcs50
./sum
```

## Sample Output

```
What's the x ? 4
What's the y ? 7
11 
```

## What I Learned

- Reading integer input with `get_int` from the CS50 library
- Performing arithmetic directly inside a function call argument
- Using the `%i` format specifier to print integers with `printf`

######

# Double

A C program that doubles an integer entered by the user and prints the result.

## Description

The program uses `get_int` from the CS50 library to read an integer, then multiplies it by 2 and prints the result using `printf`.

## Code

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("what's the x ? ");
    
    printf("%i \n",2 * x);
}
```

## How it Works

- `get_int(...)` prompts the user and reads an integer, storing it in `x`.
- `2 * x` computes double the value of `x` directly inside the `printf` call.
- `%i` is the format specifier used to print an integer value.

## How to Compile and Run

```bash
gcc -o double double.c -lcs50
./double
```

## Sample Output

```
what's the x ? 6
12 
```

## What I Learned

- Reading integer input with `get_int` from the CS50 library
- Performing arithmetic (multiplication) directly inside a function call argument
- Reinforcing use of the `%i` format specifier with `printf`


#####

# Doubling Game

A C program that simulates a simple game where a dollar amount keeps doubling as long as the user agrees to pass it on, using a `while` loop.

## Description

The program starts with $1 and repeatedly asks the user whether to double it and pass it to the next person. As long as the user responds `'y'`, the amount doubles and the loop continues; any other response ends the game and prints the final amount.

## Code

```c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int dollar = 1;
    while (true)
    {
        char c = get_char("Here is $%i . Double it and give it to next person .",dollar);
        if (c == 'y')
        {
            dollar *= 2;
        }
        else 
        {
            break;
        }
    }
    printf("Here is $%i .", dollar);
}
```

## How it Works

- `int dollar = 1` starts the game with one dollar.
- `while (true)` creates an infinite loop that only stops when explicitly broken out of.
- `get_char(...)` asks the user whether to double the current amount, embedding the current `dollar` value in the prompt via `%i`.
- If the user enters `'y'`, `dollar *= 2` doubles the amount and the loop repeats.
- Any other input triggers `break`, which exits the loop immediately.
- After the loop ends, the final dollar amount is printed.

## How to Compile and Run

```bash
gcc -o doubling_game doubling_game.c -lcs50
./doubling_game
```

## Sample Output

```
Here is $1 . Double it and give it to next person .y
Here is $2 . Double it and give it to next person .y
Here is $4 . Double it and give it to next person .n
Here is $4 .
```

## What I Learned

- Using `while (true)` with a `break` statement to control loop exit conditions
- Using `printf`-style format strings inside `get_char` prompts
- Simulating a repeating decision-based scenario with conditionals inside a loop

## Notes

- `get_char` with a formatted prompt (`"...%i...", dollar`) works because it accepts variadic arguments the same way `printf` does — the CS50 library passes the format string and argument through internally.

######

# Divide

A C program that divides two integers entered by the user and prints the result as a floating-point number.

## Description

The program uses `get_int` from the CS50 library to read two integers, then divides them using a float cast to preserve decimal precision, and prints the result using `printf`.

## Code

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("what's the x ? ");
    int y = get_int("what's the y ? ");
    printf("%f \n", (float)x/y);
}
```

## How it Works

- `get_int(...)` prompts the user and reads two integers, storing them in `x` and `y`.
- `(float)x` casts `x` to a `float` before the division, so the division is performed as floating-point rather than integer division.
- `/y` divides the casted value of `x` by `y`, producing a decimal result.
- `%f` is the format specifier used to print a floating-point value.

## How to Compile and Run

```bash
gcc -o divide divide.c -lcs50
./divide
```

## Sample Output

```
what's the x ? 7
what's the y ? 2
3.500000 
```

## What I Learned

- Why casting to `float` before division matters — without it, `x/y` would perform integer division and truncate the decimal part
- Using `(float)` type casting in C
- Using the `%f` format specifier to print floating-point numbers

## Notes

- `%f` prints 6 decimal places by default. To limit the output (e.g., to 2 decimal places), `%.2f` can be used instead.
- This program doesn't check for `y == 0`, which would cause a division-by-zero error at runtime.