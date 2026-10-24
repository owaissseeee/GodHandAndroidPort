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

// Function: func_00350A50
// Address: 0x350a50 - 0x350b38
void func_00350A50_0x350a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00350A50_0x350a50");
#endif

    switch (ctx->pc) {
        case 0x350a7cu: goto label_350a7c;
        case 0x350aacu: goto label_350aac;
        case 0x350ad0u: goto label_350ad0;
        case 0x350af0u: goto label_350af0;
        case 0x350b00u: goto label_350b00;
        case 0x350b10u: goto label_350b10;
        default: break;
    }

    ctx->pc = 0x350a50u;

    // 0x350a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x350a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x350a54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x350a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x350a58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x350a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x350a5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x350a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350a60: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x350a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x350a64: 0x26500078  addiu       $s0, $s2, 0x78
    ctx->pc = 0x350a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x350a68: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x350a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x350a6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x350a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x350a70: 0x8e531fc0  lw          $s3, 0x1FC0($s2)
    ctx->pc = 0x350a70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8128)));
    // 0x350a74: 0xc0d4700  jal         func_351C00
    ctx->pc = 0x350A74u;
    SET_GPR_U32(ctx, 31, 0x350A7Cu);
    ctx->pc = 0x350A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350A74u;
    // 0x350a78: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C00u, 0x350A74u, 0x350A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A7Cu;
label_350a7c:
    // 0x350a7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x350a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350a80: 0x50430026  beql        $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x350A80u;
    {
        const bool branch_taken_0x350a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x350a80) {
            ctx->pc = 0x350A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350A80u;
            // 0x350a84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350B1Cu;
            goto label_350b1c;
        }
    }
    ctx->pc = 0x350A88u;
    // 0x350a88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x350a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x350a8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350A8Cu;
    {
        const bool branch_taken_0x350a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A8Cu;
        // 0x350a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350a8c) {
            ctx->pc = 0x350AA4u;
            goto label_350aa4;
        }
    }
    ctx->pc = 0x350A94u;
    // 0x350a94: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x350a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x350a98: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x350A98u;
    {
        const bool branch_taken_0x350a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x350A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A98u;
        // 0x350a9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350a98) {
            ctx->pc = 0x350B18u;
            goto label_350b18;
        }
    }
    ctx->pc = 0x350AA0u;
    // 0x350aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_350aa4:
    // 0x350aa4: 0xc0da876  jal         func_36A1D8
    ctx->pc = 0x350AA4u;
    SET_GPR_U32(ctx, 31, 0x350AACu);
    ctx->pc = 0x350AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350AA4u;
    // 0x350aa8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D8u, 0x350AA4u, 0x350AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350AACu;
label_350aac:
    // 0x350aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ab0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x350ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x350ab4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x350ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350ab8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x350ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x350abc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x350abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350ac0: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x350AC0u;
    {
        const bool branch_taken_0x350ac0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x350AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350AC0u;
        // 0x350ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ac0) {
            ctx->pc = 0x350B18u;
            goto label_350b18;
        }
    }
    ctx->pc = 0x350AC8u;
    // 0x350ac8: 0xc0d31fc  jal         func_34C7F0
    ctx->pc = 0x350AC8u;
    SET_GPR_U32(ctx, 31, 0x350AD0u);
    ctx->pc = 0x34C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C7F0u, 0x350AC8u, 0x350AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350AD0u;
label_350ad0:
    // 0x350ad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ad4: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x350ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x350ad8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x350ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350adc: 0x43302a  slt         $a2, $v0, $v1
    ctx->pc = 0x350adcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x350ae0: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x350AE0u;
    {
        const bool branch_taken_0x350ae0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x350AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350AE0u;
        // 0x350ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ae0) {
            ctx->pc = 0x350B18u;
            goto label_350b18;
        }
    }
    ctx->pc = 0x350AE8u;
    // 0x350ae8: 0xc0d70e0  jal         func_35C380
    ctx->pc = 0x350AE8u;
    SET_GPR_U32(ctx, 31, 0x350AF0u);
    ctx->pc = 0x35C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C380u, 0x350AE8u, 0x350AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350AF0u;
label_350af0:
    // 0x350af0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350af4: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x350af4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x350af8: 0xc0d31fc  jal         func_34C7F0
    ctx->pc = 0x350AF8u;
    SET_GPR_U32(ctx, 31, 0x350B00u);
    ctx->pc = 0x350AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350AF8u;
    // 0x350afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C7F0u, 0x350AF8u, 0x350B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350B00u;
label_350b00:
    // 0x350b00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x350b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b08: 0xc0d31ec  jal         func_34C7B0
    ctx->pc = 0x350B08u;
    SET_GPR_U32(ctx, 31, 0x350B10u);
    ctx->pc = 0x350B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350B08u;
    // 0x350b0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C7B0u, 0x350B08u, 0x350B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350B10u;
label_350b10:
    // 0x350b10: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x350b10u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x350b14: 0x2e020001  sltiu       $v0, $s0, 0x1
    ctx->pc = 0x350b14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_350b18:
    // 0x350b18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x350b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_350b1c:
    // 0x350b1c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x350b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350b20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x350b20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350b24: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x350b24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x350b28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x350b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x350b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x350B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B2Cu;
        // 0x350b30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350B34u;
    // 0x350b34: 0x0  nop
    ctx->pc = 0x350b34u;
    // NOP
    ctx->pc = 0x350b38u;
}
