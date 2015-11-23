/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class BBDataProviderProxy, NSObject, BBBulletinRequest, RTPLOIETA, NSString;

@interface RTBBDataProvider : NSObject <BBRemoteDataProvider> {

	BBDataProviderProxy* _dataProviderProxy;
	NSObject*<OS_dispatch_queue> _queue;
	BBBulletinRequest* _bulletinRequest;
	RTPLOIETA* _ploiEta;

}

@property (nonatomic,retain) BBDataProviderProxy * dataProviderProxy;              //@synthesize dataProviderProxy=_dataProviderProxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) BBBulletinRequest * bulletinRequest;                  //@synthesize bulletinRequest=_bulletinRequest - In the implementation block
@property (nonatomic,retain) RTPLOIETA * ploiEta;                                  //@synthesize ploiEta=_ploiEta - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(id)sortDescriptors;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(id)sectionIdentifier;
-(RTPLOIETA *)ploiEta;
-(BBDataProviderProxy *)dataProviderProxy;
-(void)setBulletinRequest:(BBBulletinRequest *)arg1 ;
-(BBBulletinRequest *)bulletinRequest;
-(void)setPloiEta:(RTPLOIETA *)arg1 ;
-(void)_onNotificationCenterDidPresent;
-(void)setDataProviderProxy:(BBDataProviderProxy *)arg1 ;
-(void)onNotificationCenterDidPresent;
@end

