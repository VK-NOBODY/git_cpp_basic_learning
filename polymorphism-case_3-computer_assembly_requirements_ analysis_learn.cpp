//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//抽象不同零件類
//抽象CPU類
class CPU {
public:
    virtual void calculate() = 0;

    virtual ~CPU() {}
};

//抽象顯示卡類
class VideoCard {
public:
    virtual void display() = 0;

    virtual ~VideoCard() {}
};

//抽象記憶體類
class Memory {
public:
    virtual void storage() = 0;

    virtual ~Memory() {}
};

//電腦類
class Computer {
public:
    Computer(CPU *temp_cpu, VideoCard *temp_video_card, Memory *temp_memory) {
        this->cpu_01 = temp_cpu;
        this->video_card_01 = temp_video_card;
        this->memory_01 = temp_memory;
    }

    void work() {
        cpu_01->calculate();
        video_card_01->display();
        memory_01->storage();
    }

    virtual ~Computer() {
        if (cpu_01 != nullptr) {
            delete cpu_01;
            cpu_01 = nullptr;
        }
        if (video_card_01 != nullptr) {
            delete video_card_01;
            video_card_01 = nullptr;
        }
        if (memory_01 != nullptr) {
            delete memory_01;
            memory_01 = nullptr;
        }
        cout << "Computer is destroyed" << endl;
    }

private:
    CPU *cpu_01;
    VideoCard *video_card_01;
    Memory *memory_01;
};

class IntelCPU : public CPU {
public:
    virtual void calculate() {
        cout << "Intel CPU is calculating" << endl;
    }
};

class IntelVideoCard : public VideoCard {
    virtual void display() {
        cout << "Intel VideoCard is displaying" << endl;
    }
};

class IntelMemory : public Memory {
public:
    virtual void storage() {
        cout << "Intel Memory is storing" << endl;
    }
};

class AMDVideoCard : public VideoCard {
    virtual void display() {
        cout << "AMD VideoCard is displaying" << endl;
    }
};

class AMDCPU : public CPU {
    virtual void calculate() {
        cout << "AMD CPU is calculating" << endl;
    }
};

class AMDMemory : public Memory {
    virtual void storage() {
        cout << "AMD Memory is storing" << endl;
    }
};

void test_01() {
    CPU *intelcpu = new IntelCPU();
    VideoCard *intelvideocard = new IntelVideoCard();
    Memory *intelmemory = new IntelMemory();
    Computer *computer_01 = new Computer(intelcpu, intelvideocard, intelmemory);
    (*computer_01).work();
    delete computer_01;
    computer_01 = nullptr;
    cout << endl;
    CPU *amdcpu = new AMDCPU();
    VideoCard *amdvideocard = new AMDVideoCard();
    Memory *amdmemory = new AMDMemory();
    Computer *computer_02 = new Computer(amdcpu, amdvideocard, amdmemory);
    computer_02->work();
    delete computer_02;
    computer_02 = nullptr;
}


int main() {
    test_01();
    return 0;
}