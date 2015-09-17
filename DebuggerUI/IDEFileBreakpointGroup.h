//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEFileBreakpointGroup : NSObject <IDEKeyDrivenNavigableItemRepresentedObject, DVTInvalidation>
{
    IDEBreakpointBucket *_bucket;
    NSArray *_breakpoints;
    NSMutableArray *_mutableBreakpoints;
    DVTObservingToken *_breakpointFileNameObserver;
    NSString *_displayName;
    NSImage *_displayImage;
    DVTFilePath *_filePath;
    IDEFileReference *_fileReference;
    IDEFileBreakpoint *_breakpointObservingTheNameOf;
}

+ (id)keyPathsForValuesAffectingAssociatedFileExists;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
@property(retain) IDEFileBreakpoint *breakpointObservingTheNameOf; // @synthesize breakpointObservingTheNameOf=_breakpointObservingTheNameOf;
@property(retain) IDEFileReference *fileReference; // @synthesize fileReference=_fileReference;
@property(retain) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSImage *displayImage; // @synthesize displayImage=_displayImage;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) IDEBreakpointBucket *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) BOOL associatedFileExists;
- (BOOL)containsBreakpoint:(id)arg1;
- (void)_assertBreakpointsFileIsSameAsGroup:(id)arg1;
- (void)_observeFileBreakpointsNameToUseAsOurOwn:(id)arg1;
- (void)removeFileBreakpoint:(id)arg1;
- (void)addFileBreakpointInSortedOrder:(id)arg1;
- (id)initWithBucket:(id)arg1;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;

// Remaining properties
@property(copy) NSArray *breakpoints; // @dynamic breakpoints;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(copy) NSMutableArray *mutableBreakpoints; // @dynamic mutableBreakpoints;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end