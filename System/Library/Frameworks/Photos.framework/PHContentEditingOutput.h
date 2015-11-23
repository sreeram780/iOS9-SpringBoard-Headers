/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PHAdjustmentData, NSURL, NSData;

@interface PHContentEditingOutput : NSObject <NSSecureCoding> {

	PHAdjustmentData* _adjustmentData;
	long long _baseVersion;
	BOOL _isSubstandardRender;
	NSURL* _renderedContentURL;
	long long _fullSizeRenderWidth;
	long long _fullSizeRenderHeight;
	NSData* _penultimateRenderedJPEGData;
	NSURL* _editorBundleURL;
	long long _mediaType;

}

@property (retain) PHAdjustmentData * adjustmentData; 
@property (copy) NSURL * renderedContentURL;                              //@synthesize renderedContentURL=_renderedContentURL - In the implementation block
@property (assign) long long baseVersion; 
@property (assign,nonatomic) BOOL isSubstandardRender;                    //@synthesize isSubstandardRender=_isSubstandardRender - In the implementation block
@property (assign,nonatomic) long long fullSizeRenderWidth;               //@synthesize fullSizeRenderWidth=_fullSizeRenderWidth - In the implementation block
@property (assign,nonatomic) long long fullSizeRenderHeight;              //@synthesize fullSizeRenderHeight=_fullSizeRenderHeight - In the implementation block
@property (retain) NSData * penultimateRenderedJPEGData;                  //@synthesize penultimateRenderedJPEGData=_penultimateRenderedJPEGData - In the implementation block
@property (retain) NSURL * editorBundleURL;                               //@synthesize editorBundleURL=_editorBundleURL - In the implementation block
@property (readonly) long long mediaType;                                 //@synthesize mediaType=_mediaType - In the implementation block
+(unsigned long long)maximumAdjustmentDataLength;
+(BOOL)supportsSecureCoding;
-(void)setRenderedContentURL:(NSURL *)arg1 ;
-(void)setIsSubstandardRender:(BOOL)arg1 ;
-(void)setFullSizeRenderWidth:(long long)arg1 ;
-(void)setFullSizeRenderHeight:(long long)arg1 ;
-(NSURL *)editorBundleURL;
-(NSData *)penultimateRenderedJPEGData;
-(BOOL)isSubstandardRender;
-(long long)fullSizeRenderWidth;
-(long long)fullSizeRenderHeight;
-(id)initWithContentEditingInput:(id)arg1 ;
-(id)initWithPlaceholderForCreatedAsset:(id)arg1 ;
-(long long)mediaType;
-(PHAdjustmentData *)adjustmentData;
-(NSURL *)renderedContentURL;
-(void)setEditorBundleURL:(NSURL *)arg1 ;
-(long long)baseVersion;
-(void)setAdjustmentData:(PHAdjustmentData *)arg1 ;
-(id)initWithAdjustmentBaseVersion:(long long)arg1 mediaType:(long long)arg2 ;
-(void)setBaseVersion:(long long)arg1 ;
-(void)setRenderedJPEGData:(id)arg1 ;
-(void)setPenultimateRenderedJPEGData:(NSData *)arg1 ;
-(void)clearRenderedContentURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)_commonInit;
@end

