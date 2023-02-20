#include <iostream>
#include <fstream>
#include <string>


using namespace std;

string name;
int prize;
int members;
string contact; 

string combine_name(int a, string b) {
    return to_string(a) + " " + b + ".txt";

}

void intro() {
    cout << "************************************************************************************************************************\n";
    cout << "********************************************** Boarding Management System **********************************************\n";
    cout << "************************************************************************************************************************\n\n";

    cout << "This console-based boarding management system bridges the gap between boarding owners and boarding finders. Boarding finders can easily search for the best boardings based on their requirements, while boarding owners can add and update their boarding details. This user-friendly application streamlines the boarding search and booking process for a convenient and efficient experience.\n";

    cout << "\n\tCreated by\t:  Name 1\n\t\t\t:  Name 2\n\t\t\t:  Name 2\n";
    cout << "\n\tPress enter to begin......";
    cin.ignore();
}

void finder() {
    system("cls");
    int members;
    cout << "\n\tNumber of members including yourself?";
    cout << "\n\t\t1)  One\n\t\t2)  Two\n\t\t3)  Three\n\t\t4)  Four\n\t\t5)  Five\n\t\t6)  Six\n\t\t7)  Seven\n\t\t8)  Eight\n\t\t9)  Ten\n\n\tSelect your answer (1,2,....,10): ";
    cin >> members;
    switch (members)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;

    default:
        break;
    }
    
    system("cls");
    int Fee_int;
    cout << "\n\tMonthly boarding fee that you can spend (For one person)?";
    cout << "\n\t\t1)  1000 LKR - 3500 LKR \n\t\t2)  3500 LKR - 6500 LKR \n\t\t3)  6500 LKR - 8500 LKR\n\t\t4)  8500 LKR - 10500 LKR\n\t\t5)  10500 LKR - 12500 LKR\n\t\t6)  14500 LKR - 16500 LKR\n\t\t7)  16500 LKR - 17500 LKR\n\t\t8)  17500 LKR - 19500 LKR\n\t\t9)  19500 LKR - 21500 LKR\n\n\tSelect your answer (1,2, .... ,9): ";
    cin >> Fee_int;
    switch (Fee_int)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;

    default:
        break;
    }

    system("cls");
    int Food;
    cout << "\n\tInclude meals in boarding?";
    cout << "\n\t\t1) Yes \n\t\t2)  No \n\n\tSelect your answer (1/2):";
    cin >> Food;
    switch (Food)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;

    default:
        break;
    }

}

void owner() {
    system("cls");
    fstream myfile;

    //string contact;
    //string name;
    cout << "\n\tName\t\t: ";
    cin >> name;
    cout << "\n\n\tContact Number\t: ";
    cin >> contact;

    system("cls");
    //int members; 
    cout << "\n\tAvailable space\t: ";
    cout << "\n\t\t1)  One\n\t\t2)  Two\n\t\t3)  Three\n\t\t4)  Four\n\t\t5)  Five\n\t\t6)  Six\n\t\t7)  Seven\n\t\t8)  Eight\n\t\t9)  Ten\n\n\tSelect your answer (1,2,....,10): ";
    cin >> members;

    system("cls");
    //int prize; 
    cout << "\n\tMonthly prize per person\t: ";
    cin >> prize;

    switch (members)
    {
    case 1:
        myfile.open(combine_name(members, name), ios::out);
        if (myfile.is_open())
        {
            myfile << name <<"\n";
            myfile << contact << "\n";
            myfile << members << "\n";
            myfile << prize << "\n";
            myfile.close();
        }
        break;
    case 2:
        myfile.open(combine_name(members, name), ios::out);
        if (myfile.is_open())
        {
            myfile << name << "\n";
            myfile << contact << "\n";
            myfile << members << "\n";
            myfile << prize << "\n";
            myfile.close();
        }
        break;
    case 3:
        myfile.open(combine_name(members, name), ios::out);
        if (myfile.is_open())
        {
            myfile << name << "\n";
            myfile << contact << "\n";
            myfile << members << "\n";
            myfile << prize << "\n";
            myfile.close();
        }
        break;
    case 4:
        myfile.open(combine_name(members, name), ios::out);
        if (myfile.is_open())
        {
            myfile << name << "\n";
            myfile << contact << "\n";
            myfile << members << "\n";
            myfile << prize << "\n";
            myfile.close();
        }
        break;
    case 5:
        myfile.open(combine_name(members, name), ios::out);
        if (myfile.is_open())
        {
            myfile << name << "\n";
            myfile << contact << "\n";
            myfile << members << "\n";
            myfile << prize << "\n";
            myfile.close();
        }
        break;
    case 6:
        myfile.open(combine_name(members, name), ios::out);
        if (myfile.is_open())
        {
            myfile << name << "\n";
            myfile << contact << "\n";
            myfile << members << "\n";
            myfile << prize << "\n";
            myfile.close();
        }
        break;
    case 7:
        myfile.open(combine_name(members, name), ios::out);
        if (myfile.is_open())
        {
            myfile << name << "\n";
            myfile << contact << "\n";
            myfile << members << "\n";
            myfile << prize << "\n";
            myfile.close();
        }
        break;
    case 8:
        myfile.open(combine_name(members, name), ios::out);
        if (myfile.is_open())
        {
            myfile << name << "\n";
            myfile << contact << "\n";
            myfile << members << "\n";
            myfile << prize << "\n";
            myfile.close();
        }
        break;
    case 9:
        myfile.open(combine_name(members, name), ios::out);
        if (myfile.is_open())
        {
            myfile << name << "\n";
            myfile << contact << "\n";
            myfile << members << "\n";
            myfile << prize << "\n";
            myfile.close();
        }
        break;

    default:
        cout << "Something went wrong. Try again.....";
        owner();
        break;
    }

}


int main()
{
    intro();
    system("cls");
    int I_am;
    cout << "\n\tWho are you?\n\t\t1) I am a boarding owner\n\t\t2) I am a boarding finder\n\tSelect your answer (1,2): ";
    cin >> I_am;
    switch (I_am)
    {
    case 1:
        owner();
        cout << endl;
        cout << name << " your data has been recorded....." << endl;
        break;
    case 2:
        finder();
        break;
    default:
        break;
    }
    

}
