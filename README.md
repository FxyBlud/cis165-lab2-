# cis165-lab2/ Lab's instructions
## Plan: sum.cpp
- Variables:
- num1 (int) = 50
- num2 (int) = 100
- Total calculation: total = num1 + num2
- Output: display total

## Plan: mpg.cpp
- Variables:
- gallons (double) = 16
- miles (double) = 312
- Calculations:
- mpg (double) = miles / gallons
- Output: display mpg

## How to run

    g++ -std=c++17 -Wall -Wextra sum.cpp -o sum
    ./sum

    g++ -std=c++17 -Wall -Wextra mpg.cpp -o mpg
    ./mpg

## Testing
| Program and test | Values used | Expected output | Actual output | Match or correction |
|---|---|---|---|---|
| sum.cpp 1 | 50, 100 | Expected - total: 150 | Actual - total: 150 | Match |
| sum.cpp 2 | 33, 77 | Expected - total: 110 | Actual  - total: 110 | Match |
| mpg.cpp 1 | 16, 312 | Expected - mpg: 19.5 | Actual - mpg: 19.5 | Match |
| mpg.cpp 2 | 47, 960 | Expected - mpg: 20.4255 | Actual - 20.4255 | Match |

Original values restored (50 and 100, 312 and 16) and rerun: (write the output you got)

For sum.cpp: explain how the starting values move through your calculation into total and then to the output. Why store the calculation in total before printing?
For mpg.cpp: explain the formula, the data types you chose, and what can happen if C++ performs division using two integer operands. Trace your changed-value test from the values through the result.

## Explanations
Why I used int in sum.cpp: The reason why I used int in sum.cpp is because the number values did not meet the necessary requirements to deem any other value type (e.g. double) to be reasonable to use in this situation.

Why I used double in mpg.cpp: The reason why I used double is because of the asked of operation from the task at hand, which was division. Using the int value type did not allow the fully accurate calculation of the program.

What would have happened if I used int in mpg.cpp: What would have happened if I did happen to use the int value instead of of the double value is that the operation wouldn't have yielded any other numerical value after the "." in "19.5".

Explaining the code (sum.cpp): Firstly we must store the given numbers at had within appropriate value type variables. Then, we must combine the two variables, into a new one. After that, We must print out the final variable value into the output with context. The reason why we store the calculation with 'total' is because, it was asked of us, our answer still needs an identifiable name, and for the sake of readability.

Explaining the code (mpg.cpp): So the question at hand asked us to calculate how much miles the car can travel within an hour, and so since we know that the car traveled 312 miles with 16 gallons of gasoline, we must distribute the amount of miles that were used for each and every gallon. This parallels with the division operation, and so we shall divide the miles (312) by the gallons of gasoline that the car was given (16). I decide to go with using the double data type for all of the variables because the calculation was expected to turn out to as a decimal as well. And if we used int, we would not receive our fully calculation result.
#### Steps:
Values:   gallon = 16,  miles = 312
Step 1:  gallon holds 16
Step 2:  miles holds 312
Step 3:  mpg = miles / gallons ->  316 / 16 ->  mpg holds 19.5
Step 4:  cout prints the label and mpg  ->  "The car get 19.5 miles per gallon."
Result:  output matches the expected 19.5 (calculated by hand BEFORE running)
