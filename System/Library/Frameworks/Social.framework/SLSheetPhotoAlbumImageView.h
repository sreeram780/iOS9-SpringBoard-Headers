/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class CALayer, NSMutableArray, UILabel;

@interface SLSheetPhotoAlbumImageView : SLSheetImagePreviewView {

	CALayer* _frameLayer;
	CALayer* _glossLayer;
	NSMutableArray* _frameViews;
	long long _imageQuantity;
	long long _numPreviewImagesAdded;
	UILabel* _imageCountLabel;
	BOOL _allAttachmentsAreImages;

}
+(unsigned long long)displayedFrameMaximum;
-(void)setPreviewImage:(id)arg1 forAttachment:(id)arg2 ;
-(id)_itemCountString;
-(void)addPreviewImage:(id)arg1 ;
-(BOOL)_shouldDisplayImageCountLabel;
-(id)initWithPrincipalAttachments:(id)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)sizeToFit;
-(CGSize)intrinsicContentSize;
-(void)setItemCountString:(id)arg1 ;
@end

