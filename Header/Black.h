#ifndef _BLACK_H
#define _BLACK_H
#include <string>
#include <vector>
#include "Player.h"

class Black : public Player {
public:
    Black(std::string name, int size);
    std::vector<std::vector<int>> status() override;
    void PushStatus(std::vector<int> position) override;
    std::vector<std::vector<int>> ValidPosition() override;
    void PushValid(std::vector<int> position) override;
    bool Move(int x, int y) override;
    const std::string color() override;
    const std::string name() override;
    ~Black();

private:
    std::vector<std::vector<int>> status_;
    std::vector<std::vector<int>> valid_position_;
    std::string name_;
    const std::string color_;
};
#endif  // _BLACK_H