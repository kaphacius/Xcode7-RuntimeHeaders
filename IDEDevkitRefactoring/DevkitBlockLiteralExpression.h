//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DevkitBlockLiteralExpression : DevkitExpression <DevkitScopeLookup>
{
    DevkitDeclaration *_blockDeclaration;
    DevkitType *_complexType;
    DevkitASTNode<DevkitScopeLookup> *_containingScope;
    BOOL _hasInvocation;
}

- (void).cxx_destruct;
- (void)addDeclaration:(id)arg1 project:(id)arg2;
- (id)findName:(id)arg1 nameKind:(int)arg2;
- (id)lookupNameRecursively:(id)arg1 nameKind:(int)arg2 upTo:(id)arg3;
- (id)lookupName:(id)arg1 nameKind:(int)arg2;
- (id)declarations;
- (void)setContainingScope:(id)arg1;
- (id)containingScope;
- (BOOL)hasInvocation;
- (void)setHasInvocation;
- (id)type;
- (void)setType:(id)arg1;
- (void)setblockBodyExpression:(id)arg1;
- (void)setBlockDeclaration:(id)arg1;
- (id)blockDeclaration;
- (id)initWithContainingScope:(id)arg1 location:(id)arg2;

@end