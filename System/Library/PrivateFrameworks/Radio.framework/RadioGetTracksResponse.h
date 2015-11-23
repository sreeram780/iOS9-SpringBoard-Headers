/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSDate, RadioStation, NSDictionary, NSArray;

@interface RadioGetTracksResponse : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _tracksByStationKey;
	NSDate* _expirationDate;
	RadioStation* _station;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * dialogDictionary; 
@property (nonatomic,retain) NSDate * expirationDate;                               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long globalVersion; 
@property (nonatomic,readonly) BOOL shouldIncrementSkipCount; 
@property (nonatomic,retain) RadioStation * station;                                //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) NSDate * skipDate; 
@property (nonatomic,readonly) long long tracklistActionType; 
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unusedKBSyncStrings; 
-(id)init;
-(void)setStation:(RadioStation *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)tracksForStationID:(long long)arg1 ;
-(id)tracksForStationHash:(id)arg1 ;
-(id)tracksForStationStringID:(id)arg1 ;
-(id)_tracksForStationKey:(id)arg1 ;
-(NSArray *)unusedKBSyncStrings;
-(BOOL)shouldIncrementSkipCount;
-(NSDate *)skipDate;
-(id)tracksForStation:(id)arg1 ;
-(long long)tracklistActionType;
-(unsigned long long)globalVersion;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
-(RadioStation *)station;
-(NSDictionary *)dialogDictionary;
@end

