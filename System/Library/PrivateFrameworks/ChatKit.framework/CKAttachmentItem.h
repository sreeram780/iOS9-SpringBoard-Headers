/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString;

@interface CKAttachmentItem : NSObject <QLPreviewItem> {

	CGSize _size;
	NSURL* _appendedBundleURL;
	BOOL _isIrisAsset;
	NSURL* _fileURL;
	NSString* _guid;
	NSURL* _previewURL;

}

@property (nonatomic,copy) NSURL * fileURL;                              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * guid;                              //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (assign,nonatomic) BOOL isIrisAsset;                           //@synthesize isIrisAsset=_isIrisAsset - In the implementation block
@property (nonatomic,retain) NSURL * previewURL;                         //@synthesize previewURL=_previewURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
+(CGSize)defaultSize;
+(id)previewCache;
+(id)UTITypes;
+(id)previewSizingQueue;
+(unsigned long long)pxWidth;
-(NSURL *)previewURL;
-(id)imageData;
-(CGSize)size;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSURL *)previewItemURL;
-(NSURL *)fileURL;
-(void)startDeferredSetup;
-(id)cachedPreview;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(id)UTIType;
-(BOOL)isIrisAsset;
-(void)setIsIrisAsset:(BOOL)arg1 ;
-(id)pasteboardItem;
-(id)_savedPreviewFromURL:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 size:(CGSize)arg2 guid:(id)arg3 ;
-(void)_savePreview:(id)arg1 ;
-(void)_removeAppendedBundle;
-(id)_getTempIrisFolder;
-(id)_getTempIrisBundleLocation;
-(id)_getIrisBundleURL;
-(id)getIrisVideoPath;
-(void)setPreviewURL:(NSURL *)arg1 ;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
@end

