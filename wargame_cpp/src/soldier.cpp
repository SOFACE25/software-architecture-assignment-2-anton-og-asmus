#include "soldier.hpp"

Soldier::Soldier(int health, int damage) : Unit(health), damage(damage)
{
}

//implementing the attack function from the class unit
void Soldier::attack(Unit &target)
{
    //implementing the attack function from the class unit. This function is called when a soldier attacks another unit
    //the soldier will deal damage to the target, and the target will lose health
    target.take_hit(damage);
}
void Soldier::heal(Unit &target)
{
    // This is a soldier, he can't heal, which is why, this functon is empty
}
