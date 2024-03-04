#/bin/bash

mkdir -p build

cmake -S . -B build

pushd build

make

popd