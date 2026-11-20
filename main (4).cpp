#include <iostream>

using namespace std;

int main()
{
    int id_num;
    string name;
    string surname;
    double basic_salary;
    int department;
    int option;
    int performance_rating;
    int years_of_service;

    double bonus1_technician=345.35;
    double bonus2_technician=789.43;
    double bonus3_technician=1267.54;

    double bonus1_lecture=479.90;
    double bonus2_lecture=912.34;
    double bonus3_lecture=1456.79;

    double bonus1_server_management=540.68;
    double bonus2_server_management=894.52;
    double bonus3_server_management=1365.90;

    double bonus1_receptionist=234.98;
    double bonus2_receptionist=564.39;
    double bonus3_receptionist=980.57;

    double bonus1_finance=645.89;
    double bonus2_finance=1132.63;
    double bonus3_finance=1893.76;

    int number_of_employees;

    cout <<"------------------------GAUTENG CITY COLLEGE EMPLOYEE PAYROLL SYSTEM--------------------------"<<endl;

    cout <<"How many slips do you want to check? "<<endl;
    cin >>number_of_employees;

    for (int i= 0; i<= number_of_employees; i++)
    {
        cout <<"Processing slip/s - "<<endl;

    cout <<"Enter your ID : "<<endl;
    cin >>id_num;
    cout <<"Enter your name : "<<endl;
    cin >>name;
    cout <<"Enter your surname : "<<endl;
    cin >>surname;
    cout <<"Enter your basic salary : "<<endl;
    cin >>basic_salary;

    cout <<"Departments : "<<endl;
    cout <<"1. IT Technician"<<endl;
    cout <<"2. Lecture"<<endl;
    cout <<"3. Server Management"<<endl;
    cout <<"4. Receptionist"<<endl;
    cout <<"5. Finance"<<endl;
    cout <<"Please enter between 1 - 4 to choose your department"<<endl;
    cin >>option;

    switch (option)
    {
        case 1:
        cout <<"------------------------IT Technician---------------------"<<endl;
        break;
        case 2:
        cout <<"---------------------------Lecture------------------------"<<endl;
        break;
        case 3:
        cout <<"----------------------Server Management-------------------"<<endl;
        break;
        case 4:
        cout <<"-------------------------Receptionist---------------------"<<endl;
        break;
        case 5:
        cout <<"---------------------------Finance-----------------------"<<endl;
        break;

        default:
        cout <<"Invalid input. Please enter numbers between 1 and 4."<<endl;
        break;
    }

    cout <<"Enter your performance rating : "<<endl;
    cin >>performance_rating;
    cout <<"Enter your years of service : "<<endl;
    cin >>years_of_service;

    //IT Technicians
    if (option == 1)
    {
        if (performance_rating >=40 && performance_rating <=59 && years_of_service >=2 && years_of_service <=2)
        {
            cout <<"-You fall under category C of IT Technician bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus1_technician<<endl;
            cout <<"-TOTAL Amount : R"<<bonus1_technician+basic_salary<<endl;

        }
        else if (performance_rating >=60 && performance_rating <=79 && years_of_service >=3 && years_of_service <=5)
        {
            cout <<"-You fall under category B of IT Technician bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus2_technician<<endl;
            cout <<"-TOTAL Amount : R"<<bonus2_technician+basic_salary<<endl;
        }
        else if (performance_rating >=80 && performance_rating <=100 && years_of_service >=6)
        {
            cout <<"-You fall under category A of IT Technician bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus3_technician<<endl;
            cout <<"-TOTAL Amount : R"<<bonus3_technician+basic_salary<<endl;
        }
        else
        {
            cout <<"Unfortunaterly you have no bonus at the moment."<<endl;
            cout <<"You may try again later."<<endl;
        }
    }

    //Lecture
    if (option == 2)
    {
        if (performance_rating >=50 && performance_rating <=69 && years_of_service >=3 && years_of_service <=3)
        {
            cout <<"-You fall under category C of Lecture bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus1_lecture<<endl;
            cout <<"-TOTAL Amount : R"<<bonus1_lecture+basic_salary<<endl;

        }
        else if (performance_rating >=70 && performance_rating <=89 && years_of_service >=4 && years_of_service <=6)
        {
            cout <<"-You fall under category B of Lecture bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus2_lecture<<endl;
            cout <<"-TOTAL Amount : R"<<bonus2_lecture+basic_salary<<endl;
        }
        else if (performance_rating >=90 && performance_rating <=100 && years_of_service >=7)
        {
            cout <<"-You fall under category A of Lecture bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus3_lecture<<endl;
            cout <<"-TOTAL Amount : R"<<bonus3_lecture+basic_salary<<endl;
        }
        else
        {
            cout <<"Unfortunaterly you have no bonus at the moment."<<endl;
            cout <<"You may try again later."<<endl;
        }
    }

    //Server Management
    if (option == 3)
    {
        if (performance_rating >=50 && performance_rating <=79 && years_of_service >=3 && years_of_service <=3)
        {
            cout <<"-You fall under category C of Server Management bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus1_server_management<<endl;
            cout <<"-TOTAL Amount : R"<<bonus1_server_management+basic_salary<<endl;

        }
        else if (performance_rating >=80 && performance_rating <=94 && years_of_service >=4 && years_of_service <=7)
        {
            cout <<"-You fall under category B of Server Management bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus2_server_management<<endl;
            cout <<"-TOTAL Amount : R"<<bonus2_server_management+basic_salary<<endl;
        }
        else if (performance_rating >=95 && performance_rating <=100 && years_of_service >=8)
        {
            cout <<"-You fall under category A of Server Management bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus3_server_management<<endl;
            cout <<"-TOTAL Amount : R"<<bonus3_server_management+basic_salary<<endl;
        }
        else
        {
            cout <<"Unfortunaterly you have no bonus at the moment."<<endl;
            cout <<"You may try again later."<<endl;
        }
    }

    //Receptionist
    if (option == 4)
    {
        if (performance_rating >=40 && performance_rating <=59 && years_of_service >=2 && years_of_service <=2)
        {
            cout <<"-You fall under category C of Receptionist bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus1_receptionist<<endl;
            cout <<"-TOTAL Amount : R"<<bonus1_receptionist+basic_salary<<endl;

        }
        else if (performance_rating >=60 && performance_rating <=79 && years_of_service >=3 && years_of_service <=5)
        {
            cout <<"-You fall under category B of Receptionist bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus2_receptionist<<endl;
            cout <<"-TOTAL Amount : R"<<bonus2_receptionist+basic_salary<<endl;
        }
        else if (performance_rating >=80 && performance_rating <=100 && years_of_service >=6)
        {
            cout <<"-You fall under category A of Receptionist bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus3_receptionist<<endl;
            cout <<"-TOTAL Amount : R"<<bonus3_receptionist+basic_salary<<endl;
        }
        else
        {
            cout <<"Unfortunaterly you have no bonus at the moment."<<endl;
            cout <<"You may try again later."<<endl;
        }
    }

    //Finance
    if (option == 5)
    {
        if (performance_rating >=60 && performance_rating <=79 && years_of_service >=2 && years_of_service <=3)
        {
            cout <<"-You fall under category C of Finance bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus1_finance<<endl;
            cout <<"-TOTAL Amount : R"<<bonus1_finance+basic_salary<<endl;

        }
        else if (performance_rating >=80 && performance_rating <=89 && years_of_service >=4 && years_of_service <=6)
        {
            cout <<"-You fall under category B of Finance bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus2_finance<<endl;
            cout <<"-TOTAL Amount : R"<<bonus2_finance+basic_salary<<endl;
        }
        else if (performance_rating >=90 && performance_rating <=100 && years_of_service >=7)
        {
            cout <<"-You fall under category A of Finance bonuses."<<endl;
            cout <<"-BONUS : R"<<bonus3_finance<<endl;
            cout <<"-TOTAL Amount : R"<<bonus3_finance+basic_salary<<endl;
        }
        else
        {
            cout <<"Unfortunaterly you have no bonus at the moment."<<endl;
            cout <<"You may try again later."<<endl;
        }
    }
    }





















    return 0;
}
