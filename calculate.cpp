
#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>
#include "calculate.hpp"

namespace bullpgia{

  string calculateBullAndPgia(string choice, string guess){
	// if( choice == "" || guess == "" ) throw std::invalid_argument( "The string is empty" );
		
	// int bull = 0;
	// int pgiot = 0;
		
	// for( int i = 0; i < choice.length(); i++ ){  //loop for the chooser
	//   int chooser = choice[i];
			
	//    for( int j = 0; j < guess.length(); j++ ){  //loop for the guesser
	// 	int guesser = guess[j];
					
	// 	if( chooser == guesser){
	// 	   if( i == j ){     //if the guesser guessed the right number at the right place
	// 	      bull++; }
	// 	   else{   pgiot++;  } //if the answer contains the number guessed but not at the right place
	// 		               }
	// 					    }
	// 					  }
		
	// string bull_str = std::to_string(bull);
  //       string pgiot_str = std::to_string(pgiot);
  //       string result = bull_str + "," + pgiot_str;
  //       return result;
	// }

  int bull = 0,pgia=0,i;
  int arrchoice[10],arrguess[10];
  for (i=0;i<10;i++){
    arrchoice[i]=0,arrguess[i]=0;
  }
  for(i=0;i<choice.length();i++){
    if(choice[i]==guess[i])
      bull++;
  }
  for(i=0;i<choice.length();i++){
    int temp=(choice[i])-'0';
    arrchoice[temp]++;
  }
  for (i=0;i<guess.length();i++){
    int temp=(guess[i])-'0';
    arrguess[temp]++;
  }
  for (i=0;i<10;i++){
    pgia+=min(arrchoice[i],arrguess[i]);
  }
  pgia-=bull;
  return to_string(bull) + "," + to_string(pgia);
	
}
}
