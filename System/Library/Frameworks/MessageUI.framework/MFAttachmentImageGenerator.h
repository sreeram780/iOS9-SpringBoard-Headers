/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:33 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIImage;

@interface MFAttachmentImageGenerator : UIView {

	CGSize _textSize;
	NSString* _displayString;
	UIImage* _image;
	double _maxImageHeight;

}
+(CGRect)imageRectForAttachment:(id)arg1 ;
+(id)imageForAttachment:(id)arg1 ;
+(id)pngDataForAttachment:(id)arg1 ;
+(double)defaultHeight;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)image;
-(id)initWithAttachment:(id)arg1 ;
-(CGRect)imageRect;
@end

