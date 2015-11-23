/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLCloudQueueObject.h>

@class NSString, CPLResource;

@interface PLCloudOperation : NSObject <PLCloudQueueObject> {

	NSString* _assetUuid;
	unsigned long long _retryNumber;
	CPLResource* _targetResource;
	double _timeIntervalSinceLastRetry;

}

@property (nonatomic,retain,readonly) NSString * assetUuid;                      //@synthesize assetUuid=_assetUuid - In the implementation block
@property (assign,nonatomic) unsigned long long retryNumber;                     //@synthesize retryNumber=_retryNumber - In the implementation block
@property (nonatomic,retain,readonly) CPLResource * targetResource;              //@synthesize targetResource=_targetResource - In the implementation block
@property (nonatomic,readonly) double timeIntervalSinceLastRetry;                //@synthesize timeIntervalSinceLastRetry=_timeIntervalSinceLastRetry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)copy;
-(id)initWithProperties:(id)arg1 ;
-(NSString *)assetUuid;
-(CPLResource *)targetResource;
-(id)initWithCPLResource:(id)arg1 assetUuid:(id)arg2 ;
-(unsigned long long)retryNumber;
-(id)identityHash;
-(id)serializeObject;
-(double)timeIntervalSinceLastRetry;
-(void)executeWithRemoteLibrary:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setRetryNumber:(unsigned long long)arg1 ;
-(id)mergeWithObject:(id)arg1 ;
@end

