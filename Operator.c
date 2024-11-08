/*
operator :
    ->it is used to operate the value of variable 
    ->it is used to perform some specific task 
    ->it is used to perform some operation 

types :
a)arithmetic operator 
b)ternary operator 
c)relational operator 
d)assignment operator 
e)logical operator 
=====================================================================================

a)arithmetic operator 
->it is a set of symbols 
->it is the type of operator 
->it is used to perform arithmetic operations(mathematical terms)
symbol :
+ :addition 
- :substraction 
* :multiplication 
/ :divide 
% :modular 
*/
#include <stdio.h>
int main() {
  int x = 5;
  int y = 3;
  printf("Add : %d\n", x + y);
  printf("Sub : %d\n", x - y);
  printf("Multi : %d\n", x * y);
  printf("Divi : %d\n", x / y);
  printf("Mod : %d\n", x % y);
  return 0;
}
/*
---------------------------------------------------------
2)relational operator :
->it is the type of operator 
->set of symbols 
->it is used to make the conditions 
symbol :
< :less than 
> :greater than 
<= :less than equal to 
>= :greater than equal to 
== :equal equal to 
!= :not equal to 
*/
#include <stdio.h>
int main() {
  int x = 5;
  int y = 3;
  printf("%d\n", x > y); // Returns 1 (true) because 5 is greater than 3
  printf("%d\n", x < y); // Returns 0 (false) because 5 is not less than 3
  printf("%d\n", x >= y); // Returns 1 (true) because five is greater than, or equal, to 3
  printf("%d\n", x <= y); // Returns 0 (false) because 5 is neither less than or equal to 3
  printf("%d\n", x != y); // returns 1 (true) because 5 is not equal to 3
  printf("%d\n", x == y); // returns 1 (true) because 5 is equal to 5
  return 0;
}
/*
---------------------------------------------------------
3)assignment operator :
->set of symbols 
->type of operator 
->it is used to assign the value of the variable 
symbol :
= : equal to
include :+= , -= , *=, /=, %= 
*/
#include <stdio.h>
int main() {
  int x = 5;
  printf("%d", x);
  return 0;
}
/*
---------------------------------------------------------
4)logical operator :
->set of symbols 
->type of operator 
->it is used to determine the logic between variables or values, by combining multiple conditions: 
symbol :
&& : AND
|| :OR
! : NOT
*/
#include <stdio.h>
int main() {
  int x = 5;
  int y = 3;
  // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
  printf("%d\n", x > 3 && x < 10);
  // Returns 1 (true) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
  printf("%d", x > 3 || x < 4);
  // Returns false (0) because ! (not) is used to reverse the result
  printf("%d", !(x > 3 && x < 10));
  return 0;
}
/*
---------------------------------------------------------
5)Ternary Operator :
->We use the ternary operator in C to run one code when the condition is true and another code when the condition is false 
syntax : 
testCondition ? expression1 : expression 2;
*/
#include <stdio.h>
int main() {
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);
  // ternary operator to find if a person can vote or not
  (age >= 18) ? printf("You can vote") : printf("You cannot vote");
  return 0;
}
