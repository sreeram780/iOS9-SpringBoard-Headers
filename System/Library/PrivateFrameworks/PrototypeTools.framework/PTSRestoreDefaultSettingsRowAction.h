/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRowAction.h>

@class NSString;

@interface PTSRestoreDefaultSettingsRowAction : PTSRowAction {

	NSString* _settingsKeyPath;

}

@property (nonatomic,copy) NSString * settingsKeyPath;              //@synthesize settingsKeyPath=_settingsKeyPath - In the implementation block
+(id)actionWithSettingsKeyPath:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)resolveTemplatesWithIndex:(unsigned long long)arg1 ;
-(void)setSettingsKeyPath:(NSString *)arg1 ;
-(NSString *)settingsKeyPath;
@end

