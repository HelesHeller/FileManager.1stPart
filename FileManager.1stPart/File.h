#pragma once

#include "FileSystemElement.h"

class File : public FileSystemElement {
private:
    int size;

public:
    File(const std::string& name, int size);

    void showContent() const override;
    void create() override;
    void remove() override;
    void rename(const std::string& newName) override;
    void copyTo(const std::string& destination) const override;
    void moveTo(const std::string& destination) override;
    int getSize() const override;
    std::vector<FileSystemElement*> search(const std::string& mask) override;
};
