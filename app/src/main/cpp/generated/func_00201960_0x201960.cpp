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

// Function: func_00201960
// Address: 0x201960 - 0x2019f8
void func_00201960_0x201960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00201960_0x201960");
#endif

    switch (ctx->pc) {
        case 0x201978u: goto label_201978;
        case 0x2019a0u: goto label_2019a0;
        case 0x2019bcu: goto label_2019bc;
        default: break;
    }

    ctx->pc = 0x201960u;

    // 0x201960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201964: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x201964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x201968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20196c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20196cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201970: 0xc0ca4a6  jal         func_329298
    ctx->pc = 0x201970u;
    SET_GPR_U32(ctx, 31, 0x201978u);
    ctx->pc = 0x201974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201970u;
    // 0x201974: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329298u, 0x201970u, 0x201978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201978u;
label_201978:
    // 0x201978: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20197c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20197Cu;
    {
        const bool branch_taken_0x20197c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20197c) {
            ctx->pc = 0x201980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20197Cu;
            // 0x201980: 0x9211110c  lbu         $s1, 0x110C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201990u;
            goto label_201990;
        }
    }
    ctx->pc = 0x201984u;
    // 0x201984: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x201984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x201988: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x201988u;
    {
        const bool branch_taken_0x201988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201988u;
        // 0x20198c: 0xa203110c  sb          $v1, 0x110C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4364), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201988) {
            ctx->pc = 0x2019D8u;
            goto label_2019d8;
        }
    }
    ctx->pc = 0x201990u;
label_201990:
    // 0x201990: 0x56230013  bnel        $s1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x201990u;
    {
        const bool branch_taken_0x201990 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x201990) {
            ctx->pc = 0x201994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201990u;
            // 0x201994: 0x9202110c  lbu         $v0, 0x110C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2019E0u;
            goto label_2019e0;
        }
    }
    ctx->pc = 0x201998u;
    // 0x201998: 0xc080694  jal         func_201A50
    ctx->pc = 0x201998u;
    SET_GPR_U32(ctx, 31, 0x2019A0u);
    ctx->pc = 0x20199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201998u;
    // 0x20199c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201A50u, 0x201998u, 0x2019A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2019A0u;
label_2019a0:
    // 0x2019a0: 0x5451000f  bnel        $v0, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2019A0u;
    {
        const bool branch_taken_0x2019a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2019a0) {
            ctx->pc = 0x2019A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2019A0u;
            // 0x2019a4: 0x9202110c  lbu         $v0, 0x110C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2019E0u;
            goto label_2019e0;
        }
    }
    ctx->pc = 0x2019A8u;
    // 0x2019a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2019a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2019ac: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2019ACu;
    {
        const bool branch_taken_0x2019ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2019ac) {
            ctx->pc = 0x2019B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2019ACu;
            // 0x2019b0: 0x9202110c  lbu         $v0, 0x110C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2019E0u;
            goto label_2019e0;
        }
    }
    ctx->pc = 0x2019B4u;
    // 0x2019b4: 0xc080680  jal         func_201A00
    ctx->pc = 0x2019B4u;
    SET_GPR_U32(ctx, 31, 0x2019BCu);
    ctx->pc = 0x2019B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2019B4u;
    // 0x2019b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201A00u, 0x2019B4u, 0x2019BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2019BCu;
label_2019bc:
    // 0x2019bc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2019BCu;
    {
        const bool branch_taken_0x2019bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2019bc) {
            ctx->pc = 0x2019C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2019BCu;
            // 0x2019c0: 0x9202110c  lbu         $v0, 0x110C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4364)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2019E0u;
            goto label_2019e0;
        }
    }
    ctx->pc = 0x2019C4u;
    // 0x2019c4: 0x8e021110  lw          $v0, 0x1110($s0)
    ctx->pc = 0x2019c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4368)));
    // 0x2019c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2019C8u;
    {
        const bool branch_taken_0x2019c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2019CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019C8u;
        // 0x2019cc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2019c8) {
            ctx->pc = 0x2019D8u;
            goto label_2019d8;
        }
    }
    ctx->pc = 0x2019D0u;
    // 0x2019d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2019D0u;
    {
        const bool branch_taken_0x2019d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2019D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019D0u;
        // 0x2019d4: 0xa200110c  sb          $zero, 0x110C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4364), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2019d0) {
            ctx->pc = 0x2019DCu;
            goto label_2019dc;
        }
    }
    ctx->pc = 0x2019D8u;
label_2019d8:
    // 0x2019d8: 0xae021110  sw          $v0, 0x1110($s0)
    ctx->pc = 0x2019d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4368), GPR_U32(ctx, 2));
label_2019dc:
    // 0x2019dc: 0x9202110c  lbu         $v0, 0x110C($s0)
    ctx->pc = 0x2019dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4364)));
label_2019e0:
    // 0x2019e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2019e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2019e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2019e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2019e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2019e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2019ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2019ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019ECu;
        // 0x2019f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2019ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2019F4u;
    // 0x2019f4: 0x0  nop
    ctx->pc = 0x2019f4u;
    // NOP
    ctx->pc = 0x2019f8u;
}
