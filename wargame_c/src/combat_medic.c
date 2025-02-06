#include "combat_medic.h"

void combat_medic_heal(Unit *self, Unit *target)
{
    //getting the current health of the target, that the medic is trying to heal
    //if the target is dead, then the medic can't heal him. Target is dead if health is less than OR equal to 0
    if (unit_get_health(target) <= 0)
    {
        //target is dead, and can therefore not be healed
        printf("He is gone...");
    }
    else
    {   
        //target is alive, and can therefore be healed
        printf("Hang in there!");
        unit_set_health(target, unit_get_health(target) + 10);
    }
}

void make_combat_medic(CombatMedic *self, int health, int damage)
{
    make_soldier(&self->inherited, health, damage);
    self->inherited.inherited.vt->heal_target = combat_medic_heal;
}
