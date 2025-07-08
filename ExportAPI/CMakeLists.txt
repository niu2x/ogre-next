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