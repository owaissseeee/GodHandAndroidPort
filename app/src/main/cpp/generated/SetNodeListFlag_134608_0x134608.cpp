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

// Function: SetNodeListFlag_134608
// Address: 0x134608 - 0x134648
void SetNodeListFlag_134608_0x134608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNodeListFlag_134608_0x134608");
#endif

    switch (ctx->pc) {
        case 0x134618u: goto label_134618;
        default: break;
    }

    ctx->pc = 0x134608u;

    // 0x134608: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x134608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13460c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x13460Cu;
    {
        const bool branch_taken_0x13460c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x134610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13460Cu;
        // 0x134610: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13460c) {
            ctx->pc = 0x13463Cu;
            goto label_13463c;
        }
    }
    ctx->pc = 0x134614u;
    // 0x134614: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x134614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_134618:
    // 0x134618: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x134618u;
    {
        const bool branch_taken_0x134618 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x13461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134618u;
        // 0x13461c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134618) {
            ctx->pc = 0x134628u;
            goto label_134628;
        }
    }
    ctx->pc = 0x134620u;
    // 0x134620: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x134620u;
    {
        const bool branch_taken_0x134620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134620u;
        // 0x134624: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134620) {
            ctx->pc = 0x13462Cu;
            goto label_13462c;
        }
    }
    ctx->pc = 0x134628u;
label_134628:
    // 0x134628: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x134628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_13462c:
    // 0x13462c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x13462cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x134630: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x134630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134634: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x134634u;
    {
        const bool branch_taken_0x134634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x134634) {
            ctx->pc = 0x134618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134618;
        }
    }
    ctx->pc = 0x13463Cu;
label_13463c:
    // 0x13463c: 0x3e00008  jr          $ra
    ctx->pc = 0x13463Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13463Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134644u;
    // 0x134644: 0x0  nop
    ctx->pc = 0x134644u;
    // NOP
    ctx->pc = 0x134648u;
}
