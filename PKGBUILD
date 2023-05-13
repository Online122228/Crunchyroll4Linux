# Maintainer: Online122228 <premtimdukaj@hotmail.com>

pkgname=crunchyroll4linux
pkgver=1.0.0
pkgrel=1
pkgdesc="Crunchyroll app for Linux written in qt6 c++23"
arch=('x86_64')
url="https://www.crunchyroll.com"
license=('GPL')
depends=('qt6-base' 'qt6-webengine')

source=("https://github.com/Online122228/crunchyroll4linux/archive/v${pkgver}.tar.gz")

sha256sums=('SHA256SUM')

build() {
    cd "${srcdir}/crunchyroll4linux-${pkgver}"

    qmake -makefile

    make
}

package() {
    cd "${srcdir}/crunchyroll4linux-${pkgver}"

    install -D -m755 "${srcdir}/crunchyroll4linux" -t "${pkgdir}/usr/bin"
    install -D -m644 "crunchyroll4linux.desktop" -t "${pkgdir}/usr/share/applications"
    install -D -m644 "crunchyroll4linux.png" -t "${pkgdir}/usr/share/icons"

    # Install additional files as needed
}
