/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUICachedLayout.h>

@class NSString;

@interface SKUITextLayout : NSObject <SKUICachedLayout> {

	CTFramesetterRef _framesetter;
	double _lineHeight;
	BOOL _requiresTruncation;
	CGSize _size;
	CTFrameRef _textFrame;
	CGSize _truncatedSize;

}

@property (nonatomic,readonly) double lineHeight;                    //@synthesize lineHeight=_lineHeight - In the implementation block
@property (nonatomic,readonly) BOOL requiresTruncation;              //@synthesize requiresTruncation=_requiresTruncation - In the implementation block
@property (nonatomic,readonly) CTFrameRef textFrame;                 //@synthesize textFrame=_textFrame - In the implementation block
@property (nonatomic,readonly) CGSize textSize;                      //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) CGSize truncatedSize;                 //@synthesize truncatedSize=_truncatedSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CFAttributedStringRef)_newAttributedStringWithRequest:(id)arg1 ;
+(CFAttributedStringRef)newAttributedStringWithText:(id)arg1 ;
-(void)dealloc;
-(double)lineHeight;
-(CGSize)textSize;
-(id)initWithLayoutRequest:(id)arg1 ;
-(BOOL)requiresTruncation;
-(CGSize)truncatedSize;
-(CTFrameRef)textFrame;
@end

