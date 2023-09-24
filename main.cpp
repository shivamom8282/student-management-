#include<iostream>
#include<conio.h>
using namespace std;
class sk
{

private:
    string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;
int choice=0;
public:
    void options();
    void enter();
    void show();
    void search1();
    void update();
    void delete_();
   // void exit();     //pending
};
void sk::options()
{
        int i=0;
    char ch;
    string username;
    string pass;
    string password;
    char _password;
    cout<<"\t\t\t\tLOGIN IN PLEASE"<<endl;
    cout<<"\t\t\t================================="<<endl;
    cout<<"\t\t\tEnter User Name:";
    cin>>username;
    cout<<"\t\t\tEnter your Password: ";



    while (true) {
        ch = getch(); // Use _getch() to read characters without Enter key

        if (ch == 13) // Enter key pressed, terminate password input
            break;
        else if (ch == '\b') { // Backspace key pressed, remove last character
            if (i > 0) {
                cout << "\b \b"; // Clear the last character on the screen
                password.pop_back(); // Remove the last character from the password string
                i--;
            }
        }
        else {
            password += ch; // Add character to the password
            i++;
            cout << '*'; // Display '*' for password input
        }
    }
    if(username=="admin")
    {



        if(password=="password")
        {
            cout<<endl;
            cout<<"\t\t\t login successfully!!"<<endl;

    int value;
    while(true)
    {

    cout<<"press 1 to enter data"<<endl;
    cout<<"press 2 to show data"<<endl;
    cout<<"press 3 to search data"<<endl;
    cout<<"press 4 to update data"<<endl;
    cout<<"press 5 to delete data"<<endl;
    cout<<"press 6 to exit"<<endl;


    cin>>value;

    switch(value)
    {
    case 1:
        enter();
        break;
    case 2:
        show();
        break;
            case 3:
                search1();
                break;
            case 4:
                update();
                break;
            case 5:
                delete_();
                break;
            case 6:
                exit(0);
                break;
            default:
                cout<<"invalid value"<<endl;
    }

        }
    }


    else
    {
        cout<<"invalid name and password"<<endl;
    }
	}

}
void sk:: enter()                  //enter data
{

    int choice;

    cout<<"how many students do you want to enter"<<endl;
    cin>>choice;
    if(total==0)
    {
            total=total+choice;



   for(int i=0;i<choice;i++)
    {
        cout<<"==================================================================="<<endl;
        cout<<"\t\t\t\tENTER THE STUDENT DATA"<<endl;
        cout<<"==================================================================="<<endl<<endl;
        cout<<"enter the student data"<<i+1<<endl;
        cout<<"enter the student name:"<<endl;
        cin>>arr1[i];
        cout<<"enter the roll number:"<<endl;
        cin>>arr2[i];
        cout<<"enter the course:"<<endl;
        cin>>arr3[i];
        cout<<"enter the contact number:"<<endl;
        cin>>arr4[i] ;
    }
    }
    else
    {



          for(int i=total;i<total+choice;i++)
    {
        cout<<"==================================================================="<<endl;
        cout<<"\t\t\t\tENTER THE STUDENT DATA"<<endl;
        cout<<"==================================================================="<<endl<<endl;
        cout<<"enter the student data"<<i+1<<endl;
        cout<<"enter the student name:"<<endl;
        cin>>arr1[i];
        cout<<"enter the roll number:"<<endl;
        cin>>arr2[i];
        cout<<"enter the course:"<<endl;
        cin>>arr3[i];
        cout<<"enter the contact number:"<<endl;
        cin>>arr4[i] ;

}
total=total+choice;
    }
}
void sk::show()                //show data
{
    system("color A");
    cout<<"========================================================================"<<endl;
    cout<<"\t\t\t\t\STUDENT DATA"<<endl;
    cout<<"========================================================================"<<endl<<endl;
    int i;
    if(total==0)
    {
        cout<<"no data is entered"<<endl;

    }
    else
    {

        cout<<"sr no."<<"\t\t"<<"name "<<"\t\t"<<"roll no"<<"\t\t"<<"course"<<"\t\t"<<"contact" <<endl;
        {







        for(int i=0;i<total;i++)
        {


    //cout<<"=====================================================================\n";
   // cout<<"\t\tDATA OF STUDENT"<<i+1<<endl<<endl;
    //cout<<"=====================================================================\n";


     cout<<i+1<<"\t\t"<<arr1[i]<<"\t\t"<<arr2[i]<<"\t\t"<<arr3[i]<<"\t\t"<<arr4[i]<<endl;;
    cout<<"\n";
        }

    }
    }

}
void sk::search1()          //search data
{
    cout<<"======================================================================================"<<endl;
    cout<<"\t\t\t\tSEARCHING STUDENT RECORD"<<endl;
    cout<<"======================================================================================"<<endl<<endl;

    string roll_no;
    cout<<"enter roll no of student which you want to search:"<<endl;
    cin>>roll_no;
    if(total==0)
    {
        cout<<"no record";
    }
    else
    {
    for(int i=0;i<total;i++)
    {
        if(roll_no==arr2[i])
        {
             cout<<"======================================================================"<<endl;
             cout<<"\t\t DATA OF STUDENT"<<i+1<<endl;
    cout<<"name:    "<<arr1[i]<<endl;
    cout<<"roll no: "<<arr2[i]<<endl;
    cout<<"course:  "<<arr3[i]<<endl;
    cout<<"contact: "<<arr4[i]<<endl;
             cout<<"======================================================================"<<endl;
        }
    }
    }

}
void sk::update()       //update data
{
    cout<<"========================================================================================"<<endl;
    cout<<"\t\t\t\tFOR UPDATE"<<endl;
    cout<<"========================================================================================"<<endl<<endl;
    string roll_no;
    cout<<"enter roll no of student which you want to search:"<<endl;
    cin>>roll_no;
    cout<<"previous data"<<endl;
    for(int i=0;i<total;i++)
    {
        if(roll_no==arr2[i])
        {
             cout<<"data of student"<<i+1<<endl<<endl;
    cout<<"name"<<arr1[i]<<endl;             //previous data
    cout<<"roll no"<<arr2[i]<<endl;
    cout<<"course"<<arr3[i]<<endl;
    cout<<"contact"<<arr4[i]<<endl;
    cout<<"\n enter new data"<<endl;
    cout<<"enter the student data"<<i+1<<endl;
        cout<<"enter the student name:"<<endl;  //updation
        cin>>arr1[i];
        cout<<"enter the roll number:"<<endl;
        cin>>arr2[i];
        cout<<"enter the course:"<<endl;
        cin>>arr3[i];
        cout<<"enter the contact number:"<<endl;
        cin>>arr4[i] ;

        }
    }

}
void sk::delete_()            //delete data
{
    int i,j;
    int a;
    cout<<"enter 1 if you want to delete all data"<<endl;
    cout<<"enter 2 if you want to delete specific record"<<endl;
    cin>>a;
    if(a==1)
    {
        total=0;
        cout<<"all record deleted"<<endl;

    }
    else if(a==2)
    {
        string roll_no;
        cout<<"enter student roll no which you want to delete:"<<endl;
        for(int i=0;i<total;i++)
        {
            if(roll_no==arr2[i])
            {
                for(int j=i;j<total;j++)
                {

                    arr1[j]=arr1[j+1];
                    arr2[j]=arr2[j+1];
                    arr3[j]=arr3[j+1];
                    arr4[j]=arr4[j+1];


                }
                total--;
                cout<<"your record is deleted"<<endl;
            }
        }
    }

}

int main()
{
    sk aa;  //object
    aa.options();
}
