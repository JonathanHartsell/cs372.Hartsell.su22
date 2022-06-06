//test.h


#ifndef TEST_H
#define TEST_H

#include <stdio.h>

#ifndef TEST_DEBUG
#define TEST_DEBUG 0
#endif

int status;

void running(const char *format, ...);
void testing(const char *format, ...);
void failure(const char *format, ...);

#endif /* TEST_H */
© 2022 GitHub, Inc.
Terms
