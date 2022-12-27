case 4 : 
return this.mogiButtonType4();
case 5 :
return this.mogiButtonType5();
case 6 :
return this.mogiButtonType6();
case 7 :
return this.mogiButtonType7();
case 8 : 
return this.mogiButtonType8();
case 9 : 
return this.mogiButtonType9();
case 10 : 
return this.mogiButtonType10();
case 11 : 
return this.mogiButtonType11();
default:
return this.mogiButtonType1();


// button function

mogiButtonType11 = () => {
    return (
      <LinearGradient
        colors={[
          this.context.colorPallete.iconColor,
          this.context.colorPallete.buttonColor,
        ]}
        start={{x: 1.0, y: 1.0}}
        end={{x: 1.5, y: -1.0}}
        style={[styles.mogiButtonType12]}>
        <TouchableOpacity
          {...this.props}
          style={[styles.TouchableOpacityStyle]}></TouchableOpacity>
      </LinearGradient>
    );
  }

  mogiButtonType10 = () => {
    return (
      <LinearGradient
        colors={[
          this.context.colorPallete.iconColor,
          this.context.colorPallete.buttonColor,
        ]}
        start={{x: 1.0, y: 1.0}}
        end={{x: 1.5, y: -1.0}}
        style={[styles.mogiButtonType11]}>
        <TouchableOpacity
          {...this.props}
          style={[styles.TouchableOpacityStyle]}></TouchableOpacity>
      </LinearGradient>
    );
  }

  mogiButtonType9 = () => {
    return (
      <LinearGradient
        colors={[
          this.context.colorPallete.primaryColor,
          this.context.colorPallete.iconColor,
          this.context.colorPallete.buttonColor,
        ]}
        start={{x: -0.3, y: 1.0}}
        end={{x: 1.5, y: -1.0}}
        style={[styles.mogiButtonType10]}>
        <TouchableOpacity
          {...this.props}
          style={[styles.TouchableOpacityStyle]}></TouchableOpacity>
      </LinearGradient>
    );
  }

  mogiButtonType8 = () => {
    return (
      <LinearGradient
        colors={[
          this.context.colorPallete.primaryColor,
          this.context.colorPallete.iconColor,
          this.context.colorPallete.buttonColor,
        ]}
        start={{x: -0.3, y: 1.0}}
        end={{x: 1.5, y: -1.0}}
        style={[styles.mogiButtonType9]}>
        <TouchableOpacity
          {...this.props}
          style={[styles.TouchableOpacityStyle]}></TouchableOpacity>
      </LinearGradient>
    );
  }

  mogiButtonType7 = () => {
    return (
      <LinearGradient
        colors={[
          this.context.colorPallete.primaryColor,
          this.context.colorPallete.iconColor,
          this.context.colorPallete.buttonColor,
        ]}
        start={{x: -0.3, y: 1.0}}
        end={{x: 1.5, y: -1.0}}
        style={[styles.mogiButtonType8]}>
        <TouchableOpacity
          {...this.props}
          style={[styles.TouchableOpacityStyle]}></TouchableOpacity>
      </LinearGradient>
    );
  }

  mogiButtonType6 = () => {
    return (
      <LinearGradient
        colors={[
          this.context.colorPallete.primaryColor,
          this.context.colorPallete.iconColor,
          this.context.colorPallete.buttonColor,
        ]}
        start={{x: -0.3, y: 1.0}}
        end={{x: 1.5, y: -1.0}}
        style={[styles.mogiButtonType7]}>
        <TouchableOpacity
          {...this.props}
          style={[styles.TouchableOpacityStyle]}></TouchableOpacity>
      </LinearGradient>
    );
  }

  mogiButtonType5 = () => {
    return (
      <LinearGradient
        colors={[
          this.context.colorPallete.primaryColor,
          this.context.colorPallete.iconColor,
          this.context.colorPallete.buttonColor,
        ]}
        start={{x: -0.3, y: 1.0}}
        end={{x: 1.5, y: -1.0}}
        style={[styles.mogiButtonType6]}>
        <TouchableOpacity
          {...this.props}
          style={[styles.TouchableOpacityStyle]}></TouchableOpacity>
      </LinearGradient>
    );
  }

  mogiButtonType4 = () => {
    return (
      <LinearGradient
        colors={[
          this.context.colorPallete.primaryColor,
          this.context.colorPallete.iconColor,
        ]}
        start={{x: -0.3, y: 1.0}}
        end={{x: 1.5, y: -1.0}}
        style={[
          {
            backgroundColor: this.context.colorPallete.buttonColor,
          },styles.mogiButtonType5]}>
        <TouchableOpacity
          {...this.props}
          style={[styles.TouchableOpacityStyle]}></TouchableOpacity>
      </LinearGradient>
    );
  }

  // button style

  mogiButtonType5 : {

    height: 50,
    width: '100%',
    alignSelf: 'center',
    backgroundColor: 'transparent',
    borderRadius: 10,
  },
  mogiButtonType6 : {
    height: 50,
    width: '100%',
    alignSelf: 'center',
    backgroundClip: "padding-box",
    borderRadius: 3,
    boxShadow: "rgba(0, 0, 0, 0.02) 0 1px 3px 0",
    boxSizing: "border-box",
  },
  mogiButtonType7 : {

    height: 50,
    width: '98%',
    alignSelf: 'center',
    borderRadius: 999,
    opacity: 1,
    shadowColor: '#5E5DF0',
    shadowOpacity: 0.8,
    elevation: 6,
    shadowRadius: 20 ,
    shadowOffset : { width: 1, height: 13},  
  },
  mogiButtonType8:{   
    height: 50,
    width: '100%',
    alignSelf: 'center',
    backgroundColor: 'transparent',
    borderWidth : 2, 
  },
  mogiButtonType9 : {
    height: 50,
    width: '100%',
    alignSelf: 'center',
    backgroundColor: 'transparent',
    borderWidth : 2,
    borderRadius : 8,
    shadowColor: 'rgba(0, 0, 0, 0)',
    shadowOpacity: 0.8,
    elevation: 6,
    shadowRadius: 20 ,
    shadowOffset : { width: 1, height: 13},
  },
  mogiButtonType10:{
    height:50,
    backgroundColor: "#0078d0",
    borderRadius: 135,
    width : '90%',
    marginLeft:5,
  },
  mogiButtonType11:{
    height:50,
    backgroundColor: "#0078d0",
    borderRadius: 125,
    width : '92%',
    shadowColor: 'rgba(1, 0, 0, 0.1)',
    shadowOpacity: 0.8,
    elevation: 6,
    shadowRadius: 20 ,
    shadowOffset : { width: 1, height: 13},
  },
  mogiButtonType12:{
    height:50,
    backgroundColor: "#0078d0",
    borderRadius: 990,
    width : '85%',
    marginLeft: 15,
    shadowColor: 'rgba(1, 0, 0, 0.1)',
    shadowOpacity: 0.8,
    elevation: 6,
    shadowRadius: 20 ,
    shadowOffset : { width: 1, height: 13},
  }