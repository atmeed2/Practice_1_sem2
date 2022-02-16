//  Created by Leonid Zemtsov on 15.02.2022.
//

#include <iostream>
#include <string>
#include <unistd.h> //Тк у меня Unix система)



/* Первое задание */
void task1() {
    using namespace std;
    
    int number1;
    int number2;
    string operation;
    
    //Ввод первого числа
    cout << "Первое число: ";
    cin >> number1;
    cout << endl;
    
    //Ввод второго числа
    cout << "Второе число: ";
    cin >> number2;
    cout << endl;
    
    //Ввод желаемой операции
    cout << "Операция (+, -, /, *): ";
    cin >> operation;
    cout << endl;
    
    //switch не подходит(((
    if (operation == "+") {
        cout << number1 + number2 << endl;
    } else if (operation == "-") {
        cout << number1 - number2 << endl;
    } else if (operation == "*") {
        cout << number1 * number2 << endl;
    } else if (operation == "/") {
        cout << number1 / number2 << endl;
    }
    
    
    
    
}

/* Второе задание */
void task2(int n) {
    while (n != 0) {
        std::cout << n << std::endl;
        sleep(1);
        n--;
    }
    
}

/* Третье задание */
void task3() {
    using namespace std;
    
    string word;
    int count;
    
    
    cout << "Слово (В родительном падеже, ед.ч, пример: яблок): ";
    cin >> word;
    cout << endl;
    
    cout << "Колличество: ";
    cin >> count;
    cout << endl;
    
    switch (count) {
        case 1:
            cout << count << " " + word + "о";
            cout << endl;
            break;
        case 2:
        case 3:
        case 4:
            cout << count << " " + word + "a";
            cout << endl;
            break;
        default:
            cout << count << " " + word;
            cout << endl;
    }
    
    
    
}




int main() {
    
    task1();
    task2(rand());
    task3();
}


