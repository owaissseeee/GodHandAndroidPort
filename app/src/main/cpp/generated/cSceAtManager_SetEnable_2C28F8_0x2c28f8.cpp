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

// Function: cSceAtManager_SetEnable_2C28F8
// Address: 0x2c28f8 - 0x2c2950
void cSceAtManager_SetEnable_2C28F8_0x2c28f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_SetEnable_2C28F8_0x2c28f8");
#endif

    switch (ctx->pc) {
        case 0x2c2928u: goto label_2c2928;
        case 0x2c293cu: goto label_2c293c;
        default: break;
    }

    ctx->pc = 0x2c28f8u;

    // 0x2c28f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c28f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c28fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c28fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c2900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c2904: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c2904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2908: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2908u;
    {
        const bool branch_taken_0x2c2908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2908u;
        // 0x2c290c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2908) {
            ctx->pc = 0x2C2918u;
            goto label_2c2918;
        }
    }
    ctx->pc = 0x2C2910u;
    // 0x2c2910: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2910u;
    {
        const bool branch_taken_0x2c2910 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2910) {
            ctx->pc = 0x2C2920u;
            goto label_2c2920;
        }
    }
    ctx->pc = 0x2C2918u;
label_2c2918:
    // 0x2c2918: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2918u;
    {
        const bool branch_taken_0x2c2918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2918u;
        // 0x2c291c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2918) {
            ctx->pc = 0x2C2940u;
            goto label_2c2940;
        }
    }
    ctx->pc = 0x2C2920u;
label_2c2920:
    // 0x2c2920: 0xc0b039a  jal         func_2C0E68
    ctx->pc = 0x2C2920u;
    SET_GPR_U32(ctx, 31, 0x2C2928u);
    ctx->pc = 0x2C2924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2920u;
    // 0x2c2924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E68u, 0x2C2920u, 0x2C2928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2928u;
label_2c2928:
    // 0x2c2928: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2928u;
    {
        const bool branch_taken_0x2c2928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2928u;
        // 0x2c292c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2928) {
            ctx->pc = 0x2C2940u;
            goto label_2c2940;
        }
    }
    ctx->pc = 0x2C2930u;
    // 0x2c2930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2934: 0xc0b037a  jal         func_2C0DE8
    ctx->pc = 0x2C2934u;
    SET_GPR_U32(ctx, 31, 0x2C293Cu);
    ctx->pc = 0x2C2938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2934u;
    // 0x2c2938: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DE8u, 0x2C2934u, 0x2C293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C293Cu;
label_2c293c:
    // 0x2c293c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2940:
    // 0x2c2940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c2940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2948: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2948u;
        // 0x2c294c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2950u;
}
