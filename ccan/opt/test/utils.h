#ifndef CCAN_OPT_TEST_UTILS_H
#define CCAN_OPT_TEST_UTILS_H
#include <ccan/opt/opt.h>
#include <stdbool.h>

bool parse_args(int *argc, char ***argv, ...);
extern char *err_output;

extern unsigned int test_cb_called;
char *test_noarg(void *arg);
char *test_arg(const char *optarg, void *arg);

extern struct opt_table short_table[];
extern struct opt_table long_table[];
extern struct opt_table long_and_short_table[];
extern struct opt_table subtables[];
#endif /* CCAN_OPT_TEST_UTILS_H */