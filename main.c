#include <assert.h>
#include "battery.h"

void runTests() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));     // Temperature and SOC both out of range
  assert(!batteryIsOk(25, 85, 0.7));   // SOC out of range
  assert(!batteryIsOk(25, 70, 0.9));   // Charge rate out of range
  assert(!batteryIsOk(-1, 70, 0.7));   // Temperature out of range (low)
  assert(!batteryIsOk(25, 10, 0.7));   // SOC out of range (low)
}

int main() {
  runTests();
  printf("All tests passed!\n");
  return 0;
}
