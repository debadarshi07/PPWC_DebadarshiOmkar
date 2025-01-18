// Function of break statement within a loop is to terminate loop completely and the function of continue statement is to skip the current iteration to next iteration immediately.

// Applications
// i. break -> In a linear search, whenever we find the target element, we use break to avoid unnecessary searches to enhance time complexity.
// ii. continue -> A program which is adding all the numbers from 1 to 100 except those which has '0' in rightmost position, then we can put a continue statement inside the loop before the code for adding numbers. if(num % 10 == 0) {continue;} sum += num