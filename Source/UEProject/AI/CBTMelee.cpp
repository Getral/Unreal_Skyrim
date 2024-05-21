#include "AI/CBTMelee.h"
#include "AI/CMonsterAIController.h"
#include "Character/CUnit.h"
#include "Components/CBehaviorComponent.h"

UCBTMelee::UCBTMelee()
{
    NodeName = "Melee";
}

void UCBTMelee::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    ACMonsterAIController* controller = Cast<ACMonsterAIController>(OwnerComp.GetOwner());
    UCBehaviorComponent* behavior = controller->GetBehavior();

    ACUnit* monster = Cast<ACUnit>(controller->GetPawn());
    ACUnit* target = behavior->GetPlayer();

    if (target == nullptr) // AI에 감지된 대상이 없는 상태
    {
        behavior->ChangeType(EBehaviorType::Patrol);
        return; //조건이 충족되면 아래 코드를 모두 무시한다는
                //명시적 표현 (블프와의 차이)
    }

    // 여기까지 왔다면 target에 데이터가 들어간 상태
    // : 플레이어 포착

    float distance = monster->GetDistanceTo(target);
    
    //공격 범위 안이면 때리기
    if (distance < controller->GetAttackRange())
    {
        behavior->ChangeType(EBehaviorType::Attack);
        return;
        //때리기가 실행되면 그대로 반환
        //블루프린트였으면 브랜치 작성으로 해결됐지만
        //코드상에선 return으로 종료를 명시해줘야 한다
    }

    // 여기까지 왔으면
    // : 때릴 거리는 안 되는데, 아직 플레이어 포착중

    // 한번 더 거리를 확인
    if (distance < controller->GetSightRange())
    {
        //추격이 가능한 거리라면 추격을 한다
        //ChangeType 함수는 사용자 정의 함수
        //이 안에 있는 SetValue가 진짜 호출 대상
        //enum으로 정해둔 상태 정의를 변경
        behavior->ChangeType(EBehaviorType::Trace);
        return;
    }

    // 여기까지 다시 왔으면
    // : 너무 멀다 (추격을 할래도 거리가 너무 멀다)
    //   .... 혹은 장애물이 있어서 그쪽으로 갈 수가 없다

    // 남은 선택지는 둘뿐 : 순찰로 돌아가거나, 멍해지거나(대기)

    behavior->ChangeType(EBehaviorType::Patrol); //샘플
    //->이 외에 태스크에서 직접 Wait을 호출해도 되고...
}
