/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIColor, NSString;

@interface PT2DGraphAxisStyle : NSObject {

	BOOL _showsGridlines;
	BOOL _showsHashmarks;
	BOOL _showsTitle;
	UIColor* _color;
	double _lineWidth;
	double _hashmarkInterval;
	NSString* _title;
	UIColor* _gridlineColor;
	UIColor* _titleColor;
	unsigned long long _gridlineCount;

}

@property (nonatomic,retain) UIColor * color;                               //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double lineWidth;                              //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double hashmarkInterval;                       //@synthesize hashmarkInterval=_hashmarkInterval - In the implementation block
@property (assign,nonatomic) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * gridlineColor;                       //@synthesize gridlineColor=_gridlineColor - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                          //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) unsigned long long gridlineCount;              //@synthesize gridlineCount=_gridlineCount - In the implementation block
@property (assign,nonatomic) BOOL showsGridlines;                           //@synthesize showsGridlines=_showsGridlines - In the implementation block
@property (assign,nonatomic) BOOL showsHashmarks;                           //@synthesize showsHashmarks=_showsHashmarks - In the implementation block
@property (assign,nonatomic) BOOL showsTitle;                               //@synthesize showsTitle=_showsTitle - In the implementation block
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(void)setGridlineCount:(unsigned long long)arg1 ;
-(void)setGridlineColor:(UIColor *)arg1 ;
-(void)setShowsGridlines:(BOOL)arg1 ;
-(double)hashmarkInterval;
-(void)setHashmarkInterval:(double)arg1 ;
-(UIColor *)gridlineColor;
-(unsigned long long)gridlineCount;
-(BOOL)showsGridlines;
-(BOOL)showsHashmarks;
-(void)setShowsHashmarks:(BOOL)arg1 ;
-(BOOL)showsTitle;
-(void)setShowsTitle:(BOOL)arg1 ;
@end

