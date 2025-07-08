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

configure_file(${OGRE_TEMPLATES_DIR}/OgreBuildSettings.h.in ${CMAKE_CURRENT_BINARY_DIR}/include/OgreBuildSettings.h @ONLY)

add_library(OgreCore STATIC "")
# add_library(MiniOgreRT SHARED "")

target_sources(OgreCore PRIVATE
    ../OgreMain/src/OgreAbiUtils.cpp
    ../OgreMain/src/OgreAlignedAllocator.cpp
    ../OgreMain/src/OgreAnimable.cpp
    ../OgreMain/src/OgreAnimation.cpp
    ../OgreMain/src/OgreAnimationState.cpp
    ../OgreMain/src/OgreAnimationTrack.cpp
)

target_include_directories(OgreCore PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}/include/
    ../OgreMain/include
    ../OgreMain/include/Math/Array
)

