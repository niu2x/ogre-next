
// This file has been auto-generated by clone_particle_systems.py
// Please DO NOT manually edit this file. Any subsequent invocation of
// clone_particle_systems.py will overwrite your modifications.
#include "OgreColourFaderAffector2FX2.h"
#include "OgreColourFaderAffectorFX2.h"
#include "OgreColourImageAffector2.h"
#include "OgreColourInterpolatorAffector2.h"
#include "OgreDeflectorPlaneAffector2.h"
#include "OgreDirectionRandomiserAffector2.h"
#include "OgreLinearForceAffector2.h"
#include "OgreRotationAffector2.h"
#include "OgreScaleAffector2.h"
#include "OgreScaleInterpolatorAffector2.h"
using namespace Ogre;
//-----------------------------------------------------------------------------
void ColourFaderAffector2FX2::_cloneFrom( const ParticleAffector2 *_original )
{
    OGRE_ASSERT_HIGH( dynamic_cast<const ColourFaderAffector2FX2 *>( _original ) );

    const ColourFaderAffector2FX2 *original = static_cast<const ColourFaderAffector2FX2 *>( _original );
    this->mColourAdj1 = original->mColourAdj1;
    this->mColourAdj2 = original->mColourAdj2;
    this->mMinColour = original->mMinColour;
    this->mMaxColour = original->mMaxColour;
    this->mStateChangeVal = original->mStateChangeVal;
}

//-----------------------------------------------------------------------------
void ColourFaderAffectorFX2::_cloneFrom( const ParticleAffector2 *_original )
{
    OGRE_ASSERT_HIGH( dynamic_cast<const ColourFaderAffectorFX2 *>( _original ) );

    const ColourFaderAffectorFX2 *original = static_cast<const ColourFaderAffectorFX2 *>( _original );
    this->mColourAdj = original->mColourAdj;
    this->mMinColour = original->mMinColour;
    this->mMaxColour = original->mMaxColour;
}

//-----------------------------------------------------------------------------
void ColourImageAffector2::_cloneFrom( const ParticleAffector2 *_original )
{
    OGRE_ASSERT_HIGH( dynamic_cast<const ColourImageAffector2 *>( _original ) );

    const ColourImageAffector2 *original = static_cast<const ColourImageAffector2 *>( _original );
    this->mColourData = original->mColourData;
    this->mColourImageName = original->mColourImageName;
    this->mInitialized = original->mInitialized;
}

//-----------------------------------------------------------------------------
void ColourInterpolatorAffector2::_cloneFrom( const ParticleAffector2 *_original )
{
    OGRE_ASSERT_HIGH( dynamic_cast<const ColourInterpolatorAffector2 *>( _original ) );

    const ColourInterpolatorAffector2 *original =
        static_cast<const ColourInterpolatorAffector2 *>( _original );
    for( size_t i = 0u; i < 6u; ++i )
        this->mColourAdj[i] = original->mColourAdj[i];
    for( size_t i = 0u; i < 6u; ++i )
        this->mTimeAdj[i] = original->mTimeAdj[i];
}

//-----------------------------------------------------------------------------
void DeflectorPlaneAffector2::_cloneFrom( const ParticleAffector2 *_original )
{
    OGRE_ASSERT_HIGH( dynamic_cast<const DeflectorPlaneAffector2 *>( _original ) );

    const DeflectorPlaneAffector2 *original = static_cast<const DeflectorPlaneAffector2 *>( _original );
    this->mPlanePoint = original->mPlanePoint;
    this->mPlaneNormal = original->mPlaneNormal;
    this->mBounce = original->mBounce;
}

//-----------------------------------------------------------------------------
void DirectionRandomiserAffector2::_cloneFrom( const ParticleAffector2 *_original )
{
    OGRE_ASSERT_HIGH( dynamic_cast<const DirectionRandomiserAffector2 *>( _original ) );

    const DirectionRandomiserAffector2 *original =
        static_cast<const DirectionRandomiserAffector2 *>( _original );
    this->mRandomness = original->mRandomness;
    this->mScope = original->mScope;
    this->mKeepVelocity = original->mKeepVelocity;
}

//-----------------------------------------------------------------------------
void LinearForceAffector2::_cloneFrom( const ParticleAffector2 *_original )
{
    OGRE_ASSERT_HIGH( dynamic_cast<const LinearForceAffector2 *>( _original ) );

    const LinearForceAffector2 *original = static_cast<const LinearForceAffector2 *>( _original );
    this->mForceVector = original->mForceVector;
    this->mForceApplication = original->mForceApplication;
}

//-----------------------------------------------------------------------------
void RotationAffector2::_cloneFrom( const ParticleAffector2 *_original )
{
    OGRE_ASSERT_HIGH( dynamic_cast<const RotationAffector2 *>( _original ) );

    const RotationAffector2 *original = static_cast<const RotationAffector2 *>( _original );
    this->mRotationSpeedRangeStart = original->mRotationSpeedRangeStart;
    this->mRotationSpeedRangeEnd = original->mRotationSpeedRangeEnd;
    this->mRotationRangeStart = original->mRotationRangeStart;
    this->mRotationRangeEnd = original->mRotationRangeEnd;
}

//-----------------------------------------------------------------------------
void ScaleAffector2::_cloneFrom( const ParticleAffector2 *_original )
{
    OGRE_ASSERT_HIGH( dynamic_cast<const ScaleAffector2 *>( _original ) );

    const ScaleAffector2 *original = static_cast<const ScaleAffector2 *>( _original );
    this->mScaleAdj = original->mScaleAdj;
    this->mMultiplyMode = original->mMultiplyMode;
}

//-----------------------------------------------------------------------------
void ScaleInterpolatorAffector2::_cloneFrom( const ParticleAffector2 *_original )
{
    OGRE_ASSERT_HIGH( dynamic_cast<const ScaleInterpolatorAffector2 *>( _original ) );

    const ScaleInterpolatorAffector2 *original =
        static_cast<const ScaleInterpolatorAffector2 *>( _original );
    for( size_t i = 0u; i < 6u; ++i )
        this->mScaleAdj[i] = original->mScaleAdj[i];
    for( size_t i = 0u; i < 6u; ++i )
        this->mTimeAdj[i] = original->mTimeAdj[i];
}
