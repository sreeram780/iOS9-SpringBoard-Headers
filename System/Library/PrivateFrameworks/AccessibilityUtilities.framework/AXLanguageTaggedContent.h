/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSArray, NSMutableArray, NSLinguisticTagger, NSMutableOrderedSet, NSString;

@interface AXLanguageTaggedContent : NSObject {

	NSArray* _currentDialects;
	NSRange _currentChunk;
	BOOL _predictedByTagger;
	BOOL _tagged;
	BOOL _splitContentOnNewlines;
	NSMutableArray* _tags;
	NSLinguisticTagger* _linguisticTagger;
	NSMutableOrderedSet* _unpredictedAmbiguousLangMaps;
	NSString* _userPreferredLangID;

}

@property (nonatomic,readonly) NSString * content; 
@property (assign,getter=isTagged,nonatomic) BOOL tagged;                                     //@synthesize tagged=_tagged - In the implementation block
@property (nonatomic,retain) NSMutableArray * tags;                                           //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * unpredictedAmbiguousLangMaps;              //@synthesize unpredictedAmbiguousLangMaps=_unpredictedAmbiguousLangMaps - In the implementation block
@property (assign,nonatomic) BOOL splitContentOnNewlines;                                     //@synthesize splitContentOnNewlines=_splitContentOnNewlines - In the implementation block
@property (nonatomic,copy) NSString * userPreferredLangID;                                    //@synthesize userPreferredLangID=_userPreferredLangID - In the implementation block
@property (nonatomic,retain) NSLinguisticTagger * linguisticTagger;                           //@synthesize linguisticTagger=_linguisticTagger - In the implementation block
@property (nonatomic,retain) NSArray * currentDialects;                                       //@synthesize currentDialects=_currentDialects - In the implementation block
-(void)dealloc;
-(id)description;
-(NSMutableArray *)tags;
-(NSString *)content;
-(id)initWithContent:(id)arg1 ;
-(void)tagContent;
-(id)primaryUnambiguousDialect;
-(id)primaryAmbiguousDialect;
-(void)setUserPreferredLangID:(NSString *)arg1 ;
-(NSString *)userPreferredLangID;
-(id)ambiguousLangMaps;
-(id)unambiguousLangMaps;
-(void)setLinguisticTagger:(NSLinguisticTagger *)arg1 ;
-(void)setUnpredictedAmbiguousLangMaps:(NSMutableOrderedSet *)arg1 ;
-(NSLinguisticTagger *)linguisticTagger;
-(void)setTagged:(BOOL)arg1 ;
-(void)setCurrentDialects:(NSArray *)arg1 ;
-(void)_manuallyProcessContentWithRange:(NSRange)arg1 ;
-(void)_addTag;
-(id)significantAmbiguousLangMapsForUserKeyboards;
-(BOOL)splitContentOnNewlines;
-(NSArray *)currentDialects;
-(void)enumerateUnpredictedTags:(/*^block*/id)arg1 ;
-(void)enumeratePredictedTags:(/*^block*/id)arg1 ;
-(BOOL)langMapIsSignificant:(id)arg1 ;
-(id)significantAmbiguousLangMaps;
-(BOOL)hasOnlyWesternLangMaps;
-(BOOL)hasOnlyNonWesternLangMaps;
-(void)updateTagsForLocalePrefChange;
-(NSMutableOrderedSet *)unpredictedAmbiguousLangMaps;
-(void)setSplitContentOnNewlines:(BOOL)arg1 ;
-(void)setTags:(NSMutableArray *)arg1 ;
-(BOOL)isTagged;
@end

