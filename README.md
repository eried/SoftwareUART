In my project, [Dirk Kaar's version](https://www.arduino.cc/reference/en/libraries/espsoftwareserial/) of Peter Lerup's SoftwareSerial was producing constant ESP32 errors on high speed bauds, errors like:

```
Guru Meditation Error: Core  1 panic'ed (LoadProhibited). Exception was unhandled.
```

This simpler library adaptation by [junhuanchen](https://github.com/junhuanchen/Esp32-SoftwareSerial) was not. This is just a renaming to avoid conflicts. I am using it with a bigger buffer on higher bauds:

```cpp
#include <SoftwareUART.h>
SoftwareUART MySerial(17, 19, false, 1024);

void setup() {
  MySerial.begin(115200);
}

void loop() {
  // stuff
}
```
