class CfgPatches
{
	class VanillaBases_Gear_Camping
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={ "DZ_Data", "DZ_Gear_Camping" };
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class BaseBuildingBase;

	class Fence: BaseBuildingBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Body
				{
					class Health
					{
						//hitpoints=100;
						hitpoints=500;
					};
				};
				class Wall_Base_Down
				{
					class Health
					{
						//hitpoints=12000;
						hitpoints=80000;
					};
				};
				class Wall_Base_Up: Wall_Base_Down {};
				class Wall_Wood_Down
				{
					class Health
					{
						//hitpoints=16000;
						hitpoints=80000;
					};
				};
				class Wall_Wood_Up: Wall_Wood_Down {};
				class Wall_Metal_Down
				{
					class Health
					{
						//hitpoints=21000;
						hitpoints=105000;
					};
				};
				class Wall_Metal_Up: Wall_Metal_Down {};
				class Wall_Platform
				{
					class Health
					{
						//hitpoints=18000;
						hitpoints=90000;
					};
				};
				class Wall_Platform_Stairs_Left: Wall_Platform {};
				class Wall_Platform_Stairs_Right: Wall_Platform {};
				class Wall_Barbedwire_1
				{
					class Health
					{
						//hitpoints=300;
						hitpoints=15000;
					};
				};
				class Wall_Barbedwire_2: Wall_Barbedwire_1 {};
				class Wall_Gate
				{
					class Health
					{
						//hitpoints=100;
						hitpoints=500;
					};
				};
				class Material_WoodenLogs
				{
					class Health
					{
						//hitpoints=500;
						hitpoints=2500;
					};
				};
				class Material_MetalWire
				{
					class Health
					{
						//hitpoints=200;
						hitpoints=1000;
					};
				};
			};
		};
	};
	class Watchtower: BaseBuildingBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Body
				{
					class Health
					{
						//hitpoints=100;
						hitpoints=500;
					};
				};
				class Material_L1_WoodenLogs
				{
					class Health
					{
						//hitpoints=500;
						hitpoints=2500;
					};
				};
				class Level_1_Stairs
				{
					class Health
					{
						//hitpoints=7500;
						hitpoints=37500;
					};
				};
				class Level_1_Wall_1_Base_Down
				{
					class Health
					{
						//hitpoints=12000;
						hitpoints=60000;
					};
				};
				class Level_1_Wall_1_Base_Up: Level_1_Wall_1_Base_Down {};
				class Level_1_Wall_1_Wood_Down
				{
					class Health
					{
						//hitpoints=16000;
						hitpoints=80000;
					};
				};
				class Level_1_Wall_1_Wood_Up: Level_1_Wall_1_Wood_Down {};
				class Level_1_Wall_1_Metal_Down
				{
					class Health
					{
						//hitpoints=21000;
						hitpoints=105000;
					};
				};
				class Level_1_Wall_1_Metal_Up: Level_1_Wall_1_Metal_Down {};
				class Level_1_Wall_1_Barbedwire_1
				{
					class Health
					{
						//hitpoints=300;
						hitpoints=15000;
					};
				};
				/*
				class Level_1_Wall_1_Barbedwire_2: Level_1_Wall_1_Barbedwire_1 {};
				class Level_1_Wall_2_Base_Down: Level_1_Wall_1_Base_Down {};
				class Level_1_Wall_2_Base_Up: Level_1_Wall_1_Base_Up {};
				class Level_1_Wall_2_Wood_Down: Level_1_Wall_1_Wood_Down {};
				class Level_1_Wall_2_Wood_Up: Level_1_Wall_1_Wood_Down {};
				class Level_1_Wall_2_Metal_Down: Level_1_Wall_1_Metal_Down {};
				class Level_1_Wall_2_Metal_Up: Level_1_Wall_1_Metal_Down {};
				class Level_1_Wall_2_Barbedwire_1: Level_1_Wall_1_Barbedwire_1 {};
				class Level_1_Wall_2_Barbedwire_2: Level_1_Wall_1_Barbedwire_1 {};
				class Level_1_Wall_3_Base_Down: Level_1_Wall_1_Base_Down {};
				class Level_1_Wall_3_Base_Up: Level_1_Wall_1_Base_Down {};
				class Level_1_Wall_3_Wood_Down: Level_1_Wall_1_Wood_Down {};
				class Level_1_Wall_3_Wood_Up: Level_1_Wall_1_Wood_Down {};
				class Level_1_Wall_3_Metal_Down: Level_1_Wall_1_Metal_Down {};
				class Level_1_Wall_3_Metal_Up: Level_1_Wall_1_Metal_Down {};
				class Level_1_Wall_3_Barbedwire_1: Level_1_Wall_1_Barbedwire_1 {};
				class Level_1_Wall_3_Barbedwire_2: Level_1_Wall_1_Barbedwire_1 {};
				class Material_L2_WoodenLogs: Material_L1_WoodenLogs {};
				class Level_2_Stairs: Level_1_Stairs {};
				class Level_2_Wall_1_Base_Down: Level_1_Wall_1_Base_Down {};
				class Level_2_Wall_1_Base_Up: Level_1_Wall_1_Base_Down {};
				class Level_2_Wall_1_Wood_Down: Level_1_Wall_1_Wood_Down {};
				class Level_2_Wall_1_Wood_Up: Level_1_Wall_1_Wood_Down {};
				class Level_2_Wall_1_Metal_Down: Level_1_Wall_1_Metal_Down {};
				class Level_2_Wall_1_Metal_Up: Level_1_Wall_1_Metal_Down {};
				class Level_2_Wall_2_Base_Down: Level_1_Wall_1_Base_Down {};
				class Level_2_Wall_2_Base_Up: Level_1_Wall_1_Base_Down {};
				class Level_2_Wall_2_Wood_Down: Level_1_Wall_1_Wood_Down {};
				class Level_2_Wall_2_Wood_Up: Level_1_Wall_1_Wood_Down {};
				class Level_2_Wall_2_Metal_Down: Level_1_Wall_1_Metal_Down {};
				class Level_2_Wall_2_Metal_Up: Level_1_Wall_1_Metal_Down {};
				class Level_2_Wall_3_Base_Down: Level_1_Wall_1_Base_Down {};
				class Level_2_Wall_3_Base_Up: Level_1_Wall_1_Base_Down {};
				class Level_2_Wall_3_Wood_Down: Level_1_Wall_1_Wood_Down {};
				class Level_2_Wall_3_Wood_Up: Level_1_Wall_1_Wood_Down {};
				class Level_2_Wall_3_Metal_Down: Level_1_Wall_1_Metal_Down {};
				class Level_2_Wall_3_Metal_Up: Level_1_Wall_1_Metal_Down {};
				class Material_L3_WoodenLogs: Material_L1_WoodenLogs {};
				class Level_3_Wall_1_Base_Down: Level_1_Wall_1_Base_Down {};
				class Level_3_Wall_1_Base_Up: Level_1_Wall_1_Base_Down {};
				class Level_3_Wall_1_Wood_Down: Level_1_Wall_1_Wood_Down {};
				class Level_3_Wall_1_Wood_Up: Level_1_Wall_1_Wood_Down {};
				class Level_3_Wall_1_Metal_Down: Level_1_Wall_1_Metal_Down {};
				class Level_3_Wall_1_Metal_Up: Level_1_Wall_1_Metal_Down {};
				class Level_3_Wall_2_Base_Down: Level_1_Wall_1_Base_Down {};
				class Level_3_Wall_2_Base_Up: Level_1_Wall_1_Base_Down {};
				class Level_3_Wall_2_Wood_Down: Level_1_Wall_1_Wood_Down {};
				class Level_3_Wall_2_Wood_Up: Level_1_Wall_1_Wood_Down {};
				class Level_3_Wall_2_Metal_Down: Level_1_Wall_1_Metal_Down {};
				class Level_3_Wall_2_Metal_Up: Level_1_Wall_1_Metal_Down {};
				class Level_3_Wall_3_Base_Down: Level_1_Wall_1_Base_Down {};
				class Level_3_Wall_3_Base_Up: Level_1_Wall_1_Base_Down {};
				class Level_3_Wall_3_Wood_Down: Level_1_Wall_1_Wood_Down {};
				class Level_3_Wall_3_Wood_Up: Level_1_Wall_1_Wood_Down {};
				class Level_3_Wall_3_Metal_Down: Level_1_Wall_1_Metal_Down {};
				class Level_3_Wall_3_Metal_Up: Level_1_Wall_1_Metal_Down {};
				*/
				class Level_3_Roof
				{
					class Health
					{
						//hitpoints=19000;
						hitpoints=95000;
					};
				};
			};
		};
	};
	class BarbedWire: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					//hitpoints=300;
					hitpoints=1500;
				};
			};
		};
	};
	class CombinationLock: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					//hitpoints=1500;
					hitpoints=7500;
				};
			};
		};
	};
	class CombinationLock4: CombinationLock
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					//hitpoints=1500;
					hitpoints=7500;
				};
			};
		};
	};
	class BarbedWireLocked: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					//hitpoints=300;
					hitpoints=1500;
				};
			};
		};
	};
	class CamoNet: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					//hitpoints=120;
					hitpoints=600;
				};
			};
		};
	};
};
