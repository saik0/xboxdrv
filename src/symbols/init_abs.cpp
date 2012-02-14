// Do not edit by hand, this file was automatically generated by ./gen_symbols.rb

#include "symbols/environment.hpp"
#include "symbols/namespace.hpp"
#include "symbols/symbol.hpp"

void init_environment_abs(EnvironmentPtr env)
{
  {
    NamespacePtr ns = env->add_namespace("playstation");
    {
      SymbolPtr sym = ns->add_symbol("x1");
    }
    {
      SymbolPtr sym = ns->add_symbol("y1");
    }
    {
      SymbolPtr sym = ns->add_symbol("x2");
    }
    {
      SymbolPtr sym = ns->add_symbol("y2");
    }
    {
      SymbolPtr sym = ns->add_symbol("cross");
    }
    {
      SymbolPtr sym = ns->add_symbol("triangle");
    }
    {
      SymbolPtr sym = ns->add_symbol("square");
    }
    {
      SymbolPtr sym = ns->add_symbol("circle");
    }
    {
      SymbolPtr sym = ns->add_symbol("l1");
    }
    {
      SymbolPtr sym = ns->add_symbol("r1");
    }
    {
      SymbolPtr sym = ns->add_symbol("l2");
    }
    {
      SymbolPtr sym = ns->add_symbol("r2");
    }
    {
      SymbolPtr sym = ns->add_symbol("acc_x");
    }
    {
      SymbolPtr sym = ns->add_symbol("acc_y");
    }
    {
      SymbolPtr sym = ns->add_symbol("acc_z");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("xbox");
    {
      SymbolPtr sym = ns->add_symbol("x1");
    }
    {
      SymbolPtr sym = ns->add_symbol("y1");
    }
    {
      SymbolPtr sym = ns->add_symbol("x2");
    }
    {
      SymbolPtr sym = ns->add_symbol("y2");
    }
    {
      SymbolPtr sym = ns->add_symbol("lt");
    }
    {
      SymbolPtr sym = ns->add_symbol("rt");
    }
    {
      SymbolPtr sym = ns->add_symbol("a");
    }
    {
      SymbolPtr sym = ns->add_symbol("y");
    }
    {
      SymbolPtr sym = ns->add_symbol("x");
    }
    {
      SymbolPtr sym = ns->add_symbol("b");
    }
    {
      SymbolPtr sym = ns->add_symbol("white");
    }
    {
      SymbolPtr sym = ns->add_symbol("black");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("nunchuk");
    {
      SymbolPtr sym = ns->add_symbol("x1");
    }
    {
      SymbolPtr sym = ns->add_symbol("y1");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("guitar");
  }
  {
    NamespacePtr ns = env->add_namespace("wiimote");
    {
      SymbolPtr sym = ns->add_symbol("acc_x");
    }
    {
      SymbolPtr sym = ns->add_symbol("acc_y");
    }
    {
      SymbolPtr sym = ns->add_symbol("acc_z");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("joystick");
    {
      SymbolPtr sym = ns->add_symbol("x1");
      ns->add_alias("x", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("y1");
      ns->add_alias("y", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("z1");
      ns->add_alias("z", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("x2");
    }
    {
      SymbolPtr sym = ns->add_symbol("y2");
    }
    {
      SymbolPtr sym = ns->add_symbol("z2");
    }
    {
      SymbolPtr sym = ns->add_symbol("rudder");
    }
    {
      SymbolPtr sym = ns->add_symbol("throttle");
    }
    {
      SymbolPtr sym = ns->add_symbol("gas");
    }
    {
      SymbolPtr sym = ns->add_symbol("break");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("hama-crux");
  }
  {
    NamespacePtr ns = env->add_namespace("classic");
    {
      SymbolPtr sym = ns->add_symbol("x1");
    }
    {
      SymbolPtr sym = ns->add_symbol("y1");
    }
    {
      SymbolPtr sym = ns->add_symbol("x2");
    }
    {
      SymbolPtr sym = ns->add_symbol("y2");
    }
  }
  {
    NamespacePtr ns = env->add_namespace("gamepad");
    {
      SymbolPtr sym = ns->add_symbol("x1");
    }
    {
      SymbolPtr sym = ns->add_symbol("y1");
    }
    {
      SymbolPtr sym = ns->add_symbol("x2");
    }
    {
      SymbolPtr sym = ns->add_symbol("y2");
    }
    {
      SymbolPtr sym = ns->add_symbol("lt");
    }
    {
      SymbolPtr sym = ns->add_symbol("rt");
    }
    {
      SymbolPtr sym = ns->add_symbol("a");
    }
    {
      SymbolPtr sym = ns->add_symbol("y");
    }
    {
      SymbolPtr sym = ns->add_symbol("x");
    }
    {
      SymbolPtr sym = ns->add_symbol("b");
    }
    {
      SymbolPtr sym = ns->add_symbol("lb");
      ns->add_alias("white", sym);
    }
    {
      SymbolPtr sym = ns->add_symbol("rb");
      ns->add_alias("black", sym);
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("playstation");
    {
      SymbolPtr sym = ns->lookup("x1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x1"));
    }
    {
      SymbolPtr sym = ns->lookup("y1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y1"));
    }
    {
      SymbolPtr sym = ns->lookup("x2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x2"));
    }
    {
      SymbolPtr sym = ns->lookup("y2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y2"));
    }
    {
      SymbolPtr sym = ns->lookup("cross");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "a"));
    }
    {
      SymbolPtr sym = ns->lookup("triangle");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y"));
    }
    {
      SymbolPtr sym = ns->lookup("square");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x"));
    }
    {
      SymbolPtr sym = ns->lookup("circle");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "b"));
    }
    {
      SymbolPtr sym = ns->lookup("l1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "l1"));
    }
    {
      SymbolPtr sym = ns->lookup("r1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "r1"));
    }
    {
      SymbolPtr sym = ns->lookup("l2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "l2"));
    }
    {
      SymbolPtr sym = ns->lookup("r2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "r2"));
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("xbox");
    {
      SymbolPtr sym = ns->lookup("x1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x1"));
    }
    {
      SymbolPtr sym = ns->lookup("y1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y1"));
    }
    {
      SymbolPtr sym = ns->lookup("x2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x2"));
    }
    {
      SymbolPtr sym = ns->lookup("y2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y2"));
    }
    {
      SymbolPtr sym = ns->lookup("lt");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "lt"));
    }
    {
      SymbolPtr sym = ns->lookup("rt");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "rt"));
    }
    {
      SymbolPtr sym = ns->lookup("a");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "a"));
    }
    {
      SymbolPtr sym = ns->lookup("y");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y"));
    }
    {
      SymbolPtr sym = ns->lookup("x");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x"));
    }
    {
      SymbolPtr sym = ns->lookup("b");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "b"));
    }
    {
      SymbolPtr sym = ns->lookup("white");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "lb"));
    }
    {
      SymbolPtr sym = ns->lookup("black");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "rb"));
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("nunchuk");
    {
      SymbolPtr sym = ns->lookup("x1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x1"));
    }
    {
      SymbolPtr sym = ns->lookup("y1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y1"));
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("guitar");
  }
  {
    NamespacePtr ns = env->lookup_namespace("wiimote");
  }
  {
    NamespacePtr ns = env->lookup_namespace("joystick");
  }
  {
    NamespacePtr ns = env->lookup_namespace("hama-crux");
  }
  {
    NamespacePtr ns = env->lookup_namespace("classic");
    {
      SymbolPtr sym = ns->lookup("x1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x1"));
    }
    {
      SymbolPtr sym = ns->lookup("y1");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y1"));
    }
    {
      SymbolPtr sym = ns->lookup("x2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "x2"));
    }
    {
      SymbolPtr sym = ns->lookup("y2");
      assert(sym);
      sym->add_provides(env->lookup_symbol("gamepad", "y2"));
    }
  }
  {
    NamespacePtr ns = env->lookup_namespace("gamepad");
  }
}

/* EOF */
