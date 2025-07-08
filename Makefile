build_dir := build-ExportAPI

build:
	cmake -S ExportAPI -B $(build_dir) -DCMAKE_BUILD_TYPE=Release
	cmake --build $(build_dir)

.PHONY: build