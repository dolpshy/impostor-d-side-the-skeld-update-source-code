#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ae240c01d039da8e_8_new,"Character","new",0x74bf54fb,"Character.new","Character.hx",8,0xf073a2d5)
static const int _hx_array_data_e3a4bb89_2[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_e3a4bb89_3[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_4[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_5[] = {
	(int)0,(int)1,(int)2,(int)3,
};
static const int _hx_array_data_e3a4bb89_6[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,
};
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_197_update,"Character","update",0x0e18944e,"Character.update","Character.hx",197,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_225_dance,"Character","dance",0xde4da48e,"Character.dance","Character.hx",225,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_242_playAnim,"Character","playAnim",0xed2bd3aa,"Character.playAnim","Character.hx",242,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_263_addOffset,"Character","addOffset",0x6dc9376f,"Character.addOffset","Character.hx",263,0xf073a2d5)

void Character_obj::__construct(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            		 ::Dynamic isPlayer = __o_isPlayer;
            		if (::hx::IsNull(__o_isPlayer)) isPlayer = false;
            	HX_GC_STACKFRAME(&_hx_pos_ae240c01d039da8e_8_new)
HXLINE( 222)		this->danced = false;
HXLINE(  15)		this->holdTimer = ((Float)0);
HXLINE(  13)		this->curCharacter = HX_("bf",c4,55,00,00);
HXLINE(  12)		this->isPlayer = false;
HXLINE(  10)		this->debugMode = false;
HXLINE(  20)		super::__construct(x,y,null());
HXLINE(  22)		this->animOffsets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  23)		this->curCharacter = character;
HXLINE(  24)		this->isPlayer = ( (bool)(isPlayer) );
HXLINE(  25)		this->set_antialiasing(true);
HXLINE(  27)		::String _hx_switch_0 = this->curCharacter;
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE(  60)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/regularbf",3b,8a,92,ac)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d));
HXDLIN(  60)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/regularbf",3b,8a,92,ac)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("shared",a5,5e,2b,1d))));
HXLINE(  61)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE(  62)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE(  63)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE(  64)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE(  65)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE(  66)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE(  67)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE(  68)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE(  69)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE(  70)			this->animation->addByPrefix(HX_("hey",dc,42,4f,00),HX_("BF HEY",60,1e,f8,c6),24,false,null(),null());
HXLINE(  72)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("BF dies",0f,cb,bf,64),24,false,null(),null());
HXLINE(  73)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("BF Dead Loop",04,f4,36,2f),24,true,null(),null());
HXLINE(  74)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("BF Dead confirm",80,6b,f9,23),24,false,null(),null());
HXLINE(  76)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("BF idle shaking",53,d0,da,8d),24,null(),null(),null());
HXLINE(  78)			this->addOffset(HX_("idle",14,a7,b3,45),-5,null());
HXLINE(  79)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,27);
HXLINE(  80)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-38,-7);
HXLINE(  81)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),12,-6);
HXLINE(  82)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-10,-50);
HXLINE(  83)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-29,27);
HXLINE(  84)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-30,21);
HXLINE(  85)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),12,24);
HXLINE(  86)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),-11,-19);
HXLINE(  87)			this->addOffset(HX_("hey",dc,42,4f,00),7,4);
HXLINE(  88)			this->addOffset(HX_("firstDeath",e4,d8,fc,14),37,11);
HXLINE(  89)			this->addOffset(HX_("deathLoop",b8,0b,79,2e),37,5);
HXLINE(  90)			this->addOffset(HX_("deathConfirm",2c,44,2b,12),37,69);
HXLINE(  91)			this->addOffset(HX_("scared",20,78,2a,3c),-4,null());
HXLINE(  93)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  95)			this->set_flipX(true);
HXLINE(  97)			this->barColor = -13520687;
HXLINE(  59)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bfdside",b7,d3,03,94)) ){
HXLINE(  99)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/d-sidebf",69,b4,ea,de)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d));
HXDLIN(  99)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/d-sidebf",69,b4,ea,de)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("shared",a5,5e,2b,1d))));
HXLINE( 100)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE( 101)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE( 102)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE( 103)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE( 104)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE( 105)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE( 106)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE( 107)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE( 108)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE( 109)			this->animation->addByPrefix(HX_("hey",dc,42,4f,00),HX_("BF HEY",60,1e,f8,c6),24,false,null(),null());
HXLINE( 111)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("BF dies",0f,cb,bf,64),24,false,null(),null());
HXLINE( 112)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("BF Dead Loop",04,f4,36,2f),24,true,null(),null());
HXLINE( 113)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("BF Dead confirm",80,6b,f9,23),24,false,null(),null());
HXLINE( 115)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("BF idle shaking",53,d0,da,8d),24,null(),null(),null());
HXLINE( 117)			this->addOffset(HX_("idle",14,a7,b3,45),-5,null());
HXLINE( 118)			this->addOffset(HX_("singUP",6a,52,21,b9),-62,45);
HXLINE( 119)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-38,-1);
HXLINE( 120)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-29,5);
HXLINE( 121)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-21,-37);
HXLINE( 122)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-76,47);
HXLINE( 123)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-44,9);
HXLINE( 124)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),-44,10);
HXLINE( 125)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),-65,-29);
HXLINE( 126)			this->addOffset(HX_("hey",dc,42,4f,00),-86,23);
HXLINE( 127)			this->addOffset(HX_("firstDeath",e4,d8,fc,14),37,11);
HXLINE( 128)			this->addOffset(HX_("deathLoop",b8,0b,79,2e),37,5);
HXLINE( 129)			this->addOffset(HX_("deathConfirm",2c,44,2b,12),37,69);
HXLINE( 130)			this->addOffset(HX_("scared",20,78,2a,3c),-15,null());
HXLINE( 132)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 134)			this->set_flipX(true);
HXLINE( 136)			this->barColor = -1813032;
HXLINE(  98)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("chicken",35,05,bf,60)) ){
HXLINE( 172)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/chicken",90,0b,38,c5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d));
HXDLIN( 172)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/chicken",90,0b,38,c5)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("shared",a5,5e,2b,1d))));
HXLINE( 173)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("idle",14,a7,b3,45),24,false,null(),null());
HXLINE( 174)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("up",5b,66,00,00),24,false,null(),null());
HXLINE( 175)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("right",dc,0b,64,e9),24,false,null(),null());
HXLINE( 176)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("left",07,08,b0,47),24,false,null(),null());
HXLINE( 177)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("down",62,f8,6d,42),24,false,null(),null());
HXLINE( 179)			this->addOffset(HX_("idle",14,a7,b3,45),-5,null());
HXLINE( 180)			this->addOffset(HX_("singUP",6a,52,21,b9),-46,67);
HXLINE( 181)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-48,30);
HXLINE( 182)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),45,30);
HXLINE( 183)			this->addOffset(HX_("singDOWN",31,2a,ad,36),0,-71);
HXLINE( 185)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 187)			this->barColor = -1813032;
HXLINE( 171)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("disie",aa,08,d1,d9)) ){
HXLINE( 138)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/disie",45,32,f8,46)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d));
HXDLIN( 138)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/disie",45,32,f8,46)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("shared",a5,5e,2b,1d))));
HXLINE( 139)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("idle",14,a7,b3,45),24,false,null(),null());
HXLINE( 140)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("up",5b,66,00,00),24,false,null(),null());
HXLINE( 141)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("left",07,08,b0,47),24,false,null(),null());
HXLINE( 142)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("right",dc,0b,64,e9),24,false,null(),null());
HXLINE( 143)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("down",62,f8,6d,42),24,false,null(),null());
HXLINE( 145)			this->addOffset(HX_("idle",14,a7,b3,45),70,-280);
HXLINE( 146)			this->addOffset(HX_("singUP",6a,52,21,b9),76,-279);
HXLINE( 147)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),70,-280);
HXLINE( 148)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),70,-280);
HXLINE( 149)			this->addOffset(HX_("singDOWN",31,2a,ad,36),70,-280);
HXLINE( 151)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 153)			this->barColor = -14870920;
HXLINE( 137)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ){
HXLINE(  29)			::String library = null();
HXDLIN(  29)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/GF_assets",fe,40,c5,18)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  29)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/GF_assets",fe,40,c5,18)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  30)			this->animation->addByPrefix(HX_("cheer",8d,9a,b6,45),HX_("GF Cheer",ac,b5,2b,e0),24,false,null(),null());
HXLINE(  31)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("GF left note",6a,dd,c6,b9),24,false,null(),null());
HXLINE(  32)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("GF Right Note",57,7f,86,75),24,false,null(),null());
HXLINE(  33)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("GF Up Note",d6,e4,46,60),24,false,null(),null());
HXLINE(  34)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("GF Down Note",2f,cf,a8,47),24,false,null(),null());
HXLINE(  35)			this->animation->addByIndices(HX_("sad",16,98,57,00),HX_("gf sad",95,c1,1f,ff),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_2,13),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  36)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_3,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  37)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_4,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  38)			this->animation->addByIndices(HX_("hairBlow",b4,c9,39,c9),HX_("GF Dancing Beat Hair blowing",4b,14,4a,db),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_5,4),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  39)			this->animation->addByIndices(HX_("hairFall",bd,48,d6,cb),HX_("GF Dancing Beat Hair Landing",52,45,8f,42),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_6,12),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  40)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("GF FEAR",91,45,bb,20),24,null(),null(),null());
HXLINE(  42)			this->addOffset(HX_("cheer",8d,9a,b6,45),null(),null());
HXLINE(  43)			this->addOffset(HX_("sad",16,98,57,00),-2,-2);
HXLINE(  44)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,-9);
HXLINE(  45)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,-9);
HXLINE(  47)			this->addOffset(HX_("singUP",6a,52,21,b9),0,4);
HXLINE(  48)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),0,-20);
HXLINE(  49)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),0,-19);
HXLINE(  50)			this->addOffset(HX_("singDOWN",31,2a,ad,36),0,-20);
HXLINE(  51)			this->addOffset(HX_("hairBlow",b4,c9,39,c9),45,-8);
HXLINE(  52)			this->addOffset(HX_("hairFall",bd,48,d6,cb),0,-9);
HXLINE(  54)			this->addOffset(HX_("scared",20,78,2a,3c),-2,-17);
HXLINE(  56)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE(  58)			this->barColor = -6159285;
HXLINE(  28)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("jisie",b0,83,38,4e)) ){
HXLINE( 155)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/jisie",4b,ad,5f,bb)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d));
HXDLIN( 155)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("characters/jisie",4b,ad,5f,bb)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),HX_("shared",a5,5e,2b,1d))));
HXLINE( 156)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("idle",14,a7,b3,45),24,false,null(),null());
HXLINE( 157)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("up",5b,66,00,00),24,false,null(),null());
HXLINE( 158)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("left",07,08,b0,47),24,false,null(),null());
HXLINE( 159)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("right",dc,0b,64,e9),24,false,null(),null());
HXLINE( 160)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("down",62,f8,6d,42),24,false,null(),null());
HXLINE( 162)			this->addOffset(HX_("idle",14,a7,b3,45),-300,-369);
HXLINE( 163)			this->addOffset(HX_("singUP",6a,52,21,b9),-454,-149);
HXLINE( 164)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-320,-371);
HXLINE( 165)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-200,-420);
HXLINE( 166)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-260,-510);
HXLINE( 168)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 170)			this->barColor = -14870920;
HXLINE( 154)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE( 190)		this->dance();
HXLINE( 192)		if (( (bool)(isPlayer) )) {
HXLINE( 193)			this->set_flipX(!(this->flipX));
            		}
            	}

Dynamic Character_obj::__CreateEmpty() { return new Character_obj; }

void *Character_obj::_hx_vtable = 0;

Dynamic Character_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Character_obj > _hx_result = new Character_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Character_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x55af02e5) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x55af02e5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Character_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_197_update)
HXLINE( 198)		if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("bf",c4,55,00,00)))) {
HXLINE( 199)			if (::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("sing",4f,96,53,4c))) {
HXLINE( 200)				 ::Character _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 200)				_hx_tmp->holdTimer = (_hx_tmp->holdTimer + elapsed);
            			}
HXLINE( 202)			Float dadVar = ( (Float)(4) );
HXLINE( 204)			if ((this->curCharacter == HX_("dad",47,36,4c,00))) {
HXLINE( 205)				dadVar = ((Float)6.1);
            			}
HXLINE( 207)			if ((this->holdTimer >= ((::Conductor_obj::stepCrochet * dadVar) * ((Float)0.001)))) {
HXLINE( 208)				this->dance();
HXLINE( 209)				this->holdTimer = ( (Float)(0) );
            			}
            		}
HXLINE( 213)		if ((this->curCharacter == HX_("gf",1f,5a,00,00))) {
HXLINE( 215)			bool _hx_tmp;
HXDLIN( 215)			if ((this->animation->_curAnim->name == HX_("hairFall",bd,48,d6,cb))) {
HXLINE( 215)				_hx_tmp = this->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 215)				_hx_tmp = false;
            			}
HXDLIN( 215)			if (_hx_tmp) {
HXLINE( 216)				this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            			}
            		}
HXLINE( 219)		this->super::update(elapsed);
            	}


void Character_obj::dance(){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_225_dance)
HXDLIN( 225)		if (!(this->debugMode)) {
HXLINE( 226)			if ((this->curCharacter == HX_("gf",1f,5a,00,00))) {
HXLINE( 228)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 229)					this->danced = !(this->danced);
HXLINE( 231)					if (this->danced) {
HXLINE( 232)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 234)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
            			}
            			else {
HXLINE( 237)				this->playAnim(HX_("idle",14,a7,b3,45),true,null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,dance,(void))

void Character_obj::playAnim(::String AnimName,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Reversed,::hx::Null< int >  __o_Frame){
            		bool Force = __o_Force.Default(false);
            		bool Reversed = __o_Reversed.Default(false);
            		int Frame = __o_Frame.Default(0);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_242_playAnim)
HXLINE( 243)		this->animation->play(AnimName,Force,Reversed,Frame);
HXLINE( 245)		::cpp::VirtualArray daOffset = ( (::cpp::VirtualArray)(this->animOffsets->get(AnimName)) );
HXLINE( 246)		if (this->animOffsets->exists(AnimName)) {
HXLINE( 247)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 247)			this1->set_x(( (Float)(daOffset->__get(0)) ));
HXDLIN( 247)			this1->set_y(( (Float)(daOffset->__get(1)) ));
            		}
            		else {
HXLINE( 249)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 249)			this1->set_x(( (Float)(0) ));
HXDLIN( 249)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 251)		if ((this->curCharacter == HX_("gf",1f,5a,00,00))) {
HXLINE( 252)			if ((AnimName == HX_("singLEFT",d6,39,ef,3b))) {
HXLINE( 253)				this->danced = true;
            			}
            			else {
HXLINE( 254)				if ((AnimName == HX_("singRIGHT",0d,6f,70,ac))) {
HXLINE( 255)					this->danced = false;
            				}
            			}
HXLINE( 257)			bool _hx_tmp;
HXDLIN( 257)			if ((AnimName != HX_("singUP",6a,52,21,b9))) {
HXLINE( 257)				_hx_tmp = (AnimName == HX_("singDOWN",31,2a,ad,36));
            			}
            			else {
HXLINE( 257)				_hx_tmp = true;
            			}
HXDLIN( 257)			if (_hx_tmp) {
HXLINE( 258)				this->danced = !(this->danced);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Character_obj,playAnim,(void))

void Character_obj::addOffset(::String name,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_263_addOffset)
HXDLIN( 263)		::cpp::VirtualArray v = ::Array_obj< Float >::__new(2)->init(0,x)->init(1,y);
HXDLIN( 263)		this->animOffsets->set(name,v);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Character_obj,addOffset,(void))


::hx::ObjectPtr< Character_obj > Character_obj::__new(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	::hx::ObjectPtr< Character_obj > __this = new Character_obj();
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< Character_obj > Character_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	Character_obj *__this = (Character_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Character_obj), true, "Character"));
	*(void **)__this = Character_obj::_hx_vtable;
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

Character_obj::Character_obj()
{
}

void Character_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Character);
	HX_MARK_MEMBER_NAME(animOffsets,"animOffsets");
	HX_MARK_MEMBER_NAME(debugMode,"debugMode");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(holdTimer,"holdTimer");
	HX_MARK_MEMBER_NAME(barColor,"barColor");
	HX_MARK_MEMBER_NAME(danced,"danced");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Character_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animOffsets,"animOffsets");
	HX_VISIT_MEMBER_NAME(debugMode,"debugMode");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(holdTimer,"holdTimer");
	HX_VISIT_MEMBER_NAME(barColor,"barColor");
	HX_VISIT_MEMBER_NAME(danced,"danced");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Character_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"danced") ) { return ::hx::Val( danced ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		if (HX_FIELD_EQ(inName,"barColor") ) { return ::hx::Val( barColor ); }
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { return ::hx::Val( debugMode ); }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { return ::hx::Val( holdTimer ); }
		if (HX_FIELD_EQ(inName,"addOffset") ) { return ::hx::Val( addOffset_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { return ::hx::Val( animOffsets ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Character_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"danced") ) { danced=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"barColor") ) { barColor=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { debugMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { holdTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { animOffsets=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Character_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animOffsets",6f,ff,7a,f8));
	outFields->push(HX_("debugMode",56,77,ac,2b));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("holdTimer",06,82,13,a9));
	outFields->push(HX_("barColor",90,b2,2a,19));
	outFields->push(HX_("danced",d1,49,8f,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Character_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Character_obj,animOffsets),HX_("animOffsets",6f,ff,7a,f8)},
	{::hx::fsBool,(int)offsetof(Character_obj,debugMode),HX_("debugMode",56,77,ac,2b)},
	{::hx::fsBool,(int)offsetof(Character_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsString,(int)offsetof(Character_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsFloat,(int)offsetof(Character_obj,holdTimer),HX_("holdTimer",06,82,13,a9)},
	{::hx::fsInt,(int)offsetof(Character_obj,barColor),HX_("barColor",90,b2,2a,19)},
	{::hx::fsBool,(int)offsetof(Character_obj,danced),HX_("danced",d1,49,8f,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Character_obj_sStaticStorageInfo = 0;
#endif

static ::String Character_obj_sMemberFields[] = {
	HX_("animOffsets",6f,ff,7a,f8),
	HX_("debugMode",56,77,ac,2b),
	HX_("isPlayer",eb,86,22,90),
	HX_("curCharacter",09,86,7c,d7),
	HX_("holdTimer",06,82,13,a9),
	HX_("barColor",90,b2,2a,19),
	HX_("update",09,86,05,87),
	HX_("danced",d1,49,8f,1e),
	HX_("dance",33,83,83,d4),
	HX_("playAnim",25,ea,84,30),
	HX_("addOffset",94,cc,63,18),
	::String(null()) };

::hx::Class Character_obj::__mClass;

void Character_obj::__register()
{
	Character_obj _hx_dummy;
	Character_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Character",89,bb,a4,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Character_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Character_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Character_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Character_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

