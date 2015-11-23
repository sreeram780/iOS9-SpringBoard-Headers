/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptCanvasContext, NSString, UIImage;

@interface SUScriptSegmentedControlItem : SUScriptObject {

	SUScriptCanvasContext* _canvas;
	NSString* _identifier;
	UIImage* _image;
	NSString* _imageURLString;
	NSString* _title;
	id _userInfo;

}

@property (nonatomic,readonly) UIImage * image;                 //@synthesize image=_image - In the implementation block
@property (retain) SUScriptCanvasContext * canvas; 
@property (retain) NSString * identifier; 
@property (retain) NSString * imageURL; 
@property (retain) NSString * title; 
@property (retain) id userInfo; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)_setImage:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(UIImage *)image;
-(void)setCanvas:(SUScriptCanvasContext *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(SUScriptCanvasContext *)canvas;
-(id)attributeKeys;
-(void)setImageURL:(NSString *)arg1 ;
-(NSString *)imageURL;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)_segmentedControl;
-(void)_reloadUserInterface;
-(id)newPageSection;
-(id)initWithPageSection:(id)arg1 ;
@end

