# Diffhex
> Hex diffs and dumps of arrays in a header-only-library.

## How it looks
![diffhex.png](diffhex.png)

## Interface
```c
// Print hex diff comparable to the output of dhex
extern
void diffhex(
    const void * buffer1,
    size_t size1,
    const void * buffer2,
    size_t size2,
    diffhex_options_t options
);

// Alias for diffhex(a, a), effectively creating a dump
static inline
void dumphex(
    const void * buffer,
    size_t size,
    diffhex_options_t options
);
```

`diffhex_options_t` allows you to:
* define your own colors
* change the print callback
* use the objects concrete address
* collapse identical lines
* have more or less byte\*8 columns on one line

For more details, consult the header.
