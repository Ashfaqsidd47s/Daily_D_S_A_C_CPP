#include <iostream>
#include <chrono>
#include <thread>

// Function to introduce a delay in milliseconds
void delay(int milliseconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

int main() {
    std::cout << "Start of program\n";

    // Introduce a delay of 2 seconds
    delay(5000);

    std::cout << "After a 5-second delay\n";

    // Introduce another delay of 1 second
    delay(1000);

    std::cout << "After a 1-second delay\n";

    return 0;
}
