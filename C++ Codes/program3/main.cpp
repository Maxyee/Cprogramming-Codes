//Problem statement:
//Create a program that displays the average scores
//from metacritic's Metascore and rotten tomatoes' tomatometar
//for a particular movie. The average score must be displayed
//On a 10 point scale. The movie title and scores will be
//inputted by the user.

#include <iostream>
#include <string>

using namespace std;

int main()
{

//get the name of the movie

string movie = "";

cout << "what is the name of the movie :  \n" << endl;
getline(cin, movie);

//get the metascore

int metascore = 0 ;
cout << "what is the metascore rating for : " << movie << "? \n" <<endl;

cin >> metascore;

//get the tomatometar score

int tomatometar = 0;
cout << "what is the tomatometar rating for :" << movie << "? \n" << endl;
cin >> tomatometar;

//Calculate the average

double avr =(double)(metascore + tomatometar)/2 ;

//Rescale average

double rescaledscore = avr /10;

//Display the result of our calculations

cout << "our calculated average on a 10 point scale for "
<< movie << " is \n " << rescaledscore << "...... " <<endl ;

return 0;
}
