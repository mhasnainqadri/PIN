#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    char a='1',b='2',c='3',d='4'; // Correct Password .
    char e,f,g,h; // Entered Password .     
    char try_again; // ReTry
    int attempts=0,login_status=0,shutdown=0;
    while(1)
    {
        cout<<"Enter the password : ";
        e=getch();
        cout<<"*";
        f=getch();
        cout<<"*";
        g=getch();
        cout<<"*";
        h=getch();
        cout<<"*";
        getch();
        attempts++;
        cout<<"\n\n";
        if(a==e&&b==f&&c==g&&d==h)
        {
            login_status=1;
            cout<<"Welcome User !\nPress Any key to continue ...";
            getch();
            break;
        }
        else
        {
            cout<<"Incorrect Password !\n";
            while(attempts<3)
            {
                cout<<"Attempts left : "<<3-attempts<<"\nDo you want to try again ? (y/n) : ";
                try_again=getch();
                cout<<"\n\n";
                if(try_again=='y'||try_again=='Y')
                {
                    break;
                }
                else if(try_again=='n'||try_again=='N')
                {
                    shutdown=1;
                    break;
                }
                else
                {
                    cout<<"Invalid Choice ...\nPress any key to try again ...";
                    getch();
                    cout<<"\n\n";
                }
            }
            if(attempts==3)
            {
                cout<<"You have reached maximum attempts ...\nPress any key to exit ...";
                getch();
                shutdown=1;
            }
        }
        if(login_status==1||shutdown==1)
        {
            break;
        }
    }
}