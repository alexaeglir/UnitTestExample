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
#ifndef TRAFFIC_LIGHT_HPP
#define TRAFFIC_LIGHT_HPP

namespace models
{

  typedef enum
  {
    LIGHT_COLOR_Red = 0u,
    LIGHT_COLOR_Yellow,
    LIGHT_COLOR_Green,
    LIGHT_COLOR_Off,
    LIGHT_COLOR_COUNT
  } lightColor_t;

  class TrafficLight
  {
  private:
    lightColor_t m_lightColor;

  public:
    TrafficLight():m_lightColor(LIGHT_COLOR_Off){};

    lightColor_t
    getCurrentLight (void) const;

    void
    setCurrentLight (const lightColor_t lightColor);

  };
}
#endif /* TRAFFIC_LIGHT_HPP */
