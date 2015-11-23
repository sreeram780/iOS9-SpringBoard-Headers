/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAirPlayPayload : MCPayload {

	NSArray* _whitelistDestinations;
	NSArray* _destinationsWithPasswords;
	NSArray* _titlesAndDescriptions;

}

@property (nonatomic,retain) NSArray * whitelistDestinations;                  //@synthesize whitelistDestinations=_whitelistDestinations - In the implementation block
@property (nonatomic,retain) NSArray * destinationsWithPasswords;              //@synthesize destinationsWithPasswords=_destinationsWithPasswords - In the implementation block
@property (nonatomic,retain) NSArray * titlesAndDescriptions;                  //@synthesize titlesAndDescriptions=_titlesAndDescriptions - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)subtitle2Label;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle2Description;
-(void)setWhitelistDestinations:(NSArray *)arg1 ;
-(void)setDestinationsWithPasswords:(NSArray *)arg1 ;
-(NSArray *)whitelistDestinations;
-(NSArray *)destinationsWithPasswords;
-(NSArray *)titlesAndDescriptions;
-(void)setTitlesAndDescriptions:(NSArray *)arg1 ;
@end

