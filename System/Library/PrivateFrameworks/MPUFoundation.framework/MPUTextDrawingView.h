/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UIView.h>

@class MPUTextDrawingContext, NSString;

@interface MPUTextDrawingView : UIView {

	double _cachedDisplayScale;
	MPUTextDrawingContext* _textDrawingContext;

}

@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,retain) MPUTextDrawingContext * textDrawingContext;              //@synthesize textDrawingContext=_textDrawingContext - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)text;
-(void)setTextDrawingContext:(MPUTextDrawingContext *)arg1 ;
-(double)_cachedDisplayScale;
-(MPUTextDrawingContext *)textDrawingContext;
@end

