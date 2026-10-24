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

// Function: func_00389828
// Address: 0x389828 - 0x389880
void func_00389828_0x389828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00389828_0x389828");
#endif

    switch (ctx->pc) {
        case 0x38984cu: goto label_38984c;
        case 0x389868u: goto label_389868;
        default: break;
    }

    ctx->pc = 0x389828u;

    // 0x389828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38982c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x38982cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x389830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x389830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x389834: 0x8c626708  lw          $v0, 0x6708($v1)
    ctx->pc = 0x389834u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786708u));
    // 0x389838: 0x24706708  addiu       $s0, $v1, 0x6708
    ctx->pc = 0x389838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26376));
    // 0x38983c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38983Cu;
    {
        const bool branch_taken_0x38983c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38983Cu;
        // 0x389840: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38983c) {
            ctx->pc = 0x389868u;
            goto label_389868;
        }
    }
    ctx->pc = 0x389844u;
    // 0x389844: 0xc0e29f8  jal         func_38A7E0
    ctx->pc = 0x389844u;
    SET_GPR_U32(ctx, 31, 0x38984Cu);
    ctx->pc = 0x38A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A7E0u, 0x389844u, 0x38984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38984Cu;
label_38984c:
    // 0x38984c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x38984cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x389850: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x389850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x389854: 0x24a5d188  addiu       $a1, $a1, -0x2E78
    ctx->pc = 0x389854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955400));
    // 0x389858: 0x24c6d1a8  addiu       $a2, $a2, -0x2E58
    ctx->pc = 0x389858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955432));
    // 0x38985c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38985cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389860: 0xc0c7ba0  jal         func_31EE80
    ctx->pc = 0x389860u;
    SET_GPR_U32(ctx, 31, 0x389868u);
    ctx->pc = 0x389864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389860u;
    // 0x389864: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE80u, 0x389860u, 0x389868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389868u;
label_389868:
    // 0x389868: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x389868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38986c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38986cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x389870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389874: 0x3e00008  jr          $ra
    ctx->pc = 0x389874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389874u;
        // 0x389878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38987Cu;
    // 0x38987c: 0x0  nop
    ctx->pc = 0x38987cu;
    // NOP
    ctx->pc = 0x389880u;
}
