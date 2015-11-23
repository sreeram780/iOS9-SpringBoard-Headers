/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SplashBoard/SplashBoard-Structs.h>
@interface XBSnapshotDataProviderContext : NSObject {

	double _scale;
	BOOL _opaque;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) double scale;                                 //@synthesize scale=_scale - In the implementation block
@property (assign,getter=isOpaque,nonatomic) BOOL opaque;                  //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) CGAffineTransform baseTransform;              //@synthesize transform=_transform - In the implementation block
-(void)setOpaque:(BOOL)arg1 ;
-(id)init;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(BOOL)isOpaque;
-(CGAffineTransform)baseTransform;
-(void)setBaseTransform:(CGAffineTransform)arg1 ;
@end

