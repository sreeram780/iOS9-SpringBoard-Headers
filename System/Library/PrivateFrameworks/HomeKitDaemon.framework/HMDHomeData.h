/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSUUID, HMDApplicationVendorIDStore;

@interface HMDHomeData : NSObject {

	NSArray* _homes;
	NSArray* _accessories;
	NSUUID* _primaryHomeUUID;
	long long _dataVersion;
	NSUUID* _dataTag;
	NSArray* _uuidsOfRemovedHomes;
	NSArray* _incomingInvitations;
	unsigned long long _assistantGenerationCounter;
	HMDApplicationVendorIDStore* _appVendorIDStore;
	NSArray* _pendingUserManagementOperations;

}

@property (nonatomic,copy,readonly) NSArray * homes;                                        //@synthesize homes=_homes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accessories;                                  //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * primaryHomeUUID;                               //@synthesize primaryHomeUUID=_primaryHomeUUID - In the implementation block
@property (nonatomic,readonly) long long dataVersion;                                       //@synthesize dataVersion=_dataVersion - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * dataTag;                                       //@synthesize dataTag=_dataTag - In the implementation block
@property (nonatomic,copy,readonly) NSArray * uuidsOfRemovedHomes;                          //@synthesize uuidsOfRemovedHomes=_uuidsOfRemovedHomes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * incomingInvitations;                          //@synthesize incomingInvitations=_incomingInvitations - In the implementation block
@property (nonatomic,readonly) unsigned long long assistantGenerationCounter;               //@synthesize assistantGenerationCounter=_assistantGenerationCounter - In the implementation block
@property (nonatomic,readonly) HMDApplicationVendorIDStore * appVendorIDStore;              //@synthesize appVendorIDStore=_appVendorIDStore - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingUserManagementOperations;              //@synthesize pendingUserManagementOperations=_pendingUserManagementOperations - In the implementation block
-(NSArray *)accessories;
-(NSArray *)pendingUserManagementOperations;
-(NSArray *)homes;
-(NSArray *)incomingInvitations;
-(id)initWithHomes:(id)arg1 accessories:(id)arg2 primaryHomeUUID:(id)arg3 dataVersion:(long long)arg4 dataTag:(id)arg5 uuidsOfRemovedHomes:(id)arg6 incomingInvitations:(id)arg7 assistantGenerationCounter:(unsigned long long)arg8 appVendorIDStore:(id)arg9 pendingUserManagementOperations:(id)arg10 ;
-(NSUUID *)primaryHomeUUID;
-(long long)dataVersion;
-(NSUUID *)dataTag;
-(NSArray *)uuidsOfRemovedHomes;
-(unsigned long long)assistantGenerationCounter;
-(HMDApplicationVendorIDStore *)appVendorIDStore;
@end

