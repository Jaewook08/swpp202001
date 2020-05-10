## How to Build LLVM

Recommended setting:
- RAM: 8 GB or more
- HDD: More than 10GB free space
- OS:
  - Windows (please install WSL: https://docs.microsoft.com/en-us/windows/wsl/wsl2-install)
  - Linux
  - Mac OS

#### Prerequisites

We'll use https://github.com/aqjune/llvmscript. Please clone the repo first.

```
sudo apt install git
git clone git@github.com:aqjune/llvmscript.git
# If it raises permission denied error, try 'git clone https://github.com/aqjune/llvmscript.git' instead
cd llvmscript
```

See README.md in the repo to see & install required repositories.

Clone LLVM:
```
# Please edit "src" attribute at examples/llvm.json to specify where to clone LLVM project
python3 run.py clone --cfg examples/llvm.json
# NOTE: for project, please use practice/4.materials/llvm-10.0.json
```

Build LLVM:
```
python3 run.py build --cfg examples/llvm.json --type release --core <# of cores to use>
# --type:
#   release: fast build, has no debug info
#   debug: slow build, large binaries; can debug llvm with gdb/lldb
#   relassert: fast build, enables assertion checks
# NOTE: if it aborts due to insufficient memory space, please re-try with
#       smaller number of cores (it will restart compiling from the last status)
```

#### Troubleshootings

- If an error message says it cannot find distutil.spawn, please install `python3-distutils`
(Ubuntu: `apt install python3-distutils`)

- If it fails with this error message, please remove `compiler-rt` from `llvm.json`:

```
CMake Error at (llvm 경로)/compiler-rt/test/builtins/CMakeLists.txt:55 (message):
  Target clang_rt.builtins_x86_64_osx does not exist
```
