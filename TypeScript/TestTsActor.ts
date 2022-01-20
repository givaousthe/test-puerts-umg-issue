
import * as UE from 'ue'



class TestTsActor extends UE.Actor {

    //@no-blueprint
    viewWidget: UE.UserWidget;

    ReceiveBeginPlay(): void {
        let world = this.GetWorld();
        let viewClass = UE.Class.Load("WidgetBlueprint'/Game/Test/TsUMG.TsUMG_C'");
        this.viewWidget = UE.UMGManager.CreateWidget(world, viewClass);
        this.viewWidget.AddToViewport();
    }

    ReceiveEndPlay(EndPlayReason: UE.EEndPlayReason): void {
        this.viewWidget.RemoveFromParent();
        this.viewWidget = undefined;
    }
}
export default TestTsActor;