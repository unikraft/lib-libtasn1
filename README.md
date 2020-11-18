libtasn1 for Unikraft
=====================

This is the port of libtasn1 4.16.0 for Unikraft as external library.

libtasn1 depends on libc(e.g. `newlib`), so please ensure you add the
following line to the `LIBS` variable in the `Makefile`:

...$(UK_LIBS)/libtasn1:$(UK_LIBS)/newlib...

Using the root filesystem
-------------------------

We will use the 9pfs support for filesystems. To enable it, you'll need
to select the following menu options, all under "Library Configuration":
- `vfscore: VFS Core Interface`
- `Automatically mount a root filesysytem (/)` from `vfscore: Configuration`
- `9PFS` for `Default root filesystem` from `vfscore: Configuration`
- `devfs: devfs file system`
- `Mount /dev during boot` from `devfs: devfs file system`

With the 9pfs support enabled, all you have to do is to provide the right
Qemu parameters in order for Unikraft to mount the filesystem:
```
-fsdev local,id=myid,path=<some directory>,security_model=none \
-device virtio-9p-pci,fsdev=myid,mount_tag=rootfs,disable-modern=on,disable-legacy=off
```

Running libtasn1 test suite
---------------------------

For running the test cases: enable the `Build test suite` option in the
configuration menu, include `test_suite_glue.h` and call the
`libtasn1_test_main(int verbose)` function in your main application.
Also, please ensure that the `Default root filesystem` from 
`Library Configuration`->`vfscore: Configuration` is set to `9PFS` and use the
path of the tests folder (i.e. `build/libtasn1/origin/libtasn1-4.16.0/tests`).


Further information
-------------------

Please refer to the `README.md` as well as the documentation in the `doc/`
subdirectory of the main unikraft repository.
