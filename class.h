#include <iostream>
#include <vector>
using namespace std;

class Email{
private:
  string message, senderName, recipientName;  
public:
  Email(string _recipientName, string _senderName, string _message = "(no message)"){
    recipientName = _recipientName;
    senderName = _senderName;
    message = _message;
  }
  void printEmail(){
	cout << "Sender: " << senderName << endl;
	cout << "Recipient: " << recipientName << endl;
	cout << "Message: " << message << endl;
  }
};

class User{
private:
  string name, address;
  vector<Email>inbox;
  vector<Email>sent;
  
public:
User(string _name, string _address){
    name = _name;
    address = _address;
  };
void showAllEmail(bool showInbox = true){
  if(showInbox == true){
    if(inbox.size() == 0){
      cout << "inbox is empty" << endl;
    }
    for(int i = 0; i < inbox.size();++i){
      inbox.at(i).printEmail();
      cout << endl;
    }
  }
  else if (showInbox == false){
    for(int i=0; i < sent.size(); ++i){
      sent.at(i).printEmail();
      cout << endl;
    }
  }
};
void sendEmail(string message, User &recipient){
  recipient.inbox.push_back(Email(recipient.name, name, message));
  sent.push_back(Email(recipient.name, name, message));
};

};
