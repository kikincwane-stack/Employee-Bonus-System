#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

using namespace std;

int main()
{

  int numEmployees;
  int employeeID;
  string employeeName;
  double basicSalary;
  string department;
  int performanceRating;
  int yearsOfService;
  double bonusAmount = 0;
  double totalPay = 0;

  cout << "=== Gauteng City College Payroll System ==="<<endl;
  cout << "How many employees do you want to process? ";
  cin >>numEmployees;

  //input validation for no. of employees
  if(numEmployees <= 0)
  {
      cout << "Invalid number ! Must be at least 1 !!" <<endl;
  }

  //For Loop
  for(int i=1; i <= numEmployees; i++)
  {
      cout << "\n---Employee" << i << "---" <<endl;

      cout << "Enter Employee ID : ";
      cin >>employeeID;

      cout << "Enter Employee Name : ";
      cin.ignore(); //clear buffer
      getline(cin,employeeName);

      cout << "Enter Basic Salary : R";
      cin >> basicSalary;

      //input validation
      if(basicSalary < 0)
      {
          cout << "Error: Salary cannot be negative! Setting to 0" << endl;
          basicSalary = 0;

      }


        cout << "Enter Department (IT/ Sales /HR / Finance):";
        cin>> department;

        cout << "Enter performance Rating (1 to 5):";
        cin >> performanceRating;

        cout << "Enter years of service : ";
        cin >> yearsOfService;

        // bonus for each employee
        bonusAmount = 0;

        double ratingBonusPercent = 0;

        if(performanceRating == 5){ratingBonusPercent = 0.25;}

        else if(performanceRating == 4){ratingBonusPercent = 0.15;}

        else if(performanceRating == 3 ){ratingBonusPercent = 0.08;}

        else if(performanceRating == 2 ){ratingBonusPercent = 0.03;}

        else if(performanceRating == 1 ){ratingBonusPercent = 0.0;}

        else
        {
            cout << "Invalid rating! Must be 1-5. No rating bonus given."<<endl;
            ratingBonusPercent = 0.0;
        }

        bonusAmount += basicSalary * ratingBonusPercent;

        //switch case
        char deptCode = toupper(department[0]); //I,S,H,F

        switch(deptCode)
        {
        case 'I'://IT
            bonusAmount += 1000;
            break;

        case 'S'://Sales
            bonusAmount += basicSalary * 0.05;
            break;

        case 'H'://HR
            bonusAmount += 500;
            break;

        case 'F'://Finance
            bonusAmount += 800;
            break;

        default:
            cout << "Unknown department, no department bonus." <<endl;
            break;
        }

        //loyalty bonus
        if(yearsOfService > 5)
        {
            bonusAmount += basicSalary*0.02;
        }

        //calculation

        totalPay = basicSalary + bonusAmount;

        //DISPLAY

        cout << fixed << setprecision(2);
        cout << "\n=====PAYSLIP FOR EMPLOYEE " << i << "=====" <<endl;
        cout << "ID: " << employeeID << endl;
        cout << "Name: " << employeeName << endl;
        cout << "Basic Salary: R" << basicSalary << endl;
        cout << "Bonus Amount: R" << bonusAmount << endl;
        cout << "Total Pay: R" << totalPay << endl;
        cout << "======================================="<< endl;
}
        cout << "\nAll employees processed. THANK YOU !!" <<endl;


    return 0;
}
