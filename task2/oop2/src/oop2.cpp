#include "oop2.h"
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void bigLetter(string& str)
{
    str[0] = (char)toupper(str[0]);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            str[i + 1] = (char)toupper(str[i + 1]);
    }
}


void removeSpaces(string& str)
{
    string::iterator end_pos = remove(str.begin(), str.end(), ' ');
    str.erase(end_pos, str.end());
}

string hashtaging(string str)
{   
    string sharp = "#";
    try
    {
        int leng = str.length();
        if ((leng <= 100) && (leng != 0))
        {
            bigLetter(str);
            removeSpaces(str);    
            str = sharp + str;
            return(str);
        }
        else
            throw(leng);
    }
    catch (int length)
    {
        return("ERROR: y vas mnogo simvolov ili 0. dlina stroki " + to_string(length));

    }
}