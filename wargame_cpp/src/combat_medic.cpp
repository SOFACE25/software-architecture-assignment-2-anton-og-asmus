#include "combat_medic.hpp"

CombatMedic::CombatMedic(int health, int damage) : Soldier(health, damage)
{
}

//implementing the virtual heal function
void CombatMedic::heal(Unit &target)
{
    //getting the current health of the target, that the medic is trying to heal
    int current_health = target.get_health();
 
    //if the target's current health <= 0, he is dead, and the medic can't heal him
    if (current_health <= 0)
    {
        //target is dead, which is why he can't be healed
    }
    //target is alive
    else
    {
        //healing the target, by increasing his health by +10
        target.set_health(current_health + 10);
    }
}