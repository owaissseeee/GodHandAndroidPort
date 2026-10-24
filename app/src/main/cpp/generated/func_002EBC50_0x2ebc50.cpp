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

// Function: func_002EBC50
// Address: 0x2ebc50 - 0x2ebd10
void func_002EBC50_0x2ebc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EBC50_0x2ebc50");
#endif

    switch (ctx->pc) {
        case 0x2ebc88u: goto label_2ebc88;
        case 0x2ebc9cu: goto label_2ebc9c;
        case 0x2ebcb0u: goto label_2ebcb0;
        case 0x2ebcc4u: goto label_2ebcc4;
        case 0x2ebcd8u: goto label_2ebcd8;
        case 0x2ebcecu: goto label_2ebcec;
        case 0x2ebcf8u: goto label_2ebcf8;
        default: break;
    }

    ctx->pc = 0x2ebc50u;

    // 0x2ebc50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ebc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ebc54: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2ebc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2ebc58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ebc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ebc5c: 0x2442e960  addiu       $v0, $v0, -0x16A0
    ctx->pc = 0x2ebc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961504));
    // 0x2ebc60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ebc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ebc64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebc64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebc6c: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2ebc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2ebc70: 0x8e0302cc  lw          $v1, 0x2CC($s0)
    ctx->pc = 0x2ebc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x2ebc74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBC74u;
    {
        const bool branch_taken_0x2ebc74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC74u;
        // 0x2ebc78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc74) {
            ctx->pc = 0x2EBC88u;
            goto label_2ebc88;
        }
    }
    ctx->pc = 0x2EBC7Cu;
    // 0x2ebc7c: 0x8c64ffe0  lw          $a0, -0x20($v1)
    ctx->pc = 0x2ebc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x2ebc80: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2EBC80u;
    SET_GPR_U32(ctx, 31, 0x2EBC88u);
    ctx->pc = 0x2EBC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBC80u;
    // 0x2ebc84: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2EBC80u, 0x2EBC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBC88u;
label_2ebc88:
    // 0x2ebc88: 0x8e0502d0  lw          $a1, 0x2D0($s0)
    ctx->pc = 0x2ebc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2ebc8c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBC8Cu;
    {
        const bool branch_taken_0x2ebc8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc8c) {
            ctx->pc = 0x2EBC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBC8Cu;
            // 0x2ebc90: 0x8e0502c4  lw          $a1, 0x2C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBCA0u;
            goto label_2ebca0;
        }
    }
    ctx->pc = 0x2EBC94u;
    // 0x2ebc94: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2EBC94u;
    SET_GPR_U32(ctx, 31, 0x2EBC9Cu);
    ctx->pc = 0x2EBC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBC94u;
    // 0x2ebc98: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2EBC94u, 0x2EBC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBC9Cu;
label_2ebc9c:
    // 0x2ebc9c: 0x8e0502c4  lw          $a1, 0x2C4($s0)
    ctx->pc = 0x2ebc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
label_2ebca0:
    // 0x2ebca0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBCA0u;
    {
        const bool branch_taken_0x2ebca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebca0) {
            ctx->pc = 0x2EBCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBCA0u;
            // 0x2ebca4: 0x8e0502c8  lw          $a1, 0x2C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBCB4u;
            goto label_2ebcb4;
        }
    }
    ctx->pc = 0x2EBCA8u;
    // 0x2ebca8: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2EBCA8u;
    SET_GPR_U32(ctx, 31, 0x2EBCB0u);
    ctx->pc = 0x2EBCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBCA8u;
    // 0x2ebcac: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2EBCA8u, 0x2EBCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBCB0u;
label_2ebcb0:
    // 0x2ebcb0: 0x8e0502c8  lw          $a1, 0x2C8($s0)
    ctx->pc = 0x2ebcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_2ebcb4:
    // 0x2ebcb4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBCB4u;
    {
        const bool branch_taken_0x2ebcb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebcb4) {
            ctx->pc = 0x2EBCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBCB4u;
            // 0x2ebcb8: 0x8e0502bc  lw          $a1, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBCC8u;
            goto label_2ebcc8;
        }
    }
    ctx->pc = 0x2EBCBCu;
    // 0x2ebcbc: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2EBCBCu;
    SET_GPR_U32(ctx, 31, 0x2EBCC4u);
    ctx->pc = 0x2EBCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBCBCu;
    // 0x2ebcc0: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2EBCBCu, 0x2EBCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBCC4u;
label_2ebcc4:
    // 0x2ebcc4: 0x8e0502bc  lw          $a1, 0x2BC($s0)
    ctx->pc = 0x2ebcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
label_2ebcc8:
    // 0x2ebcc8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBCC8u;
    {
        const bool branch_taken_0x2ebcc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebcc8) {
            ctx->pc = 0x2EBCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBCC8u;
            // 0x2ebccc: 0x8e0502c0  lw          $a1, 0x2C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBCDCu;
            goto label_2ebcdc;
        }
    }
    ctx->pc = 0x2EBCD0u;
    // 0x2ebcd0: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2EBCD0u;
    SET_GPR_U32(ctx, 31, 0x2EBCD8u);
    ctx->pc = 0x2EBCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBCD0u;
    // 0x2ebcd4: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2EBCD0u, 0x2EBCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBCD8u;
label_2ebcd8:
    // 0x2ebcd8: 0x8e0502c0  lw          $a1, 0x2C0($s0)
    ctx->pc = 0x2ebcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_2ebcdc:
    // 0x2ebcdc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBCDCu;
    {
        const bool branch_taken_0x2ebcdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCDCu;
        // 0x2ebce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebcdc) {
            ctx->pc = 0x2EBCF0u;
            goto label_2ebcf0;
        }
    }
    ctx->pc = 0x2EBCE4u;
    // 0x2ebce4: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2EBCE4u;
    SET_GPR_U32(ctx, 31, 0x2EBCECu);
    ctx->pc = 0x2EBCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBCE4u;
    // 0x2ebce8: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2EBCE4u, 0x2EBCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBCECu;
label_2ebcec:
    // 0x2ebcec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ebcf0:
    // 0x2ebcf0: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x2EBCF0u;
    SET_GPR_U32(ctx, 31, 0x2EBCF8u);
    ctx->pc = 0x2EBCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBCF0u;
    // 0x2ebcf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x2EBCF0u, 0x2EBCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBCF8u;
label_2ebcf8:
    // 0x2ebcf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ebcf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebcfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ebcfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebd00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebd04: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD04u;
        // 0x2ebd08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBD0Cu;
    // 0x2ebd0c: 0x0  nop
    ctx->pc = 0x2ebd0cu;
    // NOP
    ctx->pc = 0x2ebd10u;
}
