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
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include "payroll.h"

int menu();
string requestEmployeeNumber();
string getFile();


using namespace std;

int main() {

    int option=7;
    string payroll_file = "empty";
    string line;
    int arraySize;
    int checkNumber;
    string employee_id;


    payroll my_payroll;

    option = menu();


    payroll_file = getFile();

    char * cstr = new char [payroll_file.length()+1];
    strcpy (cstr, payroll_file.c_str());


    ifstream myfile (cstr);
    if (myfile.is_open())
    {
        getline (myfile,line);									//number of employees in the file

        arraySize = atoi(line.c_str());

        arraySize = arraySize*4;

        getline (myfile,line);									//check number

        checkNumber = atoi(line.c_str());

        string *array = new string[arraySize];  // create multiple of these for each area to read in

                for (int i=0; i<arraySize; i++){
            getline (myfile,line);
            array[i] = line;
        }

        string *names = new string[arraySize/4];  // create multiple of these for each area to read in
        int j = 0;

        for (int i=0; i<(arraySize/4); i++){
            names[i] = array[j];
            j=j+4;

        }

        string *employee_ids = new string[arraySize/4];  // create multiple of these for each area to read in
        int k = 1;

        for (int i=0; i<(arraySize/4); i++){
            employee_ids[i] = array[k];
            k=k+4;

        }

        string *hourly_wages = new string[arraySize/4];  // create multiple of these for each area to read in

        int p = 2;

        for (int i=0; i<(arraySize/4); i++){
            hourly_wages[i] = array[p];
            p=p+4;
        }

        string *hours_worked = new string[arraySize/4];  // create multiple of these for each area to read in

        int q = 3;

        for (int i=0; i<(arraySize/4); i++){
            hours_worked[i] = array[q];
            q=q+4;
        }


        if (option == 1)
        {
            employee_id = requestEmployeeNumber();

            for (int i=0; i<arraySize/4; i++){

                if (employee_id == employee_ids[i]){
                    my_payroll.print_paychecks(checkNumber,names+i,employee_ids+i,hourly_wages+i,hours_worked+i);
                    checkNumber++;
                }
            }
        }

        if (option == 2)
        {
            for (int i=0; i<arraySize/4; i++){

                my_payroll.print_paychecks(checkNumber,names+i,employee_ids+i,hourly_wages+i,hours_worked+i);
                checkNumber++;
            }

        }

        if (option == 3)
        {
            employee_id = requestEmployeeNumber();

            for (int i=0; i<arraySize/4; i++){

                if (employee_id == employee_ids[i]){
                    my_payroll.print_employee_info(names+i,hourly_wages+i,hours_worked+i);
                }

            }
        }

        delete [] array;
        myfile.close();
    }

    else cout << "unable to open file";

    return 0;
}



int menu() // Menu function. Gives user options 1-3
{

    int option=7;

    cout << "\n";
    cout << "Welcome to our Awesome Payroll Program (TM)" << endl;
    cout << "What would you like to do:" << endl;
    cout << "1. Print a single paycheck." << endl;
    cout << "2. Print all entire payroll." << endl;
    cout << "3. Print employee information." << endl;
    cout << endl;
    cout << "Please enter your choice: ";
    cin >> option;


    return option;

}
