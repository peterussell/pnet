#include "../include/Switch.h"

#include <iostream>
using namespace std;

Switch::Switch( const string& id,
                int numPorts )
                : id( id ), numPorts( numPorts )
{
  nodes = vector<Node>();
  cout << "[switch]: initialized " << id << " (" << numPorts << " ports)" << endl;
}

const string&
Switch::get_id() {
  return id;
}
