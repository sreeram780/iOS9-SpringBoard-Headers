/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIBarButtonItem.h>
#import <UIKit/UIAppearanceContainer.h>

@class RCAudioRouteBarButtonContainer, RCAudioRouteBarButton, NSString;

@interface RCAudioRouteBarButtonItem : UIBarButtonItem <UIAppearanceContainer> {

	RCAudioRouteBarButtonContainer* _contentView;
	RCAudioRouteBarButton* _button;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newAudioRouteItem;
-(void)dealloc;
-(void)_audioRouteControllerPickedRouteDidChangeNotification:(id)arg1 ;
-(id)initAudioRouteItem;
-(void)_routeButtonAction;
-(void)_audioRouteControllerAvailableRoutesMaskDidChangeNotification:(id)arg1 ;
-(void)_showAvailableRoutesAction;
-(void)_toggleSpeakerAction;
@end

