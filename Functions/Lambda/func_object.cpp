int addFunc(int a, int b){ return a + b; }

int main(){
    
    struct AddObj{
        int operator()(int a, int b) const { return a + b; }
    };
    
    AddObj addObj;
    addObj(3, 4) == addFunc(3, 4);

}

// A function object is an instance of a class for which the call operator, 
// operator (), is overloaded. This means that a function object is an 
// object that behaves like a function. The main difference between a 
// function and a function object is that a function object is an object and 
// can, therefore, have a state.