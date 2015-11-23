/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class XBApplicationIdentity, NSMutableDictionary, NSString, NSDate, XBStatusBarSettings, XBApplicationSnapshotGenerationContext, UIImage, BSTimer, NSDictionary;

@interface XBApplicationSnapshot : NSObject <NSCoding, BSDescriptionProviding> {

	XBApplicationIdentity* _appIdentity;
	NSMutableDictionary* _variantsByID;
	BOOL _invalidated;
	NSString* _identifier;
	NSString* _groupID;
	NSString* _variantID;
	NSString* _launchInterfaceIdentifier;
	NSString* _name;
	NSString* _scheme;
	NSString* _requiredOSVersion;
	NSString* _path;
	NSString* _filename;
	NSString* _relativePath;
	long long _fileLocation;
	NSDate* _creationDate;
	NSDate* _lastUsedDate;
	BOOL _fullScreen;
	CGSize _referenceSize;
	CGRect _contentFrame;
	long long _interfaceOrientation;
	long long _contentType;
	BOOL _imageOpaque;
	double _imageScale;
	CGAffineTransform _imageTransform;
	long long _imageOrientation;
	XBStatusBarSettings* _statusBarSettings;
	long long _classicMode;
	long long _compatibilityMode;
	long long _backgroundStyle;
	XBApplicationSnapshotGenerationContext* _generationContext;
	UIImage* _cachedImage;
	BSTimer* _imagePurgeTimer;
	unsigned long long _imageAccessCount;
	NSDictionary* _extendedData;
	NSDate* _expirationDate;

}

@property (nonatomic,copy,readonly) NSString * _sortableLaunchInterfaceIdentifier; 
@property (nonatomic,copy,readonly) NSString * _sortableRequiredOSVersion; 
@property (nonatomic,copy,readonly) NSString * _sortableName; 
@property (nonatomic,copy,readonly) NSString * _sortableScheme; 
@property (nonatomic,retain,readonly) XBStatusBarSettings * _sortableStatusBarSettings; 
@property (nonatomic,readonly) unsigned long long _interfaceOrientationMask; 
@property (nonatomic,readonly) unsigned long long _contentTypeMask; 
@property (nonatomic,copy,readonly) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupID;                                                        //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy) NSString * variantID;                                                               //@synthesize variantID=_variantID - In the implementation block
@property (nonatomic,copy) NSString * launchInterfaceIdentifier;                                               //@synthesize launchInterfaceIdentifier=_launchInterfaceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * scheme;                                                                  //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,copy) NSString * requiredOSVersion;                                                       //@synthesize requiredOSVersion=_requiredOSVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;                                                           //@synthesize path=_path - In the implementation block
@property (nonatomic,copy,readonly) NSString * filename;                                                       //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) BOOL fileExists; 
@property (nonatomic,retain,readonly) NSDate * creationDate;                                                   //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * lastUsedDate;                                                            //@synthesize lastUsedDate=_lastUsedDate - In the implementation block
@property (retain) NSDate * expirationDate;                                                                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (assign,nonatomic) long long contentType;                                                            //@synthesize contentType=_contentType - In the implementation block
@property (assign,getter=isFullScreen,nonatomic) BOOL fullScreen;                                              //@synthesize fullScreen=_fullScreen - In the implementation block
@property (assign,nonatomic) CGSize referenceSize;                                                             //@synthesize referenceSize=_referenceSize - In the implementation block
@property (nonatomic,readonly) CGSize naturalSize; 
@property (assign,nonatomic) CGRect contentFrame; 
@property (nonatomic,readonly) BOOL hasFullSizedContent; 
@property (assign,nonatomic) long long interfaceOrientation;                                                   //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,copy) XBStatusBarSettings * statusBarSettings;                                            //@synthesize statusBarSettings=_statusBarSettings - In the implementation block
@property (assign,nonatomic) long long classicMode;                                                            //@synthesize classicMode=_classicMode - In the implementation block
@property (assign,nonatomic) long long compatibilityMode;                                                      //@synthesize compatibilityMode=_compatibilityMode - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                                        //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) double imageScale;                                                                //@synthesize imageScale=_imageScale - In the implementation block
@property (assign,getter=isImageOpaque,nonatomic) BOOL imageOpaque;                                            //@synthesize imageOpaque=_imageOpaque - In the implementation block
@property (assign,nonatomic) CGAffineTransform imageTransform;                                                 //@synthesize imageTransform=_imageTransform - In the implementation block
@property (assign,nonatomic) long long imageOrientation;                                                       //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (nonatomic,copy) NSDictionary * extendedData;                                                        //@synthesize extendedData=_extendedData - In the implementation block
@property (nonatomic,retain,readonly) XBApplicationSnapshotGenerationContext * generationContext;              //@synthesize generationContext=_generationContext - In the implementation block
@property (copy) XBApplicationIdentity * appIdentity;                                                          //@synthesize appIdentity=_appIdentity - In the implementation block
@property (assign,nonatomic) long long fileLocation;                                                           //@synthesize fileLocation=_fileLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)normalizeSnapshotName:(id)arg1 ;
-(NSString *)_sortableScheme;
-(NSString *)_sortableName;
-(NSString *)_sortableLaunchInterfaceIdentifier;
-(NSString *)_sortableRequiredOSVersion;
-(XBStatusBarSettings *)_sortableStatusBarSettings;
-(unsigned long long)_interfaceOrientationMask;
-(unsigned long long)_contentTypeMask;
-(void)setLastUsedDate:(NSDate *)arg1 ;
-(NSDate *)lastUsedDate;
-(void)setContentType:(long long)arg1 ;
-(NSDate *)creationDate;
-(void)setImageOrientation:(long long)arg1 ;
-(void)setImageTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)imageTransform;
-(NSString *)groupID;
-(void)setContentFrame:(CGRect)arg1 ;
-(BOOL)_isInvalidated;
-(CGRect)_referenceBounds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)interfaceOrientation;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setCompatibilityMode:(long long)arg1 ;
-(NSString *)scheme;
-(BOOL)isValid;
-(long long)compatibilityMode;
-(NSString *)path;
-(long long)imageOrientation;
-(void)_commonInit;
-(long long)contentType;
-(void)setFullScreen:(BOOL)arg1 ;
-(void)setClassicMode:(long long)arg1 ;
-(long long)classicMode;
-(void)_invalidate;
-(CGSize)naturalSize;
-(void)setScheme:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)loadImage;
-(NSString *)filename;
-(BOOL)isFullScreen;
-(void)setImageScale:(double)arg1 ;
-(CGSize)referenceSize;
-(NSString *)launchInterfaceIdentifier;
-(void)setReferenceSize:(CGSize)arg1 ;
-(void)setLaunchInterfaceIdentifier:(NSString *)arg1 ;
-(void)setStatusBarSettings:(XBStatusBarSettings *)arg1 ;
-(XBApplicationSnapshotGenerationContext *)generationContext;
-(NSString *)variantID;
-(NSString *)requiredOSVersion;
-(XBStatusBarSettings *)statusBarSettings;
-(void)setRequiredOSVersion:(NSString *)arg1 ;
-(id)_cachedImage;
-(void)beginImageAccess;
-(void)endImageAccess;
-(BOOL)isImageOpaque;
-(id)_initWithGroupID:(id)arg1 appIdentity:(id)arg2 generationContext:(id)arg3 ;
-(id)cachedImageForInterfaceOrientation:(long long)arg1 ;
-(XBApplicationIdentity *)appIdentity;
-(void)_purgeCachedImageIfAppropriate:(BOOL)arg1 ;
-(void)_clearImagePurgeTimer;
-(BOOL)hasCachedImage;
-(BOOL)_hasGenerationContext;
-(BOOL)fileExists;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg1 includeVariants:(BOOL)arg2 ;
-(BOOL)_path:(id)arg1 isRelativeToPath:(id)arg2 outRelativePath:(id*)arg3 ;
-(void)setAppIdentity:(XBApplicationIdentity *)arg1 ;
-(id)_determineRelativePathForPath:(id)arg1 location:(long long*)arg2 ;
-(BOOL)_shouldDeleteFileOnPurge;
-(BOOL)_validateWithAppIdentity:(id)arg1 ;
-(id)_initWithGroupID:(id)arg1 appIdentity:(id)arg2 ;
-(void)setVariantID:(NSString *)arg1 ;
-(void)setImageOpaque:(BOOL)arg1 ;
-(BOOL)hasFullSizedContent;
-(id)variantWithIdentifier:(id)arg1 ;
-(id)imageForInterfaceOrientation:(long long)arg1 ;
-(void)purgeImage;
-(void)purgeCachedImageAfterInterval:(double)arg1 ;
-(id)descriptionWithoutVariants;
-(id)_createVariantWithIdentifier:(id)arg1 ;
-(id)_configureDefaultPathWithinGroup;
-(void)_configureWithPath:(id)arg1 ;
-(void)_cacheImage:(id)arg1 withTransform:(CGAffineTransform)arg2 ;
-(long long)fileLocation;
-(void)setFileLocation:(long long)arg1 ;
-(NSDictionary *)extendedData;
-(void)setExtendedData:(NSDictionary *)arg1 ;
-(id)variants;
-(CGRect)contentFrame;
-(double)imageScale;
-(BOOL)isExpired;
@end

