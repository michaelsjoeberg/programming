#include <stdbool.h>

// define and initialise boolean variables
bool T = true;
bool F = false;

// and, or
T || F                  // 1
T && (T && F)           // 0

// not
!T                      // 0
!(!T)                   // 1

// equality
1 == 2                  // 0
1 != 2                  // 1
1 > 2                   // 0
1 < 2                   // 1
1 >= 2                  // 0
1 <= 2                  // 1