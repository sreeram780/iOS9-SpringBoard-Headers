/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SSVFamilyAccountPair : NSObject {

	unsigned long long _downloaderAccountIdentifier;
	unsigned long long _familyIdentifier;
	unsigned long long _purchaserAccountIdentifier;

}

@property (nonatomic,readonly) unsigned long long downloaderAccountIdentifier;              //@synthesize downloaderAccountIdentifier=_downloaderAccountIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long familyIdentifier;                         //@synthesize familyIdentifier=_familyIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long purchaserAccountIdentifier;               //@synthesize purchaserAccountIdentifier=_purchaserAccountIdentifier - In the implementation block
-(id)initWithDownloaderAccountIdentifier:(unsigned long long)arg1 purchaserAccountIdentifier:(unsigned long long)arg2 familyIdentifier:(unsigned long long)arg3 ;
-(unsigned long long)downloaderAccountIdentifier;
-(unsigned long long)familyIdentifier;
-(unsigned long long)purchaserAccountIdentifier;
@end

