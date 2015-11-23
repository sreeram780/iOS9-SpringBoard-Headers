/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDHealthDataCollectionManager <NSObject>
@required
-(void)startDataCollectionForType:(id)arg1 observer:(id)arg2 collectionInterval:(double)arg3;
-(void)stopDataCollectionForType:(id)arg1 observer:(id)arg2;
-(void)sensorDataArrayReceived:(id)arg1 deviceEntity:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)sensorDataReceived:(id)arg1 deviceEntity:(id)arg2;

@end

