#ifndef SINGLETON_H
#define SINGLETON_H


class Singleton
{
public:
    static Singleton* getInstance();
    ~Singleton();
private:
    Singleton();
};

#endif // SINGLETON_H
