export module foo;

export import foo.bar;
export import foo.baz;

import std.core;
export std::ostream& operator<<(std::ostream& os, Foo::Bar c)
{
	os<<"TADA";
	return os;
}

export namespace Foo {
	template<typename Target>
	concept SomeConcept = requires(const Target& a)
	{
		a.baz();
	};
}