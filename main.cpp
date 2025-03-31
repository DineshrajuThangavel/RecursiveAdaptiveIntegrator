/* Main program for the task 5 in WS 2023/2024
 Consists on 5 files:
 main.cpp
 integral.hpp
 cases.hpp
 integral.cpp
 cases.cpp
 */

#include <iostream>
#include <cmath>
#include "integral.hpp"
#include "cases.hpp"
#include "intro.hpp"

using namespace std;


int main()
{
    int choice = 3;

    intro();

    while(1)
    {
        cout<<"\n\nEnter example number 1..5 for a single example, 6 for all or 0 to abort."<<endl<<">>>";
        cin>>choice;

        switch (choice)
        {
            case 1:
            {
                example1();
                break;
            }
            case 2:
            {
                example2();
                break;
            }
            case 3:
            {
                example3();
                break;
            }
            case 4:
            {
                example4();
                break;
            }
            case 5:
            {
                example5();
                break;
            }
            case 6:
            {
                example1();
                example2();
                example3();
                example4();
                example5();
                break;
            }
            case 0:
            {
                cout<<"Stop execution."<<endl<<endl;
                return 0;
            }
            default:
            {
                cout<<"Not a valid case, use 1,...5 for single examples, 6 for all, or 0 to abort"<<endl;
                break;
            }
        }
    }
}
