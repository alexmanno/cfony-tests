make-build:
	@rm -r build && mkdir build

compile-cfony-general: make-build
	cd build && cmake --target all -- -j 2 ..

compile-cfony: compile-cfony-general
	cd build && make cfony

compile-cfony-tests: compile-cfony-general
	cd build && make cfony_tests

compile-all: compile-cfony compile-cfony-tests

run:
	build/cfony

run-tests:
	build/cfony_tests

crun: compile-all run
crun-tests: compile-all run-tests
