#include "../include/PNetController.h"

#include <iostream>
using namespace std;

PNetController::PNetController() {
  cout << "PNetController initialized" << endl;
}

PNetController::~PNetController() { }

int
PNetController::run() {
  cout << "PNetController::run() called" << endl;
  return 0;
}
