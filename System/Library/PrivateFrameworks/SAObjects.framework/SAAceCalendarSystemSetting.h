/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAAceCalendarSystemSetting : SADomainObject

@property (nonatomic,copy) NSString * calendarType; 
+(id)aceCalendarSystemSetting;
+(id)aceCalendarSystemSettingWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)calendarType;
-(void)setCalendarType:(NSString *)arg1 ;
@end
