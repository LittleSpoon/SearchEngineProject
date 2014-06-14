#ifndef DATASTORAGE_H
#define DATASTORAGE_H



class dataStorageInterface {

public:
    virtual void storeData() = 0;   //In an ideal world: call checkData, if then store the data.

protected:
    virtual void checkData() = 0; //Call checkUrl and checkKeyWords. May also check other data if needed
    virtual void checkUrl() = 0;
    virtual void checkKeyWords() = 0;

};

#endif // DATASTORAGE_H
