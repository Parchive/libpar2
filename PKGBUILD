# Contributer: Nicolas Dufour <capnemo@namshub-linux.org>
# For Archlinux
pkgname=libpar2
pkgver=0.2
pkgrel=1
pkgdesc="Parity Archive Volume Set Library"
url="http://parchive.sourceforge.net/"
license="GPL"
depends=( 'pkgconfig' 'libsigc++2.0' )
makedepends=()
conflicts=()
replaces=()
backup=()
install=
source=(http://dl.sourceforge.net/sourceforge/parchive/$pkgname-$pkgver.tar.gz)
md5sums=('7e2c17f9191888f6420ceddc907323e0')

build() {
  cd $startdir/src/$pkgname-$pkgver
  ./configure --prefix=/usr
  make || return 1
  make DESTDIR=$startdir/pkg install

  find $startdir/pkg -name '*.la' -type f -exec rm {} \;
}
