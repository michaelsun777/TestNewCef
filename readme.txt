1 用源码编译 debug 版 libcef_dll_wrapper.a
    1.1或者直接将 cef源代码 cef_binary_132.0.4+ge3e90f9+chromium-132.0.6834.15_linux64_beta目录下的 libcef_dll目录复制到 3rd/cef/code/目录下。
    1.2放开CMakeLists.txt中 add_subdirectory(3rd/cef/code/libcef_dll) ，就可以直接编译Debug版 libcef_dll_wrapper.a静态库了
2 将cef源代码中 Debug目录中下的文件复制到目录运行目录下