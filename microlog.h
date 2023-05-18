/*====================================================================================================================*\
 * MIT License
 *
 * Copyright (c) 2023 Pawel Kusinski
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
\*====================================================================================================================*/

#ifndef _MICROLOG_H_
#define _MICROLOG_H_

/* Include necessary headers here and define the PRINT alias
 * for a printf-like function (e.g., printf).
 */
#include <stdio.h>
#define PRINT printf

#define LOG_LEVEL_DBG     0
#define LOG_LEVEL_INF     1
#define LOG_LEVEL_WRN     2
#define LOG_LEVEL_ERR     3
#define LOG_LEVEL_NO_LOGS 4

/* Set the desired log level here or set it to LOG_LEVEL_NO_LOGS
 * to disable logging code in the final binary.
 */
#define LOG_LEVEL LOG_LEVEL_INF

#if LOG_LEVEL > LOG_LEVEL_DBG
#define DBG(msg, ...)
#else
#define DBG(msg, ...)\
do { \
    PRINT("DBG: %s:%d | " msg, __FILE__, __LINE__, ## __VA_ARGS__);\
    PRINT("\r\n");\
} while (0)
#endif

#if LOG_LEVEL > LOG_LEVEL_INF
#define INF(msg, ...)
#else
#define INF(msg, ...)\
do { \
    PRINT("INF: %s:%d | " msg, __FILE__, __LINE__, ## __VA_ARGS__);\
    PRINT("\r\n");\
} while (0)
#endif

#if LOG_LEVEL > LOG_LEVEL_WRN
#define WRN(msg, ...)
#else
#define WRN(msg, ...)\
do { \
    PRINT("WRN: %s:%d | " msg, __FILE__, __LINE__, ## __VA_ARGS__);\
    PRINT("\r\n");\
} while (0)
#endif

#if LOG_LEVEL > LOG_LEVEL_ERR
#define ERR(msg, ...)
#else
#define ERR(msg, ...)\
do { \
    PRINT("ERR: %s:%d | " msg, __FILE__, __LINE__, ## __VA_ARGS__);\
    PRINT("\r\n");\
} while (0)
#endif

#endif
