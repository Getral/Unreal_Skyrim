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

    if (target == nullptr) // AI�� ������ ����� ���� ����
    {
        behavior->ChangeType(EBehaviorType::Patrol);
        return; //������ �����Ǹ� �Ʒ� �ڵ带 ��� �����Ѵٴ�
                //����� ǥ�� (�������� ����)
    }

    // ������� �Դٸ� target�� �����Ͱ� �� ����
    // : �÷��̾� ����

    float distance = monster->GetDistanceTo(target);
    
    //���� ���� ���̸� ������
    if (distance < controller->GetAttackRange())
    {
        behavior->ChangeType(EBehaviorType::Attack);
        return;
        //�����Ⱑ ����Ǹ� �״�� ��ȯ
        //�������Ʈ������ �귣ġ �ۼ����� �ذ������
        //�ڵ�󿡼� return���� ���Ḧ �������� �Ѵ�
    }

    // ������� ������
    // : ���� �Ÿ��� �� �Ǵµ�, ���� �÷��̾� ������

    // �ѹ� �� �Ÿ��� Ȯ��
    if (distance < controller->GetSightRange())
    {
        //�߰��� ������ �Ÿ���� �߰��� �Ѵ�
        //ChangeType �Լ��� ����� ���� �Լ�
        //�� �ȿ� �ִ� SetValue�� ��¥ ȣ�� ���
        //enum���� ���ص� ���� ���Ǹ� ����
        behavior->ChangeType(EBehaviorType::Trace);
        return;
    }

    // ������� �ٽ� ������
    // : �ʹ� �ִ� (�߰��� �ҷ��� �Ÿ��� �ʹ� �ִ�)
    //   .... Ȥ�� ��ֹ��� �־ �������� �� ���� ����

    // ���� �������� �ѻ� : ������ ���ư��ų�, �������ų�(���)

    behavior->ChangeType(EBehaviorType::Patrol); //����
    //->�� �ܿ� �½�ũ���� ���� Wait�� ȣ���ص� �ǰ�...
}
