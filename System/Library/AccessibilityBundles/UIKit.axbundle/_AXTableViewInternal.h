/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _AXTableViewInternal : NSObject {

	NSMutableDictionary* _children;
	NSMutableDictionary* _indexMap;
	NSMutableDictionary* _sectionHeaders;
	NSMutableDictionary* _sectionFooters;
	BOOL _reusableCellsEnabled;
	BOOL _searchTableViewVisible;
	BOOL _searchControllerDimmingViewVisible;
	long long _accessibleElementCount;

}

@property (assign,nonatomic) BOOL reusableCellsEnabled;                            //@synthesize reusableCellsEnabled=_reusableCellsEnabled - In the implementation block
@property (assign,nonatomic) BOOL searchTableViewVisible;                          //@synthesize searchTableViewVisible=_searchTableViewVisible - In the implementation block
@property (assign,nonatomic) BOOL searchControllerDimmingViewVisible;              //@synthesize searchControllerDimmingViewVisible=_searchControllerDimmingViewVisible - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * children;                     //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * indexMap;                     //@synthesize indexMap=_indexMap - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sectionHeaders;               //@synthesize sectionHeaders=_sectionHeaders - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sectionFooters;               //@synthesize sectionFooters=_sectionFooters - In the implementation block
@property (assign,nonatomic) long long accessibleElementCount;                     //@synthesize accessibleElementCount=_accessibleElementCount - In the implementation block
-(BOOL)searchControllerDimmingViewVisible;
-(void)setSearchControllerDimmingViewVisible:(BOOL)arg1 ;
-(BOOL)searchTableViewVisible;
-(void)setSearchTableViewVisible:(BOOL)arg1 ;
-(long long)accessibleElementCount;
-(void)setAccessibleElementCount:(long long)arg1 ;
-(NSMutableDictionary *)indexMap;
-(BOOL)reusableCellsEnabled;
-(void)setReusableCellsEnabled:(BOOL)arg1 ;
-(NSMutableDictionary *)sectionHeaders;
-(NSMutableDictionary *)sectionFooters;
-(void)dealloc;
-(id)init;
-(NSMutableDictionary *)children;
@end

