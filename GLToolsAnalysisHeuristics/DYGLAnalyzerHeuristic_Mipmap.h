//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYGLAnalyzerHeuristic_Mipmap : DYGLAnalyzerHeuristic
{
    int currTextureType;
    int currTextureID;
    int currBaseLevel;
    int currBaseLevelWidth;
    int currBaseLevelHeight;
    int currBaseLevelDepth;
    int currMipLevel;
    int currMipLevelWidth;
    int currMipLevelHeight;
    int currMipLevelDepth;
    int currMipLevelInternalFormat;
    float currMinLOD;
    float currMaxLOD;
    NSMutableSet *reportedFindingTextureIds;
    NSMutableSet *usedTextureIds;
    NSMutableSet *usedNonMipmapTextureIds;
    NSMutableDictionary *mapTexIDToCreationMinFilter;
}

+ (BOOL)_texInternalFormatIsCompressed:(int)arg1;
+ (const TextureLevel_ac8f665f *)getBaseTextureLevel:(ContextStateMirror_daaf80d0 *)arg1 textureID:(int)arg2;
+ (int)getBaseLevel:(const TextureObject_36d13103 *)arg1 context:(ContextStateMirror_daaf80d0 *)arg2;
+ (int)_bindingForTarget:(int)arg1;
+ (id)identifier;
- (void).cxx_destruct;
- (void)reportMinLODExceedsMaxLOD:(const struct Function *)arg1;
- (void)reportNotCubeComplete:(const struct Function *)arg1;
- (void)reportInvalidWrapParameter;
- (void)mentionNoAnisoFiltering:(const struct Function *)arg1;
- (void)mentionBilinearFiltering:(const struct Function *)arg1;
- (void)recommendCompressedTextureFormat;
- (void)recommendCompactTextureFormat:(const struct Function *)arg1;
- (void)reportTextureInternalFormatIsNotTextureFilterable:(const struct Function *)arg1;
- (void)reportInvalidMipLevelInternalFormat:(const struct Function *)arg1;
- (void)reportInconsistentMipchainInternalFormats:(const struct Function *)arg1;
- (void)reportInconsistentMipchainSizes:(const struct Function *)arg1;
- (void)recommendTexParamBeforeTexImage:(const struct Function *)arg1 reallocated:(BOOL)arg2;
- (void)reportCompleteMipchainWithoutEnableMipmapping:(const struct Function *)arg1;
- (void)recommendMipmapping:(const struct Function *)arg1;
- (void)reportEnableMipmappingWithNPOT:(const struct Function *)arg1;
- (void)reportEnableMipmappingOnUnitSizeTexture:(const struct Function *)arg1;
- (void)reportEnableMipmappingWithoutCompleteMipchain:(const struct Function *)arg1;
- (void)notifyCompletion;
- (BOOL)shouldRecommendCompression:(int)arg1 texTarget:(int)arg2;
- (void)endBlock:(int)arg1;
- (void)startBlock:(int)arg1;
- (BOOL)_isCompleteSizedInternalFormatAdditionalChecks:(const ContextStateMirror_daaf80d0 *)arg1 internalFormat:(int)arg2 texture:(const TextureObject_36d13103 *)arg3 func:(const struct Function *)arg4 bpInvalidMipLevelInternalFormat:(char *)arg5 bpTextureInternalFormatIsNotTextureFilterable:(char *)arg6;
- (void)_getBaseAndMaxLevel:(const TextureObject_36d13103 *)arg1 context:(ContextStateMirror_daaf80d0 *)arg2 baseLevelOut:(int *)arg3 maxLevelOut:(int *)arg4;
- (int)_getMaxLevel:(const TextureObject_36d13103 *)arg1;
- (BOOL)isTextureMipComplete:(int)arg1 target:(int)arg2 func:(const struct Function *)arg3 bpIsUnitSize:(char *)arg4 bpInconsistentMipchainSizes:(char *)arg5 bpInconsistentMipchainInternalFormats:(char *)arg6 bpInvalidMipLevelInternalFormat:(char *)arg7 bpTextureInternalFormatIsNotTextureFilterable:(char *)arg8;
- (BOOL)isTextureLevelMipWorthy:(const TextureLevel_ac8f665f *)arg1 target:(int)arg2 isTexture3D:(BOOL)arg3;
- (BOOL)isTextureMipWorthy:(int)arg1 target:(int)arg2;
- (void)_validateLODParamsForFunc:(const struct Function *)arg1 samplers:(vector_df712b9e *)arg2 context:(ContextStateMirror_daaf80d0 *)arg3;
- (BOOL)textureWrapParametersAreValid:(int)arg1 target:(int)arg2;
- (BOOL)isPow2:(int)arg1 target:(int)arg2;
- (BOOL)areBaseLevelLayersValid:(int)arg1 target:(int)arg2;
- (BOOL)isUsingMipmaps:(int)arg1 textureInternalID:(int)arg2 boundSampler:(int)arg3 samplerInternalID:(int)arg4;
- (void)_validateCubeCompleteForFunc:(const struct Function *)arg1 samplers:(vector_df712b9e *)arg2 context:(ContextStateMirror_daaf80d0 *)arg3;
- (void)_validateMipChainsForFunc:(const struct Function *)arg1 samplers:(vector_df712b9e *)arg2 context:(ContextStateMirror_daaf80d0 *)arg3;
- (BOOL)_isMipFilter:(int)arg1;
- (void)_checkForTexParamBeforeTexImage:(const struct Function *)arg1 texID:(int)arg2 targetEnum:(int)arg3 creationMinFilter:(int)arg4 currentMinFilter:(int)arg5;
- (float)_getMaxAnisoForBoundSamplerOrTexture:(const struct SamplerInfo *)arg1 context:(ContextStateMirror_daaf80d0 *)arg2;
- (int)_getMinFilterForBoundSamplerOrTexture:(const struct SamplerInfo *)arg1 context:(ContextStateMirror_daaf80d0 *)arg2;
- (void)_performMinFilterChecksOnDraw:(const struct Function *)arg1 samplers:(vector_df712b9e *)arg2 context:(ContextStateMirror_daaf80d0 *)arg3;
- (void)_checkTextureForCompactness:(const struct Function *)arg1 target:(int)arg2 context:(ContextStateMirror_daaf80d0 *)arg3;
- (void)processFunction:(const struct Function *)arg1 stateMirrorRetCode:(unsigned int)arg2;
- (id)init;

@end