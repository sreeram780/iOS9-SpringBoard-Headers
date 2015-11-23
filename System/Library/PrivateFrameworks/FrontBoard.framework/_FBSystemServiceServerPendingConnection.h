/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FBSystemServiceFacility;

@interface _FBSystemServiceServerPendingConnection : NSObject {

	FBSystemServiceFacility* _facility;
	/*^block*/id _completion;

}

@property (nonatomic,retain) FBSystemServiceFacility * facility;              //@synthesize facility=_facility - In the implementation block
@property (nonatomic,copy) id completion;                                     //@synthesize completion=_completion - In the implementation block
+(id)pendingConnectionToFacility:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setFacility:(FBSystemServiceFacility *)arg1 ;
-(FBSystemServiceFacility *)facility;
-(id)initWithFacility:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

