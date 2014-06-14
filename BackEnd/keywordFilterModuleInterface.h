#ifndef KEYWORDFILTERMODULEINTERFACE_H
#define KEYWORDFILTERMODULEINTERFACE_H
#include <string>
#include <vector>

using namespace std;

class keywordFilterModuleInterface {
protected:
    virtual vector<String> findKeyword() = 0;
private:
    virtual vector<String> filterBadKeyword(vector<String> keywordsList);
};

#endif // KEYWORDFILTERMODULEINTERFACE_H
