/**
 ****************************************************************************
 * @file main.cpp
 * @brief entry point for the cmake/google test testing
 * @author Alexandre Meier
 *
 * History:
 *
 * 2022.12.27   AM  Initial version
 *
 ****************************************************************************
 */
#include <iostream>
#include "models/TrafficLight.hpp"


using namespace models;
int
main (int argc, char *argv[])
{
  TrafficLight myTrafficLight;

  myTrafficLight.setCurrentLight(LIGHT_COLOR_Yellow);

  std::cout << "Hello World" << myTrafficLight.getCurrentLight() << std::endl;
  return 0u;
}
