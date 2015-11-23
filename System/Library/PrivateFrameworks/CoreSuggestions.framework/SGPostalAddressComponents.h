/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SGPostalAddressComponents : NSObject <NSCopying, NSSecureCoding> {

	NSString* _street;
	NSString* _city;
	NSString* _state;
	NSString* _postalCode;
	NSString* _country;

}

@property (nonatomic,readonly) NSString * street;                  //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) NSString * city;                    //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) NSString * state;                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * postalCode;              //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,readonly) NSString * country;                 //@synthesize country=_country - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)components:(id)arg1 city:(id)arg2 state:(id)arg3 postalCode:(id)arg4 country:(id)arg5 ;
-(NSString *)city;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToPostalAddressComponents:(id)arg1 ;
-(id)initWithStreet:(id)arg1 city:(id)arg2 state:(id)arg3 postalCode:(id)arg4 country:(id)arg5 ;
-(NSString *)country;
-(NSString *)street;
-(NSString *)postalCode;
@end

