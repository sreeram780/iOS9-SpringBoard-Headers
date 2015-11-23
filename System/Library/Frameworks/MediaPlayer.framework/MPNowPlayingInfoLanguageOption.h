/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MPNowPlayingInfoLanguageOption : NSObject {

	void* _mrLanguageOption;

}

@property (nonatomic,readonly) unsigned long long languageOptionType; 
@property (nonatomic,readonly) NSString * languageTag; 
@property (nonatomic,readonly) NSArray * languageOptionCharacteristics; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) void* mrLanguageOption;                               //@synthesize mrLanguageOption=_mrLanguageOption - In the implementation block
-(id)initWithMRLanguageOption:(void*)arg1 ;
-(id)initWithType:(unsigned long long)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5 ;
-(BOOL)isAutomaticLegibleLanguageOption;
-(unsigned long long)languageOptionType;
-(NSString *)languageTag;
-(NSArray *)languageOptionCharacteristics;
-(void*)mrLanguageOption;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)displayName;
@end

