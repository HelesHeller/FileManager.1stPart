#pragma once

#include <string>
#include <vector>

class FileSystemElement {
protected:
    std::string name;

public:
    FileSystemElement(const std::string& name);
    virtual ~FileSystemElement();

    virtual void showContent() const = 0;
    virtual void create() = 0;
    virtual void remove() = 0;
    virtual void rename(const std::string& newName) = 0;
    virtual void copyTo(const std::string& destination) const = 0;
    virtual void moveTo(const std::string& destination) = 0;
    virtual int getSize() const = 0;
    virtual std::vector<FileSystemElement*> search(const std::string& mask) = 0;
};
