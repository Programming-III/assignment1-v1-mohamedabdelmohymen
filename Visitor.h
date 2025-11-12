#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor{
private:
    string visitorName;
    int ticketsBiought;
public:
  Visitor();
  ~Visitor();
  Visitor(string& visitorName,int ticketsBiought);
  string getvisitorName();
  int getticketsBiought();
  void setticketsBiought();
  void setvisitorName();
  void displayBoughtInfo();


};






#endif
