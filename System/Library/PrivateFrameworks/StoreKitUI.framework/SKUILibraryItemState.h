/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface SKUILibraryItemState : NSObject <NSCopying> {

	long long _availability;
	unsigned long long _avTypes;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	BOOL _highDefinition;
	BOOL _preview;
	BOOL _rental;
	NSNumber* _storeAccountIdentifier;
	NSString* _storeFlavorIdentifier;
	NSString* _storePlatformKind;
	NSNumber* _storeVersionIdentifier;

}

@property (assign,nonatomic) long long availability;                                   //@synthesize availability=_availability - In the implementation block
@property (assign,nonatomic) unsigned long long AVTypes;                               //@synthesize avTypes=_avTypes - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                   //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,getter=isHighDefinition,nonatomic) BOOL highDefinition;              //@synthesize highDefinition=_highDefinition - In the implementation block
@property (assign,getter=isPreview,nonatomic) BOOL preview;                            //@synthesize preview=_preview - In the implementation block
@property (assign,getter=isRental,nonatomic) BOOL rental;                              //@synthesize rental=_rental - In the implementation block
@property (nonatomic,copy) NSNumber * storeAccountIdentifier;                          //@synthesize storeAccountIdentifier=_storeAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeFlavorIdentifier;                           //@synthesize storeFlavorIdentifier=_storeFlavorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storePlatformKind;                               //@synthesize storePlatformKind=_storePlatformKind - In the implementation block
@property (nonatomic,copy) NSNumber * storeVersionIdentifier;                          //@synthesize storeVersionIdentifier=_storeVersionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * itemStateVariantIdentifier; 
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(long long)availability;
-(NSString *)storePlatformKind;
-(id)newJavaScriptRepresentation;
-(BOOL)isPreview;
-(NSString *)itemStateVariantIdentifier;
-(unsigned long long)AVTypes;
-(id)initWithApplication:(id)arg1 ;
-(void)setAvailability:(long long)arg1 ;
-(void)setAVTypes:(unsigned long long)arg1 ;
-(void)setHighDefinition:(BOOL)arg1 ;
-(BOOL)isRental;
-(void)setRental:(BOOL)arg1 ;
-(void)setStoreAccountIdentifier:(NSNumber *)arg1 ;
-(void)setStorePlatformKind:(NSString *)arg1 ;
-(BOOL)isHighDefinition;
-(void)setPreview:(BOOL)arg1 ;
-(NSNumber *)storeAccountIdentifier;
-(NSString *)storeFlavorIdentifier;
-(void)setStoreFlavorIdentifier:(NSString *)arg1 ;
-(NSNumber *)storeVersionIdentifier;
-(void)setStoreVersionIdentifier:(NSNumber *)arg1 ;
@end
