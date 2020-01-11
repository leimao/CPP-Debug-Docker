# CPP Debug Docker

## Introduction



## Docker

#### Create Docker Image

```bash
$ docker build -f cpp.Dockerfile -t cpp-debug:0.0.1 .
```

#### Start Docker Container

```bash
$ docker run -it --rm --cap-add=SYS_PTRACE --security-opt seccomp=unconfined -v $(pwd):/mnt cpp-debug:0.0.1
```

## Examples


```bash
$ mkdir build
$ cd build
$ cmake ..
$ make
```

## References

* [How to Debug Using GDB](https://cs.baylor.edu/~donahoo/tools/gdb/tutorial.html)
