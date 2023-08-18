#include <iostream>
#include "File.h"
#include "Folder.h"

int main() {
    Folder root("Root");

    Folder documents("Documents");
    Folder pictures("Pictures");
    Folder music("Music");

    root.addElement(&documents);
    root.addElement(&pictures);
    root.addElement(&music);

    File resume("resume.docx", 150);
    File familyPhoto("family.jpg", 300);
    File song("song.mp3", 10);

    documents.addElement(&resume);
    pictures.addElement(&familyPhoto);
    music.addElement(&song);

    root.showContent();

    return 0;
}
