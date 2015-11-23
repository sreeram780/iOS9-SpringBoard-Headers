/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SACalendar, NSString;

@interface SAMPReleaseInfo : AceObject <SAAceSerializable>

@property (nonatomic,retain) SACalendar * releaseDate; 
@property (assign,nonatomic) long long releaseYear; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)releaseInfo;
+(id)releaseInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(SACalendar *)releaseDate;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)releaseYear;
-(void)setReleaseYear:(long long)arg1 ;
-(void)setReleaseDate:(SACalendar *)arg1 ;
@end

