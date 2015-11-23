/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLPreviewItem, OS_dispatch_queue;
#import <QuickLook/QuickLook-Structs.h>
@class UIImage, NSString, NSObject, NSData;

@interface QLPreviewThumbnailGenerator : NSObject {

	id<QLPreviewItem> _item;
	CGSize _size;
	double _scale;
	UIImage* _thumbnailImage;
	NSString* _contentType;
	int _status;
	NSObject*<OS_dispatch_queue> _generationQueue;
	BOOL _addDecorations;
	BOOL _wantsJPEGRepresentationInstead;
	NSData* _jpegRepresentation;

}

@property (readonly) UIImage * thumbnailImage;                                          //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> generationQueue;              //@synthesize generationQueue=_generationQueue - In the implementation block
@property (assign) BOOL wantsJPEGRepresentationInstead;                                 //@synthesize wantsJPEGRepresentationInstead=_wantsJPEGRepresentationInstead - In the implementation block
@property (readonly) NSData * jpegRepresentation;                                       //@synthesize jpegRepresentation=_jpegRepresentation - In the implementation block
+(id)generatorForPreviewItem:(id)arg1 maxSize:(CGSize)arg2 scale:(double)arg3 decorations:(BOOL)arg4 ;
+(BOOL)canGenerateThumbnailForPreviewItem:(id)arg1 ;
+(id)generatorForPreviewItem:(id)arg1 size:(CGSize)arg2 ;
-(UIImage *)thumbnailImage;
-(id)_thumbnailForImage;
-(id)_thumbnailForPDF;
-(id)_thumbnailForIris;
-(id)_thumbnailForMovie;
-(BOOL)wantsJPEGRepresentationInstead;
-(void)_generateSynchronouslyAndInvokeCompletionBlockOnMainQueue:(/*^block*/id)arg1 ;
-(CGContextRef)_beginContextWithSize:(CGSize)arg1 ;
-(id)_thumbnailForImageAtURL:(id)arg1 contentTypeIdentifier:(id)arg2 ;
-(CGSize)_pixelSize;
-(CGContextRef)_beginContext;
-(id)_endContextWithContentFrame:(CGRect)arg1 ;
-(void)generateWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)generationQueue;
-(void)setGenerationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setWantsJPEGRepresentationInstead:(BOOL)arg1 ;
-(NSData *)jpegRepresentation;
-(void)cancel;
-(void)dealloc;
@end

