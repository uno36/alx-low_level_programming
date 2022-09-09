## The programmes in this directory will deal with functions and variables if else while
1. The structure of an if statement is as follows:
~~~~
   if ( statement is TRUE )
       Execute this line of code
~~~~
Here is an example that shows the syntax
~~~~
     if ( 5 < 10 )															   printf( "Five is now less than ten, that's a big surprise" );
~~~~
2. The "else" statement effectively says that whatever code after it (whether a single line or code between brackets) is executed if the if statement is FALSE.

It can look like this:
~~~~
   if ( TRUE ) {
      /* Execute these statements if TRUE */
}
   else {
       /* Execute these statements if FALSE */
}
~~~~
3. If you are going to add anything else if the "if statement" is false you use "else if"

It can look like this:

   if ( TRUE ) {
      /* Execute these statements if TRUE */
}
   else {
      /* Execute these statements if FALSE */
}
   else if {
      /* Execute these statements if False */

4. A while loop in C programming repeatedly executes a target statement as long as a given condition is true.

### Syntax
The syntax of a **while** loop in C programming language is −
~~~~
    while(condition) {
         statement(s);
}
~~~~