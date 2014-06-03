#ifndef DATASTORAGE_H
#define DATASTORAGE_H

#endif // DATASTORAGE_H

class dataStorage {

public:
    virtual void storeData() = 0;

protected:
    virtual void checkData() = 0;
    virtual void checkUrl() = 0;
    virtual void checkKeyWords() = 0;

};
