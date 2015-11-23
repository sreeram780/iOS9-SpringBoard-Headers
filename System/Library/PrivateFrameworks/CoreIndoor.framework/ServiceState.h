/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet, IndoorProtocolProxy;

@interface ServiceState : NSObject {

	BOOL _pausedLocalization;
	BOOL _updateLocation;
	NSSet* _selectedVenues;
	IndoorProtocolProxy* _delegateProxy;

}

@property (nonatomic,retain) NSSet * selectedVenues;                           //@synthesize selectedVenues=_selectedVenues - In the implementation block
@property (assign,nonatomic) BOOL pausedLocalization;                          //@synthesize pausedLocalization=_pausedLocalization - In the implementation block
@property (assign,nonatomic) BOOL updateLocation;                              //@synthesize updateLocation=_updateLocation - In the implementation block
@property (nonatomic,retain) IndoorProtocolProxy * delegateProxy;              //@synthesize delegateProxy=_delegateProxy - In the implementation block
-(IndoorProtocolProxy *)delegateProxy;
-(NSSet *)selectedVenues;
-(void)setSelectedVenues:(NSSet *)arg1 ;
-(BOOL)pausedLocalization;
-(void)setPausedLocalization:(BOOL)arg1 ;
-(BOOL)updateLocation;
-(void)setUpdateLocation:(BOOL)arg1 ;
-(void)setDelegateProxy:(IndoorProtocolProxy *)arg1 ;
@end

