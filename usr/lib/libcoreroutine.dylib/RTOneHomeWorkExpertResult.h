/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUUID;

@interface RTOneHomeWorkExpertResult : NSObject {

	NSUUID* _homeUUID;
	NSUUID* _workUUID;

}

@property (nonatomic,retain) NSUUID * homeUUID;              //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,retain) NSUUID * workUUID;              //@synthesize workUUID=_workUUID - In the implementation block
-(id)init;
-(NSUUID *)homeUUID;
-(void)setHomeUUID:(NSUUID *)arg1 ;
-(NSUUID *)workUUID;
-(void)setWorkUUID:(NSUUID *)arg1 ;
@end

