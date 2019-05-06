#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>
#include "calculate.hpp"
// used with by Bar Genish and Lioz Elmalem algoritem Idia
namespace bullpgia{

  string calculateBullAndPgia(string choice, string guess){
	if( choice == "" || guess == "" ) throw std::invalid_argument( "The string is empty" );
	int bull = 0;
	int pgiot = 0;
		for (int i=0)
	for( int i = 0; i < choice.length(); i++ ){  //loop for the chooser
	  int chooser = choice[i];
			
	   	for( int j = 0; j < guess.length(); j++ ){  //loop for the guesser
				int guesser = guess[j];		
				if( chooser == guesser && i==j){
     			bull++; //if the guesser guessed the right number at the right place 
			 	}
			}
						  }
		
	string bull_str = std::to_string(bull);
        string pgiot_str = std::to_string(pgiot);
        string result = bull_str + "," + pgiot_str;
        return result;
	 }
}
