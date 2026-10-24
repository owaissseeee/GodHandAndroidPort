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

// Function: func_00357F58
// Address: 0x357f58 - 0x357fc8
void func_00357F58_0x357f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357F58_0x357f58");
#endif

    switch (ctx->pc) {
        case 0x357f8cu: goto label_357f8c;
        case 0x357facu: goto label_357fac;
        default: break;
    }

    ctx->pc = 0x357f58u;

    // 0x357f58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357f5c: 0x24830a0c  addiu       $v1, $a0, 0xA0C
    ctx->pc = 0x357f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2572));
    // 0x357f60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x357f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x357f64: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x357f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x357f68: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x357f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x357f6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357f70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x357f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x357f74: 0x8c700050  lw          $s0, 0x50($v1)
    ctx->pc = 0x357f74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x357f78: 0x1205000d  beq         $s0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x357F78u;
    {
        const bool branch_taken_0x357f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x357F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F78u;
        // 0x357f7c: 0x8c710054  lw          $s1, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357f78) {
            ctx->pc = 0x357FB0u;
            goto label_357fb0;
        }
    }
    ctx->pc = 0x357F80u;
    // 0x357f80: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x357f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x357f84: 0xc0d6ae6  jal         func_35AB98
    ctx->pc = 0x357F84u;
    SET_GPR_U32(ctx, 31, 0x357F8Cu);
    ctx->pc = 0x357F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357F84u;
    // 0x357f88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AB98u, 0x357F84u, 0x357F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357F8Cu;
label_357f8c:
    // 0x357f8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357f8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357f90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x357f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357f94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x357f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357f98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x357f98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357f9c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x357F9Cu;
    {
        const bool branch_taken_0x357f9c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x357FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F9Cu;
        // 0x357fa0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357f9c) {
            ctx->pc = 0x357FB0u;
            goto label_357fb0;
        }
    }
    ctx->pc = 0x357FA4u;
    // 0x357fa4: 0xc0d9a46  jal         func_366918
    ctx->pc = 0x357FA4u;
    SET_GPR_U32(ctx, 31, 0x357FACu);
    ctx->pc = 0x357FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357FA4u;
    // 0x357fa8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366918u, 0x357FA4u, 0x357FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FACu;
label_357fac:
    // 0x357fac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x357facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_357fb0:
    // 0x357fb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x357fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357fb4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x357fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x357fb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x357fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x357FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357FBCu;
        // 0x357fc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357FC4u;
    // 0x357fc4: 0x0  nop
    ctx->pc = 0x357fc4u;
    // NOP
    ctx->pc = 0x357fc8u;
}
