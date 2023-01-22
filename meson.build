project('spectre', 'c',
  version : '1.0.0',
  license : 'GPL-3')

add_global_arguments('-DSPECTRE_SODIUM=true', language : 'c')

sodium_dep = dependency('libsodium')

spectre_sources = [
  'c/spectre-algorithm.c',
  'c/spectre-algorithm_v0.c',
  'c/spectre-algorithm_v1.c',
  'c/spectre-algorithm_v2.c',
  'c/spectre-algorithm_v3.c',
  'c/spectre-marshal.c',
  'c/spectre-marshal-util.c',
  'c/spectre-types.c',
  'c/spectre-util.c',
  'c/aes.c'
]

spectre_headers = [
  'c/spectre-algorithm.h',
  'c/spectre-algorithm_v0.h',
  'c/spectre-algorithm_v1.h',
  'c/spectre-algorithm_v2.h',
  'c/spectre-algorithm_v3.h',
  'c/spectre-marshal.h',
  'c/spectre-marshal-util.h',
  'c/spectre-types.h',
  'c/spectre-util.h',
  'c/aes.h'
]

libspectre = library('spectre', spectre_sources, dependencies: sodium_dep, install: true)

install_headers(spectre_headers)

pkg_mod = import('pkgconfig')
pkg_mod.generate(libraries : libspectre,
                 version : '1.0',
                 name : 'spectre',
                 filebase : 'spectre',
                 description : 'Spectre is a password cipher for password managers to avoid storing passwords')
