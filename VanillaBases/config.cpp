class CfgPatches
{
  class VanillaBases
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={ "DZ_Data", "DZ_Scripts" };
  };
};

class CfgMods
{
  class VanillaBases
  {
    dir="VanillaBases";
    hideName=0;
    hidePicture=0;
    extra=0;
    name="VanillaBases";
    picture="VanillaBases\data\picture.paa";
    logoSmall="VanillaBases\data\logoSmall.paa";
    logo="VanillaBases\data\logo.paa";
    logoOver="VanillaBases\data\logo.paa";
    action="https://steamcommunity.com/sharedfiles/filedetails/?id=3638011793";
    credits="moldypenguins";
    author="moldypenguins";
    authorID="76561198312711389";
    version="1.1";
    type="mod";
    dependencies[]={};
    class defs
    {
      class engineScriptModule
      {
        value="";
        files[]={ "VanillaBases\scripts\1_core" };
      };
    }
  };
};
