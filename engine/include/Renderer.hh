#ifndef __SGDF_RENDERER_HH__
#define __SGDF_RENDERER_HH__

#include "RenderingContext.hh"
#include "Rect.hh"

class Renderer
{
public:
	virtual ~Renderer() = default;
	
	virtual void renderTo(RenderingContext& renderingContext, Rect targetArea) = 0;
};


#endif