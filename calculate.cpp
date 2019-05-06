#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>
#include "calculate.hpp"
// used with by Bar Genish and Lioz Elmalem algoritem Idia
namespace bullpgia{

  string calculateBullAndPgia(string choice, string guess){
	if( choice == "" || guess == "" ) throw std::invalid_argument( "The string is empty" );
  int i=0;
	int bull = 0;
	int pgiot = 0;
	int arrguess [10]= {0};
	int arrcohice [10]= {0};
  for(i=0;i<choice.length();i++){
    if(choice[i]==guess[i])
      bull++;
  }
  for (i=0;i<guess.length();i++){
    int temp=(guess[i])-'0';
    arrguess[temp]++;
  }
	  for(i=0;i<choice.length();i++){
    int temp=(choice[i])-'0';
    arrcohice[temp]++;
  }

  for (i=0;i<10;i++){
    pgiot=pgiot+min(arrcohice[i],arrguess[i]);
  }
  pgiot=pgiot-bull;
 	string bull_str = std::to_string(bull);
        string pgiot_str = std::to_string(pgiot);
        string result = bull_str + "," + pgiot_str;
        return result;
}

	// 	for (int i=0)
	// for( int i = 0; i < choice.length(); i++ ){  //loop for the chooser
	//   int chooser = choice[i];
			
	//    	for( int j = 0; j < guess.length(); j++ ){  //loop for the guesser
	// 			int guesser = guess[j];		
	// 			if( chooser == guesser && i==j){
  //    			bull++; //if the guesser guessed the right number at the right place 
	// 		 	}
	// 		}
	// 					  }
		
	// string bull_str = std::to_string(bull);
  //       string pgiot_str = std::to_string(pgiot);
  //       string result = bull_str + "," + pgiot_str;
  //       return result;
	 }
}
