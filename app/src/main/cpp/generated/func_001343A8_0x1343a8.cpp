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

// Function: func_001343A8
// Address: 0x1343a8 - 0x134430
void func_001343A8_0x1343a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001343A8_0x1343a8");
#endif

    switch (ctx->pc) {
        case 0x1343f0u: goto label_1343f0;
        case 0x134404u: goto label_134404;
        default: break;
    }

    ctx->pc = 0x1343a8u;

    // 0x1343a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1343a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1343ac: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x1343acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x1343b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1343b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1343b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1343b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1343b8: 0x24515568  addiu       $s1, $v0, 0x5568
    ctx->pc = 0x1343b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21864));
    // 0x1343bc: 0x8c435568  lw          $v1, 0x5568($v0)
    ctx->pc = 0x1343bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x785568u));
    // 0x1343c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1343c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1343c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1343c8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1343C8u;
    {
        const bool branch_taken_0x1343c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1343CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343C8u;
        // 0x1343cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1343c8) {
            ctx->pc = 0x134404u;
            goto label_134404;
        }
    }
    ctx->pc = 0x1343D0u;
    // 0x1343d0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1343d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1343d4: 0x8c620d10  lw          $v0, 0xD10($v1)
    ctx->pc = 0x1343d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D10u));
    // 0x1343d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1343D8u;
    {
        const bool branch_taken_0x1343d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1343DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343D8u;
        // 0x1343dc: 0x24700d10  addiu       $s0, $v1, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1343d8) {
            ctx->pc = 0x1343F0u;
            goto label_1343f0;
        }
    }
    ctx->pc = 0x1343E0u;
    // 0x1343e0: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1343e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1343e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1343e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343e8: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x1343E8u;
    SET_GPR_U32(ctx, 31, 0x1343F0u);
    ctx->pc = 0x1343ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343E8u;
    // 0x1343ec: 0x24a5d830  addiu       $a1, $a1, -0x27D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x1343E8u, 0x1343F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1343F0u;
label_1343f0:
    // 0x1343f0: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1343f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1343f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1343f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343f8: 0x24a5d880  addiu       $a1, $a1, -0x2780
    ctx->pc = 0x1343f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
    // 0x1343fc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1343FCu;
    SET_GPR_U32(ctx, 31, 0x134404u);
    ctx->pc = 0x134400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343FCu;
    // 0x134400: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1343FCu, 0x134404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134404u;
label_134404:
    // 0x134404: 0x26425568  addiu       $v0, $s2, 0x5568
    ctx->pc = 0x134404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 21864));
    // 0x134408: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x134408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13440c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13440cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134410: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x134410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134418: 0x3e00008  jr          $ra
    ctx->pc = 0x134418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134418u;
        // 0x13441c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134420u;
    // 0x134420: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x134420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x134424: 0x0  nop
    ctx->pc = 0x134424u;
    // NOP
    // 0x134428: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x134428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x13442c: 0x0  nop
    ctx->pc = 0x13442cu;
    // NOP
    ctx->pc = 0x134430u;
}
