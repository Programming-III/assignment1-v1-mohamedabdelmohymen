#ifndef ENCLOSURE_H
#define ENCLOSURE_H

class Enclosure{
private :
Animal*a;
int capacity;
int currentCount;
public:
    Enclosure();
    Enclosure(Animal*a,int capacity,int currentCount);
    ~Enclosure();
    void addAnimal(Animal*a);
    void displayAnimals();
    void setcapacity();
    void setcurrentCount();
    int getcurrentCount();
    int getcapacity();




};






#endif
