#include <cstdio>

// 2-1.
enum class Operation { Add, Subtract, Multiply, Divide };

// 2-2.
struct Calculator {
    Operation op;
    Calculator(Operation operation) {
        op = operation;
    }

    // 2-3.
    int calculate(int a, int b) {
        switch(op) {
        case Operation::Add: {
            printf("Adding\n");
            return a + b;
        } break;
        case Operation::Subtract: {
            printf("Subtracting.\n");
            return a - b;
        } break;
        case Operation::Multiply: {
            printf("Multiplying.\n");
            return a * b;
        } break;
        case Operation::Divide: {
            printf("Dividing.\n");
            return a / b;
        } break;
        default: {
            printf("Error: invalid operation!\n");
            return 0;
        }
        }
    }
};

int main() {
    // 2-4.
    Operation operation = Operation::Subtract;
    Calculator calc(operation);
    int result = calc.calculate(3, 4);
    printf("Result: %i", result);
}