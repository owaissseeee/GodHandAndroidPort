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

// Function: func_001FF3A0
// Address: 0x1ff3a0 - 0x1ff448
void func_001FF3A0_0x1ff3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FF3A0_0x1ff3a0");
#endif

    switch (ctx->pc) {
        case 0x1ff3d8u: goto label_1ff3d8;
        case 0x1ff400u: goto label_1ff400;
        case 0x1ff410u: goto label_1ff410;
        default: break;
    }

    ctx->pc = 0x1ff3a0u;

    // 0x1ff3a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ff3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ff3a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ff3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ff3a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ff3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ff3ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ff3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ff3b4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ff3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1ff3b8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1ff3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1ff3bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff3c0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1ff3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1ff3c4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1ff3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ff3c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF3C8u;
    {
        const bool branch_taken_0x1ff3c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3C8u;
        // 0x1ff3cc: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3c8) {
            ctx->pc = 0x1FF3D8u;
            goto label_1ff3d8;
        }
    }
    ctx->pc = 0x1FF3D0u;
    // 0x1ff3d0: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x1FF3D0u;
    SET_GPR_U32(ctx, 31, 0x1FF3D8u);
    ctx->pc = 0x1FF3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF3D0u;
    // 0x1ff3d4: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x1FF3D0u, 0x1FF3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF3D8u;
label_1ff3d8:
    // 0x1ff3d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff3dc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1ff3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1ff3e0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1ff3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1ff3e4: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x1ff3e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x1ff3e8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1ff3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1ff3ec: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1ff3ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff3f0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1ff3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1ff3f4: 0x26300024  addiu       $s0, $s1, 0x24
    ctx->pc = 0x1ff3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x1ff3f8: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x1ff3f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ff3fc: 0x0  nop
    ctx->pc = 0x1ff3fcu;
    // NOP
label_1ff400:
    // 0x1ff400: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ff400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff404: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x1ff404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x1ff408: 0xc0b2cd0  jal         func_2CB340
    ctx->pc = 0x1FF408u;
    SET_GPR_U32(ctx, 31, 0x1FF410u);
    ctx->pc = 0x1FF40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF408u;
    // 0x1ff40c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB340u, 0x1FF408u, 0x1FF410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF410u;
label_1ff410:
    // 0x1ff410: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1ff410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x1ff414: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF414u;
    {
        const bool branch_taken_0x1ff414 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1FF418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF414u;
        // 0x1ff418: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff414) {
            ctx->pc = 0x1FF400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff400;
        }
    }
    ctx->pc = 0x1FF41Cu;
    // 0x1ff41c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ff41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ff420: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ff420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ff424: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ff424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ff428: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ff428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff42c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ff42cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff430: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ff430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff434: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ff434u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff43c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF43Cu;
        // 0x1ff440: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF444u;
    // 0x1ff444: 0x0  nop
    ctx->pc = 0x1ff444u;
    // NOP
    ctx->pc = 0x1ff448u;
}
