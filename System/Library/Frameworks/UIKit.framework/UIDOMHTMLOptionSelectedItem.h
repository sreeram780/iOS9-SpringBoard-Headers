/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIWebSelectedItemPrivate.h>

@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {

	BOOL _selected;
	DOMHTMLOptionElement* _node;

}

@property (nonatomic,retain) DOMHTMLOptionElement * _node;              //@synthesize node=_node - In the implementation block
-(void)dealloc;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)set_node:(DOMHTMLOptionElement *)arg1 ;
-(id)node;
-(BOOL)isGroup;
-(void)unselect;
-(id)initWithHTMLOptionNode:(id)arg1 ;
-(DOMHTMLOptionElement *)_node;
@end

