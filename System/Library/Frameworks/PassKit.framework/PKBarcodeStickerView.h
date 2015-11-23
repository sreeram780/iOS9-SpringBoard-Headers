/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIButton.h>

@class PKBarcode, UIImageView, NSMutableArray, UILabel, UIView;

@interface PKBarcodeStickerView : UIButton {

	PKBarcode* _barcode;
	UIImageView* _matteView;
	UIImageView* _barcodeView;
	NSMutableArray* _stickerConstraints;
	NSMutableArray* _matteConstraints;
	UILabel* _altTextLabel;
	long long _layoutMode;
	BOOL _drawBarcode;
	long long _validity;

}

@property (assign,nonatomic) long long validity;                //@synthesize validity=_validity - In the implementation block
@property (nonatomic,readonly) UIView * matteView;              //@synthesize matteView=_matteView - In the implementation block
+(CGSize)_sizeForBarcode:(id)arg1 ;
+(PKBarcodeQuietZone)_quiteZoneForBarcode:(id)arg1 ;
-(id)initWithBarcode:(id)arg1 validityState:(long long)arg2 layoutMode:(long long)arg3 ;
-(void)setValidity:(long long)arg1 ;
-(CGSize)_varianceForBarcode:(id)arg1 ;
-(id)_resizedBarcode:(id)arg1 desiredSize:(CGSize)arg2 ;
-(void)_generateMatteRect:(CGRect*)arg1 barcodeRect:(CGRect*)arg2 altTextRect:(CGRect*)arg3 boundingSize:(CGSize)arg4 ;
-(UIView *)matteView;
-(long long)validity;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateValidity;
@end

