/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSSet;

@interface CSUserAction : NSObject <CSCoderEncoder, NSSecureCoding> {

	NSString* _itemIdentifier;
	NSString* _contentAction;
	NSDictionary* _userInfo;
	NSSet* _keywords;
	unsigned long long _eligibility;

}

@property (copy) NSString * itemIdentifier;                     //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (copy) NSString * contentAction;                      //@synthesize contentAction=_contentAction - In the implementation block
@property (retain) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) NSSet * keywords;                            //@synthesize keywords=_keywords - In the implementation block
@property (assign) unsigned long long eligibility;              //@synthesize eligibility=_eligibility - In the implementation block
+(id)actionFromUserActivity:(id)arg1 searchableItem:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCSCoder:(id)arg1 ;
-(id)_propertiesDescription;
-(void)setContentAction:(NSString *)arg1 ;
-(void)setEligibility:(unsigned long long)arg1 ;
-(NSString *)contentAction;
-(unsigned long long)eligibility;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)setKeywords:(NSSet *)arg1 ;
-(NSSet *)keywords;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
@end

