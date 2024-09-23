# GCC Command option

[GCC 10.3 Command Options resources](https://gcc.gnu.org/onlinedocs/gcc-10.3.0/gcc/Option-Summary.html#Option-Summary)

| options | notes |
|--- |--- |
| | |
| [**Overral Options**](https://gcc.gnu.org/onlinedocs/gcc-10.3.0/gcc/Overall-Options.html#Overall-Options) | |
| `--help=<class>` | print help page for supported class i.e 'optimizer' |
| `-x` | specify language ex.: 'c', 'c-header' |
| `-c` | compile source file but not linking, stop after assemble stage |
| `-E` | stop after preprocessing stage |
| `-S` | stop after compilation stage |
| `-o` | specify output file name and path if any |
| `-spec` | specify spec file "TODO: not understand"|
| `-wrapper` | invoke all subcomman under wrapper "TODO: not understand"|
| | |
| [**C Dialect**](https://gcc.gnu.org/onlinedocs/gcc-10.3.0/gcc/C-Dialect-Options.html#C-Dialect-Options) | |
| `-std=<lang standard>` | specify language standard|
| | |
| [**Diagnostic Message**](https://gcc.gnu.org/onlinedocs/gcc-10.3.0/gcc/Diagnostic-Message-Formatting-Options.html#Diagnostic-Message-Formatting-Options) | |
| `-fmessage-length=n` | format error msg to fin n length|
| `-fdiagnostics-generate-patch` | print fix hint to stderr|
| | |
| [**Warning Options**](https://gcc.gnu.org/onlinedocs/gcc-10.3.0/gcc/Warning-Options.html#Warning-Options) | |
| `-fsyntax-only` | check syntax error only |
| `-fmax-errors=n` | limnit error to n error msg only |
| `-w` | inihibit all warning msg |
| `-Werror` | all warning become error |
| `-wall` | turn most of warning flag |
| `-Wextra` | turn extra warning msg |
| | |
| [**Debugging Options**](https://gcc.gnu.org/onlinedocs/gcc-10.3.0/gcc/Debugging-Options.html#Debugging-Options) | |
| | |
| [**Optimisation Options**](https://gcc.gnu.org/onlinedocs/gcc-10.3.0/gcc/Optimize-Options.html#Optimize-Options) | |

