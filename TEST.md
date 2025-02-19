# Test Cases for memoizefib.c

## Test Case 1: Input = 0
**Description**
gives user the correct output when given the input '0'
**Input**
./main 0

**Output**
the 0th fibonacci number is 0



## Test Case 2: No Input
**Description**
gives user a segmentation fault when they don't provide input 

**Input**
no input

**Output**
Usage: ./main <target>



## Test Case 3: Input is a Negative Value
**Description**
when user inputs a negative value it prompts them to use a positive number

**Input**
-1
**Output**
Please enter a positive number



## Test Case 4: Input is 40
**Description**
40 is an input that takes more time to compute, when un-memoized
**Input**
40
**Output**
the 40th fibonacci number is 102334155



## Test Case 5: Input is 6
**Description**
gives the user the correct output when given '6'

**Input**
6
**Output**
the 6th fibonacci number is 8



## Test Case 6: Input is 60
**Description**
gives user the correct output when given '60'

**Input**
60

**Output**
the 60th fibonacci number is 1820529360