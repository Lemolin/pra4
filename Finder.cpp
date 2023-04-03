#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2)
{
    vector<int> result;
    int memory_index = 0;
    for (size_t i = 1; i <= s2.size(); i++){
        size_t found = s1.find(s2.substr(0,i));
        if (found != string::npos)
        {
            s1.erase(0,found);
            found = found + memory_index;
            result.push_back(found);
            memory_index = found;
        }
        else
        {
            for(size_t i=result.size(); i<s2.size(); i++){
                result.push_back(-1);
            }
            return result;
        }
    }
    return result;
}


   
