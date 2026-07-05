// @BAKE gcc -o $*.out $@ -lchad -std=c23 -Wall -Wpedantic -Wextra
#include <chad/slurp.h>
#define DIFFHEX_IMPLEMENTATION
#include "diffhex.h"

signed main(void) {
    [[maybe_unused]] size_t size1;
    [[maybe_unused]] size_t size2;
    [[maybe_unused]] char * buffer1 = read_file_get_size("ipsum1.txt", &size1);
    [[maybe_unused]] char * buffer2 = read_file_get_size("ipsum2.txt", &size2);

    [[maybe_unused]] auto opts = diffhex_defaults;
    opts.quads_per_line = 2;
    //opts.is_absolute_address = true;
    //opts.do_collapse_identical = true;
    //opts.color_match = "\033[35m";
    //diffhex(buffer1, size1, buffer2, size2, opts);
    //diffhex(buffer2, size2, buffer1, size1, opts);

    dumphex(buffer1, size1, opts);

    return 0;
}
