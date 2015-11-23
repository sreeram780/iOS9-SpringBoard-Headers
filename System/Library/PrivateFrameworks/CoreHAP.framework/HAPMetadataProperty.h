/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface HAPMetadataProperty : NSObject {

	NSString* _propertyType;
	NSNumber* _bitPosition;
	NSString* _propertyDescription;

}

@property (nonatomic,retain) NSString * propertyType;                     //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,retain) NSNumber * bitPosition;                      //@synthesize bitPosition=_bitPosition - In the implementation block
@property (nonatomic,retain) NSString * propertyDescription;              //@synthesize propertyDescription=_propertyDescription - In the implementation block
+(id)init:(id)arg1 withDictionary:(id)arg2 ;
-(NSString *)propertyDescription;
-(void)setPropertyDescription:(NSString *)arg1 ;
-(void)dump;
-(id)description;
-(NSString *)propertyType;
-(void)setPropertyType:(NSString *)arg1 ;
-(void)setBitPosition:(NSNumber *)arg1 ;
-(id)initWithType:(id)arg1 bitPosition:(id)arg2 description:(id)arg3 ;
-(NSNumber *)bitPosition;
-(id)generateDictionary;
@end

