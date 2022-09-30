# What is a C Static Library?
In the C programming language, a static library is a compiled object file containing all symbols required by the main program to operate (functions, variables etc.) as opposed to having to pull in separate entities.

Static libraries aren’t loaded by the compiler at run-time; only the executable file need be loaded. Static library object files instead are loaded near the end of compilation during its linking phase.

Using a static library means only one object file need be pulled in during the linking phase. This contrasts having the compiler pull in multiple object files (one for each function etc) during linking. The benefit of using a static library is that the functions and other symbols loaded into it are indexed. This means instead of having to look for each entity on separate parts of the disk, the program need only reference a single single archived object (.a) file that has ordered the entities together. As a consequence of having one ordered object file, the program linking this library can load much faster.

![How to create static library](https://media-exp1.licdn.com/dms/image/C4E12AQEs4ns-bpr-Bg/article-inline_image-shrink_1000_1488/0/1602441957708?e=1669852800&v=beta&t=1PzgQ1WdDdeMbQJZcJziYkyQI2Bscs-AnB1vJWHCpM0)
