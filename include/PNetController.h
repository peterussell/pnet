#ifndef PNET_CONTROLLER_H
#define PNET_CONTROLLER_H

#include "Router.h"
#include "Switch.h"

#include <vector>
#include <string>
using namespace std;

class PNetController {
  public:
    PNetController();
    ~PNetController();

    int doSetup();
    int run();

  private:
    int initializeSwitch( const string& id );
    int initializeRouter( const string& id );

    vector<Router> routers;
    vector<Switch> switches;
};

#endif
