## Functions Nested Loops

* A function is a group of statements that together perform a task. Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions.

### Defining a Function

The general form of a function definition in C programming language is as follows −
~~~~
return_type function_name( parameter list ) {
   body of the function
}
~~~~

A function definition in C programming consists of a function header and a function body. Here are all the parts of a function −

* Return Type − A function may return a value. The return_type is the data type of the value the function returns. Some functions perform the desired operations without returning a value. In this case, the return_type is the keyword void.

* Function Name − This is the actual name of the function. The function name and the parameter list together constitute the function signature.

* Parameters − A parameter is like a placeholder. When a function is invoked, you pass a value to the parameter. This value is referred to as actual parameter or argument. The parameter list refers to the type, order, and number of the parameters of a function. Parameters are optional; that is, a function may contain no parameters.

* Function Body − The function body contains a collection of statements that define what the function does.

### Example
Given below is the source code for a function called max(). This function takes two parameters num1 and num2 and returns the maximum value between the two −
~~~~
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
~~~~

### LOOPS
A loop statement allows us to execute a statement or group of statements multiple times. 

#### Loop Type & Description ####

##### While Loop #####

A while loop in C programming repeatedly executes a target statement as long as a given condition is true.

##### Syntax #####
The syntax of a while loop in C programming language is −
~~~~
while(condition) {
   statement(s);
}
~~~~
##### For Loop #####

A for loop is a repetition control structure that allows you to efficiently write a loop that needs to execute a specific number of times.
##### Syntax #####
The syntax of a for loop in C programming language is −
~~~~
for ( init; condition; increment ) {
   statement(s);
}
~~~~
##### Do...While Loop #####

Unlike for and while loops, which test the loop condition at the top of the loop, the do...while loop in C programming checks its condition at the bottom of the loop.

A do...while loop is similar to a while loop, except the fact that it is guaranteed to execute at least one time.

##### Syntax #####
The syntax of a do...while loop in C programming language is −
~~~~
do {
   statement(s);
} while( condition );
~~~~
##### Nested Loops #####

C programming allows to use one loop inside another loop. The following section shows a few examples to illustrate the concept.

##### Syntax #####
The syntax for a nested for loop statement in C is as follows −
~~~~
for ( init; condition; increment ) {

   for ( init; condition; increment ) {
      statement(s);
   }
   statement(s);
}
~~~~
~~~~
The syntax for a nested while loop statement in C programming language is as follows −

while(condition) {

   while(condition) {
      statement(s);
   }
   statement(s);
}
~~~~
~~~~
The syntax for a nested do...while loop statement in C programming language is as follows −

do {
   statement(s);

   do {
      statement(s);
   }while( condition );

}while( condition );
~~~~

#### Control Statement & Description ####

##### Break Statement #####
The break statement in C programming has the following two usages −

* When a break statement is encountered inside a loop, the loop is immediately terminated and the program control resumes at the next statement following the loop.

* It can be used to terminate a case in the switch statement (covered in the next chapter).

* If you are using nested loops, the break statement will stop the execution of the innermost loop and start executing the next line of code after the block.

##### Syntax #####
The syntax for a break statement in C is as follows −
~~~~
break;
~~~~

##### Continue Statement ####

The continue statement in C programming works somewhat like the break statement. Instead of forcing termination, it forces the next iteration of the loop to take place, skipping any code in between.

For the for loop, continue statement causes the conditional test and increment portions of the loop to execute. For the while and do...while loops, continue statement causes the program control to pass to the conditional tests.

##### Syntax #####
The syntax for a continue statement in C is as follows −
~~~~
continue;
~~~~

##### Go To Statement #####

A goto statement in C programming provides an unconditional jump from the 'goto' to a labeled statement in the same function.

NOTE − Use of goto statement is highly discouraged in any programming language because it makes difficult to trace the control flow of a program, making the program hard to understand and hard to modify. Any program that uses a goto can be rewritten to avoid them.

##### Syntax #####
The syntax for a goto statement in C is as follows −
~~~~
goto label;
..
.
label: statement;
~~~~

## The Infinite Loop
A loop becomes an infinite loop if a condition never becomes false. The for loop is traditionally used for this purpose. Since none of the three expressions that form the 'for' loop are required, you can make an endless loop by leaving the conditional expression empty.
~~~~
#include <stdio.h>
 
int main () {

   for( ; ; ) {
      printf("This loop will run forever.\n");
   }

   return 0;
}
~~~~
