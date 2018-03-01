
class CfgPatches
{
	class caf_rotary_wing
	{
		units[] = 
		{
		    "CAF_CH147F_Unarmed",
		    "CAF_CH147F_M134",
		    "CAF_CH147F_M134_M240"
		};
		weapons[] = {};
		requiredVersion = 1.7.5.5;
		requiredAddons[] = 
		{
		    "A3_Air_F", 			
		    "A3_Characters_F",
			"A3_Weapons_F",
			"A3_Anims_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Air_F_Beta"
		};
	};
};
class CfgVehicleClasses
{
	class CH47_CH_147F
	{
		displayName = "Chinook Pack";
	};
};	
class Mode_SemiAuto;
class Mode_Burst;
class DefaultEventhandlers;
class CfgWeapons
{
    class M134_minigun;
    class MGun;
    class M134_minigun_1: M134_minigun
    {
        displayName = "M134 Minigun";
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "machinegun1";
                positionName = "muzzle_1";
                directionName = "chamber_1";
            };
            class effect1
            {
                positionName = "eject_1"; //I added these to the model (just 1 memory point)
                directionName = "eject_1_dir"; //I added this as well
                effectName = "MachineGunCartridge";
            };
        };
        muzzlePos = "chamber_1";
        muzzleEnd = "muzzle_1";
        cartridgePos = "eject_1";
        cartridgeVel = "eject_1_dir";
        selectionFireAnim = "zasleh";
    };
    class M134_minigun_2: M134_minigun
    {
		displayName = "M134 Minigun";	
        class GunParticles
        {
            class SecondEffect
            {
                effectName = "machinegun1";
                positionName = "muzzle_2";
                directionName = "chamber_2";
            };
            class effect2
            {
                positionName = "eject_2";
                directionName = "eject_2_dir";
                effectName = "MachineGunCartridge";
            };
        };
        muzzlePos = "chamber_2";
        muzzleEnd = "muzzle_2";
        cartridgePos = "eject_2";
        cartridgeVel = "eject_2_dir";
        selectionFireAnim = "zasleh_1";		
    };
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CH47_Cargo_EP1 = "CH47_Cargo_EP1";
		CH47_Cargo01_EP1 = "CH47_Cargo01_EP1";
		CH47_Cargo02_EP1 = "CH47_Cargo02_EP1";
		CH47_Cargo03_EP1 = "CH47_Cargo03_EP1";
		CH47_Gunner_EP1 = "CH47_Gunner_EP1";
		CH47_Gunner01_EP1 = "CH47_Gunner01_EP1";
		CH47_Pilot_EP1 = "CH47_Pilot_EP1";			
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;	
		class CH47_Cargo_EP1: Crew
		{
			file = "caf_rotary_wing_c\anim\CH47_Cargo";
			interpolateTo[] = {"CH47_KIA_Cargo_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Cargo_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "caf_rotary_wing_c\anim\CH47_KIA_Cargo";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class CH47_Cargo01_EP1: Crew
		{
			file = "caf_rotary_wing_c\anim\CH47_Cargo01";
			interpolateTo[] = {"CH47_KIA_Cargo01_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "caf_rotary_wing_c\anim\CH47_KIA_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class CH47_Cargo02_EP1: Crew
		{
			file = "caf_rotary_wing_c\anim\CH47_Cargo02";
			interpolateTo[] = {"CH47_KIA_Cargo02_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Cargo02_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "caf_rotary_wing_c\anim\CH47_KIA_Cargo02";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class CH47_Cargo03_EP1: Crew
		{
			file = "caf_rotary_wing_c\anim\CH47_Cargo03";
			interpolateTo[] = {"CH47_KIA_Cargo03_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Cargo03_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "caf_rotary_wing_c\anim\CH47_KIA_Cargo03";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		class CH47_Pilot_EP1: Crew
		{
			file = "caf_rotary_wing_c\anim\CH47_Pilot";
			connectTo[] = {"CH47_KIA_Pilot_EP1", 1};
			speed = 1e+010;
		};
		class CH47_KIA_Pilot_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "caf_rotary_wing_c\anim\CH47_KIA_Pilot";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CH47_Gunner_EP1: Crew
		{
			file = "caf_rotary_wing_c\anim\CH47_Gunner02";
			connectTo[] = {"CH47_KIA_Gunner01_EP1",	1};
			speed = 1e+010;
		};
		class CH47_KIA_Gunner_EP1: DefaultDie
		{
			actions="DeadActions";
			file="caf_rotary_wing_c\anim\CH47_KIA_Gunner";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class CH47_Gunner01_EP1: Crew
		{
			file = "caf_rotary_wing_c\anim\CH47_Gunner";
			connectTo[] = {"CH47_KIA_Gunner01_EP1",	1};
			speed = 1e+010;
		};
		class CH47_KIA_Gunner01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "caf_rotary_wing_c\anim\CH47_KIA_Gunner01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};	
	};
};