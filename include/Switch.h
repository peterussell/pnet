#ifndef SWITCH_H
#define SWITCH_H

#include "Port.h"
#include <vector>
using namespace std;

class Switch {
  public:
    Switch( int numPorts );

  private:
    int attachPort( Port p );

    vector<Port> ports;
};

#endif
