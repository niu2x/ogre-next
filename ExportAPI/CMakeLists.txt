cmake_minimum_required(VERSION 3.13.0 FATAL_ERROR)

project(MiniOgre VERSION 0.1.0 LANGUAGES CXX C)

set(OGRE_TEMPLATES_DIR ../CMake/Templates)


set(OGRE_STATIC_LIB ON)
set(OGRE_DEBUG_LEVEL_DEBUG 3)
set(OGRE_DEBUG_LEVEL_RELEASE 0)
set(OGRE_SET_EMBED_DEBUG_MODE 1)
set(OGRE_SET_DEBUG_MODE "OGRE_DEBUG_LEVEL_RELEASE")
set(OGRE_BUILD_RENDERSYSTEM_GL3PLUS ON)
set(OGRE_SET_THREADS 2)
set(OGRE_SET_THREAD_PROVIDER 4)
set(OGRE_SET_USE_SIMD 1)
set(OGRE_SET_DOUBLE 0)
set(OGRE_SET_RESTRICT_ALIASING 0)
set(OGRE_SET_MEMTRACK_RELEASE 0)
set(OGRE_SET_ALLOCATOR 0)
set(OGRE_SET_STRING_USE_ALLOCATOR 0)
set(OGRE_SET_CONTAINERS_USE_ALLOCATOR 0)
set(OGRE_SET_IDSTRING_ALWAYS_READABLE 0)
set(OGRE_SET_ASSERT_MODE 1)
set(OGRE_SET_DISABLE_JSON 0)
set(OGRE_SET_ENABLE_LIGHT_OBB_RESTRAINT 0)
set(OGRE_SET_DISABLE_MESHLOD 0)
set(OGRE_SET_DISABLE_VIEWPORT_ORIENTATIONMODE 0)
set(OGRE_SET_PROFILING 0)
set(OGRE_SET_PROFILING_EXHAUSTIVE 0)
set(OGRE_SET_DISABLE_FINE_LIGHT_MASK_GRANULARITY 0)
set(OGRE_SET_DISABLE_ZIP 0)
set(OGRE_SET_NODE_INHERIT_TRANSFORM 0)
set(OGRE_SET_RENDERDOC_INTEGRATION 1)
set(OGRE_SET_DISABLE_DDS 0)
set(OGRE_SET_DISABLE_STBI 0)
set(OGRE_SET_DISABLE_FREEIMAGE 0)
set(OGRE_SET_DISABLE_PVRTC 0)
set(OGRE_SET_DISABLE_ETC 0)
set(OGRE_SET_DISABLE_ASTC 0)

configure_file(${OGRE_TEMPLATES_DIR}/OgreBuildSettings.h.in ${CMAKE_CURRENT_BINARY_DIR}/include/OgreBuildSettings.h @ONLY)

add_library(OgreCore STATIC "")
add_library(MiniOgreRT SHARED "")

set_target_properties(OgreCore PROPERTIES 
    CXX_STANDARD 17
    C_VISIBILITY_PRESET hidden
    CXX_VISIBILITY_PRESET hidden
    VISIBILITY_INLINES_HIDDEN ON
    POSITION_INDEPENDENT_CODE ON
)

set_target_properties(MiniOgreRT PROPERTIES 
    CXX_STANDARD 17
    C_VISIBILITY_PRESET hidden
    CXX_VISIBILITY_PRESET hidden
    VISIBILITY_INLINES_HIDDEN ON
    POSITION_INDEPENDENT_CODE ON
)

target_sources(OgreCore PRIVATE
    ../OgreMain/src/OgreAbiUtils.cpp
    ../OgreMain/src/OgreAlignedAllocator.cpp
    ../OgreMain/src/OgreAnimable.cpp
    ../OgreMain/src/OgreAnimation.cpp
    ../OgreMain/src/OgreAnimationState.cpp
    ../OgreMain/src/OgreAnimationTrack.cpp
    ../OgreMain/src/OgreAny.cpp
    ../OgreMain/src/OgreArchive.cpp
    ../OgreMain/src/OgreArchiveManager.cpp
    ../OgreMain/src/OgreAssert.cpp
    ../OgreMain/src/OgreASTCCodec.cpp
    ../OgreMain/src/OgreAssert.cpp
    ../OgreMain/src/OgreAsyncTextureTicket.cpp
    ../OgreMain/src/OgreAtomicScalar.cpp
    ../OgreMain/src/OgreAutoParamDataSource.cpp
    ../OgreMain/src/OgreAxisAlignedBox.cpp
    ../OgreMain/src/OgreBillboard.cpp
    ../OgreMain/src/OgreBillboardChain.cpp
    ../OgreMain/src/OgreBillboardParticleRenderer.cpp
    ../OgreMain/src/OgreBillboardSet.cpp
    ../OgreMain/src/OgreCamera.cpp
    ../OgreMain/src/OgreCodec.cpp
    ../OgreMain/src/OgreColourValue.cpp
    ../OgreMain/src/OgreCommon.cpp
    ../OgreMain/src/OgreConfigFile.cpp
    ../OgreMain/src/OgreConstBufferPool.cpp
    ../OgreMain/src/OgreControllerManager.cpp
    ../OgreMain/src/OgreConvexBody.cpp
    ../OgreMain/src/OgreDataStream.cpp
    ../OgreMain/src/OgreDDSCodec2.cpp
    ../OgreMain/src/OgreDecal.cpp
    ../OgreMain/src/OgreDefaultHardwareBufferManager.cpp
    ../OgreMain/src/OgreDefaultSceneQueries.cpp
    ../OgreMain/src/OgreDeflate.cpp
    ../OgreMain/src/OgreDepthBuffer.cpp
    ../OgreMain/src/OgreDescriptorSetTexture.cpp
    ../OgreMain/src/OgreDescriptorSetUav.cpp
    ../OgreMain/src/OgreDistanceLodStrategy.cpp
    ../OgreMain/src/OgreDualQuaternion.cpp
    ../OgreMain/src/OgreDynLib.cpp
    ../OgreMain/src/OgreDynLibManager.cpp
    ../OgreMain/src/OgreEdgeListBuilder.cpp
    ../OgreMain/src/OgreEntity.cpp
    ../OgreMain/src/OgreETCCodec.cpp
    ../OgreMain/src/OgreException.cpp
    ../OgreMain/src/OgreExternalTextureSource.cpp
    ../OgreMain/src/OgreExternalTextureSourceManager.cpp
    ../OgreMain/src/OgreFileSystem.cpp
    ../OgreMain/src/OgreForward3D.cpp
    ../OgreMain/src/OgreForwardClustered.cpp
    ../OgreMain/src/OgreForwardPlusBase.cpp
    ../OgreMain/src/OgreFreeImageCodec2.cpp
    ../OgreMain/src/OgreFrustum.cpp
    ../OgreMain/src/OgreGpuProgram.cpp
    ../OgreMain/src/OgreGpuProgramManager.cpp
    ../OgreMain/src/OgreGpuProgramParams.cpp
    ../OgreMain/src/OgreGpuProgramUsage.cpp
    ../OgreMain/src/OgreGpuResource.cpp
    ../OgreMain/src/OgreHardwareBufferManager.cpp
    ../OgreMain/src/OgreHardwareIndexBuffer.cpp
    ../OgreMain/src/OgreHardwareOcclusionQuery.cpp
    ../OgreMain/src/OgreHardwareVertexBuffer.cpp
    ../OgreMain/src/OgreHiddenAreaMeshVr.cpp
    ../OgreMain/src/OgreHighLevelGpuProgram.cpp
    ../OgreMain/src/OgreHighLevelGpuProgramManager.cpp
    ../OgreMain/src/OgreHlms.cpp
    ../OgreMain/src/OgreHlmsCompute.cpp
    ../OgreMain/src/OgreHlmsComputeJob.cpp
    ../OgreMain/src/OgreHlmsDatablock.cpp
    ../OgreMain/src/OgreHlmsDiskCache.cpp
    ../OgreMain/src/OgreHlmsJson.cpp
    ../OgreMain/src/OgreHlmsJsonCompute.cpp
    ../OgreMain/src/OgreHlmsLowLevel.cpp
    ../OgreMain/src/OgreHlmsLowLevelDatablock.cpp
    ../OgreMain/src/OgreHlmsManager.cpp
    ../OgreMain/src/OgreHlmsSamplerblock.cpp
    ../OgreMain/src/OgreImage2.cpp
    ../OgreMain/src/OgreImageDownsampler.cpp
    ../OgreMain/src/OgreInternalCubemapProbe.cpp
    ../OgreMain/src/OgreItem.cpp
    ../OgreMain/src/OgreKeyFrame.cpp
    ../OgreMain/src/OgreLight.cpp
    ../OgreMain/src/OgreLodStrategy.cpp
    ../OgreMain/src/OgreLodStrategyManager.cpp
    ../OgreMain/src/OgreLwString.cpp
    ../OgreMain/src/OgreManualObject.cpp
    ../OgreMain/src/OgreManualObject2.cpp
    ../OgreMain/src/OgreMaterial.cpp
    ../OgreMain/src/OgreMaterialManager.cpp
    ../OgreMain/src/OgreMaterialSerializer.cpp
    ../OgreMain/src/OgreMath.cpp
    ../OgreMain/src/OgreMatrix3.cpp
    ../OgreMain/src/OgreMatrix4.cpp
    ../OgreMain/src/OgreMemoryTracker.cpp
    ../OgreMain/src/OgreMemoryTrackAlloc.cpp
    ../OgreMain/src/OgreMesh.cpp
    ../OgreMain/src/OgreMesh2.cpp
    ../OgreMain/src/OgreMesh2Serializer.cpp
    ../OgreMain/src/OgreMesh2SerializerImpl.cpp
    ../OgreMain/src/OgreMeshManager.cpp
    ../OgreMain/src/OgreMeshManager2.cpp
    ../OgreMain/src/OgreMeshSerializer.cpp
    ../OgreMain/src/OgreMeshSerializerImpl.cpp
    ../OgreMain/src/OgreMovableObject.cpp
    ../OgreMain/src/OgreMovablePlane.cpp
    ../OgreMain/src/OgreNode.cpp
    ../OgreMain/src/OgreNumerics.cpp
    ../OgreMain/src/OgreObjCmdBuffer.cpp
    ../OgreMain/src/OgreOfflineProfiler.cpp
    ../OgreMain/src/OgreOITDCodec.cpp
    ../OgreMain/src/OgreOldBone.cpp
    ../OgreMain/src/OgreOldNode.cpp
    ../OgreMain/src/OgreOldSkeletonInstance.cpp
    ../OgreMain/src/OgreOldSkeletonManager.cpp
    ../OgreMain/src/OgreOptimisedUtil.cpp
    ../OgreMain/src/OgreOptimisedUtilGeneral.cpp
    ../OgreMain/src/OgreOptimisedUtilSSE.cpp
    ../OgreMain/src/OgreParticle.cpp
    ../OgreMain/src/OgreParticleEmitter.cpp
    ../OgreMain/src/OgreParticleEmitterCommands.cpp
    ../OgreMain/src/OgreParticleIterator.cpp
    ../OgreMain/src/OgreParticleSystem.cpp
    ../OgreMain/src/OgreParticleSystemManager.cpp
    ../OgreMain/src/OgrePass.cpp
    ../OgreMain/src/OgrePatchMesh.cpp
    ../OgreMain/src/OgrePatchSurface.cpp
    ../OgreMain/src/OgrePixelCountLodStrategy.cpp
    ../OgreMain/src/OgrePixelFormatGpuUtils.cpp
    ../OgreMain/src/OgrePlane.cpp
    ../OgreMain/src/OgrePlatformInformation.cpp
    ../OgreMain/src/OgrePolygon.cpp
    ../OgreMain/src/OgrePose.cpp
    ../OgreMain/src/OgrePrecompiledHeaders.cpp
    ../OgreMain/src/OgrePredefinedControllers.cpp
    ../OgreMain/src/OgrePrefabFactory.cpp
    ../OgreMain/src/OgreProfiler.cpp
    ../OgreMain/src/OgrePsoCacheHelper.cpp
    ../OgreMain/src/OgrePVRTCCodec.cpp
    ../OgreMain/src/OgreQuaternion.cpp
    ../OgreMain/src/OgreRadialDensityMask.cpp
    ../OgreMain/src/OgreRectangle2D2.cpp
    ../OgreMain/src/OgreRectangle2D.cpp
    ../OgreMain/src/OgreRenderable.cpp
    ../OgreMain/src/OgreRenderPassDescriptor.cpp
    ../OgreMain/src/OgreRenderQueue.cpp
    ../OgreMain/src/OgreRenderSystemCapabilities.cpp
    ../OgreMain/src/OgreRenderSystemCapabilitiesManager.cpp
    ../OgreMain/src/OgreRenderSystemCapabilitiesSerializer.cpp
    ../OgreMain/src/OgreRenderSystem.cpp
    ../OgreMain/src/OgreResourceBackgroundQueue.cpp
    ../OgreMain/src/OgreResource.cpp
    ../OgreMain/src/OgreResourceGroupManager.cpp
    ../OgreMain/src/OgreResourceManager.cpp
    ../OgreMain/src/OgreResourceTransition.cpp
    ../OgreMain/src/OgreRibbonTrail.cpp
    ../OgreMain/src/OgreRoot.cpp
    ../OgreMain/src/OgreRootLayout.cpp
    ../OgreMain/src/OgreRotationSpline.cpp
    ../OgreMain/src/OgreSceneManager.cpp
    ../OgreMain/src/OgreSceneManagerEnumerator.cpp
    ../OgreMain/src/OgreSceneNode.cpp
    ../OgreMain/src/OgreSceneQuery.cpp
    ../OgreMain/src/OgreScriptCompiler.cpp
    ../OgreMain/src/OgreScriptLexer.cpp
    ../OgreMain/src/OgreScriptParser.cpp
    ../OgreMain/src/OgreScriptTranslator.cpp
    ../OgreMain/src/OgreSearchOps.cpp
    ../OgreMain/src/OgreSerializer.cpp
    ../OgreMain/src/OgreShaderParams.cpp
    ../OgreMain/src/OgreShadowCameraSetupConcentric.cpp
    ../OgreMain/src/OgreShadowCameraSetup.cpp
    ../OgreMain/src/OgreShadowCameraSetupFocused.cpp
    ../OgreMain/src/OgreShadowCameraSetupPlaneOptimal.cpp
    ../OgreMain/src/OgreShadowCameraSetupPSSM.cpp
    ../OgreMain/src/OgreSimpleRenderable.cpp
    ../OgreMain/src/OgreSimpleSpline.cpp
    ../OgreMain/src/OgreSkeleton.cpp
    ../OgreMain/src/OgreSkeletonSerializer.cpp
    ../OgreMain/src/OgreSmallVector.cpp
    ../OgreMain/src/OgreStagingTextureBufferImpl.cpp
    ../OgreMain/src/OgreStagingTexture.cpp
    ../OgreMain/src/OgreSTBICodec.cpp
    ../OgreMain/src/OgreStreamSerialiser.cpp
    ../OgreMain/src/OgreStringConverter.cpp
    ../OgreMain/src/OgreString.cpp
    ../OgreMain/src/OgreStringInterface.cpp
    ../OgreMain/src/OgreSubEntity.cpp
    ../OgreMain/src/OgreSubItem.cpp
    ../OgreMain/src/OgreSubMesh2.cpp
    ../OgreMain/src/OgreSubMesh.cpp
    ../OgreMain/src/OgreTagPoint.cpp
    ../OgreMain/src/OgreTangentSpaceCalc.cpp
    ../OgreMain/src/OgreTechnique.cpp
    ../OgreMain/src/OgreTextureBox.cpp
    ../OgreMain/src/OgreTextureFilters.cpp
    ../OgreMain/src/OgreTextureGpu.cpp
    ../OgreMain/src/OgreTextureGpuManager.cpp
    ../OgreMain/src/OgreTextureGpuManagerListener.cpp
    ../OgreMain/src/OgreTextureUnitState.cpp
    ../OgreMain/src/OgreUnifiedHighLevelGpuProgram.cpp
    ../OgreMain/src/OgreUserObjectBindings.cpp
    ../OgreMain/src/OgreUTFString.cpp
    ../OgreMain/src/OgreVector2.cpp
    ../OgreMain/src/OgreVector3.cpp
    ../OgreMain/src/OgreVector4.cpp
    ../OgreMain/src/OgreVertexFormatWarmUp.cpp
    ../OgreMain/src/OgreVertexIndexData.cpp
    ../OgreMain/src/OgreVertexShadowMapHelper.cpp
    ../OgreMain/src/OgreViewport.cpp
    ../OgreMain/src/OgreWindow.cpp
    ../OgreMain/src/OgreWindowEventUtilities.cpp
    ../OgreMain/src/OgreWireAabb.cpp
    ../OgreMain/src/OgreWireBoundingBox.cpp
    ../OgreMain/src/OgreWorkarounds.cpp
    ../OgreMain/src/OgreWorkQueue.cpp
    ../OgreMain/src/OgreZip.cpp




)

target_include_directories(OgreCore PUBLIC
    ${CMAKE_CURRENT_BINARY_DIR}/include/
    ../OgreMain/include
    ../OgreMain/include/Math/Array
)


target_sources(MiniOgreRT PRIVATE
    src/MiniOgre.cpp
)

target_include_directories(MiniOgreRT PRIVATE include/)
target_link_libraries(MiniOgreRT PRIVATE OgreCore)