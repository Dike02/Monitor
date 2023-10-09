#include "processor.h"
#include "linux_parser.h"

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() { 
  long total = LinuxParser::Jiffies();
  long active = LinuxParser::ActiveJiffies();
  return static_cast<float>(active) / total;
}