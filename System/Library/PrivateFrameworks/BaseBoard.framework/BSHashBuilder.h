/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BaseBoard/BaseBoard-Structs.h>
@interface BSHashBuilder : NSObject {

	unsigned long long _hash;

}
+(id)builder;
-(id)init;
-(unsigned long long)hash;
-(id)appendCGFloat:(double)arg1 ;
-(id)appendFloat:(float)arg1 ;
-(void)_append:(unsigned long long)arg1 ;
-(id)appendHashingBlocks:(/*^block*/id)arg1 ;
-(id)appendPointer:(void*)arg1 ;
-(id)appendPoint:(CGPoint)arg1 ;
-(id)appendSize:(CGSize)arg1 ;
-(id)appendRect:(CGRect)arg1 ;
-(id)appendInteger:(long long)arg1 ;
-(id)appendBool:(BOOL)arg1 ;
-(id)appendArray:(id)arg1 ;
-(id)appendDouble:(double)arg1 ;
-(id)appendUnsignedInteger:(unsigned long long)arg1 ;
-(id)appendObject:(id)arg1 ;
@end

