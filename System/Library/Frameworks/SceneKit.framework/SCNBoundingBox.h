/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNBoundingBox : NSObject {

	SCNVector3 min;
	SCNVector3 max;

}

@property (assign,nonatomic) SCNVector3 min; 
@property (assign,nonatomic) SCNVector3 max; 
-(void)setMax:(SCNVector3)arg1 ;
-(SCNVector3)max;
-(void)setMin:(SCNVector3)arg1 ;
-(SCNVector3)min;
-(id)description;
@end

