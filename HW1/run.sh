make clean
make
make -C obj_dir -f Vtest_top.mk
./obj_dir/Vtest_top ./testSource/test.bin
