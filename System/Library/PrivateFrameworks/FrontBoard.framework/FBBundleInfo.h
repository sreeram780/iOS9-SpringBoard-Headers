/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class LSApplicationProxy, BSCFBundle, NSString, NSURL, NSDictionary, NSUUID;

@interface FBBundleInfo : NSObject {

	LSApplicationProxy* _proxy;
	BSCFBundle* _bundle;
	NSString* _displayName;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _bundleType;
	NSURL* _bundleURL;
	NSDictionary* _extendedInfo;
	unsigned long long _sequenceNumber;
	NSUUID* _cacheGUID;

}

@property (nonatomic,copy) NSString * displayName;                                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                         //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * bundleType;                                            //@synthesize bundleType=_bundleType - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                                              //@synthesize bundleURL=_bundleURL - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;                              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy) NSDictionary * extendedInfo;                                      //@synthesize extendedInfo=_extendedInfo - In the implementation block
@property (getter=_proxy,nonatomic,retain,readonly) LSApplicationProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (getter=_bundle,nonatomic,retain,readonly) BSCFBundle * bundle;                    //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) NSUUID * cacheGUID;                                             //@synthesize cacheGUID=_cacheGUID - In the implementation block
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(NSString *)displayName;
-(id)_bundle;
-(void)setExtendedInfo:(NSDictionary *)arg1 ;
-(void)_purgeBundle;
-(id)_initWithApplicationProxy:(id)arg1 ;
-(id)_proxy;
-(NSUUID *)cacheGUID;
-(NSString *)bundleType;
-(id)_initWithBundleURL:(id)arg1 ;
-(id)extendedInfoValueForKey:(id)arg1 ;
-(void)setBundleType:(NSString *)arg1 ;
-(void)setBundleURL:(NSURL *)arg1 ;
-(NSDictionary *)extendedInfo;
-(void)setCacheGUID:(NSUUID *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
@end

