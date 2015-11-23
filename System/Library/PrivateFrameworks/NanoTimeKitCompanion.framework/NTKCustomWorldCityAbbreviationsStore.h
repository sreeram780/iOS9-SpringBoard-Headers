/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NPSManager;

@interface NTKCustomWorldCityAbbreviationsStore : NSObject {

	NPSManager* _npsManager;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_notifyClientsOfChange;
-(void)_handlePrefsChanged;
-(id)customAbbreviations;
-(id)_getCustomAbbreviationsFromPrefs;
-(void)setCustomAbbreviation:(id)arg1 forCityIdentifier:(id)arg2 ;
@end

