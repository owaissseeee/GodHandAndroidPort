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

// Function: func_0035EA88
// Address: 0x35ea88 - 0x35eb60
void func_0035EA88_0x35ea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035EA88_0x35ea88");
#endif

    switch (ctx->pc) {
        case 0x35eb50u: goto label_35eb50;
        default: break;
    }

    ctx->pc = 0x35ea88u;

    // 0x35ea88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ea88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ea8c: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x35ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x35ea90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ea90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ea94: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35ea98: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x35EA98u;
    {
        const bool branch_taken_0x35ea98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA98u;
        // 0x35ea9c: 0x28620062  slti        $v0, $v1, 0x62 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)98) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ea98) {
            ctx->pc = 0x35EB50u;
            goto label_35eb50;
        }
    }
    ctx->pc = 0x35EAA0u;
    // 0x35eaa0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x35EAA0u;
    {
        const bool branch_taken_0x35eaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAA0u;
        // 0x35eaa4: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eaa0) {
            ctx->pc = 0x35EAF0u;
            goto label_35eaf0;
        }
    }
    ctx->pc = 0x35EAA8u;
    // 0x35eaa8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x35eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x35eaac: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x35EAACu;
    {
        const bool branch_taken_0x35eaac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAACu;
        // 0x35eab0: 0x28620032  slti        $v0, $v1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eaac) {
            ctx->pc = 0x35EB50u;
            goto label_35eb50;
        }
    }
    ctx->pc = 0x35EAB4u;
    // 0x35eab4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35EAB4u;
    {
        const bool branch_taken_0x35eab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAB4u;
        // 0x35eab8: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eab4) {
            ctx->pc = 0x35EAD8u;
            goto label_35ead8;
        }
    }
    ctx->pc = 0x35EABCu;
    // 0x35eabc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x35eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x35eac0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x35EAC0u;
    {
        const bool branch_taken_0x35eac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAC0u;
        // 0x35eac4: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eac0) {
            ctx->pc = 0x35EB50u;
            goto label_35eb50;
        }
    }
    ctx->pc = 0x35EAC8u;
    // 0x35eac8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x35EAC8u;
    {
        const bool branch_taken_0x35eac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAC8u;
        // 0x35eacc: 0x3c060046  lui         $a2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eac8) {
            ctx->pc = 0x35EB38u;
            goto label_35eb38;
        }
    }
    ctx->pc = 0x35EAD0u;
    // 0x35ead0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x35EAD0u;
    {
        const bool branch_taken_0x35ead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAD0u;
        // 0x35ead4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ead0) {
            ctx->pc = 0x35EB44u;
            goto label_35eb44;
        }
    }
    ctx->pc = 0x35EAD8u;
label_35ead8:
    // 0x35ead8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x35EAD8u;
    {
        const bool branch_taken_0x35ead8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAD8u;
        // 0x35eadc: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ead8) {
            ctx->pc = 0x35EB50u;
            goto label_35eb50;
        }
    }
    ctx->pc = 0x35EAE0u;
    // 0x35eae0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x35EAE0u;
    {
        const bool branch_taken_0x35eae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAE0u;
        // 0x35eae4: 0x3c060046  lui         $a2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eae0) {
            ctx->pc = 0x35EB50u;
            goto label_35eb50;
        }
    }
    ctx->pc = 0x35EAE8u;
    // 0x35eae8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35EAE8u;
    {
        const bool branch_taken_0x35eae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAE8u;
        // 0x35eaec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eae8) {
            ctx->pc = 0x35EB44u;
            goto label_35eb44;
        }
    }
    ctx->pc = 0x35EAF0u;
label_35eaf0:
    // 0x35eaf0: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x35EAF0u;
    {
        const bool branch_taken_0x35eaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAF0u;
        // 0x35eaf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eaf0) {
            ctx->pc = 0x35EB54u;
            goto label_35eb54;
        }
    }
    ctx->pc = 0x35EAF8u;
    // 0x35eaf8: 0x28620102  slti        $v0, $v1, 0x102
    ctx->pc = 0x35eaf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)258) ? 1 : 0);
    // 0x35eafc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35EAFCu;
    {
        const bool branch_taken_0x35eafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAFCu;
        // 0x35eb00: 0x24020111  addiu       $v0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eafc) {
            ctx->pc = 0x35EB20u;
            goto label_35eb20;
        }
    }
    ctx->pc = 0x35EB04u;
    // 0x35eb04: 0x24020071  addiu       $v0, $zero, 0x71
    ctx->pc = 0x35eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x35eb08: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x35EB08u;
    {
        const bool branch_taken_0x35eb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB08u;
        // 0x35eb0c: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb08) {
            ctx->pc = 0x35EB50u;
            goto label_35eb50;
        }
    }
    ctx->pc = 0x35EB10u;
    // 0x35eb10: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x35EB10u;
    {
        const bool branch_taken_0x35eb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB10u;
        // 0x35eb14: 0x3c060046  lui         $a2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb10) {
            ctx->pc = 0x35EB50u;
            goto label_35eb50;
        }
    }
    ctx->pc = 0x35EB18u;
    // 0x35eb18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x35EB18u;
    {
        const bool branch_taken_0x35eb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB18u;
        // 0x35eb1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb18) {
            ctx->pc = 0x35EB44u;
            goto label_35eb44;
        }
    }
    ctx->pc = 0x35EB20u;
label_35eb20:
    // 0x35eb20: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35EB20u;
    {
        const bool branch_taken_0x35eb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB20u;
        // 0x35eb24: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb20) {
            ctx->pc = 0x35EB50u;
            goto label_35eb50;
        }
    }
    ctx->pc = 0x35EB28u;
    // 0x35eb28: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35EB28u;
    {
        const bool branch_taken_0x35eb28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB28u;
        // 0x35eb2c: 0x3c060046  lui         $a2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb28) {
            ctx->pc = 0x35EB40u;
            goto label_35eb40;
        }
    }
    ctx->pc = 0x35EB30u;
    // 0x35eb30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35EB30u;
    {
        const bool branch_taken_0x35eb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB30u;
        // 0x35eb34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb30) {
            ctx->pc = 0x35EB54u;
            goto label_35eb54;
        }
    }
    ctx->pc = 0x35EB38u;
label_35eb38:
    // 0x35eb38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35EB38u;
    {
        const bool branch_taken_0x35eb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB38u;
        // 0x35eb3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb38) {
            ctx->pc = 0x35EB54u;
            goto label_35eb54;
        }
    }
    ctx->pc = 0x35EB40u;
label_35eb40:
    // 0x35eb40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35eb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35eb44:
    // 0x35eb44: 0x24c69c70  addiu       $a2, $a2, -0x6390
    ctx->pc = 0x35eb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941808));
    // 0x35eb48: 0xc0d7ef6  jal         func_35FBD8
    ctx->pc = 0x35EB48u;
    SET_GPR_U32(ctx, 31, 0x35EB50u);
    ctx->pc = 0x35EB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EB48u;
    // 0x35eb4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FBD8u, 0x35EB48u, 0x35EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EB50u;
label_35eb50:
    // 0x35eb50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35eb50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35eb54:
    // 0x35eb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35eb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35eb58: 0x3e00008  jr          $ra
    ctx->pc = 0x35EB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB58u;
        // 0x35eb5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EB60u;
}
