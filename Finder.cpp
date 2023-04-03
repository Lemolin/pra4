#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2)
{
    vector<int> result;
    for (size_t i = 1; i <= s2.size(); i++){
        size_t found = s1.find(s2.substr(0,i));
        if (found != string::npos)
        {
            if (result.size() == 0) {
                result.push_back(found);
                s1.erase(0, found);
            }
            else {
                result.push_back(result[0]);
            }
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

   
