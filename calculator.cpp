# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter first operands: ";
  cin >> num1;
  
  cout << "Enter operator: +, -, *, /, %: ";
  cin >> op;

  cout << "Enter second operands: ";
  cin >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    case '%':
      cout << num1 << " % " << num2 << " = " << int(num1) % int(num2);
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}