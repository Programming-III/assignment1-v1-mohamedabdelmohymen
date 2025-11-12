#ifndef BIRD_H
#define BIRD_H

class Bird{
private:
    float wingSpan;
public:
    Bird();
    Bird(float wingSpan);
    ~Bird();
    void setwingSpan();
    float getwingSpan();


};
#endif
