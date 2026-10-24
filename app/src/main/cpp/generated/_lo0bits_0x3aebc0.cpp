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

// Function: _lo0bits
// Address: 0x3aebc0 - 0x3aec80
void _lo0bits_0x3aebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lo0bits_0x3aebc0");
#endif

    ctx->pc = 0x3aebc0u;

    // 0x3aebc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3aebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3aebc4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x3aebc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3aebc8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3AEBC8u;
    {
        const bool branch_taken_0x3aebc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBC8u;
        // 0x3aebcc: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aebc8) {
            ctx->pc = 0x3AEC04u;
            goto label_3aec04;
        }
    }
    ctx->pc = 0x3AEBD0u;
    // 0x3aebd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AEBD0u;
    {
        const bool branch_taken_0x3aebd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBD0u;
        // 0x3aebd4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aebd0) {
            ctx->pc = 0x3AEBE0u;
            goto label_3aebe0;
        }
    }
    ctx->pc = 0x3AEBD8u;
    // 0x3aebd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBD8u;
        // 0x3aebdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEBE0u;
label_3aebe0:
    // 0x3aebe0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AEBE0u;
    {
        const bool branch_taken_0x3aebe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aebe0) {
            ctx->pc = 0x3AEBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEBE0u;
            // 0x3aebe4: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEBF8u;
            goto label_3aebf8;
        }
    }
    ctx->pc = 0x3AEBE8u;
    // 0x3aebe8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3aebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3aebec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aebf0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBF0u;
        // 0x3aebf4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEBF8u;
label_3aebf8:
    // 0x3aebf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3aebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aebfc: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBFCu;
        // 0x3aec00: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEC04u;
label_3aec04:
    // 0x3aec04: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3aec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3aec08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AEC08u;
    {
        const bool branch_taken_0x3aec08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC08u;
        // 0x3aec0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec08) {
            ctx->pc = 0x3AEC18u;
            goto label_3aec18;
        }
    }
    ctx->pc = 0x3AEC10u;
    // 0x3aec10: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3aec10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3aec14: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x3aec14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_3aec18:
    // 0x3aec18: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3aec18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3aec1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AEC1Cu;
    {
        const bool branch_taken_0x3aec1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC1Cu;
        // 0x3aec20: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec1c) {
            ctx->pc = 0x3AEC30u;
            goto label_3aec30;
        }
    }
    ctx->pc = 0x3AEC24u;
    // 0x3aec24: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3aec24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3aec28: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3aec28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3aec2c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x3aec2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_3aec30:
    // 0x3aec30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AEC30u;
    {
        const bool branch_taken_0x3aec30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC30u;
        // 0x3aec34: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec30) {
            ctx->pc = 0x3AEC44u;
            goto label_3aec44;
        }
    }
    ctx->pc = 0x3AEC38u;
    // 0x3aec38: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3aec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3aec3c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x3aec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x3aec40: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x3aec40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_3aec44:
    // 0x3aec44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AEC44u;
    {
        const bool branch_taken_0x3aec44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC44u;
        // 0x3aec48: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec44) {
            ctx->pc = 0x3AEC58u;
            goto label_3aec58;
        }
    }
    ctx->pc = 0x3AEC4Cu;
    // 0x3aec4c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3aec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3aec50: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x3aec50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x3aec54: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3aec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3aec58:
    // 0x3aec58: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AEC58u;
    {
        const bool branch_taken_0x3aec58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aec58) {
            ctx->pc = 0x3AEC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEC58u;
            // 0x3aec5c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEC78u;
            goto label_3aec78;
        }
    }
    ctx->pc = 0x3AEC60u;
    // 0x3aec60: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3aec60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3aec64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AEC64u;
    {
        const bool branch_taken_0x3aec64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC64u;
        // 0x3aec68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec64) {
            ctx->pc = 0x3AEC74u;
            goto label_3aec74;
        }
    }
    ctx->pc = 0x3AEC6Cu;
    // 0x3aec6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC6Cu;
        // 0x3aec70: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEC74u;
label_3aec74:
    // 0x3aec74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3aec74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3aec78:
    // 0x3aec78: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC78u;
        // 0x3aec7c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEC80u;
}
