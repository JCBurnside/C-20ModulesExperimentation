export module foo.bar;
import foo.baz;
import std.core;
export namespace Foo
{
	struct Bar{
		void baz() const
		{
			std::cout<<Baz::tada();
		}
	};
}