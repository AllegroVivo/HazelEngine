# Hazel Engine Tutorial Updates

### Video #`006` - Logging
If using the current version of spglog -- `(08/01/23)`:
* The log level '`fatal`' has been replaced with '`critical`'.

### Video #`007` - Premake
If using a modern version of Premake -- `(08/01/23)`
* Your '`GenerateProjects.bat`' cmd line argument will not be '`vs2017`' but instead is '`vs2022`' (or whichever).

### Video #`011` - Window Abstraction & GLFW
If using a more current version of GLFW -- `(08/01/23)`
*  You must include '`dwmapi.lib`' the '`files`' section of the '`Hazel`' project in your main solution's `premake5.lua` file. 

### Video #`015` - ImGui
If using the current version of IMGui -- `(08/01/23)`:
* '`imgui_impl_opengl3.h`', '`imgui_impl_opengl.h`', '`imgui_impl_glfw.cpp`' & '`imgui_impl_glfw.h`' are now located in the `imgui/backends` directory.
* '`imgui_tables.cpp`' must be added to the '`files`' section of the ImGui premake5.lua file