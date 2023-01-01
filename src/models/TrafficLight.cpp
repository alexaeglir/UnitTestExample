/**
 ****************************************************************************
 * @file TrafficLight.hpp
 * @brief basic traffic light model
 * @author Alexandre Meier
 *
 * History:
 *
 * 2023.01.01   AM  Initial version
 *
 ****************************************************************************
 */

/* Includes -----------------------------------------------------------------*/
#include "TrafficLight.hpp"

namespace models
{
  lightColor_t
  TrafficLight::getCurrentLight (void) const
  {
    return m_lightColor;
  }

  void
  TrafficLight::setCurrentLight (const lightColor_t lightColor)
  {
    m_lightColor = lightColor;
  }
}


