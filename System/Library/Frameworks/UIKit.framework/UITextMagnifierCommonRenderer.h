/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextMagnifierRenderer.h>

@class UIImage;

@interface UITextMagnifierCommonRenderer : UITextMagnifierRenderer {

	BOOL m_loaded;
	UIImage* m_loImageHorizontal;
	UIImage* m_maskImageHorizontal;
	UIImage* m_hiImageHorizontal;
	UIImage* m_loImageVertical;
	UIImage* m_maskImageVertical;
	UIImage* m_hiImageVertical;

}
-(void)drawMagnifier:(CGRect)arg1 ;
-(CGPoint)calculateCompositePointWithOrientation:(BOOL)arg1 ;
-(id)filenamesForMagnifier;
-(double)offsetForMagnifier:(id)arg1 ;
-(CGPoint)calculateFinalCompositionPointForCompositePoint:(CGPoint)arg1 ;
-(void)performOperations:(/*^block*/id)arg1 forMagnifier:(id)arg2 ;
-(void)loadImages;
-(CGImageRef)captureSnapshotAtRect:(CGRect)arg1 forMagnifier:(id)arg2 withRotation:(double)arg3 onlyTarget:(BOOL)arg4 outTransform:(CGAffineTransform*)arg5 ;
@end

