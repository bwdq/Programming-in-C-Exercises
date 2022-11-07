#include <check.h>
#include "tmc-check.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "../src/source.h"


START_TEST(test_line_count) {   
    char *files[] = {"nonexistent.txt", "empty.txt", "oneline.txt", "lines.txt", "rfc791.txt"};
    int results[] = {-1, 0, 1, 7, 2887};
    int i, ret;
    for (i = 0; i < 5; i++) {
        ret = line_count(files[i]);
        fail_unless(ret == results[i], "Should have returned %d for file %s. You returned %d.", results[i], files[i], ret);
    }
}
END_TEST

int main(int argc, const char *argv[])
{
    srand((unsigned)time(NULL));
	Suite *s = suite_create("lineCount");
	tmc_register_test(s, test_line_count, "linecount");
	return tmc_run_tests(argc, argv, s);
}
