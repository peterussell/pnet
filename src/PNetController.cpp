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
  int numSwitches;
  cout << "Number of switches: ";
  cin >> numSwitches;

  for( int i=0; i<numSwitches; i++ ) {
    initializeSwitch( "switch_" + to_string( i ) );
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
  int numPorts = 10;
  routers[0].connectSwitch( Switch( id, numPorts ) );

  return 0;
}
