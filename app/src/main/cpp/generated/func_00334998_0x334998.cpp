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

// Function: func_00334998
// Address: 0x334998 - 0x334a90
void func_00334998_0x334998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334998_0x334998");
#endif

    switch (ctx->pc) {
        case 0x334a0cu: goto label_334a0c;
        case 0x334a20u: goto label_334a20;
        case 0x334a28u: goto label_334a28;
        case 0x334a30u: goto label_334a30;
        case 0x334a38u: goto label_334a38;
        case 0x334a40u: goto label_334a40;
        case 0x334a64u: goto label_334a64;
        default: break;
    }

    ctx->pc = 0x334998u;

    // 0x334998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x334998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33499c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33499cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3349a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3349a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3349a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3349a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3349a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3349a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3349ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3349acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3349b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3349b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3349b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3349b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3349b8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3349B8u;
    {
        const bool branch_taken_0x3349b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3349BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349B8u;
        // 0x3349bc: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349b8) {
            ctx->pc = 0x3349E8u;
            goto label_3349e8;
        }
    }
    ctx->pc = 0x3349C0u;
    // 0x3349c0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3349c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3349c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3349c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3349c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3349c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3349cc: 0x24a549c0  addiu       $a1, $a1, 0x49C0
    ctx->pc = 0x3349ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18880));
    // 0x3349d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3349d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3349d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3349d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3349d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3349d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3349dc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3349dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3349e0: 0x80cd002  j           func_334008
    ctx->pc = 0x3349E0u;
    ctx->pc = 0x3349E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3349E0u;
    // 0x3349e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334008u, 0x3349E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3349E8u;
label_3349e8:
    // 0x3349e8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3349e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3349ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3349ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3349f0: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3349F0u;
    {
        const bool branch_taken_0x3349f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3349f0) {
            ctx->pc = 0x3349F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3349F0u;
            // 0x3349f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334A70u;
            goto label_334a70;
        }
    }
    ctx->pc = 0x3349F8u;
    // 0x3349f8: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x3349f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3349fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3349FCu;
    {
        const bool branch_taken_0x3349fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x334A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3349FCu;
        // 0x334a00: 0x3c110063  lui         $s1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349fc) {
            ctx->pc = 0x334A0Cu;
            goto label_334a0c;
        }
    }
    ctx->pc = 0x334A04u;
    // 0x334a04: 0xc0cc55c  jal         func_331570
    ctx->pc = 0x334A04u;
    SET_GPR_U32(ctx, 31, 0x334A0Cu);
    ctx->pc = 0x331570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331570u, 0x334A04u, 0x334A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A0Cu;
label_334a0c:
    // 0x334a0c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x334a0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334a10: 0x3631fff6  ori         $s1, $s1, 0xFFF6
    ctx->pc = 0x334a10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65526);
    // 0x334a14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x334A14u;
    {
        const bool branch_taken_0x334a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A14u;
        // 0x334a18: 0x3c140045  lui         $s4, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a14) {
            ctx->pc = 0x334A28u;
            goto label_334a28;
        }
    }
    ctx->pc = 0x334A1Cu;
    // 0x334a1c: 0x0  nop
    ctx->pc = 0x334a1cu;
    // NOP
label_334a20:
    // 0x334a20: 0xc0ccff6  jal         func_333FD8
    ctx->pc = 0x334A20u;
    SET_GPR_U32(ctx, 31, 0x334A28u);
    ctx->pc = 0x333FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333FD8u, 0x334A20u, 0x334A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A28u;
label_334a28:
    // 0x334a28: 0xc0cc6b6  jal         func_331AD8
    ctx->pc = 0x334A28u;
    SET_GPR_U32(ctx, 31, 0x334A30u);
    ctx->pc = 0x331AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331AD8u, 0x334A28u, 0x334A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A30u;
label_334a30:
    // 0x334a30: 0xc0cd06e  jal         func_3341B8
    ctx->pc = 0x334A30u;
    SET_GPR_U32(ctx, 31, 0x334A38u);
    ctx->pc = 0x3341B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3341B8u, 0x334A30u, 0x334A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A38u;
label_334a38:
    // 0x334a38: 0xc0cd2a4  jal         func_334A90
    ctx->pc = 0x334A38u;
    SET_GPR_U32(ctx, 31, 0x334A40u);
    ctx->pc = 0x334A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A38u;
    // 0x334a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334A90u, 0x334A38u, 0x334A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A40u;
label_334a40:
    // 0x334a40: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x334a40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x334a44: 0x54730008  bnel        $v1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x334A44u;
    {
        const bool branch_taken_0x334a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x334a44) {
            ctx->pc = 0x334A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334A44u;
            // 0x334a48: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334A68u;
            goto label_334a68;
        }
    }
    ctx->pc = 0x334A4Cu;
    // 0x334a4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x334a4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x334a50: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x334a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x334a54: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x334A54u;
    {
        const bool branch_taken_0x334a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334a54) {
            ctx->pc = 0x334A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334a20;
        }
    }
    ctx->pc = 0x334A5Cu;
    // 0x334a5c: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x334A5Cu;
    SET_GPR_U32(ctx, 31, 0x334A64u);
    ctx->pc = 0x334A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A5Cu;
    // 0x334a60: 0x268449d8  addiu       $a0, $s4, 0x49D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 18904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x334A5Cu, 0x334A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A64u;
label_334a64:
    // 0x334a64: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x334a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_334a68:
    // 0x334a68: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x334a68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x334a6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_334a70:
    // 0x334a70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x334a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334a74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x334a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334a78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x334a78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334a7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x334a7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334a80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x334a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x334a84: 0x3e00008  jr          $ra
    ctx->pc = 0x334A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A84u;
        // 0x334a88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334A8Cu;
    // 0x334a8c: 0x0  nop
    ctx->pc = 0x334a8cu;
    // NOP
    ctx->pc = 0x334a90u;
}
