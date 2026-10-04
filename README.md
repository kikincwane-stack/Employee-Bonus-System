# Employee-Bonus-System
Employee Bonus Management System - C++ Assignment. Calculates bonus based on performance rating (if/else),department (switch with toupper) and years of service.
A C++ console program that calculates an employee's total bonus and net pay based on performance rating, department, and years of service.

## Bonus Rules Implemented
- Rating (if/else + toupper): A = 20%, B = 10%, C = 5% of basic salary
- Department (switch): IT = R1000, HR = R800, Finance = R1200, Others = R500
- Years of Service: >5 years = R2000, 3-5 years = R1000

## How to Compile and Run
g++ main.cpp -o payroll
./payroll
On Windows: payroll.exe

## Example Input and Output
Input:
Enter salary: 20000
Enter rating: B
Enter department: IT
Enter years: 6

Output:
Rating Bonus: R2000.00
Dept Bonus: R1000.00
Years Bonus: R2000.00
Total Bonus: R5000.00
Net Pay: R25000.00

## Student Details
Name: Patricia Ncwane
Student: kikincwane-stack
GitHub: https://github.com/kikincwane-stack/Employee-Bonus-System
LinkedIn: https://www.linkedin.com/in/patricia-ncwane-b5251a3a7

## References
No external sources for code logic.Used ChatGpt to understand #include <iomanip> This is for setperecision(2) it formats money,#include <cctype> This is for toupper,which is used for Character type and uppercase use And understanding of Loop. Meta AI used for README formatting and git help.

