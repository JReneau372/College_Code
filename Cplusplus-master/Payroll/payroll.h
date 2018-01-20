// Name: Jacob Reneau
//
// Date: 12/5/2014
//
//
// Description: This program creates a payroll. It gives the user the option to print the entire payroll, a single employee's check or a sinlge
//              employee's information (name, ID, hours worked and wages per hour)
//
//

#ifndef PAYROLL_H
#define PAYROLL_H

#include <iostream>
#include <string>

using namespace std;


class payroll
{
private:

    string *names; //  a (dynamic) array of employee names
    float *hourly_wages; // a dynamic array of each employee's hourly wage
    int *employee_ids; // a dynamic array containing each employee's unique ID
    int *hours_worked; // a dynamic array containing the number of hours each employee worked this pay period
    int total_employees; // the total number of employees you will store data about
    int check_number; // the (next) check number to be issued
    string payroll_file; // Stores the name of the payroll file read by read_employee_data() so that it can be written again by store_employee_data().

public:

    payroll();
    //~payroll();
    void read_employee_data(string file_name);
    void store_employee_data();
    void print_employee_info(string *name, string *hourly,string *worked);
    void print_paycheck(int employee_id);
    void print_paychecks(int i, string *name,string *employee_id, string *hourly, string *worked);
    string requestEmployeeNumber();
    string getFile();

protected:

};

#endif // PAYROLL_H
