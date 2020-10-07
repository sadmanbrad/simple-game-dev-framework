#include "SpriteRenderer.hh"


SpriteRenderer::~SpriteRenderer() {
	
}

void SpriteRenderer::renderTo(RenderingContext& renderingContext, Rect targetArea) {
	renderingContext.renderTexture(*sprite->texture, targetArea);
}

void SpriteRenderer::setSprite(std::shared_ptr<Sprite> sprite) {
 	this->sprite = sprite;
}