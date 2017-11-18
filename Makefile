compile:
	rm -r build && mkdir build && cd build && /Applications/CLion.app/Contents/bin/cmake/bin/cmake --target all -- -j 2 .. && make cfony && make cfony_tests
run:
	./cfony
run-tests:
	./cfony_tests
