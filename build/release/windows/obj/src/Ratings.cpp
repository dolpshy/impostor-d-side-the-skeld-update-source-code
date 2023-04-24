#include <hxcpp.h>

#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Ratings
#include <Ratings.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c466427e4f3e0023_5_GenerateLetterRank,"Ratings","GenerateLetterRank",0x5d6db93f,"Ratings.GenerateLetterRank","Ratings.hx",5,0x142ad6e8)
HX_LOCAL_STACK_FRAME(_hx_pos_c466427e4f3e0023_92_GenerateFCRankPsych,"Ratings","GenerateFCRankPsych",0x1f8e2ae5,"Ratings.GenerateFCRankPsych","Ratings.hx",92,0x142ad6e8)
HX_LOCAL_STACK_FRAME(_hx_pos_c466427e4f3e0023_111_GenerateLetterRankPsych,"Ratings","GenerateLetterRankPsych",0x6a1d7b7c,"Ratings.GenerateLetterRankPsych","Ratings.hx",111,0x142ad6e8)
HX_LOCAL_STACK_FRAME(_hx_pos_c466427e4f3e0023_166_CalculateRating,"Ratings","CalculateRating",0x7423532b,"Ratings.CalculateRating","Ratings.hx",166,0x142ad6e8)
HX_LOCAL_STACK_FRAME(_hx_pos_c466427e4f3e0023_196_CalculateRanking,"Ratings","CalculateRanking",0xb7ac9fe8,"Ratings.CalculateRanking","Ratings.hx",196,0x142ad6e8)
HX_LOCAL_STACK_FRAME(_hx_pos_c466427e4f3e0023_206_CalculateRankingPsych,"Ratings","CalculateRankingPsych",0xd66cd033,"Ratings.CalculateRankingPsych","Ratings.hx",206,0x142ad6e8)

void Ratings_obj::__construct() { }

Dynamic Ratings_obj::__CreateEmpty() { return new Ratings_obj; }

void *Ratings_obj::_hx_vtable = 0;

Dynamic Ratings_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Ratings_obj > _hx_result = new Ratings_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Ratings_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07eb05f2;
}

::String Ratings_obj::GenerateLetterRank(Float accuracy){
            	HX_STACKFRAME(&_hx_pos_c466427e4f3e0023_5_GenerateLetterRank)
HXLINE(   6)		::String ranking = HX_("N/A",00,59,3b,00);
HXLINE(   7)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE(   8)			ranking = HX_("BotPlay",7b,4f,d4,19);
            		}
HXLINE(  10)		bool _hx_tmp;
HXDLIN(  10)		bool _hx_tmp1;
HXDLIN(  10)		bool _hx_tmp2;
HXDLIN(  10)		if ((::PlayState_obj::misses == 0)) {
HXLINE(  10)			_hx_tmp2 = (::PlayState_obj::bads == 0);
            		}
            		else {
HXLINE(  10)			_hx_tmp2 = false;
            		}
HXDLIN(  10)		if (_hx_tmp2) {
HXLINE(  10)			_hx_tmp1 = (::PlayState_obj::shits == 0);
            		}
            		else {
HXLINE(  10)			_hx_tmp1 = false;
            		}
HXDLIN(  10)		if (_hx_tmp1) {
HXLINE(  10)			_hx_tmp = (::PlayState_obj::goods == 0);
            		}
            		else {
HXLINE(  10)			_hx_tmp = false;
            		}
HXDLIN(  10)		if (_hx_tmp) {
HXLINE(  11)			ranking = HX_("(MFC)",47,fa,21,3b);
            		}
            		else {
HXLINE(  12)			bool _hx_tmp;
HXDLIN(  12)			bool _hx_tmp1;
HXDLIN(  12)			bool _hx_tmp2;
HXDLIN(  12)			if ((::PlayState_obj::misses == 0)) {
HXLINE(  12)				_hx_tmp2 = (::PlayState_obj::bads == 0);
            			}
            			else {
HXLINE(  12)				_hx_tmp2 = false;
            			}
HXDLIN(  12)			if (_hx_tmp2) {
HXLINE(  12)				_hx_tmp1 = (::PlayState_obj::shits == 0);
            			}
            			else {
HXLINE(  12)				_hx_tmp1 = false;
            			}
HXDLIN(  12)			if (_hx_tmp1) {
HXLINE(  12)				_hx_tmp = (::PlayState_obj::goods >= 1);
            			}
            			else {
HXLINE(  12)				_hx_tmp = false;
            			}
HXDLIN(  12)			if (_hx_tmp) {
HXLINE(  13)				ranking = HX_("(GFC)",8d,b2,2a,37);
            			}
            			else {
HXLINE(  14)				if ((::PlayState_obj::misses == 0)) {
HXLINE(  15)					ranking = HX_("(FC)",24,e1,a5,1a);
            				}
            				else {
HXLINE(  16)					if ((::PlayState_obj::misses < 10)) {
HXLINE(  17)						ranking = HX_("(SDCB)",91,27,ae,f5);
            					}
            					else {
HXLINE(  19)						ranking = HX_("(Clear)",44,ec,96,bb);
            					}
            				}
            			}
            		}
HXLINE(  21)		::Array< bool > wifeConditions = ::Array_obj< bool >::__new(16)->init(0,(accuracy >= ((Float)99.9935)))->init(1,(accuracy >= ((Float)99.980)))->init(2,(accuracy >= ((Float)99.970)))->init(3,(accuracy >= ((Float)99.955)))->init(4,(accuracy >= ((Float)99.90)))->init(5,(accuracy >= ((Float)99.80)))->init(6,(accuracy >= ((Float)99.70)))->init(7,(accuracy >= 99))->init(8,(accuracy >= ((Float)96.50)))->init(9,(accuracy >= 93))->init(10,(accuracy >= 90))->init(11,(accuracy >= 85))->init(12,(accuracy >= 80))->init(13,(accuracy >= 70))->init(14,(accuracy >= 60))->init(15,(accuracy < 60));
HXLINE(  40)		{
HXLINE(  40)			int _g = 0;
HXDLIN(  40)			int _g1 = wifeConditions->length;
HXDLIN(  40)			while((_g < _g1)){
HXLINE(  40)				_g = (_g + 1);
HXDLIN(  40)				int i = (_g - 1);
HXLINE(  42)				bool b = wifeConditions->__get(i);
HXLINE(  43)				if (b) {
HXLINE(  45)					switch((int)(i)){
            						case (int)0: {
HXLINE(  48)							ranking = (ranking + HX_(" AAAAA",61,aa,9f,63));
            						}
            						break;
            						case (int)1: {
HXLINE(  50)							ranking = (ranking + HX_(" AAAA:",5a,aa,9f,63));
            						}
            						break;
            						case (int)2: {
HXLINE(  52)							ranking = (ranking + HX_(" AAAA.",4e,aa,9f,63));
            						}
            						break;
            						case (int)3: {
HXLINE(  54)							ranking = (ranking + HX_(" AAAA",e0,f9,fa,97));
            						}
            						break;
            						case (int)4: {
HXLINE(  56)							ranking = (ranking + HX_(" AAA:",d9,f9,fa,97));
            						}
            						break;
            						case (int)5: {
HXLINE(  58)							ranking = (ranking + HX_(" AAA.",cd,f9,fa,97));
            						}
            						break;
            						case (int)6: {
HXLINE(  60)							ranking = (ranking + HX_(" AAA",41,5f,58,15));
            						}
            						break;
            						case (int)7: {
HXLINE(  62)							ranking = (ranking + HX_(" AA:",3a,5f,58,15));
            						}
            						break;
            						case (int)8: {
HXLINE(  64)							ranking = (ranking + HX_(" AA.",2e,5f,58,15));
            						}
            						break;
            						case (int)9: {
HXLINE(  66)							ranking = (ranking + HX_(" AA",00,81,18,00));
            						}
            						break;
            						case (int)10: {
HXLINE(  68)							ranking = (ranking + HX_(" A:",f9,80,18,00));
            						}
            						break;
            						case (int)11: {
HXLINE(  70)							ranking = (ranking + HX_(" A.",ed,80,18,00));
            						}
            						break;
            						case (int)12: {
HXLINE(  72)							ranking = (ranking + HX_(" A",21,1c,00,00));
            						}
            						break;
            						case (int)13: {
HXLINE(  74)							ranking = (ranking + HX_(" B",22,1c,00,00));
            						}
            						break;
            						case (int)14: {
HXLINE(  76)							ranking = (ranking + HX_(" C",23,1c,00,00));
            						}
            						break;
            						case (int)15: {
HXLINE(  78)							ranking = (ranking + HX_(" D",24,1c,00,00));
            						}
            						break;
            					}
HXLINE(  80)					goto _hx_goto_0;
            				}
            			}
            			_hx_goto_0:;
            		}
HXLINE(  84)		if ((accuracy == 0)) {
HXLINE(  85)			ranking = HX_("N/A",00,59,3b,00);
            		}
            		else {
HXLINE(  86)			if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE(  87)				ranking = HX_("BotPlay",7b,4f,d4,19);
            			}
            		}
HXLINE(  89)		return ranking;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ratings_obj,GenerateLetterRank,return )

::String Ratings_obj::GenerateFCRankPsych(){
            	HX_STACKFRAME(&_hx_pos_c466427e4f3e0023_92_GenerateFCRankPsych)
HXLINE(  93)		::String rankingFC = HX_("?",3f,00,00,00);
HXLINE(  95)		bool _hx_tmp;
HXDLIN(  95)		bool _hx_tmp1;
HXDLIN(  95)		bool _hx_tmp2;
HXDLIN(  95)		if ((::PlayState_obj::misses == 0)) {
HXLINE(  95)			_hx_tmp2 = (::PlayState_obj::bads == 0);
            		}
            		else {
HXLINE(  95)			_hx_tmp2 = false;
            		}
HXDLIN(  95)		if (_hx_tmp2) {
HXLINE(  95)			_hx_tmp1 = (::PlayState_obj::shits == 0);
            		}
            		else {
HXLINE(  95)			_hx_tmp1 = false;
            		}
HXDLIN(  95)		if (_hx_tmp1) {
HXLINE(  95)			_hx_tmp = (::PlayState_obj::goods == 0);
            		}
            		else {
HXLINE(  95)			_hx_tmp = false;
            		}
HXDLIN(  95)		if (_hx_tmp) {
HXLINE(  96)			rankingFC = HX_("SFC ",d0,0d,12,37);
            		}
            		else {
HXLINE(  97)			bool _hx_tmp;
HXDLIN(  97)			bool _hx_tmp1;
HXDLIN(  97)			bool _hx_tmp2;
HXDLIN(  97)			if ((::PlayState_obj::misses == 0)) {
HXLINE(  97)				_hx_tmp2 = (::PlayState_obj::bads == 0);
            			}
            			else {
HXLINE(  97)				_hx_tmp2 = false;
            			}
HXDLIN(  97)			if (_hx_tmp2) {
HXLINE(  97)				_hx_tmp1 = (::PlayState_obj::shits == 0);
            			}
            			else {
HXLINE(  97)				_hx_tmp1 = false;
            			}
HXDLIN(  97)			if (_hx_tmp1) {
HXLINE(  97)				_hx_tmp = (::PlayState_obj::goods >= 1);
            			}
            			else {
HXLINE(  97)				_hx_tmp = false;
            			}
HXDLIN(  97)			if (_hx_tmp) {
HXLINE(  98)				rankingFC = HX_("GFC ",5c,7e,23,2f);
            			}
            			else {
HXLINE(  99)				if ((::PlayState_obj::misses == 0)) {
HXLINE( 100)					rankingFC = HX_("FC ",43,58,35,00);
            				}
            				else {
HXLINE( 101)					if ((::PlayState_obj::misses < 10)) {
HXLINE( 102)						rankingFC = HX_("SDCB ",b0,b8,67,f7);
            					}
            					else {
HXLINE( 104)						rankingFC = HX_("Clear ",13,5e,3c,3c);
            					}
            				}
            			}
            		}
HXLINE( 106)		return rankingFC;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ratings_obj,GenerateFCRankPsych,return )

::String Ratings_obj::GenerateLetterRankPsych(Float accuracy){
            	HX_STACKFRAME(&_hx_pos_c466427e4f3e0023_111_GenerateLetterRankPsych)
HXLINE( 112)		::String ranking = HX_(" ?",1f,1c,00,00);
HXLINE( 119)		bool wifeConditions;
HXDLIN( 119)		if ((accuracy > 68)) {
HXLINE( 119)			wifeConditions = (accuracy < 70);
            		}
            		else {
HXLINE( 119)			wifeConditions = false;
            		}
HXLINE( 114)		::Array< bool > wifeConditions1 = ::Array_obj< bool >::__new(10)->init(0,(accuracy == 100))->init(1,(accuracy >= 90))->init(2,(accuracy >= 80))->init(3,(accuracy >= 70))->init(4,wifeConditions)->init(5,(accuracy >= 60))->init(6,(accuracy >= 50))->init(7,(accuracy >= 40))->init(8,(accuracy >= 20))->init(9,(accuracy < 20));
HXLINE( 127)		{
HXLINE( 127)			int _g = 0;
HXDLIN( 127)			int _g1 = wifeConditions1->length;
HXDLIN( 127)			while((_g < _g1)){
HXLINE( 127)				_g = (_g + 1);
HXDLIN( 127)				int i = (_g - 1);
HXLINE( 129)				bool b = wifeConditions1->__get(i);
HXLINE( 130)				if (b) {
HXLINE( 132)					switch((int)(i)){
            						case (int)0: {
HXLINE( 135)							ranking = HX_(" Perfect!!",ed,5a,dd,3b);
            						}
            						break;
            						case (int)1: {
HXLINE( 137)							ranking = HX_(" Sick!",63,95,60,db);
            						}
            						break;
            						case (int)2: {
HXLINE( 139)							ranking = HX_(" Great",0d,07,86,f8);
            						}
            						break;
            						case (int)3: {
HXLINE( 141)							ranking = HX_(" Good",7d,51,15,9c);
            						}
            						break;
            						case (int)4: {
HXLINE( 143)							ranking = HX_(" Nice",dd,37,b1,a0);
            						}
            						break;
            						case (int)5: {
HXLINE( 145)							ranking = HX_(" Meh",d0,99,61,15);
            						}
            						break;
            						case (int)6: {
HXLINE( 147)							ranking = HX_(" Bruh",63,8c,c9,98);
            						}
            						break;
            						case (int)7: {
HXLINE( 149)							ranking = HX_(" Bad",85,3d,59,15);
            						}
            						break;
            						case (int)8: {
HXLINE( 151)							ranking = HX_(" Shit",00,8c,fe,a3);
            						}
            						break;
            						case (int)9: {
HXLINE( 153)							ranking = HX_(" You Suck!",b6,63,ba,10);
            						}
            						break;
            					}
HXLINE( 155)					goto _hx_goto_3;
            				}
            			}
            			_hx_goto_3:;
            		}
HXLINE( 159)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE( 160)			ranking = HX_("BotPlay",7b,4f,d4,19);
            		}
HXLINE( 162)		return ranking;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ratings_obj,GenerateLetterRankPsych,return )

::String Ratings_obj::CalculateRating(Float noteDiff, ::Dynamic customSafeZone){
            	HX_STACKFRAME(&_hx_pos_c466427e4f3e0023_166_CalculateRating)
HXLINE( 167)		Float customTimeScale = ::Conductor_obj::timeScale;
HXLINE( 169)		if (::hx::IsNotNull( customSafeZone )) {
HXLINE( 170)			customTimeScale = (( (Float)(customSafeZone) ) / ( (Float)(166) ));
            		}
HXLINE( 172)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE( 173)			return HX_("good",3d,95,69,44);
            		}
HXLINE( 175)		if ((noteDiff > (( (Float)(166) ) * customTimeScale))) {
HXLINE( 176)			return HX_("miss",fc,52,5c,48);
            		}
HXLINE( 177)		if ((noteDiff > (( (Float)(135) ) * customTimeScale))) {
HXLINE( 178)			return HX_("shit",c0,cf,52,4c);
            		}
            		else {
HXLINE( 179)			if ((noteDiff > (( (Float)(90) ) * customTimeScale))) {
HXLINE( 180)				return HX_("bad",c5,b1,4a,00);
            			}
            			else {
HXLINE( 181)				if ((noteDiff > (( (Float)(45) ) * customTimeScale))) {
HXLINE( 182)					return HX_("good",3d,95,69,44);
            				}
            				else {
HXLINE( 183)					if ((noteDiff < (( (Float)(-45) ) * customTimeScale))) {
HXLINE( 184)						return HX_("good",3d,95,69,44);
            					}
            					else {
HXLINE( 185)						if ((noteDiff < (( (Float)(-90) ) * customTimeScale))) {
HXLINE( 186)							return HX_("bad",c5,b1,4a,00);
            						}
            						else {
HXLINE( 187)							if ((noteDiff < (( (Float)(-135) ) * customTimeScale))) {
HXLINE( 188)								return HX_("shit",c0,cf,52,4c);
            							}
            							else {
HXLINE( 189)								if ((noteDiff < (( (Float)(-166) ) * customTimeScale))) {
HXLINE( 190)									return HX_("miss",fc,52,5c,48);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 191)		return HX_("sick",be,8c,53,4c);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Ratings_obj,CalculateRating,return )

::String Ratings_obj::CalculateRanking(int score,int scoreDef,int nps,int maxNPS,Float accuracy){
            	HX_STACKFRAME(&_hx_pos_c466427e4f3e0023_196_CalculateRanking)
HXLINE( 197)		::String _hx_tmp;
HXDLIN( 197)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("npsDisplay",51,08,e2,23),::hx::paccDynamic)) )) {
HXLINE( 197)			::String _hx_tmp1;
HXDLIN( 197)			if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXLINE( 197)				_hx_tmp1 = HX_(" | ",44,b4,18,00);
            			}
            			else {
HXLINE( 197)				_hx_tmp1 = HX_("",00,00,00,00);
            			}
HXDLIN( 197)			_hx_tmp = (((((HX_("NPS: ",b7,7e,61,1e) + nps) + HX_(" (Max ",24,31,a2,06)) + maxNPS) + HX_(")",29,00,00,00)) + _hx_tmp1);
            		}
            		else {
HXLINE( 197)			_hx_tmp = HX_("",00,00,00,00);
            		}
HXDLIN( 197)		::String _hx_tmp1;
HXDLIN( 197)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXLINE( 198)			::String _hx_tmp;
HXDLIN( 198)			if ((::Conductor_obj::safeFrames != 10)) {
HXLINE( 198)				_hx_tmp = (((score + HX_(" (",08,1c,00,00)) + scoreDef) + HX_(")",29,00,00,00));
            			}
            			else {
HXLINE( 198)				_hx_tmp = (HX_("",00,00,00,00) + score);
            			}
HXDLIN( 198)			::String _hx_tmp2 = ((((HX_("Score:",c8,e8,ff,79) + _hx_tmp) + HX_(" | Combo Breaks:",10,4a,42,f6)) + ::PlayState_obj::misses) + HX_(" | Accuracy:",fd,ee,6b,1b));
HXLINE( 200)			::String _hx_tmp3;
HXDLIN( 200)			if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE( 200)				_hx_tmp3 = HX_("N/A",00,59,3b,00);
            			}
            			else {
HXLINE( 200)				_hx_tmp3 = (::HelperFunctions_obj::truncateFloat(accuracy,2) + HX_(" %",05,1c,00,00));
            			}
HXLINE( 197)			_hx_tmp1 = (((_hx_tmp2 + _hx_tmp3) + HX_(" | ",44,b4,18,00)) + ::Ratings_obj::GenerateLetterRank(accuracy));
            		}
            		else {
HXLINE( 197)			_hx_tmp1 = HX_("",00,00,00,00);
            		}
HXLINE( 196)		return (_hx_tmp + _hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Ratings_obj,CalculateRanking,return )

::String Ratings_obj::CalculateRankingPsych(int score,int scoreDef,int nps,int maxNPS,Float accuracy){
            	HX_STACKFRAME(&_hx_pos_c466427e4f3e0023_206_CalculateRankingPsych)
HXDLIN( 206)		if ((score != 0)) {
HXLINE( 208)			::String _hx_tmp;
HXDLIN( 208)			if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("npsDisplay",51,08,e2,23),::hx::paccDynamic)) )) {
HXLINE( 208)				::String _hx_tmp1;
HXDLIN( 208)				if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXLINE( 208)					_hx_tmp1 = HX_(" | ",44,b4,18,00);
            				}
            				else {
HXLINE( 208)					_hx_tmp1 = HX_("",00,00,00,00);
            				}
HXDLIN( 208)				_hx_tmp = (((((HX_("NPS: ",b7,7e,61,1e) + nps) + HX_(" (Max ",24,31,a2,06)) + maxNPS) + HX_(")",29,00,00,00)) + _hx_tmp1);
            			}
            			else {
HXLINE( 208)				_hx_tmp = HX_("",00,00,00,00);
            			}
HXDLIN( 208)			::String _hx_tmp1;
HXDLIN( 208)			if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXLINE( 209)				::String _hx_tmp;
HXDLIN( 209)				if ((::Conductor_obj::safeFrames != 10)) {
HXLINE( 209)					_hx_tmp = (((score + HX_(" (",08,1c,00,00)) + scoreDef) + HX_(")",29,00,00,00));
            				}
            				else {
HXLINE( 209)					_hx_tmp = (HX_("",00,00,00,00) + score);
            				}
HXDLIN( 209)				::String _hx_tmp2 = ((((HX_("Score:",c8,e8,ff,79) + _hx_tmp) + HX_(" | Misses:",ac,fe,5e,5d)) + ::PlayState_obj::misses) + HX_(" | Rating: ",67,bc,53,d1));
HXDLIN( 209)				::String _hx_tmp3 = (_hx_tmp2 + ::Ratings_obj::GenerateFCRankPsych());
HXLINE( 211)				::String _hx_tmp4;
HXDLIN( 211)				if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXLINE( 211)					_hx_tmp4 = HX_("0",30,00,00,00);
            				}
            				else {
HXLINE( 211)					_hx_tmp4 = ((HX_("(",28,00,00,00) + ::HelperFunctions_obj::truncateFloat(accuracy,2)) + HX_(" %) -",91,ad,66,85));
            				}
HXLINE( 208)				_hx_tmp1 = ((_hx_tmp3 + _hx_tmp4) + ::Ratings_obj::GenerateLetterRankPsych(accuracy));
            			}
            			else {
HXLINE( 208)				_hx_tmp1 = HX_("",00,00,00,00);
            			}
HXLINE( 207)			return (_hx_tmp + _hx_tmp1);
            		}
            		else {
HXLINE( 214)			if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXLINE( 214)				return HX_("Score: 0 | Misses: 0 | Rating: ?",8c,74,3f,c2);
            			}
            			else {
HXLINE( 214)				return HX_(" ",20,00,00,00);
            			}
            		}
HXLINE( 206)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Ratings_obj,CalculateRankingPsych,return )


Ratings_obj::Ratings_obj()
{
}

bool Ratings_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"CalculateRating") ) { outValue = CalculateRating_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CalculateRanking") ) { outValue = CalculateRanking_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"GenerateLetterRank") ) { outValue = GenerateLetterRank_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"GenerateFCRankPsych") ) { outValue = GenerateFCRankPsych_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"CalculateRankingPsych") ) { outValue = CalculateRankingPsych_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"GenerateLetterRankPsych") ) { outValue = GenerateLetterRankPsych_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Ratings_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Ratings_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Ratings_obj::__mClass;

static ::String Ratings_obj_sStaticFields[] = {
	HX_("GenerateLetterRank",67,0d,a4,31),
	HX_("GenerateFCRankPsych",bd,79,e1,fa),
	HX_("GenerateLetterRankPsych",54,16,bd,8a),
	HX_("CalculateRating",03,56,40,d1),
	HX_("CalculateRanking",10,1a,f2,d3),
	HX_("CalculateRankingPsych",0b,85,53,a8),
	::String(null())
};

void Ratings_obj::__register()
{
	Ratings_obj _hx_dummy;
	Ratings_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Ratings",96,8d,b4,2a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Ratings_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Ratings_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Ratings_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ratings_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ratings_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

