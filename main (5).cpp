#include <iostream>

using namespace std;

double deposit;
double withdraw;
double send_cash;
double balance1 = 978.08;

int account_num;
int option;
int option2;
int option3;
char slip_operation;
int pin;

string pin2;



// User inserts their card first.
void Card_First()
{
    cout <<"---Card inserted---"<<endl;
}


// User inserts their card pin.
void First_screen()
{
    cout <<"Enter your card pin : "<<endl;
    cin >>pin2;

    if (pin2 == "5731")
    {
        cout <<"-------------------"<<endl;
        cout <<"---Buhle Dlamini---"<<endl;
        cout <<"[ACC.NO : 5654324099]"<<endl;
    }
    else if (pin2 == "7065")
    {
        cout <<"-------------------"<<endl;
        cout <<"---Nomvula Khuse---"<<endl;
        cout <<"[ACC.NO : 5784834673]"<<endl;
    }
    else if (pin2 == "3192")
    {
        cout <<"--------------------"<<endl;
        cout <<"---Leon Buthelezi---"<<endl;
        cout <<"[ACC.NO : 8462953659]"<<endl;
    }
    else
    {
        cout <<"Card pin invalid, try again."<<endl;
        return First_screen();
    }
}


// The money being deposited into the use account.
void Deposit()
{
    cout <<"Enter amount to deposit : "<<endl;
    cin >>deposit;

    if (deposit <= 1)
    {
        cout <<"Amount must be R50 OR more."<<endl;
        return Deposit();
    }
    else
    {
        balance1 = balance1 + deposit;
        cout <<"-------Deposit Successful-------"<<endl;
        cout <<"Your new balance is R"<<balance1<<endl;
        cout <<"--------------------------------"<<endl;
    }
}


// User slip after deposit.
void Slip_for_Deposit()
{
    cout <<"Print slip? Enter 'Y' for Yes OR Enter 'N' for No."<<endl;
    cin >>slip_operation;

    if (slip_operation == 'Y')
    {

        cout <<"******************************"<<endl;
        cout <<"DATE              : 20/11/2026"<<endl;
        cout <<"PROCESSING        : Successful"<<endl;
        cout <<"AMOUNT DEPOSITED  : R"<<deposit<<endl;
        cout <<"NEW BALANCE       : R"<<balance1<<endl;
        cout <<"******************************"<<endl;
    }
    else if (slip_operation == 'N')
    {
        cout <<"Thank you for trusting us!"<<endl;
    }
    else
    {
        cout <<"Invalid input, enter only 'Y' or 'N'"<<endl;
        return Slip_for_Deposit();
    }

}


// The money being withdrew from the user's account.
void Withdraw()
{
    cout <<"Enter amount to withdraw : "<<endl;
    cin >>withdraw;

    if (withdraw <= 1 )
    {
        cout <<"Enter a smaller amount to withdraw"<<endl;
        return Withdraw();
    }
    else
    {
        balance1 = balance1 - withdraw;
        cout <<"-------Withdrawal Successful-------"<<endl;
        cout <<"Your remaining balance is R"<<balance1<<endl;
        cout <<"-----------------------------------"<<endl;
    }
}


// User slip after withdrawal.
void Slip_for_Withdrawal()
{
    cout <<"Print slip? Enter 'Y' for Yes OR Enter 'N' for No."<<endl;
    cin >>slip_operation;

    if (slip_operation == 'Y')
    {

        cout <<"******************************"<<endl;
        cout <<"DATE              : 20/11/2026"<<endl;
        cout <<"PROCESSING        : Successful"<<endl;
        cout <<"AMOUNT WITHDREW   : R"<<withdraw<<endl;
        cout <<"AVAILABLE BALANCE : R"<<balance1<<endl;
        cout <<"******************************"<<endl;
    }
    else if (slip_operation == 'N')
    {
        cout <<"Thank you for trusting us!"<<endl;
    }
    else
    {
        cout <<"Invalid input, enter only 'Y' or 'N'"<<endl;
        return Slip_for_Withdrawal();
    }
}


// The money being sent to a certain account, from the user's account.
void Send_Cash()
{
    cout <<"Available Beneficiaries/Accounts"<<endl;
    cout <<"--------------------------------"<<endl;
    cout <<" 1.Kamo Gumede."<<endl;
    cout <<" 2.Tumelo Mashego."<<endl;
    cout <<" 3.Siphesihle Masindi."<<endl;
    cout <<"Choose an account to send cash to : "<<endl;
    cin>> option3;

    switch (option3)
    {
        case 1:
            cout <<"---------Kamo Gumede---------"<<endl;
            cout <<"Enter receivers account number : "<<endl;
            cin >>account_num;
            cout <<"Create and provide a temporary pin to the reciever to access the cash send : "<<endl;
            cin >> pin;
            cout <<"Enter amount to send : (Can only enter amount between R5 & R"<<balance1<<")"<<endl;
            cin >>send_cash;
            break;
        case 2:
            cout <<"---------Tumelo Mashego---------"<<endl;
            cout <<"Enter receivers account number : "<<endl;
            cin >>account_num;
            cout <<"Create and provide a temporary pin to the receiver to access the cash send : "<<endl;
            cin >> pin;
            cout <<"Enter amount to send : (Can only enter amount between R5 & R"<<balance1<<")"<<endl;
            cin >>send_cash;
            break;
        case 3:
            cout <<"--------Siphesihle Masindi-------"<<endl;
            cout <<"Enter receivers account number : "<<endl;
            cin >>account_num;
            cout <<"Create and provide a temporary pin to the receiver to access the cash send : "<<endl;
            cin >> pin;
            cout <<"Enter amount to send : (Can only enter amount between R5 & R"<<balance1<<")"<<endl;
            cin >>send_cash;
            break;
        default:
            cout <<"Invalid input, try again."<<endl;
            return Send_Cash();
            break;
    }


    if (balance1 < send_cash)
    {
        cout <<"Insuficient funds, try entering a smaller amount."<<endl;
        return Send_Cash();
    }
    else
    {
        balance1 = balance1 - send_cash;
        cout <<"-------Cash Send Successful-------"<<endl;
        cout <<"Your remaining balance is R"<<balance1<<endl;
        cout <<"----------------------------------"<<endl;
    }
}


// User slip after sending cash.
void Slip_for_SendingCash()
{
    cout <<"Print slip? Enter 'Y' for Yes OR Enter 'N' for No."<<endl;
    cin >>slip_operation;

    if (slip_operation == 'Y')
    {

        cout <<"********************************"<<endl;
        cout <<"DATE                : 20/11/2026"<<endl;
        cout <<"PROCESSING          : Successful"<<endl;
        cout <<"RECEIVER ACCOUNT NO : "<<account_num<<endl;
        cout <<"TEMPORARY PIN       : "<<pin<<endl;
        cout <<"AMOUNT SENT         : R"<<send_cash<<endl;
        cout <<"AVAILABLE BALANCE   : R"<<balance1<<endl;
        cout <<"********************************"<<endl;
    }
    else if (slip_operation == 'N')
    {
        cout <<"Thank you for trusting us!"<<endl;
    }
    else
    {
        cout <<"Invalid input, enter only 'Y' or 'N'"<<endl;
        return Slip_for_SendingCash();
    }

}


// Balance checking by the user from thier account.
void Check_Balance()
{
    cout <<"Available balance : "<<balance1<<endl;
    cout <<"------------------------------"<<endl;
}


// User removes card after clicking exit (number 5 of menu screen).
void Exit_Bank()
{
    cout <<"---Card removed---"<<endl;
    exit(0);
}


// The main screen that allows functions and transactions.
void menu_screen()
{
    cout <<"========================= MZANSI BANK ========================="<<endl;
    cout <<""<<endl; // This line is for spacing.
    cout <<" 1. Deposit."<<endl;
    cout <<" 2. Withdraw."<<endl;
    cout <<" 3. Send Cash."<<endl;
    cout <<" 4. Check Balance."<<endl;
    cout <<" 5. Exit."<<endl;
    cout <<"Enter choice 1 - 5"<<endl;
    cin >>option;

    switch (option)
    {
        case 1:
            Deposit();
            Slip_for_Deposit();
            break;
        case 2:
            Withdraw();
            Slip_for_Withdrawal();
            break;
        case 3:
            Send_Cash();
            Slip_for_SendingCash();
            break;
        case 4:
            Check_Balance();
            break;
        case 5:
            Exit_Bank();
            break;
        default:
            cout <<"Invalid input, choose only between the shown options on the screen"<<endl;
            break;
    }

}


// Continue & Exit depending on what the user chooses.
void Cont_Exit()
{
    cout <<" 1. Continue       : Press 1."<<endl;
    cout <<" 2. Exit           : Press 2."<<endl;
    cin >>option2;

   switch (option2)
   {
        case 1:

            break;
        case 2:
            cout <<"Thank you for banking with us!"<<endl;
            cout <<"     ---Card removed---       "<<endl;
            break;
        default:
            cout <<"Invalid input. Choose between the options given on the screen."<<endl;
            return Cont_Exit();
            break;
   }
}


int main()
{
    Card_First();
    First_screen();
    do {menu_screen();
        Cont_Exit();}
    while (option2 !=2);
    return 0;
}
