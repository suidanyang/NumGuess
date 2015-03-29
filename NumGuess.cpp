#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{	
	int chance;
	int true1, true2, true3, guess1, guess2, guess3; 
	int A_times, B_times, game_times = 0, win_times = 0, lost_times = 0;
	string answer;
	
	srand(time(NULL));
	cout<<"ÐèÒªÍæÓÎÏ·Âð£¿£¨Yes or No£©"<<endl;
	cin>>answer;
	while (answer == "Yes"){
		A_times = 0; B_times =0;
		true1 = rand()%10;
		true2 = rand()%10;
		while (true1 == true2){
			true2 = rand()%10;	
		}
		true3 = rand()%10;
		while (true3 == true1 || true3 == true2){
			true3 = rand()%10;
		}
	//	cout<<true1<<true2<<true3<<endl;
	for (chance = 1; chance <=7; ++chance){
		cout<<"ÇëÊäÈëÄã²Â²âµÄÊý×Ö£º"<<endl;
		cin>> guess1 >> guess2 >> guess3;
		A_times = (guess1 == true1) + (guess2 == true2) + (guess3 == true3);
		B_times = (guess1 == true2) + (guess1 == true3) + (guess2 == true1) + (guess2 == true3) + (guess3 == true1) + (guess3 == true2);
		if (A_times == 3){
			cout<<"¹§Ï²£¬Äã²Â¶ÔÁË£¡"<<endl;
			++game_times;
			++win_times;
			break; 
		}
		else cout<< A_times << 'A' << B_times << 'b' <<endl;
		if (A_times != 3 && chance == 7){
			cout<<"ºÜÒÅº¶£¬ÄúÃ»ÓÐÔÚ¹æ¶¨´ÎÊýÄÚ´ð¶Ô£¬´ð°¸ÊÇ"<< true1<<" "<< true2 <<" "<< true3 <<endl;
			++game_times;
			++lost_times;
		}
	}
	cout<<"ÐèÒªÍæÓÎÏ·Âð£¿£¨Yes or No£©"<<endl;
	cin>>answer;
   }
cout<<"ÄãÒ»¹²ÍæÁË"<<game_times<<"¾Ö£¬Ó®ÁË"<<win_times<<"¾Ö£¬ÊäÁË"<<lost_times<<"¾Ö"<<endl;
return 0;
}

