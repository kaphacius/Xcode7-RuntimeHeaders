//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DiffSet : NSObject
{
    NSMutableDictionary *_fileSet;
    NSMutableArray *diffList;
    BOOL diffingWithAncestor;
    BOOL streamsComputed;
    NSString *_fileContentsA;
    unsigned long long _fileEncodingA;
    NSString *_fileContentsB;
    unsigned long long _fileEncodingB;
    NSString *_fileContentsX;
    unsigned long long _fileEncodingX;
}

+ (id)readContentsOfFile:(id)arg1 usedEncoding:(unsigned long long *)arg2;
+ (id)diffDescriptorsFromComparing:(id)arg1 with:(id)arg2;
- (id)descriptionString:(id)arg1;
- (void)dealloc;
- (void)initMiniDiffs;
- (void)copy:(id)arg1;
- (void)printDiffHeader:(long long)arg1:(long long)arg2:(BOOL)arg3:(id)arg4:(id)arg5;
- (long long)initialChangesRight;
- (long long)initialChangesLeft;
- (long long)numLeft;
- (long long)numRight;
- (long long)numConflicts;
- (void)computeDiffRects:(id *)arg1 forFileDiffController:(id)arg2;
- (id)textForFile:(id)arg1;
- (id)fileSet;
- (unsigned long long)fileEncodingX;
- (unsigned long long)fileEncodingB;
- (unsigned long long)fileEncodingA;
- (id)fileContentsX;
- (id)fileContentsB;
- (id)fileContentsA;
- (id)fileTimeB;
- (id)fileTimeA;
- (id)resetFileNameX;
- (id)resetFileNameB;
- (id)resetFileNameA;
- (id)resetFileNameForKey:(id)arg1;
- (id)initFileNameX;
- (id)initFileNameB;
- (id)initFileNameA;
- (id)displayFileNameM;
- (id)displayFileNameX;
- (id)displayFileNameB;
- (id)displayFileNameA;
- (id)fileNameM;
- (id)fileNameX;
- (id)fileNameB;
- (id)fileNameA;
- (void)setMergeName:(id)arg1;
- (id)initFromSelf;
- (id)initFromFileSet:(id)arg1;
- (BOOL)checkForAscii;
- (BOOL)checkInputFiles;
- (id)compareTwoFilesWithAncestor;
- (id)diffDescriptorsByAddingUnmodified:(id)arg1;
- (id)compareTwoFiles;
- (id)augmentedFileSet:(id)arg1;
- (void)setAttributesFor:(id)arg1;
- (id)diffAt:(long long)arg1;
- (unsigned long long)count;
- (void)computeStreamsWithAttributedString:(id)arg1 and:(id)arg2;
- (long long)computeRightLineNumberFor:(id)arg1;
- (id)mergeString;
- (long long)computeMergeLineNumberFor:(id)arg1;
- (id)textStorageFromFile:(id)arg1;
- (id)description;

@end