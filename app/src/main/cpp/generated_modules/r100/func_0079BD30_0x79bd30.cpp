#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_0079BD30
// Address: 0x79bd30 - 0x79bde8
void func_0079BD30_0x79bd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BD30_0x79bd30");
#endif

    switch (ctx->pc) {
        case 0x79bd50u: goto label_79bd50;
        case 0x79bda0u: goto label_79bda0;
        default: break;
    }

    ctx->pc = 0x79bd30u;

    // 0x79bd30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79bd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79bd34: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79bd38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79bd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79bd3c: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x79bd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79bd40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79bd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79bd44: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x79BD44u;
    {
        const bool branch_taken_0x79bd44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD44u;
        // 0x79bd48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd44) {
            ctx->pc = 0x79BDCCu;
            goto label_79bdcc;
        }
    }
    ctx->pc = 0x79BD4Cu;
    // 0x79bd4c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x79bd4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_79bd50:
    // 0x79bd50: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x79BD50u;
    {
        const bool branch_taken_0x79bd50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bd50) {
            ctx->pc = 0x79BD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BD50u;
            // 0x79bd54: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BDC4u;
            goto label_79bdc4;
        }
    }
    ctx->pc = 0x79BD58u;
    // 0x79bd58: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79bd58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79bd5c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79bd5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79bd60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BD60u;
    {
        const bool branch_taken_0x79bd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD60u;
        // 0x79bd64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd60) {
            ctx->pc = 0x79BD70u;
            goto label_79bd70;
        }
    }
    ctx->pc = 0x79BD68u;
    // 0x79bd68: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79bd68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79bd6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79bd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79bd70:
    // 0x79bd70: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79bd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79bd74: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x79BD74u;
    {
        const bool branch_taken_0x79bd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD74u;
        // 0x79bd78: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd74) {
            ctx->pc = 0x79BDC0u;
            goto label_79bdc0;
        }
    }
    ctx->pc = 0x79BD7Cu;
    // 0x79bd7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BD7Cu;
    {
        const bool branch_taken_0x79bd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD7Cu;
        // 0x79bd80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd7c) {
            ctx->pc = 0x79BD8Cu;
            goto label_79bd8c;
        }
    }
    ctx->pc = 0x79BD84u;
    // 0x79bd84: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79bd84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79bd88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79bd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79bd8c:
    // 0x79bd8c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79bd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79bd90: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x79BD90u;
    {
        const bool branch_taken_0x79bd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bd90) {
            ctx->pc = 0x79BD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BD90u;
            // 0x79bd94: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BDC4u;
            goto label_79bdc4;
        }
    }
    ctx->pc = 0x79BD98u;
    // 0x79bd98: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79BD98u;
    SET_GPR_U32(ctx, 31, 0x79BDA0u);
    ctx->pc = 0x79BD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD98u;
    // 0x79bd9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79BD98u, 0x79BDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BDA0u;
label_79bda0:
    // 0x79bda0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bda4: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79BDA4u;
    {
        const bool branch_taken_0x79bda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x79bda4) {
            ctx->pc = 0x79BDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BDA4u;
            // 0x79bda8: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BDC4u;
            goto label_79bdc4;
        }
    }
    ctx->pc = 0x79BDACu;
    // 0x79bdac: 0x92020614  lbu         $v0, 0x614($s0)
    ctx->pc = 0x79bdacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1556)));
    // 0x79bdb0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BDB0u;
    {
        const bool branch_taken_0x79bdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x79bdb0) {
            ctx->pc = 0x79BDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BDB0u;
            // 0x79bdb4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BDC4u;
            goto label_79bdc4;
        }
    }
    ctx->pc = 0x79BDB8u;
    // 0x79bdb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79BDB8u;
    {
        const bool branch_taken_0x79bdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDB8u;
        // 0x79bdbc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bdb8) {
            ctx->pc = 0x79BDD0u;
            goto label_79bdd0;
        }
    }
    ctx->pc = 0x79BDC0u;
label_79bdc0:
    // 0x79bdc0: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x79bdc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_79bdc4:
    // 0x79bdc4: 0x5620ffe2  bnel        $s1, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x79BDC4u;
    {
        const bool branch_taken_0x79bdc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bdc4) {
            ctx->pc = 0x79BDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BDC4u;
            // 0x79bdc8: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bd50;
        }
    }
    ctx->pc = 0x79BDCCu;
label_79bdcc:
    // 0x79bdcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79bdccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bdd0:
    // 0x79bdd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79bdd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79bdd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79bdd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bdd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79bdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bddc: 0x3e00008  jr          $ra
    ctx->pc = 0x79BDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDDCu;
        // 0x79bde0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BDE4u;
    // 0x79bde4: 0x0  nop
    ctx->pc = 0x79bde4u;
    // NOP
    ctx->pc = 0x79bde8u;
}
} // namespace gh_r100
