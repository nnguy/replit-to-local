/*testing github, local git, and replit */

#include <iostream>
using namespace std; 

int main(){
  cout << "hello world" << endl;
  cout << "My name is tom " << endl; 
   
  return 0; 
}

/*
  #include <conio.h>
//this doesn't work because g++/gcc doesn't have conio.h; it is a DOS specific library 

#include <iostream>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main()
{
    int c = 0;
    while(1)
    {
        c = 0;

        switch((c=getch())) {
        case KEY_UP:
            cout << endl << "Up" << endl;//key up
            break;
        case KEY_DOWN:
            cout << endl << "Down" << endl;   // key down
            break;
        case KEY_LEFT:
            cout << endl << "Left" << endl;  // key left
            break;
        case KEY_RIGHT:
            cout << endl << "Right" << endl;  // key right
            break;
        default:
            cout << endl << "null" << endl;  // not arrow
            break;
        }

    }

    return 0;
}

*/