#pragma once
#include <ossia/detail/logger.hpp>
#include <functional>
#include <ossia_export.h>
#include <string>

namespace ossia
{
class OSSIA_EXPORT network_logger
{
public:
  /**
   * @brief inbound_logger Set log function for messages coming from
   * outside.
   */
  std::shared_ptr<spdlog::logger> inbound_logger;

  /**
   * @brief outbound_logger Set log function for messages going outside.
   */
  std::shared_ptr<spdlog::logger> outbound_logger;
};
}
