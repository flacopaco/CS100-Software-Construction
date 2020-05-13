#ifndef __COMPONENT_H__
#define __COMPONENT_H__

class Base {
    public:
        /* Constructors */
        Base() {}

        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
};

class Mult: public Base {
private:
    Base* Rn;
public:
    Sub(Base* x, Base* y) {
        Rn = y;
        Ln = x;
    }
    double evaluate() {
        return ((Ln->evaluate()) - (Rn->evaluate()));
    }
};

class Add: public Base {
private:
    Base* Rn;
    Base* Ln;
    
public:
    Add(Base* x, Base* y) {
        Rn = y;
        Ln = x;
    }
    double evaluate() {
        return ((Ln->evaluate()) + (Rn->evaluate()));
    }
};

class Sqr: public Base {
private:
    Base* Node;
    
public:
    Sqr(Base* x)
    {
        Node = x;
        
    }
    double evaluate() {
        return ((Node->evaluate()) * (Node->evaluate()));
    }
};

class Op: public Base {
private:
    int value;
public:
    Op(int a): value(a) {
        
    };
    
    double evaluate() {
        return value;
    };
};

#endif // __COMPONENT_H__
