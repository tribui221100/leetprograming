from conan import ConanFile
from conan.tools.cmake import CMake

class MyLibConan(ConanFile):
    name = "mylib"
    version = "1.0"

    settings = "os", "compiler", "build_type", "arch"

    exports_sources = (
        "CMakeLists.txt",
        "src/*",
        "include/*"
    )

    generators = "CMakeToolchain", "CMakeDeps"

    def build(self):
        cm = CMake(self)
        cm.configure()
        cm.build()

    def package(self):
        cm = CMake(self)
        cm.install()

    def package_info(self):
        self.cpp_info.libs = ["mylib"]