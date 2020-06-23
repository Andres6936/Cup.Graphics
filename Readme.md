### Objective
The objective of this library is to avoid code duplication with C++.

### Problem Definition
Throughout my projects, it's common to have to write a class 
that defines a color, in components like red, green, blue and alpha.
Obviously it means writing the same properties and methods
for a class, leading to code repetition. Action to be avoided
at all costs.

### Downloads
This library is not designed for impressive performance 
(although this is also an aspect that I take into account 
when implementing the library), is designed to avoid duplicate code.

### How to Use
With the arrival of CMake 14, a script was added that allows you to get
from the internet, taking this into account the user [TheLartians](https://github.com/TheLartians)
decided to write a script for CMake that acts as a
packages. In my opinion, this marks a new step for C++ and CMake, allowing
work with libraries that are downloaded and updated without direct intervention
of the user.

### How to use
To use this library, you need the script written by [TheLartians](https://github.com/TheLartians),
named [CPM.cmake](https://github.com/TheLartians/CPM.cmake) (acronym for CMake
Package Manager). Add it to your project, for example, under the
`CMakeModules` and then in your `CMakeFiles.txt` write the following:

```cmake
Include(CMakeModules/CPM.cmake)

CPMAddPackage(
  NAME Cup.Graphics
  VERSION 2020.0505
  GITHUB_REPOSITORY Andres6936/Cup.Graphics
)
 
TARGET_LINK_LIBRARIES(<TARGET> PRIVATE Cup.Graphics)
```

My proposal for using the library within your code is to use encapsulation.

```cxx
using namespace Cup::Graphics;

Color color(233, 245, 132);

	assert(color.getRed() == 233);
	assert(color.getGreen() == 245);
	assert(color.getBlue() == 132);
	assert(color.getAlpha() == 255);

	color.setRed(56);
	color.setGreen(87);
	color.setBlue(156);
	color.setAlpha(69);

	assert(color.getRed() == 56);
	assert(color.getGreen() == 87);
	assert(color.getBlue() == 156);
	assert(color.getAlpha() == 69);

```
