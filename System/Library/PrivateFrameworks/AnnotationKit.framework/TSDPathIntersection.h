/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface TSDPathIntersection : NSObject {

	long long mSegment;
	long long mSegmentB;
	double mT;
	double mTB;
	CGPoint mPoint;

}

@property (nonatomic,readonly) long long segment; 
@property (nonatomic,readonly) long long segmentB; 
@property (nonatomic,readonly) double t; 
@property (nonatomic,readonly) double tB; 
@property (assign,nonatomic) CGPoint point; 
-(id)description;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(long long)compareSegmentAndT:(id)arg1 ;
-(long long)segment;
-(double)t;
-(id)initWithSegment:(long long)arg1 atT:(double)arg2 onSegmentB:(long long)arg3 atT:(double)arg4 atPoint:(CGPoint)arg5 ;
-(long long)compareT:(id)arg1 ;
-(id)initWithSegment:(long long)arg1 atT:(double)arg2 atPoint:(CGPoint)arg3 ;
-(long long)segmentB;
-(double)tB;
@end

