#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{	
	int chance;//chance represents the chance you have to guess the number in one time.
	int true1, true2, true3, guess1, guess2, guess3; //true represents the random number generated, guess represents the number you guess.
	int A_times, B_times, game_times = 0, win_times = 0, lost_times = 0;//A_times and B_times represent the number of correct numbers in correct positions and correct numbers in wrong positions.
	string answer;//answer represents the answer of the question.
	
	srand(time(NULL));
	cout<<"Do you want to play the game?(Yes or No)"<<endl;
	cin>>answer;
	while (answer == "Yes"||answer == "yes"){
		A_times = 0; B_times =0;
		true1 = rand()%10;
		true2 = rand()%10;
		while (true1 == true2){
			true2 = rand()%10;	
		}
		true3 = rand()%10;
		while (true3 == true1 || true3 == true2){
			true3 = rand()%10;
		}//It is used to generate random numbers.
	//	cout<<true1<<true2<<true3<<endl;
	for (chance = 1; chance <=7; ++chance){
		cout<<"Please input the number you guess:"<<endl;
		cin>> guess1 >> guess2 >> guess3;
		A_times = (guess1 == true1) + (guess2 == true2) + (guess3 == true3);
		B_times = (guess1 == true2) + (guess1 == true3) + (guess2 == true1) + (guess2 == true3) + (guess3 == true1) + (guess3 == true2);
		if (A_times == 3){
			cout<<"congratulations! You win the game!"<<endl;
			++win_times;
			break; 
		}//You win the game.
		else cout<< A_times << 'A' << B_times << 'b' <<endl;
		if (A_times != 3 && chance == 7){
			cout<<"Tt's a pity, you lost the game, the answer is "<< true1<<" "<< true2 <<" "<< true3 <<endl;
			++lost_times;
		}//You lost the game.
    }
	++game_times;
	cout<<"Do you want to play the game?(Yes or No)"<<endl;
	cin>>answer;
    }
cout<<"You played"<<" "<<game_times<<" "<<"times, won"<<" "<<win_times<<" "<<"times, lost"<<" "<<lost_times<<" "<<"times"<<endl;
return 0;
}//The final result.
