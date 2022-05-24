import { ColorSchemeRegistry, schemeColor } from '../../../base/color-scheme';
import { fixAndroidViewClipping,BoxModel } from '../../../base/styles';
import BaseTheme from '../../../base/ui/components/BaseTheme.native';

export const INSECURE_ROOM_NAME_LABEL_COLOR = BaseTheme.palette.actionDanger;
export const NAVBAR_GRADIENT_COLORS = [ '#000000FF', '#00000000' ];

const TITLE_BAR_BUTTON_SIZE = 24;
const HEADER_ACTION_BUTTON_SIZE = 17;
const BOTTOM_GRADIENT_HEIGHT = 290;
const DEFAULT_GRADIENT_SIZE = 140;
const TOP_GRADIENT_HEIGHT = 290


/**
 * The styles of the safe area view that contains the title bar.
 */
const titleBarSafeView = {
    left: 0,
    position: 'absolute',
    right: 0,
    top: 0
};

/**
 * The styles of the feature conference.
 */
export default {

    bottomGradient: {
        bottom: 0,
        flexDirection: 'column',
        justifyContent: 'flex-end',
        minHeight: DEFAULT_GRADIENT_SIZE,
        left: 0,
        position: 'absolute',
        right: 0
    },

    /**
     * {@code Conference} Style.
     */
    conference: fixAndroidViewClipping({
        alignSelf: 'stretch',
        backgroundColor: BaseTheme.palette.uiBackground,
        flex: 1
    }),

    displayNameContainer: {
        margin: 10
    },

    gradient: {
        position: 'absolute',
        top: 0,
        left: 0,
        right: 0,
        flex: 1
    },

    gradientStretchBottom: {
        height: BOTTOM_GRADIENT_HEIGHT
    },

    gradientStretchTop: {
        height: DEFAULT_GRADIENT_SIZE
    },

    headerNavigationIcon: {
        marginLeft: 14
    },

    headerNavigationButton: {
        height: BaseTheme.spacing[6],
        marginTop: 20,
        width: BaseTheme.spacing[6]
    },

    headerNavigationText: {
        color: BaseTheme.palette.text01,
        fontSize: HEADER_ACTION_BUTTON_SIZE,
        marginHorizontal: BaseTheme.spacing[3]
    },

    headerNavigationTextBold: {
        ...BaseTheme.typography.labelButton,
        color: BaseTheme.palette.text01,
        fontSize: HEADER_ACTION_BUTTON_SIZE,
        marginHorizontal: BaseTheme.spacing[3]
    },

    /**
     * View that contains the indicators.
     */
    indicatorContainer: {
        flex: 1,
        flexDirection: 'row',
        justifyContent: 'flex-end',
        margin: BoxModel.margin
    },

    titleBarButtonContainer: {
        borderRadius: 3,
        height: BaseTheme.spacing[7],
        marginTop: BaseTheme.spacing[1],
        marginRight: BaseTheme.spacing[1],
        zIndex: 1,
        width: BaseTheme.spacing[7]
    },

    inviteButton: {
        iconStyle: {
            color: BaseTheme.palette.icon01,
            padding: 12,
            fontSize: TITLE_BAR_BUTTON_SIZE
        },
        underlayColor: BaseTheme.spacing.underlay01
    },

    lonelyButton: {
        alignItems: 'center',
        borderRadius: 24,
        flexDirection: 'row',
        height: BaseTheme.spacing[6],
        justifyContent: 'space-around',
        paddingHorizontal: 12
    },

    lonelyButtonComponents: {
        marginHorizontal: 6
    },

    Tok:{
        color: 'white'
    },

    ScreenButtons:{
        alignItems: 'flex-start',
        flexDirection: 'row',
        justifyContent: 'flex-start',
        padding: BoxModel.padding * 1
    },
    ConnectingButtons:{
        backgroundColor: 'green',
        padding: 2,
        margin:3,
        borderRadius: 10,
        color: 'black',
        opacity: 0.7,        
    },


    LogoStyles: {
        flexShrink: 1,
        paddingTop: 10,
        paddingRight:20,
        height: 28,
        justifyContent: 'center',
        paddingHorizontal: 10
    },
    SideButtons:{
        alignItems: 'flex-start',
        flexDirection: 'column',
        justifyContent: 'flex-start',
        padding: BoxModel.padding * 1
    },
    MarkButtons:{
        borderRadius:50,
        padding : 5,
        backgroundColor: '#A9EB6F',
        margin: 2,
        opacity: 0.3
    },

    centeredView: {
        flex: 1,
        justifyContent: "flex-start",
        alignItems: "center",
        opacity: 0.7,
        marginTop:10
      },
      SideButtoncenteredView:{
        flex: 1,
        justifyContent: "flex-start",
        alignItems: "center",
        opacity: 0.7,
        marginTop:20
      },
      SideButtonmodalView:{
        marginTop: 10,
        marginRight:50,
        marginLeft:50,
        marginBottom:5,
        backgroundColor: "white",
        borderRadius: 20,
        paddingTop:10,
        paddingLeft:8,
        paddingRight:8,
        alignItems: "center",
        shadowColor: "#000",
        shadowOffset: {
          width: 0,
          height: 2
        },
        shadowOpacity: 0.25,
        shadowRadius: 4,
        elevation: 5
      },
      modalView: {
        margin: 20,
        backgroundColor: "white",
        borderRadius: 20,
        padding: 7,
        alignItems: "center",
        shadowColor: "#000",
        shadowOffset: {
          width: 0,
          height: 2
        },
        shadowOpacity: 0.25,
        shadowRadius: 4,
        elevation: 5
      },
      button: {
        borderRadius: 20,
        padding: 10,
        elevation: 2
      },
      buttonOpen: {
        backgroundColor: "#F194FF",
      },
      sideButtonClose: {
        backgroundColor: "#2196F3",
        borderRadius: 3,
        marginBottom:10
      },
      buttonClose: {
        backgroundColor: "#2196F3",
        borderRadius: 3,
        marginTop:8,
        marginBottom:5
      },
      textStyle: {
        color: "white",
        fontWeight: "bold",
        textAlign: "center",
        borderRadius: 5,
        padding: 5,
      },
      modalText: {
        marginBottom: 15,
        textAlign: "center"
      },
      Icons:{
        color: 'black',
        marginHorizontal: 10
      },
      IconText:{
        flexDirection: 'row',
        padding: 3,
        borderBottomColor: 'black',
        borderBottomWidth: 1,
      },
      TextFields:{
        color: 'black',
        
      },

    lonelyMeetingContainer: {
        alignSelf: 'stretch',
        alignItems: 'center',
        padding: BaseTheme.spacing[3]
    },

    lonelyMessage: {
        paddingVertical: BaseTheme.spacing[2]
    },

    pipButtonContainer: {
        '&:not(:empty)': {
            borderRadius: 3,
            height: BaseTheme.spacing[7],
            marginTop: BaseTheme.spacing[1],
            marginLeft: BaseTheme.spacing[1],
            zIndex: 1,
            width: BaseTheme.spacing[7]
        }
    },

    pipButton: {
        iconStyle: {
            color: BaseTheme.palette.icon01,
            padding: 12,
            fontSize: TITLE_BAR_BUTTON_SIZE
        },
        underlayColor: BaseTheme.spacing.underlay01
    },

    titleBarSafeViewColor: {
        ...titleBarSafeView,
        backgroundColor: BaseTheme.palette.uiBackground
    },

    titleBarSafeViewTransparent: {
        ...titleBarSafeView
    },

    titleBarWrapper: {
        alignItems: 'center',
        flex: 1,
        flexDirection: 'row',
        height: BaseTheme.spacing[8],
        justifyContent: 'center'
    },

    alwaysOnTitleBar: {
        paddingRight: 0,
        borderRadius: 6,
        backgroundColor: 'rgba(0, 0, 0, .5)',
        marginLeft: BaseTheme.spacing[2],
        flexDirection: 'row',
        alignSelf: 'flex-start',
        alignItems: 'center',
        justifyContent: 'center',
        marginTop: BaseTheme.spacing[2],

        '&:not(:empty)': {
            padding: 4
        }
    },

    expandedLabelWrapper: {
        zIndex: 1
    },

    roomTimer: {
        color: BaseTheme.palette.text01,
        ...BaseTheme.typography.bodyShortBold,
        paddingHorizontal: 8,
        paddingVertical: 6,
        textAlign: 'center'
    },

    roomTimerView: {
        backgroundColor: BaseTheme.palette.action02,
        borderRadius: 3,
        justifyContent: 'center',
        minWidth: 50
    },

    roomName: {
        color: BaseTheme.palette.text01,
        ...BaseTheme.typography.bodyShortBold,
        paddingVertical: 6
    },

    roomNameView: {
        backgroundColor: 'rgba(0,0,0,0.6)',
        borderBottomLeftRadius: 3,
        borderTopLeftRadius: 3,
        flexShrink: 1,
        justifyContent: 'center',
        paddingHorizontal: 10
    },

    roomNameWrapper: {
        flexDirection: 'row',
        marginRight: 10,
        marginLeft: 8,
        flexShrink: 1,
        flexGrow: 1
    },

    /**
     * The style of the {@link View} which expands over the whole
     * {@link Conference} area and splits it between the {@link Filmstrip} and
     * the {@link Toolbox}.
     */
    toolboxAndFilmstripContainer: {
        bottom: 0,
        flexDirection: 'column',
        justifyContent: 'flex-end',
        left: 0,
        position: 'absolute',
        right: 0,
        top: 0
    },

    insecureRoomNameLabel: {
        backgroundColor: INSECURE_ROOM_NAME_LABEL_COLOR
    },

    raisedHandsCountLabel: {
        backgroundColor: BaseTheme.palette.warning02,
        flexDirection: 'row',
        alignItems: 'center',
        marginLeft: BaseTheme.spacing[0],
        marginBottom: BaseTheme.spacing[0],
        marginRight: BaseTheme.spacing[1]
    },

    raisedHandsCountLabelText: {
        color: BaseTheme.palette.uiBackground,
        paddingLeft: BaseTheme.spacing[2]
    }
};

ColorSchemeRegistry.register('Conference', {
    lonelyButton: {
        backgroundColor: schemeColor('inviteButtonBackground')
    },

    lonelyMessage: {
        color: schemeColor('onVideoText')
    }
});
