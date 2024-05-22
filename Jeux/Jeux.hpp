#ifndef _JEUX_HPP_
#define _JEUX_HPP_

#include<string>
using namespace std;
class Jeux
{
    public:
        virtual void start()=0;
        virtual void restart()=0;
        virtual void pause()=0;
        virtual void quit()=0;
    protected:
        bool go;
};
#endif