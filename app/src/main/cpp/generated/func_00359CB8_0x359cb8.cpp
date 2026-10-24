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

// Function: func_00359CB8
// Address: 0x359cb8 - 0x359da8
void func_00359CB8_0x359cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359CB8_0x359cb8");
#endif

    switch (ctx->pc) {
        case 0x359ce8u: goto label_359ce8;
        case 0x359d20u: goto label_359d20;
        default: break;
    }

    ctx->pc = 0x359cb8u;

    // 0x359cb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359cbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359cc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x359cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x359cc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x359cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359cc8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x359cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x359ccc: 0x26540dc4  addiu       $s4, $s2, 0xDC4
    ctx->pc = 0x359cccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 3524));
    // 0x359cd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359cd4: 0x265136b4  addiu       $s1, $s2, 0x36B4
    ctx->pc = 0x359cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 14004));
    // 0x359cd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x359cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x359cdc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x359cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x359ce0: 0xc0d3352  jal         func_34CD48
    ctx->pc = 0x359CE0u;
    SET_GPR_U32(ctx, 31, 0x359CE8u);
    ctx->pc = 0x359CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359CE0u;
    // 0x359ce4: 0x8e5036b0  lw          $s0, 0x36B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CD48u, 0x359CE0u, 0x359CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359CE8u;
label_359ce8:
    // 0x359ce8: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x359CE8u;
    {
        const bool branch_taken_0x359ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359ce8) {
            ctx->pc = 0x359CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359CE8u;
            // 0x359cec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359D8Cu;
            goto label_359d8c;
        }
    }
    ctx->pc = 0x359CF0u;
    // 0x359cf0: 0x8e020dac  lw          $v0, 0xDAC($s0)
    ctx->pc = 0x359cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3500)));
    // 0x359cf4: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x359CF4u;
    {
        const bool branch_taken_0x359cf4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x359CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359CF4u;
        // 0x359cf8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359cf4) {
            ctx->pc = 0x359D38u;
            goto label_359d38;
        }
    }
    ctx->pc = 0x359CFCu;
    // 0x359cfc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x359cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x359d00: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x359d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x359d04: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x359D04u;
    {
        const bool branch_taken_0x359d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x359D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359D04u;
        // 0x359d08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359d04) {
            ctx->pc = 0x359D10u;
            goto label_359d10;
        }
    }
    ctx->pc = 0x359D0Cu;
    // 0x359d0c: 0x8e110dd4  lw          $s1, 0xDD4($s0)
    ctx->pc = 0x359d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3540)));
label_359d10:
    // 0x359d10: 0x622000a  bltzl       $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x359D10u;
    {
        const bool branch_taken_0x359d10 = (GPR_S64(ctx, 17) < 0);
        if (branch_taken_0x359d10) {
            ctx->pc = 0x359D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359D10u;
            // 0x359d14: 0x8e020db0  lw          $v0, 0xDB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359D3Cu;
            goto label_359d3c;
        }
    }
    ctx->pc = 0x359D18u;
    // 0x359d18: 0xc0d676a  jal         func_359DA8
    ctx->pc = 0x359D18u;
    SET_GPR_U32(ctx, 31, 0x359D20u);
    ctx->pc = 0x359D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359D18u;
    // 0x359d1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359DA8u, 0x359D18u, 0x359D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D20u;
label_359d20:
    // 0x359d20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x359d20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359d24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x359d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x359d28: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x359D28u;
    {
        const bool branch_taken_0x359d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x359D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359D28u;
        // 0x359d2c: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359d28) {
            ctx->pc = 0x359D38u;
            goto label_359d38;
        }
    }
    ctx->pc = 0x359D30u;
    // 0x359d30: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x359d30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359d34: 0xae020dac  sw          $v0, 0xDAC($s0)
    ctx->pc = 0x359d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3500), GPR_U32(ctx, 2));
label_359d38:
    // 0x359d38: 0x8e020db0  lw          $v0, 0xDB0($s0)
    ctx->pc = 0x359d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_359d3c:
    // 0x359d3c: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x359D3Cu;
    {
        const bool branch_taken_0x359d3c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x359d3c) {
            ctx->pc = 0x359D60u;
            goto label_359d60;
        }
    }
    ctx->pc = 0x359D44u;
    // 0x359d44: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x359d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x359d48: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x359D48u;
    {
        const bool branch_taken_0x359d48 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x359d48) {
            ctx->pc = 0x359D60u;
            goto label_359d60;
        }
    }
    ctx->pc = 0x359D50u;
    // 0x359d50: 0xae020db0  sw          $v0, 0xDB0($s0)
    ctx->pc = 0x359d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3504), GPR_U32(ctx, 2));
    // 0x359d54: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x359d54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359d58: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x359d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x359d5c: 0xae020db4  sw          $v0, 0xDB4($s0)
    ctx->pc = 0x359d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3508), GPR_U32(ctx, 2));
label_359d60:
    // 0x359d60: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x359D60u;
    {
        const bool branch_taken_0x359d60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x359D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359D60u;
        // 0x359d64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359d60) {
            ctx->pc = 0x359D88u;
            goto label_359d88;
        }
    }
    ctx->pc = 0x359D68u;
    // 0x359d68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359d70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359d74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x359d74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359d78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x359d78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359d7c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x359d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359d80: 0x80d677c  j           func_359DF0
    ctx->pc = 0x359D80u;
    ctx->pc = 0x359D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359D80u;
    // 0x359d84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359DF0u, 0x359D80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359D88u;
label_359d88:
    // 0x359d88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_359d8c:
    // 0x359d8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359d90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359d94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x359d94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359d98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x359d98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359d9c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x359d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359da0: 0x3e00008  jr          $ra
    ctx->pc = 0x359DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359DA0u;
        // 0x359da4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359DA8u;
}
