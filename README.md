# CPP Debug Docker

## Docker

## Install

```bash
docker build -f cpp.Dockerfile -t cpp-debug:0.0.1 .
```

```bash
docker run -it --rm --cap-add=SYS_PTRACE --security-opt seccomp=unconfined -v $(pwd):/mnt cpp-debug:0.0.1
```


## References

* [How to Debug Using GDB](https://cs.baylor.edu/~donahoo/tools/gdb/tutorial.html)

* [C/C++: How do you set GDB debug flag (-g) with cmake?](https://bytefreaks.net/programming-2/cc-how-do-you-set-gdb-debug-flag-g-with-cmake)