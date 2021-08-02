package com.jdshah;

import java.util.Scanner;

public class FactoryPatternDemo {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Shape Type: ");
		String shapeType = sc.next();
		ShapeFactory factory = new ShapeFactory();
		Shape shape = factory.getShape(shapeType);
		if(shape!=null) {
			shape.draw();
		} else {
			System.out.println("Invalid Shape Type");
		}
		sc.close();
	}
}
