# This is an example PKGBUILD file. Use this as a start to creating your own,
# and remove these comments. For more information, see 'man PKGBUILD'.
# NOTE: Please fill out the license field for your package! If it is unknown,
# then please put 'unknown'.

# Maintainer: Mateus Mercer <mateusmercer@gmail.com>
pkgname=caesar
pkgver=1.0
pkgrel=1
epoch=
pkgdesc="Simple command line implementation of caesar cipher."
arch=('any')
url=""
license=('GPL')
groups=()
depends=()
makedepends=()
checkdepends=()
optdepends=()
provides=()
conflicts=()
replaces=()
backup=()
options=()
install=
changelog=
source=("https://github.com/MatMercer/$pkgname/archive/$pkgver.tar.gz")
noextract=()
md5sums=('6434dbeb80a6f235dd2d4767ea8d5837')
validpgpkeys=()

prepare() {
	cd "$pkgname-$pkgver"
	# patch -p1 -i "$srcdir/$pkgname-$pkgver"
}

build() {
	cd "$pkgname-$pkgver"
	# ./configure --prefix=/usr
	make
}

check() {
	cd "$pkgname-$pkgver"
	make -k check
}

package() {
	cd "$pkgname-$pkgver"
	make DESTDIR="$pkgdir/" install
}
