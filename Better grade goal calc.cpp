#include <iostream>

using namespace std;

int main(){
    float quarter1, goalGrade, neededGrade;

    bool isDone = false;

    char input;

    cout << "$-------------------------------$" << endl;
    cout << "|This program takes your quarter|" << endl;
    cout << "|one grade and what you want to |" << endl;
    cout << "|make for the semester and tells|" << endl;
    cout << "|you what you have to make in   |" << endl;
    cout << "|quarter two to reach that goal |" << endl;
    cout << "$-------------------------------$" << endl << endl;

    while(isDone == false){
        //Prompts/stores
        cout << "$-----------------------------------------$" << endl;
        cout << "|Enter quarter one grade: ";
        cin >> quarter1;

        //Prompts/Stores
        cout << "|What is your goal for the semester: ";
        cin >> goalGrade;

        //Does the math
        neededGrade = (goalGrade * 2) - quarter1;

        //Returns answer
        cout << "|The grade you need to make a " << goalGrade << " is a " << neededGrade << endl
        ;
        cout << "$-----------------------------------------$" << endl << endl;;

        cout << "Would you like to do this again? (y/n) ";
        cin >> input;

        if(input == 'y'){
            isDone = false;
        }else{
            isDone = true;
        }
    }
    return 0;
}
