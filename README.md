# repo-bin2 — binary_two

![build](https://github.com/Composable-Build/repo-bin2/actions/workflows/build.yml/badge.svg)

## Build local
```bash
cmake -S . -B build -DVERSION_MAJOR=1 -DVERSION_MINOR=0 -DVERSION_PATCH=0 -DVERSION_BUILD=0
cmake --build build
./build/binary_two --version
```
## Tests
```bash
./build/tests_bin2
```
## Forcer l'échec des tests
Dans `tests/test_config.h`, passer `TEST_SHOULD_FAIL` à `1`.
## Créer une release
```bash
git tag v1.0.0 && git push origin v1.0.0
```
