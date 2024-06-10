#include <iostream> 
using namespace std;



// Create a Rectangle class with data members length and width. Implement constructors to initialize these values.

// Add a destructor to the Rectangle class to display a message when an object is destroyed.

// In the main function, create instances of the Rectangle class using constructors and observe when destructors are called.



class Rectangle {

private: 
double length;
double width;

public:
    // Data members
Rectangle(double l, double w){
    length = l;
    width = w; 
}
    
    // Member function
    double calcArea() {
        return length * width; 
        // cout << "Car: " << brand << " " << model << " " << year << endl;
    }
    double calcPerimeter(){
        return 2 * (width +  length); 
    }
    ~Rectangle(){
        cout << "The object is now destroyed. " << endl; 
    }
};



int main(){

// call and impliment the class in the main.  

Rectangle rect1(10, 20);
Rectangle rect2(40, 30);

cout << "Rectangel 1 " << endl; 
cout << "Area. " << rect1.calcArea() << " square units."<< endl; 
cout << "Perimeter " << rect1.calcPerimeter() << " Units" << endl;

cout << "Rectangel 2 " << endl; 
cout << "Area. " << rect2.calcArea() << " square units."<< endl; 
cout << "Perimeter " << rect2.calcPerimeter() << " Units" << endl;

    return 0; 
}
