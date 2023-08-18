#include "Folder.h"

Folder::Folder(const std::string& name) : FileSystemElement(name) {}

Folder::~Folder() {
    for (FileSystemElement* element : content) {
        delete element;
    }
}

void Folder::showContent() const {
    // ...
}

void Folder::create() {
    // ...
}

void Folder::remove() {
    // ...
}

void Folder::rename(const std::string& newName) {
    // ...
}

void Folder::copyTo(const std::string& destination) const {
    // ...
}

void Folder::moveTo(const std::string& destination) {
    // ...
}

int Folder::getSize() const {
    int totalSize = 0;
    for (FileSystemElement* element : content) {
        totalSize += element->getSize();
    }
    return totalSize;
}

std::vector<FileSystemElement*> Folder::search(const std::string& mask) {
    // ...
}

void Folder::addElement(FileSystemElement* element) {
    content.push_back(element);
}
