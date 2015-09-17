//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKEditingSceneTarget : NSObject <SKEditingTarget, GTFActionLibraryUndoDelegate>
{
    DVTObservingToken *_documentEditedKVOToken;
    SKScene *_target;
    GTFActionLibrary *_actionLibrary;
    NSMutableDictionary *_uidToSKNode;
    BOOL _needsToWriteMetadata;
    SKDocument *_document;
    SKScene *_layoutScene;
    NSMutableDictionary *_actionAssignments;
}

+ (id)keyPathsForValuesAffectingTopLevelStructuredObject;
+ (id)targetWithScene:(id)arg1 document:(id)arg2 fileData:(id)arg3;
@property(readonly, nonatomic) GTFActionLibrary *actionLibrary; // @synthesize actionLibrary=_actionLibrary;
@property(retain, nonatomic) NSMutableDictionary *actionAssignments; // @synthesize actionAssignments=_actionAssignments;
@property(retain, nonatomic) SKScene *layoutScene; // @synthesize layoutScene=_layoutScene;
@property(nonatomic) __weak SKDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *dynamicObjectLibraryAssets;
- (id)actionObjectsLibraryAssets;
- (id)sceneObjectLibraryAssets;
@property(readonly, nonatomic) NSMutableArray *staticObjectLibraryAssets;
@property(readonly, nonatomic) NSString *objectsLibraryCustomGroupIdentifier;
@property(readonly, nonatomic) NSString *objectsLibraryTitle;
- (id)undoManagerForActionLibrary:(id)arg1;
- (void)updateReferenceNodes;
- (id)encodedActionAssignments;
- (id)decodedActionAssignmentsFromData:(id)arg1 withScene:(id)arg2;
- (void)clearActionAssignmentEntryForURL:(id)arg1;
- (void)setActionAssignmentEntry:(id)arg1 forURL:(id)arg2;
- (id)nodeFromUID:(id)arg1;
- (void)addUIDToNode:(id)arg1;
- (void)refreshUIDToNodeMappings:(id)arg1;
- (void)setNewScene:(id)arg1;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (void)prepareTargetForDocumentClose;
@property(readonly, nonatomic) NSArray *topLevelStructuredObject;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)isTargetForObject:(id)arg1;
@property(readonly, nonatomic) SKScene *sceneTarget;
@property(nonatomic) BOOL paused;
- (id)initWithScene:(id)arg1 document:(id)arg2 fileData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;

@end