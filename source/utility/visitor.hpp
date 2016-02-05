#ifndef __VISITOR__
#define __VISITOR__

namespace utility
{

// Base template class for visitors
template<typename T> 
class Visitor
{
    public:
        virtual void visit(T& element) = 0;
};

// Base template class for visitables
template<typename T>
class Visitable
{
    public:
        virtual void accept(Visitor<T>& v) = 0;
};

}//namespace

#endif