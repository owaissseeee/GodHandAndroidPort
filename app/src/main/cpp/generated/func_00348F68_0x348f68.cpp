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

// Function: func_00348F68
// Address: 0x348f68 - 0x348ff0
void func_00348F68_0x348f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348F68_0x348f68");
#endif

    switch (ctx->pc) {
        case 0x348f80u: goto label_348f80;
        case 0x348f94u: goto label_348f94;
        case 0x348facu: goto label_348fac;
        case 0x348fc4u: goto label_348fc4;
        default: break;
    }

    ctx->pc = 0x348f68u;

    // 0x348f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348f6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x348f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x348f70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x348f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348f74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x348f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x348f78: 0xc0d67a0  jal         func_359E80
    ctx->pc = 0x348F78u;
    SET_GPR_U32(ctx, 31, 0x348F80u);
    ctx->pc = 0x348F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348F78u;
    // 0x348f7c: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359E80u, 0x348F78u, 0x348F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348F80u;
label_348f80:
    // 0x348f80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x348f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x348f84: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x348F84u;
    {
        const bool branch_taken_0x348f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x348F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F84u;
        // 0x348f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f84) {
            ctx->pc = 0x348FE0u;
            goto label_348fe0;
        }
    }
    ctx->pc = 0x348F8Cu;
    // 0x348f8c: 0xc0d16ce  jal         func_345B38
    ctx->pc = 0x348F8Cu;
    SET_GPR_U32(ctx, 31, 0x348F94u);
    ctx->pc = 0x345B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345B38u, 0x348F8Cu, 0x348F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348F94u;
label_348f94:
    // 0x348f94: 0x82030072  lb          $v1, 0x72($s0)
    ctx->pc = 0x348f94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
    // 0x348f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x348f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348f9c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x348F9Cu;
    {
        const bool branch_taken_0x348f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x348FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F9Cu;
        // 0x348fa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348f9c) {
            ctx->pc = 0x348FACu;
            goto label_348fac;
        }
    }
    ctx->pc = 0x348FA4u;
    // 0x348fa4: 0xc0d17d2  jal         func_345F48
    ctx->pc = 0x348FA4u;
    SET_GPR_U32(ctx, 31, 0x348FACu);
    ctx->pc = 0x345F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345F48u, 0x348FA4u, 0x348FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348FACu;
label_348fac:
    // 0x348fac: 0x82030070  lb          $v1, 0x70($s0)
    ctx->pc = 0x348facu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x348fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x348fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348fb4: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x348FB4u;
    {
        const bool branch_taken_0x348fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x348fb4) {
            ctx->pc = 0x348FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348FB4u;
            // 0x348fb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348FE4u;
            goto label_348fe4;
        }
    }
    ctx->pc = 0x348FBCu;
    // 0x348fbc: 0xc0d333a  jal         func_34CCE8
    ctx->pc = 0x348FBCu;
    SET_GPR_U32(ctx, 31, 0x348FC4u);
    ctx->pc = 0x348FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348FBCu;
    // 0x348fc0: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCE8u, 0x348FBCu, 0x348FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348FC4u;
label_348fc4:
    // 0x348fc4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x348fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x348fc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x348FC8u;
    {
        const bool branch_taken_0x348fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FC8u;
        // 0x348fcc: 0x248492d0  addiu       $a0, $a0, -0x6D30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348fc8) {
            ctx->pc = 0x348FE0u;
            goto label_348fe0;
        }
    }
    ctx->pc = 0x348FD0u;
    // 0x348fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348fd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x348fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x348fd8: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x348FD8u;
    ctx->pc = 0x348FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348FD8u;
    // 0x348fdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x348FD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348FE0u;
label_348fe0:
    // 0x348fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_348fe4:
    // 0x348fe4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x348fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x348fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x348FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FE8u;
        // 0x348fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348FF0u;
}
