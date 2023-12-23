calculator_sources = [
  'main.c',
  'calculator-window.c',
]

calculator_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

calculator_sources += gnome.compile_resources('calculator-resources',
  'calculator.gresource.xml',
  c_name: 'calculator'
)

executable('calculator', calculator_sources,
  dependencies: calculator_deps,
  install: true,
)
