#include <iostream>

using namespace std;

// 상속성

//객체지향
// - 상속성
// - 은닉성
// - 다형성


// 상속  부모-> 자식에게 유산을 물려주는것
// 생성자(n)/ 소멸자(1)

class Player
{
public:
    Player()
    {
        cout << "Player() 생성자 호출" << endl;
    }
    ~Player()
    {
        cout << "Player() 소멸자 호출" << endl;
    }
    void Move() { cout << "Player move 호출" << endl; }
    void Attack() { cout << "Player attack 호출" << endl; }
    void Die() { cout << "Player die 호출" << endl; }

public:
    int mHP;
    int mAttack;
    int mDefense;
};

class Knight : public Player
{
public:
    Knight()
    {
        cout << "Knight() 생성자 호출" << endl;
    }
    ~Knight()
    {
        cout << "Knight() 생성자 호출" << endl;
    }
    // 재정의 
    void Move() { cout << "Knight move 호출" << endl; }
public:
    int mStamina;
};

class Mage : public Player
{
public:
    int mMP;
};

int main()
{
    Knight k;
    k.mHP = 100;
    k.mAttack = 10;
    k.mDefense = 5;
    k.mStamina = 50;

    k.Move();
    k.Player::Move();

    k.Attack();
    k.Die();
}