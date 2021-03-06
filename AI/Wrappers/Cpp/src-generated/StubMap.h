/* This file is part of the Spring engine (GPL v2 or later), see LICENSE.html */

/* Note: This file is machine generated, do not edit directly! */

#ifndef _CPPWRAPPER_STUBMAP_H
#define _CPPWRAPPER_STUBMAP_H

#include <climits> // for INT_MAX (required by unit-command wrapping functions)

#include "IncludesHeaders.h"
#include "Map.h"

namespace springai {

/**
 * Lets C++ Skirmish AIs call back to the Spring engine.
 *
 * @author	AWK wrapper script
 * @version	GENERATED
 */
class StubMap : public Map {

protected:
	virtual ~StubMap();
private:
	int skirmishAIId;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetSkirmishAIId(int skirmishAIId);
	// @Override
	virtual int GetSkirmishAIId() const;
private:
	int checksum;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetChecksum(int checksum);
	// @Override
	virtual int GetChecksum();
private:
	springai::AIFloat3 startPos;/* = springai::AIFloat3::NULL_VALUE;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetStartPos(springai::AIFloat3 startPos);
	// @Override
	virtual springai::AIFloat3 GetStartPos();
private:
	springai::AIFloat3 mousePos;/* = springai::AIFloat3::NULL_VALUE;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetMousePos(springai::AIFloat3 mousePos);
	// @Override
	virtual springai::AIFloat3 GetMousePos();
	// @Override
	virtual bool IsPosInCamera(const springai::AIFloat3& pos, float radius);
	/**
	 * Returns the maps center heightmap width.
	 * @see getHeightMap()
	 */
private:
	int width;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetWidth(int width);
	// @Override
	virtual int GetWidth();
	/**
	 * Returns the maps center heightmap height.
	 * @see getHeightMap()
	 */
private:
	int height;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetHeight(int height);
	// @Override
	virtual int GetHeight();
	/**
	 * Returns the height for the center of the squares.
	 * This differs slightly from the drawn map, since
	 * that one uses the height at the corners.
	 * Note that the actual map is 8 times larger (in each dimension) and
	 * all other maps (slope, los, resources, etc.) are relative to the
	 * size of the heightmap.
	 * 
	 * - do NOT modify or delete the height-map (native code relevant only)
	 * - index 0 is top left
	 * - each data position is 8*8 in size
	 * - the value for the full resolution position (x, z) is at index (z * width + x)
	 * - the last value, bottom right, is at index (width * height - 1)
	 * 
	 * @see getCornersHeightMap()
	 */
private:
	std::vector<float> heightMap;/* = std::vector<float>();*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetHeightMap(std::vector<float> heightMap);
	// @Override
	virtual std::vector<float> GetHeightMap();
	/**
	 * Returns the height for the corners of the squares.
	 * This is the same like the drawn map.
	 * It is one unit wider and one higher then the centers height map.
	 * 
	 * - do NOT modify or delete the height-map (native code relevant only)
	 * - index 0 is top left
	 * - 4 points mark the edges of an area of 8*8 in size
	 * - the value for upper left corner of the full resolution position (x, z) is at index (z * width + x)
	 * - the last value, bottom right, is at index ((width+1) * (height+1) - 1)
	 * 
	 * @see getHeightMap()
	 */
private:
	std::vector<float> cornersHeightMap;/* = std::vector<float>();*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetCornersHeightMap(std::vector<float> cornersHeightMap);
	// @Override
	virtual std::vector<float> GetCornersHeightMap();
private:
	float minHeight;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetMinHeight(float minHeight);
	// @Override
	virtual float GetMinHeight();
private:
	float maxHeight;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetMaxHeight(float maxHeight);
	// @Override
	virtual float GetMaxHeight();
	/**
	 * @brief the slope map
	 * The values are 1 minus the y-component of the (average) facenormal of the square.
	 * 
	 * - do NOT modify or delete the height-map (native code relevant only)
	 * - index 0 is top left
	 * - each data position is 2*2 in size
	 * - the value for the full resolution position (x, z) is at index ((z * width + x) / 2)
	 * - the last value, bottom right, is at index (width/2 * height/2 - 1)
	 */
private:
	std::vector<float> slopeMap;/* = std::vector<float>();*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetSlopeMap(std::vector<float> slopeMap);
	// @Override
	virtual std::vector<float> GetSlopeMap();
	/**
	 * @brief the level of sight map
	 * mapDims.mapx >> losMipLevel
	 * A square with value zero means you do not have LOS coverage on it.
	 * Mod_getLosMipLevel
	 * - do NOT modify or delete the height-map (native code relevant only)
	 * - index 0 is top left
	 * - resolution factor (res) is min(1, 1 << Mod_getLosMipLevel())
	 *   examples:
	 *   	+ losMipLevel(0) -> res(1)
	 *   	+ losMipLevel(1) -> res(2)
	 *   	+ losMipLevel(2) -> res(4)
	 *   	+ losMipLevel(3) -> res(8)
	 * - each data position is res*res in size
	 * - the value for the full resolution position (x, z) is at index ((z * width + x) / res)
	 * - the last value, bottom right, is at index (width/res * height/res - 1)
	 */
private:
	std::vector<int> losMap;/* = std::vector<int>();*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetLosMap(std::vector<int> losMap);
	// @Override
	virtual std::vector<int> GetLosMap();
	/**
	 * @brief the level of sight map
	 * mapDims.mapx >> airMipLevel
	 * @see getLosMap()
	 */
private:
	std::vector<int> airLosMap;/* = std::vector<int>();*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetAirLosMap(std::vector<int> airLosMap);
	// @Override
	virtual std::vector<int> GetAirLosMap();
	/**
	 * @brief the radar map
	 * mapDims.mapx >> radarMipLevel
	 * @see getLosMap()
	 */
private:
	std::vector<int> radarMap;/* = std::vector<int>();*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetRadarMap(std::vector<int> radarMap);
	// @Override
	virtual std::vector<int> GetRadarMap();
	/**
	 * @see getRadarMap()
	 */
private:
	std::vector<int> sonarMap;/* = std::vector<int>();*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetSonarMap(std::vector<int> sonarMap);
	// @Override
	virtual std::vector<int> GetSonarMap();
	/**
	 * @see getRadarMap()
	 */
private:
	std::vector<int> seismicMap;/* = std::vector<int>();*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetSeismicMap(std::vector<int> seismicMap);
	// @Override
	virtual std::vector<int> GetSeismicMap();
	/**
	 * @see getRadarMap()
	 */
private:
	std::vector<int> jammerMap;/* = std::vector<int>();*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetJammerMap(std::vector<int> jammerMap);
	// @Override
	virtual std::vector<int> GetJammerMap();
	/**
	 * @see getRadarMap()
	 */
private:
	std::vector<int> sonarJammerMap;/* = std::vector<int>();*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetSonarJammerMap(std::vector<int> sonarJammerMap);
	// @Override
	virtual std::vector<int> GetSonarJammerMap();
	/**
	 * @brief resource maps
	 * This map shows the resource density on the map.
	 * 
	 * - do NOT modify or delete the height-map (native code relevant only)
	 * - index 0 is top left
	 * - each data position is 2*2 in size
	 * - the value for the full resolution position (x, z) is at index ((z * width + x) / 2)
	 * - the last value, bottom right, is at index (width/2 * height/2 - 1)
	 */
	// @Override
	virtual std::vector<short> GetResourceMapRaw(Resource* resource);
	/**
	 * Returns positions indicating where to place resource extractors on the map.
	 * Only the x and z values give the location of the spots, while the y values
	 * represents the actual amount of resource an extractor placed there can make.
	 * You should only compare the y values to each other, and not try to estimate
	 * effective output from spots.
	 */
	// @Override
	virtual std::vector<springai::AIFloat3> GetResourceMapSpotsPositions(Resource* resource);
	/**
	 * Returns the average resource income for an extractor on one of the evaluated positions.
	 */
	// @Override
	virtual float GetResourceMapSpotsAverageIncome(Resource* resource);
	/**
	 * Returns the nearest resource extractor spot to a specified position out of the evaluated list.
	 */
	// @Override
	virtual springai::AIFloat3 GetResourceMapSpotsNearest(Resource* resource, const springai::AIFloat3& pos);
	/**
	 * Returns the archive hash of the map.
	 * Use this for reference to the map, eg. in a cache-file, wherever human
	 * readability does not matter.
	 * This value will never be the same for two maps not having equal content.
	 * Tip: convert to 64 Hex chars for use in file names.
	 * @see getName()
	 */
private:
	int hash;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetHash(int hash);
	// @Override
	virtual int GetHash();
	/**
	 * Returns the name of the map.
	 * Use this for reference to the map, eg. in cache- or config-file names
	 * which are map related, wherever humans may come in contact with the reference.
	 * Be aware though, that this may contain special characters and spaces,
	 * and may not be used as a file name without checks and replaces.
	 * Tip: replace every char matching [^0-9a-zA-Z_-.] with '_'
	 * @see getHash()
	 * @see getHumanName()
	 */
private:
	const char* name;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetName(const char* name);
	// @Override
	virtual const char* GetName();
	/**
	 * Returns the human readbale name of the map.
	 * @see getName()
	 */
private:
	const char* humanName;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetHumanName(const char* humanName);
	// @Override
	virtual const char* GetHumanName();
	/**
	 * Gets the elevation of the map at position (x, z)
	 */
	// @Override
	virtual float GetElevationAt(float x, float z);
	/**
	 * Returns what value 255 in the resource map is worth
	 */
	// @Override
	virtual float GetMaxResource(Resource* resource);
	/**
	 * Returns extraction radius for resource extractors
	 */
	// @Override
	virtual float GetExtractorRadius(Resource* resource);
private:
	float minWind;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetMinWind(float minWind);
	// @Override
	virtual float GetMinWind();
private:
	float maxWind;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetMaxWind(float maxWind);
	// @Override
	virtual float GetMaxWind();
private:
	float curWind;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetCurWind(float curWind);
	// @Override
	virtual float GetCurWind();
private:
	float tidalStrength;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetTidalStrength(float tidalStrength);
	// @Override
	virtual float GetTidalStrength();
private:
	float gravity;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetGravity(float gravity);
	// @Override
	virtual float GetGravity();
private:
	float waterDamage;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetWaterDamage(float waterDamage);
	// @Override
	virtual float GetWaterDamage();
private:
	bool isDeformable;/* = false;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetDeformable(bool isDeformable);
	// @Override
	virtual bool IsDeformable();
	/**
	 * Returns global map hardness
	 */
private:
	float hardness;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetHardness(float hardness);
	// @Override
	virtual float GetHardness();
	/**
	 * Returns hardness modifiers of the squares adjusted by terrain type.
	 * 
	 * - index 0 is top left
	 * - each data position is 2*2 in size (relative to heightmap)
	 * - the value for the full resolution position (x, z) is at index ((z * width + x) / 2)
	 * - the last value, bottom right, is at index (width/2 * height/2 - 1)
	 * 
	 * @see getHardness()
	 */
private:
	std::vector<float> hardnessModMap;/* = std::vector<float>();*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetHardnessModMap(std::vector<float> hardnessModMap);
	// @Override
	virtual std::vector<float> GetHardnessModMap();
	/**
	 * Returns speed modifiers of the squares
	 * for specific speedModClass adjusted by terrain type.
	 * 
	 * - index 0 is top left
	 * - each data position is 2*2 in size (relative to heightmap)
	 * - the value for the full resolution position (x, z) is at index ((z * width + x) / 2)
	 * - the last value, bottom right, is at index (width/2 * height/2 - 1)
	 * 
	 * @see MoveData#getSpeedModClass
	 */
	// @Override
	virtual std::vector<float> GetSpeedModMap(int speedModClass);
	/**
	 * Returns all points drawn with this AIs team color,
	 * and additionally the ones drawn with allied team colors,
	 * if <code>includeAllies</code> is true.
	 */
	// @Override
	virtual std::vector<springai::Point*> GetPoints(bool includeAllies);
	/**
	 * Returns all lines drawn with this AIs team color,
	 * and additionally the ones drawn with allied team colors,
	 * if <code>includeAllies</code> is true.
	 */
	// @Override
	virtual std::vector<springai::Line*> GetLines(bool includeAllies);
	// @Override
	virtual bool IsPossibleToBuildAt(UnitDef* unitDef, const springai::AIFloat3& pos, int facing);
	/**
	 * Returns the closest position from a given position that a building can be
	 * built at.
	 * @param minDist the distance in 1/(SQUARE_SIZE * 2) = 1/16 of full map
	 *                resolution, that the building must keep to other
	 *                buildings; this makes it easier to keep free paths through
	 *                a base
	 * @return actual map position with x, y and z all beeing positive,
	 *         or float[3]{-1, 0, 0} if no suitable position is found.
	 */
	// @Override
	virtual springai::AIFloat3 FindClosestBuildSite(UnitDef* unitDef, const springai::AIFloat3& pos, float searchRadius, int minDist, int facing);
private:
	springai::Drawer* drawer;/* = 0;*/ // TODO: FIXME: put this into a constructor
public:
	virtual void SetDrawer(springai::Drawer* drawer);
	// @Override
	virtual springai::Drawer* GetDrawer();
}; // class StubMap

}  // namespace springai

#endif // _CPPWRAPPER_STUBMAP_H

