#include "File.h"

File::File(const std::string& name, int size) : FileSystemElement(name), size(size) {}

void File::showContent() const {
    // ...
}

void File::create() {
    // ...
}

void File::remove() {
    // ...
}

void File::rename(const std::string& newName) {
    // ...
}

void File::copyTo(const std::string& destination) const {
    // ...
}

void File::moveTo(const std::string& destination) {
    // ...
}

int File::getSize() const {
    return size;
}

std::vector<FileSystemElement*> File::search(const std::string& mask) {
    // ...
}
