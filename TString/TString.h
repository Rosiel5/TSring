#ifndef TSTRING_H
#define TSTRING_H

class TString
{
private:
  char* content;
  int length;

public:
  TString();
  TString(char* value);

  int GetLength();
};

TString IntToTString(int value);

#endif