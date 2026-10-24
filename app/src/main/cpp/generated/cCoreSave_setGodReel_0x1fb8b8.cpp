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

// Function: cCoreSave_setGodReel
// Address: 0x1fb8b8 - 0x1fb928
void cCoreSave_setGodReel_0x1fb8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setGodReel_0x1fb8b8");
#endif

    switch (ctx->pc) {
        case 0x1fb8f8u: goto label_1fb8f8;
        case 0x1fb914u: goto label_1fb914;
        default: break;
    }

    ctx->pc = 0x1fb8b8u;

    // 0x1fb8b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fb8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fb8bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fb8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fb8c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fb8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fb8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fb8cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fb8ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb8d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1fb8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fb8d4: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FB8D4u;
    {
        const bool branch_taken_0x1fb8d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8D4u;
        // 0x1fb8d8: 0x2a22001f  slti        $v0, $s1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8d4) {
            ctx->pc = 0x1FB914u;
            goto label_1fb914;
        }
    }
    ctx->pc = 0x1FB8DCu;
    // 0x1fb8dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FB8DCu;
    {
        const bool branch_taken_0x1fb8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8DCu;
        // 0x1fb8e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8dc) {
            ctx->pc = 0x1FB914u;
            goto label_1fb914;
        }
    }
    ctx->pc = 0x1FB8E4u;
    // 0x1fb8e4: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x1fb8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x1fb8e8: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x1fb8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x1fb8ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fb8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fb8f0: 0xc07f084  jal         func_1FC210
    ctx->pc = 0x1FB8F0u;
    SET_GPR_U32(ctx, 31, 0x1FB8F8u);
    ctx->pc = 0x1FB8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB8F0u;
    // 0x1fb8f4: 0xaca20130  sw          $v0, 0x130($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 304), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC210u, 0x1FB8F0u, 0x1FB8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB8F8u;
label_1fb8f8:
    // 0x1fb8f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fb8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb8fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fb900: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB900u;
    {
        const bool branch_taken_0x1fb900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB900u;
        // 0x1fb904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb900) {
            ctx->pc = 0x1FB914u;
            goto label_1fb914;
        }
    }
    ctx->pc = 0x1FB908u;
    // 0x1fb908: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1fb908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb90c: 0xc07f05c  jal         func_1FC170
    ctx->pc = 0x1FB90Cu;
    SET_GPR_U32(ctx, 31, 0x1FB914u);
    ctx->pc = 0x1FB910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB90Cu;
    // 0x1fb910: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC170u, 0x1FB90Cu, 0x1FB914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB914u;
label_1fb914:
    // 0x1fb914: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fb914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb920: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB920u;
        // 0x1fb924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB928u;
}
