#include "../include/PNetController.h"

#include <iostream>

PNetController::PNetController() {
  cout << "Welcome to PNet v0.0.1 setup. A few questions..." << endl;

  switches = vector<Switch>();
}

PNetController::~PNetController() { }

int
PNetController::run() {
  doSetup();

  return 0;
}

int
PNetController::doSetup() {

  // Router init
  initializeRouter( "router_0" );

  // Switch init
  cout << "Number of switches: ";
  int numSwitches;
  cin >> numSwitches;

  for( int i=0; i<numSwitches; i++ ) {
    cout << "Initializing Switch " << i << endl;
    switches.push_back( initializeSwitch( "switch_" + to_string( i ) ) );
  }

  return 0;
}

int
PNetController::initializeRouter( const string& id ) {
  routers.push_back( Router( id ) );

  return 0;
}

int
PNetController::initializeSwitch( const string& id ) {
  cout << "Number of ports: ";
  int numPorts;
  cin >> numPorts;

  cout << "[controller]: Initializing switch with " << numPorts << " ports" << endl;
  Switch sw = Switch( numPorts );

  return 0;
}
