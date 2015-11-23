/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface AKSignature : NSObject <NSSecureCoding> {

	CGPathRef _path;
	CGRect _strokesBounds;
	BOOL _shouldPersist;
	NSUUID* _uniqueID;
	double _baselineOffset;
	NSDate* _creationDate;

}

@property (assign) BOOL shouldPersist;                 //@synthesize shouldPersist=_shouldPersist - In the implementation block
@property (retain) NSUUID * uniqueID;                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign) double baselineOffset;              //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (retain) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (readonly) CGPathRef path; 
@property (readonly) CGRect pathBounds; 
+(BOOL)supportsSecureCoding;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(CGPathRef)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(id)initWithPath:(CGPathRef)arg1 baselineOffset:(double)arg2 creationDate:(id)arg3 ;
-(BOOL)shouldPersist;
-(void)setShouldPersist:(BOOL)arg1 ;
-(id)initWithPath:(CGPathRef)arg1 baselineOffset:(double)arg2 ;
-(CGRect)pathBounds;
-(NSUUID *)uniqueID;
-(void)setUniqueID:(NSUUID *)arg1 ;
@end

