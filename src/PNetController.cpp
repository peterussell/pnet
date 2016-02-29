#include "../include/PNetController.h"
#include "../include/Switch.h"

#include <iostream>
using namespace std;

PNetController::PNetController() {
  cout << "Welcome to the PNet Switch v0.0.1 setup. A few questions..." << endl;
}

PNetController::~PNetController() { }

int
PNetController::run() {
  initializeSwitch();

  return 0;
}

int
PNetController::initializeSwitch()
{
  cout << "Number of ports: ";
  int numPorts;
  cin >> numPorts;

  cout << "[controller]: Initializing switch with " << numPorts << " ports" << endl;
  Switch sw = Switch( numPorts );

  return 0;
}
