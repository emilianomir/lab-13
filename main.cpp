#include <iostream>
#include <vector>
#include "class.h"
using namespace std;

int main() {
  User Jim("Jim", "Jim@Jim.com");
  User Sam("Sam", "Sam@Sam.com");

  
  Jim.sendEmail("hey Sam!", Sam); 
  Jim.sendEmail("are you there?", Sam);

  Sam.sendEmail("note to self: don't forget!", Sam);

  Sam.showAllEmail(); // print Sam's inbox, three objects
  Jim.showAllEmail(); // print Jim's inbox: no objects
  Jim.showAllEmail(false); // print Jim's sent emails, two objects
}
