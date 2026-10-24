#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_001FD908
// Address: 0x1fd908 - 0x1fd988
void func_001FD908_0x1fd908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FD908_0x1fd908");
#endif

    switch (ctx->pc) {
        case 0x1fd940u: goto label_1fd940;
        default: break;
    }

    ctx->pc = 0x1fd908u;

    // 0x1fd908: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fd908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd90c: 0x80a30048  lb          $v1, 0x48($a1)
    ctx->pc = 0x1fd90cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1fd910: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1fd910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fd914: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FD914u;
    {
        const bool branch_taken_0x1fd914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD914u;
        // 0x1fd918: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd914) {
            ctx->pc = 0x1FD97Cu;
            goto label_1fd97c;
        }
    }
    ctx->pc = 0x1FD91Cu;
    // 0x1fd91c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fd91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fd920: 0x2442c480  addiu       $v0, $v0, -0x3B80
    ctx->pc = 0x1fd920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952064));
    // 0x1fd924: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fd924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fd928: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fd928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd92c: 0x800008  jr          $a0
    ctx->pc = 0x1FD92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD934u: goto label_1fd934;
            case 0x1FD94Cu: goto label_1fd94c;
            case 0x1FD95Cu: goto label_1fd95c;
            case 0x1FD96Cu: goto label_1fd96c;
            case 0x1FD97Cu: goto label_1fd97c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD92Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1FD934u;
label_1fd934:
    // 0x1fd934: 0x80a30049  lb          $v1, 0x49($a1)
    ctx->pc = 0x1fd934u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 73)));
    // 0x1fd938: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fd938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd93c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fd93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fd940:
    // 0x1fd940: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1fd940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1fd944: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD944u;
        // 0x1fd948: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD94Cu;
label_1fd94c:
    // 0x1fd94c: 0x80a30049  lb          $v1, 0x49($a1)
    ctx->pc = 0x1fd94cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 73)));
    // 0x1fd950: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1fd950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd954: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FD954u;
    {
        const bool branch_taken_0x1fd954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD954u;
        // 0x1fd958: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd954) {
            ctx->pc = 0x1FD940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd940;
        }
    }
    ctx->pc = 0x1FD95Cu;
label_1fd95c:
    // 0x1fd95c: 0x80a30049  lb          $v1, 0x49($a1)
    ctx->pc = 0x1fd95cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 73)));
    // 0x1fd960: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1fd960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fd964: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1FD964u;
    {
        const bool branch_taken_0x1fd964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD964u;
        // 0x1fd968: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd964) {
            ctx->pc = 0x1FD940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd940;
        }
    }
    ctx->pc = 0x1FD96Cu;
label_1fd96c:
    // 0x1fd96c: 0x80a30049  lb          $v1, 0x49($a1)
    ctx->pc = 0x1fd96cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 73)));
    // 0x1fd970: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1fd970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fd974: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x1FD974u;
    {
        const bool branch_taken_0x1fd974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD974u;
        // 0x1fd978: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd974) {
            ctx->pc = 0x1FD940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd940;
        }
    }
    ctx->pc = 0x1FD97Cu;
label_1fd97c:
    // 0x1fd97c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD97Cu;
        // 0x1fd980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD984u;
    // 0x1fd984: 0x0  nop
    ctx->pc = 0x1fd984u;
    // NOP
    ctx->pc = 0x1fd988u;
}
