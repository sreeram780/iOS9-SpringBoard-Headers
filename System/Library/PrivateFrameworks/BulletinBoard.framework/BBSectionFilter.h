/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BBSectionFilter : NSObject <NSCopying, NSSecureCoding> {

	BOOL _enabled;
	NSString* _displayName;
	NSString* _filterID;

}

@property (nonatomic,copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * filterID;                          //@synthesize filterID=_filterID - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setFilterID:(NSString *)arg1 ;
-(NSString *)filterID;
-(id)initWithID:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
@end

