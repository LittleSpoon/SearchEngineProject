#include "keywordFilterModuleInterface.h"




vector<String> keywordFilterModuleInterface::filterBadKeyword(vector<String> keywordsList)
{
    badkeyword filter = new badkeyword();

    return filter.badKeywordFilter(keywordsList);
}
