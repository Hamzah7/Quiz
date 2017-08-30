#include <iostream>
#include "Quiz.h"
using namespace std;

int main()
{
    char Option;
   do
	{
    cout << "      Menu (Select a option or enter 5 to quit)" << endl;
    cout << "1. Geography "<< endl;
    cout << "2. History "<< endl;
    cout << "3. Science "<< endl;
    cout << "4. Mixed Topics "<< endl;
    cout << "5. To exit "<< endl;
    cout << "Enter option:";

		cin>>Option;
		if(Option=='1')
		{
		    //it sets ttype to a variable for the quiz class and then the geography  function under ttype
            Quiz ttype;
            ttype.geography();
		}
		else if(Option=='2'){
            Quiz ttype;
            ttype.history();
		}
       	else if(Option=='3'){
            Quiz ttype;
            ttype.science();
		}
       	else if(Option=='4'){
            Quiz ttype;
            ttype.mixed();
		}
        	else if(Option=='5'){
            cout<<"Thank you for trying our quiz, we hope you enjoyed it"<<endl;
		}
	}while(Option!='5');
	return 0;
}
