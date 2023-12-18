#include <iostream>

using namespace std;

int inputPositiveNumberA() {
    int number;
    
    do {
        cout << "Введите положительное число A: ";
        cin >> number;
    } while (number <= 0);
    
    return number;
}

int inputPositiveNumberB() {
    int number;
    
    do {
        cout << "Введите положительное число B: ";
        cin >> number;
    } while (number <= 0);
    
    return number;
}

int calculateRectangleArea(int length, int width) {
    return length * width;
}

int calculateRectanglePerimeter(int length, int width) {
    return 2 * (length + width);
}

int main() {
    int A, B, C;
    cout<<"1. Ввести положительное число А"<<endl;
    cout<<"2. Ввести положительное число B"<<endl;
    cout<<"3. Найти площадь прямоугольника"<<endl;
    cout<<"4. Найти периметр прямоугольника"<<endl;
    
    do{
        cin>>C;
        switch(C){
            case 1:
                A = inputPositiveNumberA();
                break;
            case 2:
                B = inputPositiveNumberB();
                break;
            case 3:
                cout<<"Площадь прямоугольника: "<<calculateRectangleArea(A, B)<<endl;
                break;
            case 4:
                cout<<"Периметр прямоугольника: "<<calculateRectanglePerimeter(A, B)<<endl;
                break;
        }
    }while(true);


}
