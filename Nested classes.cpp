
class Surround
{
public:
    class FirstWithin{  //The class FirstWithin is visible outside and inside Surround, as it is public.
        int d_variable; // only visible to the members of the class FirstWithin.
    public:
        FirstWithin();             // globally visible
        int getdvar() const;       // globally visible
    };

private:
    class SecondWithin{

        //class SecondWithin only visible inside Surround
        //The public members of the class SecondWithin can also be used by the members of the class FirstWithin
        //as nested classes can be considered members of their surrounding class

        int d_variable;  // only visible to SecondWithin's members
    public:
        SecondWithin();  // can only be reached by the members of Surround (and by the members of its nested classes)
        int getdvar() const;
    };
};


inline int Surround::FirstWithin::getdvar() const {
    return d_variable;
}

inline int Surround::SecondWithin::getdvar() const {
    return d_variable;
}


