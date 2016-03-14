#ifndef ROUTER_H
#define ROUTER_H

#include "Port.h"

#include <string>
#include <vector>
using namespace std;

class Router {
  public:
    Router( const string& id );

  private:
    string id;
    vector<Port> ports;

};

#endif
