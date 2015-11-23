/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNGeometry;

@interface SCNLevelOfDetail : NSObject <NSCopying, NSSecureCoding> {

	C3DLODRef _lod;
	long long _mode;
	SCNGeometry* _geometry;

}

@property (readonly) SCNGeometry * geometry; 
@property (readonly) double screenSpaceRadius; 
@property (readonly) double worldSpaceDistance; 
+(id)levelOfDetailWithGeometry:(id)arg1 screenSpaceRadius:(double)arg2 ;
+(id)levelOfDetailWithGeometry:(id)arg1 worldSpaceDistance:(double)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)thresholdValue;
-(void*)__CFObject;
-(long long)thresholdMode;
-(double)screenSpaceRadius;
-(double)worldSpaceDistance;
-(void)_setupWithGeometry:(id)arg1 thresholdMode:(long long)arg2 value:(double)arg3 ;
-(id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 lod:(C3DLODRef)arg3 ;
-(void)_customEncodingOfSCNLevelOfDetail:(id)arg1 ;
-(void)_didDecodeSCNLevelOfDetail:(id)arg1 ;
-(id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 thresholdValue:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCNGeometry *)geometry;
@end

