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

// Function: cIDBase_setWorkFromData
// Address: 0x2aa0d0 - 0x2aa1e0
void cIDBase_setWorkFromData_0x2aa0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_setWorkFromData_0x2aa0d0");
#endif

    switch (ctx->pc) {
        case 0x2aa130u: goto label_2aa130;
        case 0x2aa19cu: goto label_2aa19c;
        case 0x2aa1b4u: goto label_2aa1b4;
        case 0x2aa1bcu: goto label_2aa1bc;
        default: break;
    }

    ctx->pc = 0x2aa0d0u;

    // 0x2aa0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aa0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aa0d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2aa0d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa0d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2aa0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2aa0dc: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x2aa0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
    // 0x2aa0e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aa0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa0e8: 0x34424449  ori         $v0, $v0, 0x4449
    ctx->pc = 0x2aa0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17481);
    // 0x2aa0ec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2aa0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2aa0f0: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2AA0F0u;
    {
        const bool branch_taken_0x2aa0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AA0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0F0u;
        // 0x2aa0f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0f0) {
            ctx->pc = 0x2AA1C4u;
            goto label_2aa1c4;
        }
    }
    ctx->pc = 0x2AA0F8u;
    // 0x2aa0f8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2aa0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2aa0fc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2aa0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2aa100: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2aa100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa104: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2aa104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2aa108: 0x8c452384  lw          $a1, 0x2384($v0)
    ctx->pc = 0x2aa108u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C2384u));
    // 0x2aa10c: 0x8c832388  lw          $v1, 0x2388($a0)
    ctx->pc = 0x2aa10cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2388u));
    // 0x2aa110: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2aa110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2aa114: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AA114u;
    {
        const bool branch_taken_0x2aa114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA114u;
        // 0x2aa118: 0x24d10010  addiu       $s1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa114) {
            ctx->pc = 0x2AA168u;
            goto label_2aa168;
        }
    }
    ctx->pc = 0x2AA11Cu;
    // 0x2aa11c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2aa11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2aa120: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AA120u;
    {
        const bool branch_taken_0x2aa120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA120u;
        // 0x2aa124: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa120) {
            ctx->pc = 0x2AA170u;
            goto label_2aa170;
        }
    }
    ctx->pc = 0x2AA128u;
    // 0x2aa128: 0x24c30014  addiu       $v1, $a2, 0x14
    ctx->pc = 0x2aa128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x2aa12c: 0x0  nop
    ctx->pc = 0x2aa12cu;
    // NOP
label_2aa130:
    // 0x2aa130: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2aa130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aa134: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2aa134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2aa138: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA138u;
    {
        const bool branch_taken_0x2aa138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa138) {
            ctx->pc = 0x2AA13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA138u;
            // 0x2aa13c: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA150u;
            goto label_2aa150;
        }
    }
    ctx->pc = 0x2AA140u;
    // 0x2aa140: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2aa140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2aa144: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aa144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2aa148: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2aa148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2aa14c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2aa14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2aa150:
    // 0x2aa150: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2aa150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2aa154: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2aa154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2aa158: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2AA158u;
    {
        const bool branch_taken_0x2aa158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA158u;
        // 0x2aa15c: 0x246302e0  addiu       $v1, $v1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa158) {
            ctx->pc = 0x2AA130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa130;
        }
    }
    ctx->pc = 0x2AA160u;
    // 0x2aa160: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA160u;
    {
        const bool branch_taken_0x2aa160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA160u;
        // 0x2aa164: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa160) {
            ctx->pc = 0x2AA174u;
            goto label_2aa174;
        }
    }
    ctx->pc = 0x2AA168u;
label_2aa168:
    // 0x2aa168: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2aa168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2aa16c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2aa16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2aa170:
    // 0x2aa170: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2aa170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2aa174:
    // 0x2aa174: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AA174u;
    {
        const bool branch_taken_0x2aa174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA174u;
        // 0x2aa178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa174) {
            ctx->pc = 0x2AA1C8u;
            goto label_2aa1c8;
        }
    }
    ctx->pc = 0x2AA17Cu;
    // 0x2aa17c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa180: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA180u;
    {
        const bool branch_taken_0x2aa180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa180) {
            ctx->pc = 0x2AA184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA180u;
            // 0x2aa184: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA1A8u;
            goto label_2aa1a8;
        }
    }
    ctx->pc = 0x2AA188u;
    // 0x2aa188: 0x8ce22384  lw          $v0, 0x2384($a3)
    ctx->pc = 0x2aa188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 9092)));
    // 0x2aa18c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2aa18cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2aa190: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aa190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aa194: 0xc0ab392  jal         func_2ACE48
    ctx->pc = 0x2AA194u;
    SET_GPR_U32(ctx, 31, 0x2AA19Cu);
    ctx->pc = 0x2AA198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA194u;
    // 0x2aa198: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE48u, 0x2AA194u, 0x2AA19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA19Cu;
label_2aa19c:
    // 0x2aa19c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA19Cu;
    {
        const bool branch_taken_0x2aa19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA19Cu;
        // 0x2aa1a0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa19c) {
            ctx->pc = 0x2AA1C4u;
            goto label_2aa1c4;
        }
    }
    ctx->pc = 0x2AA1A4u;
    // 0x2aa1a4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2aa1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2aa1a8:
    // 0x2aa1a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2aa1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa1ac: 0xc0aa878  jal         func_2AA1E0
    ctx->pc = 0x2AA1ACu;
    SET_GPR_U32(ctx, 31, 0x2AA1B4u);
    ctx->pc = 0x2AA1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA1ACu;
    // 0x2aa1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA1E0u, 0x2AA1ACu, 0x2AA1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA1B4u;
label_2aa1b4:
    // 0x2aa1b4: 0xc0aa920  jal         func_2AA480
    ctx->pc = 0x2AA1B4u;
    SET_GPR_U32(ctx, 31, 0x2AA1BCu);
    ctx->pc = 0x2AA1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA1B4u;
    // 0x2aa1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA480u, 0x2AA1B4u, 0x2AA1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA1BCu;
label_2aa1bc:
    // 0x2aa1bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AA1BCu;
    {
        const bool branch_taken_0x2aa1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1BCu;
        // 0x2aa1c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1bc) {
            ctx->pc = 0x2AA1C8u;
            goto label_2aa1c8;
        }
    }
    ctx->pc = 0x2AA1C4u;
label_2aa1c4:
    // 0x2aa1c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa1c8:
    // 0x2aa1c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2aa1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa1cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa1ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa1d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1D4u;
        // 0x2aa1d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA1DCu;
    // 0x2aa1dc: 0x0  nop
    ctx->pc = 0x2aa1dcu;
    // NOP
    ctx->pc = 0x2aa1e0u;
}
