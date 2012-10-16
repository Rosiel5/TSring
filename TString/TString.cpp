#include "TString.h"
#include <stdio.h>
#include <string.h>

TString IntToTString(int value)
{
  return TString("5");
}


  TString::TString()
  {
  }

  TString::TString(char* value)
  {
    content = new char[strlen(value) + 1];
    strcpy(content, value);
    length = strlen(content);
  }


int TString::GetLength()
{
  return length;
}