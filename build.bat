@echo off
if "%1"=="-c" (
	rmdir build /S /Q
	mkdir build
	cmake -S . -B build
)
pushd build
make
popd
