/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SCNImageSource.h>

@interface SCNUIKitSource : SCNImageSource {

	id _uiView;
	id _uiWindow;

}

@property (nonatomic,retain) id uiView;                //@synthesize uiView=_uiView - In the implementation block
@property (nonatomic,retain) id uiWindow;              //@synthesize uiWindow=_uiWindow - In the implementation block
-(void)setUiView:(id)arg1 ;
-(void)setUiWindow:(id)arg1 ;
-(id)uiView;
-(id)prepareWindowIfNeeded;
-(id)uiWindow;
-(id)textureSource;
-(void)dealloc;
-(id)init;
-(BOOL)isOpaque;
@end

