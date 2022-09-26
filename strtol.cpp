#include <iostream>
#include <stdlib.h>
using namespace std; 

int main(int argc, char* argv[]) {
  for (int i = 1; i < argc-1; i++){
    //printing the command line argument
    //cout << argv[i] << endl;  
    //if (argv[i][0] == '-'){
    //  cout<< argv[i][1] << argv[i][2] << endl; 
    //}

    
    //this doesn't work even though it was upvoted in stackoverflow 
    //if (atoi(argv[i] < '0'))
    //  cout << "negative number detected" << endl; 

    //trying out stringtolong

    //this works!!!!!!!!!!
    char *pEnd; 
    if (!isdigit(*argv[i]) || (*argv[i+1] != '0' && argv[i+1][0] != '-') )
      cout << "error, you did not input a number " << endl;  

    else{
      int x =  strtol(argv[i], &pEnd, 10);
      int y =  strtol(argv[i+1], &pEnd, 10); 
      
      if (x < 0)
        cout << "negative number input " << endl; 
      cout << x << endl;
      cout << y << endl; 
    }

  }
  
  return 0;
}