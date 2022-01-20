"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const UE = require("ue");
class TestTsActor extends UE.Actor {
    ReceiveBeginPlay() {
        let world = this.GetWorld();
        let viewClass = UE.Class.Load("WidgetBlueprint'/Game/Test/TsUMG.TsUMG_C'");
        this.viewWidget = UE.UMGManager.CreateWidget(world, viewClass);
        this.viewWidget.AddToViewport();
    }
    ReceiveEndPlay(EndPlayReason) {
        this.viewWidget.RemoveFromParent();
        this.viewWidget = undefined;
    }
}
exports.default = TestTsActor;
//# sourceMappingURL=TestTsActor.js.map