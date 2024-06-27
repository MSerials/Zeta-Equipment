#include <list>
#include <utility>
#include <string>

std::list<std::pair<std::string, int>> Data;
int main(){
    Data.push_back(std::pair<std::string, int>("dog",2));
    Data.push_back(std::pair<std::string, int>("man",3));

    auto it = std::find_if(Data.begin(), Data.end(), [](const std::pair<std::string, int>& p) { return p.first == "man"; });
    if (it != Data.end()) {
        std::cout << "Found man!" << std::endl;
    } else {
        std::cout << "Man not found." << std::endl;
    }

    if (it != Data.end()) {
        it->second = 4;
    }
}

ui->label_History

