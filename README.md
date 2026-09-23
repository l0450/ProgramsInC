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

# a) Area and circumference calculator #

Write a program that:
1. Displays a selection menu: Rectangle (1) or Circle (2).
2. Uses a switch statement (or nested if-else statements) to handle the user's choice.
3. Depending on the choice:
o Rectangle: Prompts for the side lengths. Uses the `double` type for calculations. Calculates and displays the area and perimeter.
o Circle: Prompts for the radius. Calculates and displays the area ($\pi r^2$) and circumference ($2\pi r$). Uses a constant for $\pi$ (e.g., `M_PI` from `math.h` or defined as `3.14159`).
4. Implements input validation: If the user enters a negative value for a side or the radius, it displays an error message and prompts for re-entry (using a `do-while` loop).



