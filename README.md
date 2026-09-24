# ProgramsInC #
This repository presents a group of programs written in the C language during my studies in the Automation Engineering & Robotics course. All the classes, functions, variables, and comments are in Polish, but in this README.md file, I will explain all the programs in English. The course name is "Introduction to Programming." 

## Exercise 1 - Short multiplication formula ##

Based on the fundamental algorithmic problems, create a program in C that solves the following shortened multiplication formulas:


![Screenshot 2025-10-20 115759](https://github.com/user-attachments/assets/4dbab7fc-400e-4381-bff6-9936ba31dd3f)

## Exercise 2 - Tax calculator ##

Write a simple tax calculator program in C. The program should ask the user to enter their annual income and then calculate the tax amount according to a simple taxation system:

* If the annual income is less than 50000 PLN, the tax is 10%
* If the annual income is between 50000 PLN and 100000 PLN, the tax is 15%
* If the annual income is bigger than 100000 PLN, the tax is 20%

The result is the amount of tax that the user has to pay based on the provided annual income.

## Exercise 3 - Sum of numbers in an array ##

Write a program that calculates the sum of the elements of an array using a recursive function.

## Exercise 4 - Fibonacci sequence ##

Write a C program that displays the Fibonacci sequence value for a specific number of words in the sequence using a recursive function.

## Exercise 5 - Input array with finding the largest element inside an array ##

Write a program in C that asks the user to enter some numbers and then reads those numbers into an array. The program should find the largest number from the given numbers and display it.

## Exercise 6 - Reversing an array using pointers ##

Write a C program that reads an array of integers from the user and then displays the array's contents in reverse order using pointers.

## Exercise 7 - 3 user input tasks ##

### a) Area and circumference calculator ###

Write a program that:
1. Displays a selection menu: Rectangle (1) or Circle (2).
2. Uses a switch statement (or nested if-else statements) to handle the user's choice.
3. Depending on the choice:
o Rectangle: Prompts for the side lengths. Uses the `double` type for calculations. Calculates and displays the area and perimeter.
o Circle: Prompts for the radius. Calculates and displays the area ($\pi r^2$) and circumference ($2\pi r$). Uses a constant for $\pi$ (e.g., `M_PI` from `math.h` or defined as `3.14159`).
4. Implements input validation: If the user enters a negative value for a side or the radius, it displays an error message and prompts for re-entry (using a `do-while` loop).

### b) Number analysis ###

Write a program that:
1. Prompts the user to enter an integer.
2. Uses `if` statements to perform the following checks and display the results:
o Whether the number is even or odd (using the modulo operator `%`). 
o Whether the number is positive, negative, or zero. 
o Whether the number falls within a specific range (e.g., greater than 100 and less than 500) – use the logical operator `&&`.
3. Design the conditional structure so that each check (parity, sign, range) is independent.

### c) The sum and the average of the numbers provided ###

Write a program that:
1. Uses a `while(1)` loop (an infinite loop) to continuously prompt the user to enter integers.
2. Allows the user to stop entering data by providing a special termination value, e.g., 0. Use the `break` statement to exit the loop.
3. Inside the loop, the program must:
o Calculate the sum of all entered numbers. 
o Count how many negative numbers were entered. 
o Count the total number of inputs (excluding the termination value 0).
4. After exiting the loop, the program displays:
o The final sum of the entered numbers. 
o The arithmetic mean of the entered numbers (use `float` or `double` for the result). 
o The count of negative numbers.

## Exercise 8 - The determinant of a 3x3 matrix ##

Write a program that accepts a 3x3 matrix from the user and displays its determinant.



