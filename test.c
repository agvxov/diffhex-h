// @BAKE gcc -o $*.out $@ -lchad -std=c23
#include <ctype.h>
#include <stdint.h>
#include <chad/slurp.h>
#define DIFFHEX_IMPLEMENTATION
#include "diffhex.h"

signed main(void) {
    size_t size1;
    size_t size2;
    char * buffer1 = read_file_get_size("ipsum1.txt", &size1);
    char * buffer2 = read_file_get_size("ipsum2.txt", &size2);

    auto opts = diffhex_defaults;
    opts.quads_per_line = 2;
    //opts.is_absolute_address = true;
    //opts.do_collapse_identical = true;
    //opts.color_match = "\033[35m";
    //diffhex(buffer1, size1, buffer2, size2, opts);
    diffhex(buffer2, size2, buffer1, size1, opts);

    return 0;
}
