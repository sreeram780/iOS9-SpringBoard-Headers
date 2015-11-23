/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSURL;

@interface HSBook : NSObject <NSSecureCoding> {

	BOOL _vppLicensed;
	unsigned long long _purchaseHistoryID;
	unsigned long long _storeID;
	NSString* _title;
	NSString* _author;
	NSString* _genre;
	NSDate* _datePurchased;
	NSURL* _artworkURL;
	NSString* _redownloadParameters;
	NSString* _vppOrganizationID;
	NSString* _vppOrganizationDisplayName;

}

@property (assign,nonatomic) unsigned long long purchaseHistoryID;               //@synthesize purchaseHistoryID=_purchaseHistoryID - In the implementation block
@property (assign,nonatomic) unsigned long long storeID;                         //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * author;                                    //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * genre;                                     //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSDate * datePurchased;                               //@synthesize datePurchased=_datePurchased - In the implementation block
@property (nonatomic,copy) NSURL * artworkURL;                                   //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,copy) NSString * redownloadParameters;                      //@synthesize redownloadParameters=_redownloadParameters - In the implementation block
@property (assign,getter=isVPPLicensed,nonatomic) BOOL vppLicensed;              //@synthesize vppLicensed=_vppLicensed - In the implementation block
@property (nonatomic,copy) NSString * vppOrganizationID;                         //@synthesize vppOrganizationID=_vppOrganizationID - In the implementation block
@property (nonatomic,copy) NSString * vppOrganizationDisplayName;                //@synthesize vppOrganizationDisplayName=_vppOrganizationDisplayName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)genre;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(NSURL *)artworkURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(void)setPurchaseHistoryID:(unsigned long long)arg1 ;
-(void)setRedownloadParameters:(NSString *)arg1 ;
-(void)setVppLicensed:(BOOL)arg1 ;
-(void)setVppOrganizationID:(NSString *)arg1 ;
-(void)setVppOrganizationDisplayName:(NSString *)arg1 ;
-(unsigned long long)purchaseHistoryID;
-(NSString *)redownloadParameters;
-(NSString *)vppOrganizationID;
-(NSString *)vppOrganizationDisplayName;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)author;
-(NSDate *)datePurchased;
-(void)setDatePurchased:(NSDate *)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(unsigned long long)storeID;
-(void)setStoreID:(unsigned long long)arg1 ;
-(BOOL)isVPPLicensed;
@end

