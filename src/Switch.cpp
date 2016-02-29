#include "../include/Switch.h"
#include "../include/Port.h"

#include <iostream>
using namespace std;

Switch::Switch( int numPorts ) {
  cout << "[switch]: Creating switch with " << numPorts << " ports" << endl;

  // Initilize the ports collection & add the ports to it
  ports = vector<Port>();
  for( int i=0; i<numPorts; i++ ) {
    ports.push_back( Port( "test" + to_string( i+1 ) ) );
  }
}
