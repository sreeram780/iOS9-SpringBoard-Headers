/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MusicArtworkPlaceholderKey : NSObject <NSCopying> {

	long long _integerHeight;
	long long _integerScale;
	long long _integerWidth;
	double _scale;
	CGSize _size;

}

@property (nonatomic,readonly) double scale;              //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGSize size;               //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 ;
@end

