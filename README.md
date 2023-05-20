# MicroLog - lightweight logging system for small embedded systems

MicroLog is a simple and lightweight logging system for small embedded systems. It provides a convenient way to add logging capabilities to your embedded projects without sacrificing performance or consuming excessive resources. This code can serve as a starting point for defining your own log macros or customizing it to suit your specific needs. You can define your own log levels, change the logging output format, or redirect logs to different destinations.

## Usage

1. Include the `microlog.h` header file in your C project.

```C
#include "microlog.h"
```

2. Define the `PRINT` macro to point to a printf-like function that suits your needs. By default, it is set to `printf`.

```C
#define PRINT printf
```

3. Set the desired log level in the `LOG_LEVEL` macro. The available log levels are `LOG_LEVEL_DBG`, `LOG_LEVEL_INF`, `LOG_LEVEL_WRN`, `LOG_LEVEL_ERR`, and `LOG_LEVEL_NO_LOGS`. Setting `LOG_LEVEL_NO_LOGS` disables logging code in the final binary.

```C
#define LOG_LEVEL LOG_LEVEL_INF
```

4. Use the logging macros to output log messages at different levels in your code:

- `DBG`: For debug-level messages.
- `INF`: For informational messages.
- `WRN`: For warning messages.
- `ERR`: For error messages.

```C
DBG("Debug message: %d", value);
INF("Information: %s", message);
WRN("Warning: %d", code);
ERR("Error: %s", error_message);
```

5. Customize the logging behavior as needed. You can define your own log macros, modify the `PRINT` macro to change the logging output, or redirect logs to a different destination (e.g., a file, serial port).

## Example

Here's a simple example that demonstrates the usage of MicroLog:
```C
#include <stdio.h>
#include "microlog.h"

int main() {
    int value = 42;
    DBG("Debug message: %d", value);
    INF("Information: Hello, MicroLog!");
    WRN("Warning: Something unexpected happened!");
    ERR("Error: Oops, an error occurred!");

    return 0;
}
```
Output:
```
INF: microlog_test.c:7 | Information: Hello, MicroLog!
WRN: microlog_test.c:8 | Warning: Something unexpected happened!
ERR: microlog_test.c:9 | Error: Oops, an error occurred!
```
## License

MicroLog is released under the MIT License.

## Contributing

Contributions are welcome! If you have any suggestions, bug reports, or feature requests, please open an issue or submit a pull request.
