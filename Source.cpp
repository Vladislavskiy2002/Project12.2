#include "Simple_window.h"
#include "Graph.h"
int main()
{
	using namespace Graph_lib; // Графические средства
	Point t1{ 100 , 100 }; // Задаем левый верхний угол окна
	Simple_window win{ t1 , 600 , 400, "My window" }; // Простое окно
	Rectangle_BS r{ Point{100 ,30 } , 100 , 50 };
	r.set_color(Color::blue);
	win.attach(r);
	win.wait_for_button();
	Text t{ Point{130, 60} , "Howdy!" };
	win.attach(t);
	win.wait_for_button();
};