#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        string substring;

        for(size_t i = 1; i <= s2.size(); i++) {
            if(substring.length()==0){
                
            substring += s2[i - 1];
            }
            
            else{
                substring += ' '+s2[i - 1];
            }
            size_t found = s1.find(substring);
            if (found != string::npos) {
                result.push_back(found);
            } else {
                for (size_t j = i; j < s2.size(); j++) {
                    result.push_back(-1);

                }
                return result;
            }
        }
        return result;
    }

   
