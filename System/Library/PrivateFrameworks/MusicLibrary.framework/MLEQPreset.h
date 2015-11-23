/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MLEQPreset : NSObject {

	NSString* _name;
	NSString* _localizedName;
	int _builtInPresetType;

}
+(id)eqPresetForName:(id)arg1 ;
+(id)eqPresetForBuiltInPresetType:(int)arg1 ;
-(id)name;
-(id)localizedName;
-(int)typeForAVController;
-(id)initWithBuiltInPresetType:(int)arg1 ;
-(int)builtInPresetType;
@end

