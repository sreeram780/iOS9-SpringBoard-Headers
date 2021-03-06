/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CPLResource, NSString;

@interface PLCloudLegacyOperationResource : NSObject {

	CPLResource* _resource;
	NSString* _targetAssetUuid;

}

@property (nonatomic,retain) CPLResource * resource;                //@synthesize resource=_resource - In the implementation block
@property (nonatomic,copy) NSString * targetAssetUuid;              //@synthesize targetAssetUuid=_targetAssetUuid - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithResource:(id)arg1 ;
-(NSString *)targetAssetUuid;
-(void)setResource:(CPLResource *)arg1 ;
-(void)setTargetAssetUuid:(NSString *)arg1 ;
-(CPLResource *)resource;
@end

