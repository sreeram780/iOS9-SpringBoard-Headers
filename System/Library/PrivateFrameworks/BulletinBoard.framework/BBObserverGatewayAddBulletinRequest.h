/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface BBObserverGatewayAddBulletinRequest : NSObject {

	NSString* _bulletinID;
	NSString* _sectionID;
	NSDate* _timeout;
	/*^block*/id _timeoutHandler;

}

@property (nonatomic,retain) NSString * bulletinID;              //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,retain) NSString * sectionID;               //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSDate * timeout;                   //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                    //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
-(NSDate *)timeout;
-(void)dealloc;
-(void)setBulletinID:(NSString *)arg1 ;
-(NSString *)bulletinID;
-(id)timeoutHandler;
-(void)setTimeoutHandler:(id)arg1 ;
-(NSString *)sectionID;
-(void)setTimeout:(NSDate *)arg1 ;
-(void)setSectionID:(NSString *)arg1 ;
@end

