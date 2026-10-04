/* ============================================================
   salary_calculator.c
   Mini Project: Employee Salary Calculator

   Input   : Basic Pay (entered by the user)
   Allowances:
       HRA (House Rent Allowance) = 10% of Basic Pay
       TA  (Travel Allowance)     = 5%  of Basic Pay
   Gross Salary = Basic Pay + HRA + TA
   Deduction:
       Professional Tax = 2% of Gross Salary
   Net Salary = Gross Salary - Professional Tax
   ============================================================ */

#include <stdio.h>

int main(void)
{
    float basicPay, hra, ta, grossSalary, professionalTax, netSalary;

    /* ---------------- Take input from user ---------------- */
    printf("===== Employee Salary Calculator =====\n");
    printf("Enter Basic Pay of the employee: ");

    if (scanf("%f", &basicPay) != 1 || basicPay < 0)
    {
        printf("Invalid input! Please enter a valid positive number.\n");
        return 1;
    }

    /* ---------------- Calculate allowances ---------------- */
    hra = 0.10f * basicPay;   /* HRA = 10% of basic pay */
    ta  = 0.05f * basicPay;   /* TA  = 5% of basic pay  */

    /* ---------------- Calculate gross salary --------------- */
    grossSalary = basicPay + hra + ta;

    /* ---------------- Calculate deduction ------------------ */
    professionalTax = 0.02f * grossSalary;   /* 2% of gross salary */

    /* ---------------- Calculate net salary ------------------ */
    netSalary = grossSalary - professionalTax;

    /* ---------------- Display the result --------------------- */
    printf("\n--------------- Salary Slip ---------------\n");
    printf("Basic Pay                : %10.2f\n", basicPay);
    printf("HRA (10%% of Basic)       : %10.2f\n", hra);
    printf("TA  (5%% of Basic)        : %10.2f\n", ta);
    printf("---------------------------------------------\n");
    printf("Gross Salary              : %10.2f\n", grossSalary);
    printf("Professional Tax (2%%)    : %10.2f\n", professionalTax);
    printf("---------------------------------------------\n");
    printf("Net Salary Payable        : %10.2f\n", netSalary);
    printf("---------------------------------------------\n");

    return 0;
}
