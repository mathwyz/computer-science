
;(function(win) {
  var icpLink = 'http://www.beian.miit.gov.cn';
  var icpText = {
    '.163.com': 'ICP备案：粤B2-20090191-18',
    '.netease.com': 'ICP备案：粤B2-20090191-2',
  };
	win.frontendCommonConfig = {
		icp: {
      '.163.com': '<a class="link-icp" href="' + icpLink + '" target="_blank">' + icpText['.163.com'] + '</a>',
      '.netease.com': '<a class="link-icp" href="' + icpLink + '" target="_blank">' + icpText['.netease.com'] + '</a>',
    },
    icpText: icpText,
    icpLink: icpLink,
    copyright: '网易公司版权所有 ©1997-2020',
    copyrightEn: 'Copyright 2017-2020, NetEase, Inc. All Rights Reserved.',
    waterMarkStyle: { opacity: 0.03, size: 14 }
	}
})(window);
