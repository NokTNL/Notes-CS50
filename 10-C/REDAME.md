- A lot C files in this repo needs the `cs50` library installed in the system first you files can be compiled properly. Refer to the README in the `libcs50` on how to install it.
- To compile files:
  - Go to the directory of your file
  - Run e.g.:
    `make 0-hello LDLIBS="-lcs50"` **(without `.c` !!)**
  - File is compiled. Run:
    `./0-hello`
- If you see an error like: `tried: 'libcs50-11.0.2.dylib' (no such file)`, run this:

```
export DYLD_LIBRARY_PATH=/usr/local/lib:$DYLD_LIBRARY_PATH
```
