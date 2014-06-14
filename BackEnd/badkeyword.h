#ifndef BADKEYWORD_H
#define BADKEYWORD_H
#include <vector>
#include <String>

using namespace std;

class badKeyword
{
public:
    badKeyword();
    vector<String> badKeywordFilter(vector<String> keywordList);
};

#endif // BADKEYWORD_H
