/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/TWCUpdater.h>

@class CLGeocoder, _MKLocationShifter, City;

@interface TWCLocationUpdater : TWCUpdater {

	CLGeocoder* _geocoder;
	/*^block*/id _localWeatherHandler;
	_MKLocationShifter* _locationShifter;
	City* _currentCity;

}

@property (nonatomic,retain) City * currentCity;              //@synthesize currentCity=_currentCity - In the implementation block
+(id)sharedLocationUpdater;
+(void)clearSharedLocationUpdater;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)aggregateDictionaryDomain;
-(void)didProcessJSONObject;
-(void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned long long)arg2 ;
-(void)failCity:(id)arg1 ;
-(void)_failed:(unsigned long long)arg1 ;
-(void)parsedResultCity:(id)arg1 ;
-(void)handleNilCity;
-(void)updateWeatherForLocation:(id)arg1 city:(id)arg2 ;
-(void)enableProgressIndicator:(BOOL)arg1 ;
-(void)setCurrentCity:(City *)arg1 ;
-(City *)currentCity;
-(void)_geocodeLocation:(id)arg1 ;
-(void)updateWeatherForLocation:(id)arg1 city:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

