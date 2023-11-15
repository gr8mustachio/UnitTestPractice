#include "Password.h"
#include <string>
#include <iostream>

using namespace std;
using std::string;

Password::Password() {
	set("ChicoCA-95929");
}
/*
  The function receives a string counts how many times the same character 
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
*/
int Password::count_leading_characters(string phrase){
  int repetition = 1;
  int index = 0;

  while( index < phrase.length()-1 && phrase[index] == phrase[index+1] ){
    repetition++;
    index++;
  }
  return repetition;
}
bool Password::has_mixed_case(string pass){
  bool lower = false;
  bool upper = false;
  for(int i = 0; i < pass.size(); i++){
    if( pass[i] >= 'A' && pass[i] <= 'Z' ){
      upper = true;
    }
    else if( pass[i] < 'z'){
      lower = true;
    }
  }
  return upper && lower;
}

void Password::set(string pass) {
	int minLen = 8;
	if(pass.length() < 8)
		cout <<"Error" <<  endl;
		return;
	if(has_mixed_case(pass) == false)
		cout << "Error" << endl;
		return;
	for(int i=0; i<pass_history.size(); i++) {
		if(pass_history[i] == pass)
			cout << "Error" << endl;
			return;
	}
	cout << "Password set successfully" << endl;
	return;
}

bool Password::authenticate(string pass) {
	if(pass == pass_history[pass_history.size()-1])
		return true;
	else
		return false;
}

