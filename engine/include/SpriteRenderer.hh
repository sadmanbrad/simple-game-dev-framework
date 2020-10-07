#ifndef __SGDF_SPRITE_RENDERER_HH__
#define __SGDF_SPRITE_RENDERER_HH__

#include <memory>

#include "Renderer.hh"
#include "Sprite.hh"

class SpriteRenderer : public Renderer
{
public:
	~SpriteRenderer();
	
	void renderTo(RenderingContext& renderingContext, Rect targetArea) override;

	void setSprite(std::shared_ptr<Sprite> sprite);

private:
	std::shared_ptr<Sprite> sprite;
};

#endif