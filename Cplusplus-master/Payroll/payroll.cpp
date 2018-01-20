// Name: Jacob Reneau
//
// Date: 12/5/2014
//
//
// Description: This program creates a payroll. It gives the user the option to print the entire payroll, a single employee's check or a sinlge
//              employee's information (name, ID, hours worked and wages per hour)
//
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "payroll.h"

payroll::payroll(){ //payroll class

};

void payroll::read_employee_data(string file_name){ // opens the file file_name and reads in the data

};

void payroll::store_employee_data(){

};

void payroll::print_employee_info(string *name, string *hourly,string *worked){ // prints the data of a single employee

    cout << "Employee Name: " << *name << endl;

    cout << "Hourly Wages: " << *hourly << endl;

    cout << "Hours Worked: " << *worked << endl;
};

void payroll::print_paycheck(int employee_id){ // prints the paycheck of an employee

};

void payroll::print_paychecks(int x, string *name,string *employee_id, string *hourly, string *worked){ // prints the paychecks of all employees

    string hour = *hourly;
    string work = *worked;


    double h1 = atof(hour.c_str());
    double w1 = atof(work.c_str());
    double amount = h1 * w1;


    cout << "_____________________________________________________________" << endl;
    cout << "|" << endl;
    cout << "| Awesome Payroll Inc.			 Check Number: " << x << endl;
    cout << "| 2220 N. Payroll Ave. " << endl;
    cout << "| Martin, TN 38237" << endl;
    cout << "|" << endl;
    cout << "|                                      Pay: $" << setprecision(2) << fixed << amount << endl;
    cout << "| To the order of: " << *name << endl;
    cout << "|                  " << *employee_id << " (Employee ID)" << endl;
    cout << "|                  " << *hourly << " (Pay Rate)" << endl;
    cout << "|                  " << *worked << " (Hours Worked)" << endl;
    cout << "|" << endl;
    cout << "| Official Payroll	 Signature: _________________________" << endl;
   cout << "|____________________________________________________________" << endl;



};

string requestEmployeeNumber(){ // Requests employee ID when user asks for specific employee info
    string number = "0";
    cout << "Please enter employee ID: ";
    cin >> number;


    return number;
};


string getFile(){ // Requests name of file to get all employee info from
    string file_name = "empty";

    cout << "Please enter the data file name:";
    cin.ignore(1,'\n');
    getline (cin,file_name);

    return file_name;

};
