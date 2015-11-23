/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioStationMatchMetadata.h>

@class NSString, NSNumber;

@interface RadioStationMatchLibraryAlbumMetadata : RadioStationMatchMetadata {

	NSString* _albumName;
	NSNumber* _albumStoreID;
	NSNumber* _representativeCloudID;

}

@property (nonatomic,copy) NSString * albumName;                          //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy) NSNumber * albumStoreID;                       //@synthesize albumStoreID=_albumStoreID - In the implementation block
@property (nonatomic,copy) NSNumber * representativeCloudID;              //@synthesize representativeCloudID=_representativeCloudID - In the implementation block
+(id)metadataKey;
-(NSNumber *)albumStoreID;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(void)setRepresentativeCloudID:(NSNumber *)arg1 ;
-(void)setAlbumStoreID:(NSNumber *)arg1 ;
-(id)copyMetadataDictionary;
-(NSNumber *)representativeCloudID;
@end

