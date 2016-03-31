#include "../include/PNetController.h"

#include <iostream>

PNetController::PNetController() {
  switches = vector<Switch>();
}

PNetController::~PNetController() { }

int
PNetController::run() {
  doSetup();

  bool isRunning = true;
  while( isRunning ) {
    isRunning = doCommand();
  }
  return 0;
}

int
PNetController::doSetup() {
  cout << "Welcome to PNet v0.0.1 setup." << endl;
  cout << "Type 'help' or '?' for help. Type 'quit' or 'q' to exit." << endl;

  int numSwitches = 2;

  // Router init
  initializeRouter( "router_0" );

  // Switch init
  for( int i=0; i<numSwitches; i++ ) {
    initializeSwitch( "switch_" + to_string( i ) );
  }

  // Node init
  initializeNodes( 2 );
  return 0;
}

bool
PNetController::doCommand() {
  cout << "pnet> ";

  string cmd;
  if( !getline( cin, cmd ) ) {
    return false;
  }

  int splitAt = cmd.find( " " );
  string cmdName = cmd.substr( 0, splitAt );
  string cmdParam = cmd.substr( splitAt+1, cmd.length() );

  // debug
  cout << "cmd name: " << cmdName << ", cmd param: " << cmdParam << ", splitAt: " << splitAt << endl;

  if( cmd.compare( "q" ) == 0 || cmd.compare( "quit" ) == 0 ) {
    return false;
  } else if( cmd.compare( "?" ) == 0 || cmd.compare( "help" ) == 0 ) {
    printHelp();
  } else if( cmdName.compare( "switch-to" ) == 0 ) {
    cout << "switching to " << cmdParam << endl;
  } else if( cmdName.compare( "pete" ) == 0 ) {
    cout << "muahahahahaha" << endl;
  } else {
    cout << "Unrecognized command" << endl;
  }

  return true;
}

void
PNetController::printHelp() {
  cout << "HELP!" << endl;
}

int
PNetController::initializeRouter( const string& id ) {
  routers.push_back( Router( id ) );
  return 0;
}

int
PNetController::initializeSwitch( const string& id ) {
  int numPorts = 2;
  routers[0].connectSwitch( Switch( id, numPorts ) );
  return 0;
}

int
PNetController::initializeNodes( const int nodesPerSwitch ) {
  cout << "[controller]: called initializeNodes (num: " << nodesPerSwitch << ")" << endl;

  cout << switches.size() << endl;
  for( vector<Switch>::iterator it = switches.begin(); it != switches.end(); ++it ) {
    // cout << it->get_id() << endl;
    cout << "Hello!" << endl;
  }
  return 0;
}
