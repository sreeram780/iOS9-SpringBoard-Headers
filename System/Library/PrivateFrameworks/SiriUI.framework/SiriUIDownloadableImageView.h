/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, NSURL, NSString, NSBundle;

@interface SiriUIDownloadableImageView : UIView {

	UIImageView* _imageView;
	NSURL* _imageURL;
	BOOL _showingPlaceHolderImage;
	NSString* _placeHolderImageName;
	NSBundle* _placeHolderImageBundle;
	double _placeHolderVerticalOffset;

}
-(void)layoutSubviews;
-(void)showPlaceHolderImage;
-(void)_setImage:(id)arg1 isPlaceHolder:(BOOL)arg2 ;
-(id)initWithImageURL:(id)arg1 placeHolderImageName:(id)arg2 placeHolderImageBundle:(id)arg3 ;
-(void)setPlaceHolderImageName:(id)arg1 ;
-(void)setPlaceHolderVerticalOffset:(double)arg1 ;
-(void)setImageURL:(id)arg1 ;
@end

