int addFunc(int a, int b){ return a + b; }

int main(){
    
    auto addObj = [](int a, int b){ return a + b; };
    
    addObj(3, 4) == addFunc(3, 4);
    
}