// pages/detail/detail.js
Page({

  data: {
    gender: '男',
    username: '刘乾 201723010218',
    imgUrl: "/images/avatar.jpg"
  },

  changeAvatar: function() {
    wx.chooseImage({
      count: 1,
      sizeType: ['original', 'compressed'],
      sourceType: ['album', 'camera'],
      success: res => {
        // tempFilePath可以作为img标签的src属性显示图片
        var tempFilePaths = res.tempFilePaths
        this.setData({
          imgUrl: tempFilePaths
        })
      }
    })
  },

  jump: function(e) {
    // 跳转到“个人资料修改页”
    wx.navigateTo({
      // 为了避免用户名中的特殊字符破坏字符串结构，使用encodeURIComponent()编码
      url: '/pages/modify/modify?username=' + encodeURIComponent(this.data.username) + '&gender=' + encodeURIComponent(this.data.gender)
    })
  }
})