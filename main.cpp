#include <iostream>
#include <cmath>
#include "mathslib.h"

int main() {
  int training_inputs[8] = {0 , 0,
                            0 , 1,
                            1 , 0,
                            1 , 1};
  int training_outputs[4] = {0,
                             0,
                             0,
                             1};
  double x1 = 0.0;
  double x2 = 1.0;

  double w1 = 4.0;
  double w2 = 4.0;

  double b = 2.0;

  double hidden1 = (x1 * w1) + (x2 * w2) + b;
 
  double output = sigmoid(hidden1);
  
  std::cout << output << "\n";
  std::cout << hidden1 << "\n";

}
