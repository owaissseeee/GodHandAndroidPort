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

// Function: func_0013E330
// Address: 0x13e330 - 0x13e380
void func_0013E330_0x13e330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013E330_0x13e330");
#endif

    switch (ctx->pc) {
        case 0x13e354u: goto label_13e354;
        case 0x13e36cu: goto label_13e36c;
        default: break;
    }

    ctx->pc = 0x13e330u;

    // 0x13e330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e334: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x13e334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x13e338: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13e33c: 0x8c625608  lw          $v0, 0x5608($v1)
    ctx->pc = 0x13e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785608u));
    // 0x13e340: 0x24705608  addiu       $s0, $v1, 0x5608
    ctx->pc = 0x13e340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22024));
    // 0x13e344: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E344u;
    {
        const bool branch_taken_0x13e344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E344u;
        // 0x13e348: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e344) {
            ctx->pc = 0x13E36Cu;
            goto label_13e36c;
        }
    }
    ctx->pc = 0x13E34Cu;
    // 0x13e34c: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x13E34Cu;
    SET_GPR_U32(ctx, 31, 0x13E354u);
    ctx->pc = 0x13C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C758u, 0x13E34Cu, 0x13E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E354u;
label_13e354:
    // 0x13e354: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x13e354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13e358: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x13e358u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x13e35c: 0x24a5dfe8  addiu       $a1, $a1, -0x2018
    ctx->pc = 0x13e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959080));
    // 0x13e360: 0x24c60d28  addiu       $a2, $a2, 0xD28
    ctx->pc = 0x13e360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x13e364: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x13E364u;
    SET_GPR_U32(ctx, 31, 0x13E36Cu);
    ctx->pc = 0x13E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E364u;
    // 0x13e368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x13E364u, 0x13E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E36Cu;
label_13e36c:
    // 0x13e36c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e36cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e374: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13e374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e378: 0x3e00008  jr          $ra
    ctx->pc = 0x13E378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E378u;
        // 0x13e37c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E380u;
}
