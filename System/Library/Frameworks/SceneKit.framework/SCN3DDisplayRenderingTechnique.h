/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SCNTechnique.h>
#import <libobjc.A.dylib/SCNStereoscopicRenderingTechnique.h>

@interface SCN3DDisplayRenderingTechnique : SCNTechnique <SCNStereoscopicRenderingTechnique> {

	long long _displayLayout;

}

@property (nonatomic,readonly) long long displayLayout; 
@property (assign,nonatomic) double interaxialDistance; 
-(void)setInteraxialDistance:(double)arg1 ;
-(double)interaxialDistance;
-(id)initWithDisplayLayout:(long long)arg1 ;
-(long long)displayLayout;
@end

