/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, IKViewElementStyle, NSDictionary, IKViewElementStyleComposer;

@interface IKTemplateTreeNode : NSObject {

	IKTemplateTreeNode* _parentNode;
	NSString* _nodeName;
	IKViewElementStyle* _styleOverrides;
	NSDictionary* _childNodes;
	IKViewElementStyleComposer* _styleComposer;

}

@property (nonatomic,__weak,readonly) IKTemplateTreeNode * parentNode;                //@synthesize parentNode=_parentNode - In the implementation block
@property (nonatomic,copy,readonly) NSString * nodeName;                              //@synthesize nodeName=_nodeName - In the implementation block
@property (nonatomic,copy,readonly) IKViewElementStyle * styleOverrides;              //@synthesize styleOverrides=_styleOverrides - In the implementation block
@property (nonatomic,copy) NSDictionary * childNodes;                                 //@synthesize childNodes=_childNodes - In the implementation block
@property (nonatomic,retain) IKViewElementStyleComposer * styleComposer;              //@synthesize styleComposer=_styleComposer - In the implementation block
-(NSDictionary *)childNodes;
-(IKTemplateTreeNode *)parentNode;
-(IKViewElementStyle *)styleOverrides;
-(IKViewElementStyleComposer *)styleComposer;
-(void)setStyleComposer:(IKViewElementStyleComposer *)arg1 ;
-(id)initWithNodeName:(id)arg1 styleOverrides:(id)arg2 parentNode:(id)arg3 ;
-(void)setChildNodes:(NSDictionary *)arg1 ;
-(NSString *)nodeName;
@end

