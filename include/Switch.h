#ifndef SWITCH_H
#define SWITCH_H

#include "Node.h"
#include <vector>
#include <string>
using namespace std;

class Switch {
  public:
    Switch( const string& id, int numPorts );
    const string& get_id();

  private:
    int attachNode( Node n );

    string id;
    int numPorts;
    vector<Node> nodes;
};

#endif
