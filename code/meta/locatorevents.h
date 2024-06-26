#ifndef LOCATOR_EVENTS_H
#define LOCATOR_EVENTS_H


//HEY, when you add a new event, make sure to add a string for it's name too!!!

namespace LocatorEvent
{
    enum Event
    {
        FLAG,           //Capture the flag - Flag
        CAMERA_CUT,     //Used for static position cameras
        CHECK_POINT,    //Used by missions
        BASE,           //Capture the flag - Base
        DEATH,          //Death Zones!
        INTERIOR_EXIT,  //Leave an interior environment
        BOUNCEPAD,      // Bounce the character towards the locator.
        //
        // Trigger a change of ambient sound
        //
        AMBIENT_SOUND_CITY,
        AMBIENT_SOUND_SEASIDE,
        AMBIENT_SOUND_SUBURBS,
        AMBIENT_SOUND_FOREST,
        AMBIENT_KWIK_E_MART_ROOFTOP,
        AMBIENT_SOUND_FARM,
        AMBIENT_SOUND_BARN,
        AMBIENT_SOUND_POWERPLANT_EXTERIOR,
        AMBIENT_SOUND_POWERPLANT_INTERIOR,
        AMBIENT_SOUND_RIVER,

        AMBIENT_SOUND_CITY_BUSINESS,
        AMBIENT_SOUND_CONSTRUCTION,
        AMBIENT_SOUND_STADIUM,
        AMBIENT_SOUND_STADIUM_TUNNEL,
        AMBIENT_SOUND_EXPRESSWAY,
        AMBIENT_SOUND_SLUM,
        AMBIENT_SOUND_RAILYARD,
        AMBIENT_SOUND_HOSPITAL,

        AMBIENT_SOUND_LIGHT_CITY,
        AMBIENT_SOUND_SHIPYARD,
        AMBIENT_SOUND_QUAY,
        AMBIENT_SOUND_LIGHTHOUSE,
        AMBIENT_SOUND_COUNTRY_HIGHWAY,
        AMBIENT_SOUND_KRUSTYLU,
        AMBIENT_SOUND_DAM,

        AMBIENT_SOUND_FOREST_HIGHWAY,
        AMBIENT_SOUND_RETAINING_WALL_TUNNEL,
        AMBIENT_SOUND_KRUSTYLU_EXTERIOR,
        AMBIENT_SOUND_DUFF_EXTERIOR,
        AMBIENT_SOUND_DUFF_INTERIOR,

        AMBIENT_SOUND_STONE_CUTTER_TUNNEL,
        AMBIENT_SOUND_STONE_CUTTER_HALL,
        AMBIENT_SOUND_SEWERS,
        AMBIENT_SOUND_BURNS_TUNNEL,
        AMBIENT_SOUND_PP_ROOM_1,
        AMBIENT_SOUND_PP_ROOM_2,
        AMBIENT_SOUND_PP_ROOM_3,
        AMBIENT_SOUND_PP_TUNNEL_1,
        AMBIENT_SOUND_PP_TUNNEL_2,
        AMBIENT_SOUND_MANSION_INTERIOR,
        
        PARKED_BIRDS,
        
        WHACKY_GRAVITY,
        
        FAR_PLANE,

        AMBIENT_SOUND_COUNTRY_NIGHT,
        AMBIENT_SOUND_SUBURBS_NIGHT,
        AMBIENT_SOUND_FOREST_NIGHT,
        
        AMBIENT_SOUND_HALLOWEEN1,
        AMBIENT_SOUND_HALLOWEEN2,
        AMBIENT_SOUND_HALLOWEEN3,
        AMBIENT_SOUND_PLACEHOLDER3,
        AMBIENT_SOUND_PLACEHOLDER4,
        AMBIENT_SOUND_PLACEHOLDER5,
        AMBIENT_SOUND_PLACEHOLDER6,
        AMBIENT_SOUND_PLACEHOLDER7,
        AMBIENT_SOUND_PLACEHOLDER8,
        AMBIENT_SOUND_PLACEHOLDER9,

        GOO_DAMAGE,
        COIN_ZONE,
        LIGHT_CHANGE,
        TRAP,

        AMBIENT_SOUND_SEASIDE_NIGHT,
        AMBIENT_SOUND_LIGHTHOUSE_NIGHT,
        AMBIENT_SOUND_BREWERY_NIGHT,
        AMBIENT_SOUND_PLACEHOLDER10,
        AMBIENT_SOUND_PLACEHOLDER11,
        AMBIENT_SOUND_PLACEHOLDER12,
        AMBIENT_SOUND_PLACEHOLDER13,
        AMBIENT_SOUND_PLACEHOLDER14,
        AMBIENT_SOUND_PLACEHOLDER15,
        AMBIENT_SOUND_PLACEHOLDER16,
        
        SPECIAL, //This denotes the end of the regular events. Only the World builder
                 //Uses this, please add events before this that you want to show up as 
                 //normal info-less events, all events after this are specialy controlled
                 //in the worldbuilder.

        DYNAMIC_ZONE = SPECIAL, //This is used in a special locator only for dynamic loading.

        OCCLUSION_ZONE,

        CAR_DOOR,           //This is only used to detect when the player is close enough to a car.
        ACTION_BUTTON,      //This is for Object switches
        INTERIOR_ENTRANCE,  //This is for going into interiors
        GENERIC_BUTTON_HANDLER_EVENT,
		FOUNTAIN_JUMP,
        LOAD_PED_MODEL_GROUP,
        GAG,
        
        NUM_EVENTS
    };

    extern const char* const Name[NUM_EVENTS];
}

#endif
 