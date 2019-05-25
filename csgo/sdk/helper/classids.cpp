#include "../../csgo.hpp"

classids_t classids = {};

#define GET_ID( var ) var = get( CT_HASH( #var ) );

void classids_t::init()
{
	GET_ID( CAI_BaseNPC );
	GET_ID( CAK47 );
	GET_ID( CBaseAnimating );
	GET_ID( CBaseAnimatingOverlay );
	GET_ID( CBaseAttributableItem );
	GET_ID( CBaseButton );
	GET_ID( CBaseCombatCharacter );
	GET_ID( CBaseCombatWeapon );
	GET_ID( CBaseCSGrenade );
	GET_ID( CBaseCSGrenadeProjectile );
	GET_ID( CBaseDoor );
	GET_ID( CBaseEntity );
	GET_ID( CBaseFlex );
	GET_ID( CBaseGrenade );
	GET_ID( CBaseParticleEntity );
	GET_ID( CBasePlayer );
	GET_ID( CBasePropDoor );
	GET_ID( CBaseTeamObjectiveResource );
	GET_ID( CBaseTempEntity );
	GET_ID( CBaseToggle );
	GET_ID( CBaseTrigger );
	GET_ID( CBaseViewModel );
	GET_ID( CBaseVPhysicsTrigger );
	GET_ID( CBaseWeaponWorldModel );
	GET_ID( CBeam );
	GET_ID( CBeamSpotlight );
	GET_ID( CBoneFollower );
	GET_ID( CBRC4Target );
	GET_ID( CBreachCharge );
	GET_ID( CBreachChargeProjectile );
	GET_ID( CBreakableProp );
	GET_ID( CBreakableSurface );
	GET_ID( CC4 );
	GET_ID( CCascadeLight );
	GET_ID( CChicken );
	GET_ID( CColorCorrection );
	GET_ID( CColorCorrectionVolume );
	GET_ID( CCSGameRulesProxy );
	GET_ID( CCSPlayer );
	GET_ID( CCSPlayerResource );
	GET_ID( CCSRagdoll );
	GET_ID( CCSTeam );
	GET_ID( CDangerZone );
	GET_ID( CDangerZoneController );
	GET_ID( CDEagle );
	GET_ID( CDecoyGrenade );
	GET_ID( CDecoyProjectile );
	GET_ID( CDrone );
	GET_ID( CDronegun );
	GET_ID( CDynamicLight );
	GET_ID( CDynamicProp );
	GET_ID( CEconEntity );
	GET_ID( CEconWearable );
	GET_ID( CEmbers );
	GET_ID( CEntityDissolve );
	GET_ID( CEntityFlame );
	GET_ID( CEntityFreezing );
	GET_ID( CEntityParticleTrail );
	GET_ID( CEnvAmbientLight );
	GET_ID( CEnvDetailController );
	GET_ID( CEnvDOFController );
	GET_ID( CEnvGasCanister );
	GET_ID( CEnvParticleScript );
	GET_ID( CEnvProjectedTexture );
	GET_ID( CEnvQuadraticBeam );
	GET_ID( CEnvScreenEffect );
	GET_ID( CEnvScreenOverlay );
	GET_ID( CEnvTonemapController );
	GET_ID( CEnvWind );
	GET_ID( CFEPlayerDecal );
	GET_ID( CFireCrackerBlast );
	GET_ID( CFireSmoke );
	GET_ID( CFireTrail );
	GET_ID( CFish );
	GET_ID( CFists );
	GET_ID( CFlashbang );
	GET_ID( CFogController );
	GET_ID( CFootstepControl );
	GET_ID( CFunc_Dust );
	GET_ID( CFunc_LOD );
	GET_ID( CFuncAreaPortalWindow );
	GET_ID( CFuncBrush );
	GET_ID( CFuncConveyor );
	GET_ID( CFuncLadder );
	GET_ID( CFuncMonitor );
	GET_ID( CFuncMoveLinear );
	GET_ID( CFuncOccluder );
	GET_ID( CFuncReflectiveGlass );
	GET_ID( CFuncRotating );
	GET_ID( CFuncSmokeVolume );
	GET_ID( CFuncTrackTrain );
	GET_ID( CGameRulesProxy );
	GET_ID( CGrassBurn );
	GET_ID( CHandleTest );
	GET_ID( CHEGrenade );
	GET_ID( CHostage );
	GET_ID( CHostageCarriableProp );
	GET_ID( CIncendiaryGrenade );
	GET_ID( CInferno );
	GET_ID( CInfoLadderDismount );
	GET_ID( CInfoMapRegion );
	GET_ID( CInfoOverlayAccessor );
	GET_ID( CItem_Healthshot );
	GET_ID( CItemCash );
	GET_ID( CItemDogtags );
	GET_ID( CKnife );
	GET_ID( CKnifeGG );
	GET_ID( CLightGlow );
	GET_ID( CMaterialModifyControl );
	GET_ID( CMelee );
	GET_ID( CMolotovGrenade );
	GET_ID( CMolotovProjectile );
	GET_ID( CMovieDisplay );
	GET_ID( CParadropChopper );
	GET_ID( CParticleFire );
	GET_ID( CParticlePerformanceMonitor );
	GET_ID( CParticleSystem );
	GET_ID( CPhysBox );
	GET_ID( CPhysBoxMultiplayer );
	GET_ID( CPhysicsProp );
	GET_ID( CPhysicsPropMultiplayer );
	GET_ID( CPhysMagnet );
	GET_ID( CPhysPropAmmoBox );
	GET_ID( CPhysPropLootCrate );
	GET_ID( CPhysPropRadarJammer );
	GET_ID( CPhysPropWeaponUpgrade );
	GET_ID( CPlantedC4 );
	GET_ID( CPlasma );
	GET_ID( CPlayerResource );
	GET_ID( CPointCamera );
	GET_ID( CPointCommentaryNode );
	GET_ID( CPointWorldText );
	GET_ID( CPoseController );
	GET_ID( CPostProcessController );
	GET_ID( CPrecipitation );
	GET_ID( CPrecipitationBlocker );
	GET_ID( CPredictedViewModel );
	GET_ID( CProp_Hallucination );
	GET_ID( CPropCounter );
	GET_ID( CPropDoorRotating );
	GET_ID( CPropJeep );
	GET_ID( CPropVehicleDriveable );
	GET_ID( CRagdollManager );
	GET_ID( CRagdollProp );
	GET_ID( CRagdollPropAttached );
	GET_ID( CRopeKeyframe );
	GET_ID( CSCAR17 );
	GET_ID( CSceneEntity );
	GET_ID( CSensorGrenade );
	GET_ID( CSensorGrenadeProjectile );
	GET_ID( CShadowControl );
	GET_ID( CSlideshowDisplay );
	GET_ID( CSmokeGrenade );
	GET_ID( CSmokeGrenadeProjectile );
	GET_ID( CSmokeStack );
	GET_ID( CSnowball );
	GET_ID( CSnowballPile );
	GET_ID( CSnowballProjectile );
	GET_ID( CSpatialEntity );
	GET_ID( CSpotlightEnd );
	GET_ID( CSprite );
	GET_ID( CSpriteOriented );
	GET_ID( CSpriteTrail );
	GET_ID( CStatueProp );
	GET_ID( CSteamJet );
	GET_ID( CSun );
	GET_ID( CSunlightShadowControl );
	GET_ID( CSurvivalSpawnChopper );
	GET_ID( CTablet );
	GET_ID( CTeam );
	GET_ID( CTeamplayRoundBasedRulesProxy );
	GET_ID( CTEArmorRicochet );
	GET_ID( CTEBaseBeam );
	GET_ID( CTEBeamEntPoint );
	GET_ID( CTEBeamEnts );
	GET_ID( CTEBeamFollow );
	GET_ID( CTEBeamLaser );
	GET_ID( CTEBeamPoints );
	GET_ID( CTEBeamRing );
	GET_ID( CTEBeamRingPoint );
	GET_ID( CTEBeamSpline );
	GET_ID( CTEBloodSprite );
	GET_ID( CTEBloodStream );
	GET_ID( CTEBreakModel );
	GET_ID( CTEBSPDecal );
	GET_ID( CTEBubbles );
	GET_ID( CTEBubbleTrail );
	GET_ID( CTEClientProjectile );
	GET_ID( CTEDecal );
	GET_ID( CTEDust );
	GET_ID( CTEDynamicLight );
	GET_ID( CTEEffectDispatch );
	GET_ID( CTEEnergySplash );
	GET_ID( CTEExplosion );
	GET_ID( CTEFireBullets );
	GET_ID( CTEFizz );
	GET_ID( CTEFootprintDecal );
	GET_ID( CTEFoundryHelpers );
	GET_ID( CTEGaussExplosion );
	GET_ID( CTEGlowSprite );
	GET_ID( CTEImpact );
	GET_ID( CTEKillPlayerAttachments );
	GET_ID( CTELargeFunnel );
	GET_ID( CTEMetalSparks );
	GET_ID( CTEMuzzleFlash );
	GET_ID( CTEParticleSystem );
	GET_ID( CTEPhysicsProp );
	GET_ID( CTEPlantBomb );
	GET_ID( CTEPlayerAnimEvent );
	GET_ID( CTEPlayerDecal );
	GET_ID( CTEProjectedDecal );
	GET_ID( CTERadioIcon );
	GET_ID( CTEShatterSurface );
	GET_ID( CTEShowLine );
	GET_ID( CTesla );
	GET_ID( CTESmoke );
	GET_ID( CTESparks );
	GET_ID( CTESprite );
	GET_ID( CTESpriteSpray );
	GET_ID( CTest_ProxyToggle_Networkable );
	GET_ID( CTestTraceline );
	GET_ID( CTEWorldDecal );
	GET_ID( CTriggerPlayerMovement );
	GET_ID( CTriggerSoundOperator );
	GET_ID( CVGuiScreen );
	GET_ID( CVoteController );
	GET_ID( CWaterBullet );
	GET_ID( CWaterLODControl );
	GET_ID( CWeaponAug );
	GET_ID( CWeaponAWP );
	GET_ID( CWeaponBaseItem );
	GET_ID( CWeaponBizon );
	GET_ID( CWeaponCSBase );
	GET_ID( CWeaponCSBaseGun );
	GET_ID( CWeaponCycler );
	GET_ID( CWeaponElite );
	GET_ID( CWeaponFamas );
	GET_ID( CWeaponFiveSeven );
	GET_ID( CWeaponG3SG1 );
	GET_ID( CWeaponGalil );
	GET_ID( CWeaponGalilAR );
	GET_ID( CWeaponGlock );
	GET_ID( CWeaponHKP2000 );
	GET_ID( CWeaponM249 );
	GET_ID( CWeaponM3 );
	GET_ID( CWeaponM4A1 );
	GET_ID( CWeaponMAC10 );
	GET_ID( CWeaponMag7 );
	GET_ID( CWeaponMP5Navy );
	GET_ID( CWeaponMP7 );
	GET_ID( CWeaponMP9 );
	GET_ID( CWeaponNegev );
	GET_ID( CWeaponNOVA );
	GET_ID( CWeaponP228 );
	GET_ID( CWeaponP250 );
	GET_ID( CWeaponP90 );
	GET_ID( CWeaponSawedoff );
	GET_ID( CWeaponSCAR20 );
	GET_ID( CWeaponScout );
	GET_ID( CWeaponSG550 );
	GET_ID( CWeaponSG552 );
	GET_ID( CWeaponSG556 );
	GET_ID( CWeaponSSG08 );
	GET_ID( CWeaponTaser );
	GET_ID( CWeaponTec9 );
	GET_ID( CWeaponTMP );
	GET_ID( CWeaponUMP45 );
	GET_ID( CWeaponUSP );
	GET_ID( CWeaponXM1014 );
	GET_ID( CWorld );
	GET_ID( CWorldVguiText );
	GET_ID( DustTrail );
	GET_ID( MovieExplosion );
	GET_ID( ParticleSmokeGrenade );
	GET_ID( RocketTrail );
	GET_ID( SmokeTrail );
	GET_ID( SporeExplosion );
	GET_ID( SporeTrail );
}

uint32_t classids_t::get( uint32_t name )
{
	if ( m_classids.empty() )
	{
		int cur_id = -1;
		if ( auto server_class_list = ctx::csgo.server->GetAllClasses() )
		{
			for ( ; server_class_list; server_class_list = server_class_list->m_pNext )
			{
				

				m_classids[ HASH( server_class_list->m_pNetworkName ) ] = ++cur_id;

				LOG( shared::fmt::format( "{} - {}", server_class_list->m_pNetworkName, cur_id ) );
			}
		}
	}

	return m_classids[ name ];
}