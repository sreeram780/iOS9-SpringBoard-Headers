/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BLTObjectCacheDelegate <NSObject>
@required
-(void)objectCache:(id)arg1 keysWithBlock:(/*^block*/id)arg2;
-(void)objectCache:(id)arg1 objectForKey:(id)arg2 withBlock:(/*^block*/id)arg3;
-(void)objectCache:(id)arg1 storeObject:(id)arg2 withKey:(id)arg3 withBlock:(/*^block*/id)arg4;
-(void)objectCache:(id)arg1 removeObjectForKey:(id)arg2 withBlock:(/*^block*/id)arg3;

@end

