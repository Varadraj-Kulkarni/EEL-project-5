PROJECT 5

NAME: Varadraj Kulkarni
ROLL NO: 127 (PRN: B25CE1127)
CLASS: FY CE 2
BATCH: C

AIM: Develop a C program to calculate the sum of the first 10 numbers using
recursive function calls and pointers. The program should define a recursive
function that takes a pointer to an integer as an argument and returns the
sum of the first 10 numbers. Within the function, recursion should be used
to compute the sum iteratively. Finally, the program should display the
calculated sum.


RESEARCH:
In the world of finance and investing, investors often face a common challenge: deciding which combination of stocks will give the best returns within their available budget.
 Modern investment tools like portfolio analyzers, stock simulators, and AI-based advisory systems help suggest combinations of assets that optimize profit while minimizing risk.
In programming, such optimization and combination problems can be solved using recursive algorithms — where a function calls itself to explore all possible subsets or combinations of data.
In this project:
Each stock has a name, cost, and expected return percentage.


The goal is to find the best k-stock combination (from n available options) that provides the highest return-to-cost ratio.


Recursion is used to generate all possible combinations of stocks, calculate total investment and profit for each, and rank them.
Real-life applications of similar logic include:
Portfolio selection in finance platforms (like Zerodha or Groww).


Resource allocation problems in business analytics.


Combination-based decision-making in optimization systems.


The factorial function is also implemented recursively to calculate the number of combinations (n choose k), a common operation in combinatorics.

PROJECT: Stocks investment analyzer.

ANALYSIS:
To achieve the goal, the project was analyzed in terms of:
Input Data:


Each stock contains three fields: name, cost, and expected return.
The user provides the total number of stocks (n) and the number of stocks to buy (k).


Recursion Usage:


Recursion is the heart of this project.


The recursive function solve() explores all combinations of stocks using a backtracking approach:
Include the current stock in the combination.
Exclude the current stock and move forward.
The recursion stops when k stocks are chosen or the end of the list is reached.


Computation:


Each valid combination’s total cost and total expected profit are calculated.
The profit-to-cost ratio is stored for comparison.
Bubble Sort (iterative) is then applied to rank combinations by profitability.


Why Recursion?


Recursive functions are elegant and efficient for generating all possible combinations.
They simplify complex looping structures and allow clear logic flow for subset selection.


IDEATE:
Before finalizing the idea of a Stock Investment Analyzer, several recursion-based project ideas were considered, such as:
1.Factorial Calculator (basic recursion)
2.Fibonacci Sequence Generator
3.Tower of Hanoi simulator
4.String Reversal using recursion
5.Subset Sum Problem
Finally, the Stock Investment Analyzer was chosen because:
1. It demonstrates a real-world financial application of recursion.
2.It combines multiple concepts: recursion, structures, and sorting.
3.It can simulate how investors analyze combinations of stocks for profit optimization.
BUILD:
The project was built following these major steps:
Define Structure:
Input Section:
Combination Generation (Recursion):
The recursive function solve():
Ranking Section:
Display Section:
Error Handling:


TESTING:
The program was tested with different sets of stock data.
 Example test cases include:
Case 1: Small input (3–4 stocks) to verify recursive combination generation.
Case 2: Medium input (6–8 stocks) to check ranking accuracy.
Case 3: Invalid inputs (negative or zero values) to test input validation.


In each case, the program successfully:
Generated all valid combinations.
Ranked them based on profitability.
Displayed the top investment options clearly.

Code:
(see code.c file)

IMPLIMENTATION:
Github link:  

CONCLUSION:
This project successfully applies recursion to solve a real-world optimization problem — finding the best combinations of stock investments.

It demonstrates how recursive functions can generate combinations elegantly, replacing complex nested loops.

By using structures for data organization and sorting algorithms for ranking, it provides both conceptual clarity and practical utility.
The program can be extended to include constraints like budget limits or risk factors, making it a strong base for financial data analysis applications.

SOURCES:
 Let Us C by Yashavant Kanetkar
Groww Blog – How to Analyze Stock Returns
GeeksforGeeks – Sorting in C, combinations in C
IITB Virtual Labs – Recursion Experiments and Logic
Freecode camp org – recursion


