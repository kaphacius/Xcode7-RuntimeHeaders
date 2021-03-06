//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CDMParser : NSObject <NSXMLParserDelegate>
{
    NSEntityDescription *currentEntity;
    NSPropertyDescription *currentProperty;
    NSMutableDictionary *userInfoDictionary;
    NSMutableDictionary *entitiesByName;
    NSMutableDictionary *configurationsByName;
    NSMutableDictionary *fetchRequestsByName;
    NSMutableDictionary *entityNamesToParentEntityNames;
    NSFetchRequest *currentFetchRequest;
    NSMutableArray *currentConfiguration;
    NSManagedObjectModel *model;
    NSMutableArray *relationshipsToSetup;
    NSMutableArray *compoundIndexes;
    NSMutableArray *compoundIndex;
    NSMutableArray *uniquenessConstraints;
    NSMutableArray *uniquenessConstraint;
    NSMutableArray *fetchRequestsToSetup;
    NSMutableString *parsedCharacters;
    NSDictionary *parseContext;
}

@property(retain, nonatomic) NSDictionary *parseContext; // @synthesize parseContext;
@property(retain, nonatomic) NSMutableString *parsedCharacters; // @synthesize parsedCharacters;
@property(retain, nonatomic) NSMutableArray *fetchRequestsToSetup; // @synthesize fetchRequestsToSetup;
@property(retain, nonatomic) NSMutableArray *uniquenessConstraint; // @synthesize uniquenessConstraint;
@property(retain, nonatomic) NSMutableArray *uniquenessConstraints; // @synthesize uniquenessConstraints;
@property(retain, nonatomic) NSMutableArray *compoundIndex; // @synthesize compoundIndex;
@property(retain, nonatomic) NSMutableArray *compoundIndexes; // @synthesize compoundIndexes;
@property(retain, nonatomic) NSMutableArray *relationshipsToSetup; // @synthesize relationshipsToSetup;
@property(readonly, nonatomic) NSManagedObjectModel *model; // @synthesize model;
@property(retain, nonatomic) NSMutableArray *currentConfiguration; // @synthesize currentConfiguration;
@property(retain, nonatomic) NSFetchRequest *currentFetchRequest; // @synthesize currentFetchRequest;
@property(retain, nonatomic) NSMutableDictionary *entityNamesToParentEntityNames; // @synthesize entityNamesToParentEntityNames;
@property(retain, nonatomic) NSMutableDictionary *fetchRequestsByName; // @synthesize fetchRequestsByName;
@property(retain, nonatomic) NSMutableDictionary *configurationsByName; // @synthesize configurationsByName;
@property(retain, nonatomic) NSMutableDictionary *entitiesByName; // @synthesize entitiesByName;
@property(retain, nonatomic) NSMutableDictionary *userInfoDictionary; // @synthesize userInfoDictionary;
@property(retain, nonatomic) NSPropertyDescription *currentProperty; // @synthesize currentProperty;
@property(retain, nonatomic) NSEntityDescription *currentEntity; // @synthesize currentEntity;
- (void).cxx_destruct;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)setupFetchedPropertyDescription:(id)arg1 withAttributeDictionary:(id)arg2;
- (void)setupRelationshipDescription:(id)arg1 withAttributeDictionary:(id)arg2;
- (void)setupAttributeDescription:(id)arg1 withAttributeDictionary:(id)arg2;
- (void)setupPropertyDescription:(id)arg1 withAttributeDictionary:(id)arg2;
- (void)setupFetchRequest:(id)arg1 withAttributeDictionary:(id)arg2;
- (void)setupSyncabilityForEntity:(id)arg1;
- (void)setupEntityDescription:(id)arg1 withAttributeDictionary:(id)arg2;
- (void)assembleModel;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end