/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHPointFIFO.h>

@interface CHBoxcarFilterPointFIFO : CHPointFIFO {

	float _spacing;
	unsigned long long _width;
	vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >* _prevPoints;

}

@property (assign,nonatomic) unsigned long long width;                                                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float spacing;                                                            //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) vector<float __attribute__((ext_vector_type(4))) prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
-(void)flush;
-(unsigned long long)width;
-(void)addPoint:;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)clear;
-(void)setSpacing:(float)arg1 ;
-(float)spacing;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 ;
-(void)setPrevPoints:(vector<float __attribute__((ext_vector_type(4))))arg1 ;
-(vector<float __attribute__((ext_vector_type(4))))prevPoints;
-(void)emitAveragedPoint;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3 ;
@end

