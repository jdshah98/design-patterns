package com.jdshah;

public class ShapeFactory {
	
	public Shape getShape(String shapeType) {
		Shape shape = null;
		if(shapeType!=null) {
			if(shapeType.equalsIgnoreCase("RECTANGLE")) {
				shape = new Rectangle();
			} else if(shapeType.equalsIgnoreCase("SQUARE")) {
				shape = new Square();
			} else if(shapeType.equalsIgnoreCase("CIRCLE")) {
				shape = new Circle();
			}
		}
		return shape;
	}
}