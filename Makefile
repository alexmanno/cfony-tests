compile:
	rm -r build && mkdir build && cd build && /Applications/CLion.app/Contents/bin/cmake/bin/cmake --target all -- -j 2 .. && make cfony && make cfony_tests
run:
	build/cfony
run-tests:
	build/cfony_tests
crun: compile run
crun-tests: compile run-tests
