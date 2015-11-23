/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSFamilyCircle, FAFamilyCircle, NSNumber, NSCache, NSOperationQueue, SKUIClientContext;

@interface SKUIFamilyCircleController : NSObject {

	SSFamilyCircle* _iTunesFamily;
	FAFamilyCircle* _iCloudFamily;
	NSNumber* _lastAccountID;
	NSCache* _imageCache;
	NSOperationQueue* _opQueue;
	SKUIClientContext* _clientContext;
	BOOL _hasLoaded;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) BOOL hasLoaded;                               //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (nonatomic,readonly) SSFamilyCircle * familyCircle;                //@synthesize iTunesFamily=_iTunesFamily - In the implementation block
@property (nonatomic,readonly) FAFamilyCircle * iCloudFamily;                //@synthesize iCloudFamily=_iCloudFamily - In the implementation block
+(id)sharedController;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)profilePictureForFamilyMember:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_reloadDataWithPromptStyle:(long long)arg1 ;
-(SSFamilyCircle *)familyCircle;
-(void)_setITunesFamily:(id)arg1 error:(id)arg2 iCloudFamily:(id)arg3 error:(id)arg4 ;
-(void)_setProfilePicture:(id)arg1 forMember:(id)arg2 ;
-(BOOL)hasLoaded;
-(FAFamilyCircle *)iCloudFamily;
@end

