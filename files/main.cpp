#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <ctime>

void hello() {
    std::cout << "Hello World!" << std::endl;
}

void greet() {
    std::string name;
    std::cout << "Gebe deinen Namen ein: ";
    std::cin >> name;
    std::cout << "Hallo " << name << "!" << std::endl;
}

void loops() {
    int i;
    i = 10;
    while (i > 0) {
        std::cout << i << std::endl;
        i = i - 1;
    }
    std::cout << "Schleife beendet!" << std::endl;
}

void timer() {
    std::cout << "Warte 2 Sekunden..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "2 Sekunden gewartet!" << std::endl;

}

void counter() {
    int count_to;
    std::cout << "Zahl eingeben - bis zu dieser Zahl wird gezählt: ";
    std::cin >> count_to;
    std::time_t start;
    start = std::time(nullptr);
    int i = 0;
    while (i < count_to) {
        i = i + 1;
    }
    start = std::time(nullptr) - start;
    std::cout << "\nEs hat " << start << " Sekunden gedauert!" << std::endl; 
}

int main() {
    hello();
    greet();
    timer();
    loops();
    counter();
    return 0;
}
