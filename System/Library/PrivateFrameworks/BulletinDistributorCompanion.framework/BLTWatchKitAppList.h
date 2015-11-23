/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
@class NSDictionary;

@interface BLTWatchKitAppList : NSObject {

	NSDictionary* _appsByAppBundleID;
	opaque_pthread_mutex_t _lock;

}
-(void)dealloc;
-(id)init;
-(void)fetchWatchKitInfoWithCompletion:(/*^block*/id)arg1 ;
-(id)watchKitAppDefinitionWithBundleID:(id)arg1 ;
-(void)_fetchWatchKitInfo;
@end

