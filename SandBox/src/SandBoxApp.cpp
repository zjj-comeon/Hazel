#include <Hazel.h>

class SandBox : public Hazel::Application
{
};

Hazel::Application* Hazel::CreateApplication()
{
	return new SandBox();
}
