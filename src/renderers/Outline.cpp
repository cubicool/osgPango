// -*-c++-*- Copyright (C) 2010 osgPango Development Team
// $Id$

#include <osgPango/GlyphRenderer>

namespace osgPango {

GlyphRendererOutline::GlyphRendererOutline(unsigned int outline) {
	addLayer(new GlyphLayer());
	addLayer(new GlyphLayerOutline(outline));
}

bool GlyphRendererOutline::updateOrCreateState(int pass, osg::Geode* geode) {
	if(!GlyphRenderer::updateOrCreateState(pass, geode)) return false;

	return _setFragmentShader(geode, "osgPango-frag2");
}

}
