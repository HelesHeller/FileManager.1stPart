#pragma once

#include "FileSystemElement.h"
#include <vector>

class Folder : public FileSystemElement {
private:
    std::vector<FileSystemElement*> content;

public:
    Folder(const std::string& name);
    ~Folder();

    void showContent() const override;
    void create() override;
    void remove() override;
    void rename(const std::string& newName) override;
    void copyTo(const std::string& destination) const override;
    void moveTo(const std::string& destination) override;
    int getSize() const override;
    std::vector<FileSystemElement*> search(const std::string& mask) override;

    void addElement(FileSystemElement* element);
};
