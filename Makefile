CORES := $(shell nproc)
JOBS := $(shell expr $(CORES) - 1)

build_dir := build-ExportAPI

build:
	cmake -S ExportAPI -B $(build_dir) -DCMAKE_BUILD_TYPE=Release
	cmake --build $(build_dir) -j $(JOBS)

.PHONY: build