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

// Function: sceSifExecNotifyHandler
// Address: 0x3b79c0 - 0x3b7aa8
void sceSifExecNotifyHandler_0x3b79c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifExecNotifyHandler_0x3b79c0");
#endif

    switch (ctx->pc) {
        case 0x3b79c0u: goto label_3b79c0;
        case 0x3b79c4u: goto label_3b79c4;
        case 0x3b79c8u: goto label_3b79c8;
        case 0x3b79ccu: goto label_3b79cc;
        case 0x3b79d0u: goto label_3b79d0;
        case 0x3b79d4u: goto label_3b79d4;
        case 0x3b79d8u: goto label_3b79d8;
        case 0x3b79dcu: goto label_3b79dc;
        case 0x3b79e0u: goto label_3b79e0;
        case 0x3b79e4u: goto label_3b79e4;
        case 0x3b79e8u: goto label_3b79e8;
        case 0x3b79ecu: goto label_3b79ec;
        case 0x3b79f0u: goto label_3b79f0;
        case 0x3b79f4u: goto label_3b79f4;
        case 0x3b79f8u: goto label_3b79f8;
        case 0x3b79fcu: goto label_3b79fc;
        case 0x3b7a00u: goto label_3b7a00;
        case 0x3b7a04u: goto label_3b7a04;
        case 0x3b7a08u: goto label_3b7a08;
        case 0x3b7a0cu: goto label_3b7a0c;
        case 0x3b7a10u: goto label_3b7a10;
        case 0x3b7a14u: goto label_3b7a14;
        case 0x3b7a18u: goto label_3b7a18;
        case 0x3b7a1cu: goto label_3b7a1c;
        case 0x3b7a20u: goto label_3b7a20;
        case 0x3b7a24u: goto label_3b7a24;
        case 0x3b7a28u: goto label_3b7a28;
        case 0x3b7a2cu: goto label_3b7a2c;
        case 0x3b7a30u: goto label_3b7a30;
        case 0x3b7a34u: goto label_3b7a34;
        case 0x3b7a38u: goto label_3b7a38;
        case 0x3b7a3cu: goto label_3b7a3c;
        case 0x3b7a40u: goto label_3b7a40;
        case 0x3b7a44u: goto label_3b7a44;
        case 0x3b7a48u: goto label_3b7a48;
        case 0x3b7a4cu: goto label_3b7a4c;
        case 0x3b7a50u: goto label_3b7a50;
        case 0x3b7a54u: goto label_3b7a54;
        case 0x3b7a58u: goto label_3b7a58;
        case 0x3b7a5cu: goto label_3b7a5c;
        case 0x3b7a60u: goto label_3b7a60;
        case 0x3b7a64u: goto label_3b7a64;
        case 0x3b7a68u: goto label_3b7a68;
        case 0x3b7a6cu: goto label_3b7a6c;
        case 0x3b7a70u: goto label_3b7a70;
        case 0x3b7a74u: goto label_3b7a74;
        case 0x3b7a78u: goto label_3b7a78;
        case 0x3b7a7cu: goto label_3b7a7c;
        case 0x3b7a80u: goto label_3b7a80;
        case 0x3b7a84u: goto label_3b7a84;
        case 0x3b7a88u: goto label_3b7a88;
        case 0x3b7a8cu: goto label_3b7a8c;
        case 0x3b7a90u: goto label_3b7a90;
        case 0x3b7a94u: goto label_3b7a94;
        case 0x3b7a98u: goto label_3b7a98;
        case 0x3b7a9cu: goto label_3b7a9c;
        case 0x3b7aa0u: goto label_3b7aa0;
        case 0x3b7aa4u: goto label_3b7aa4;
        default: break;
    }

    ctx->pc = 0x3b79c0u;

label_3b79c0:
    // 0x3b79c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b79c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3b79c4:
    // 0x3b79c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3b79c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_3b79c8:
    // 0x3b79c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b79c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3b79cc:
    // 0x3b79cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b79ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b79d0:
    // 0x3b79d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b79d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3b79d4:
    // 0x3b79d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b79d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3b79d8:
    // 0x3b79d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b79dc:
    if (ctx->pc == 0x3B79DCu) {
        ctx->pc = 0x3B79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B79D8u;
        // 0x3b79dc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B79E0u;
        goto label_3b79e0;
    }
    ctx->pc = 0x3B79D8u;
    {
        const bool branch_taken_0x3b79d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B79D8u;
        // 0x3b79dc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b79d8) {
            ctx->pc = 0x3B79F0u;
            goto label_3b79f0;
        }
    }
    ctx->pc = 0x3B79E0u;
label_3b79e0:
    // 0x3b79e0: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
label_3b79e4:
    // 0x3b79e4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3b79e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b79e8:
    // 0x3b79e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b79ec:
    if (ctx->pc == 0x3B79ECu) {
        ctx->pc = 0x3B79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B79E8u;
        // 0x3b79ec: 0x24424048  addiu       $v0, $v0, 0x4048 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B79F0u;
        goto label_3b79f0;
    }
    ctx->pc = 0x3B79E8u;
    {
        const bool branch_taken_0x3b79e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B79E8u;
        // 0x3b79ec: 0x24424048  addiu       $v0, $v0, 0x4048 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b79e8) {
            ctx->pc = 0x3B7A00u;
            goto label_3b7a00;
        }
    }
    ctx->pc = 0x3B79F0u;
label_3b79f0:
    // 0x3b79f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3b79f4:
    // 0x3b79f4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b79f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_3b79f8:
    // 0x3b79f8: 0x8c42beb8  lw          $v0, -0x4148($v0)
    ctx->pc = 0x3b79f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950584)));
label_3b79fc:
    // 0x3b79fc: 0x8c63bebc  lw          $v1, -0x4144($v1)
    ctx->pc = 0x3b79fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950588)));
label_3b7a00:
    // 0x3b7a00: 0x380902d  daddu       $s2, $gp, $zero
    ctx->pc = 0x3b7a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3b7a04:
    // 0x3b7a04: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_3b7a08:
    if (ctx->pc == 0x3B7A08u) {
        ctx->pc = 0x3B7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A04u;
        // 0x3b7a08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7A0Cu;
        goto label_3b7a0c;
    }
    ctx->pc = 0x3B7A04u;
    {
        const bool branch_taken_0x3b7a04 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3B7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A04u;
        // 0x3b7a08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a04) {
            ctx->pc = 0x3B7A44u;
            goto label_3b7a44;
        }
    }
    ctx->pc = 0x3B7A0Cu;
label_3b7a0c:
    // 0x3b7a0c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x3b7a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3b7a10:
    // 0x3b7a10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3b7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b7a14:
    // 0x3b7a14: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3b7a18:
    if (ctx->pc == 0x3B7A18u) {
        ctx->pc = 0x3B7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A14u;
        // 0x3b7a18: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7A1Cu;
        goto label_3b7a1c;
    }
    ctx->pc = 0x3B7A14u;
    {
        const bool branch_taken_0x3b7a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7a14) {
            ctx->pc = 0x3B7A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7A14u;
            // 0x3b7a18: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7A3Cu;
            goto label_3b7a3c;
        }
    }
    ctx->pc = 0x3B7A1Cu;
label_3b7a1c:
    // 0x3b7a1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3b7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3b7a20:
    // 0x3b7a20: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x3b7a20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3b7a24:
    // 0x3b7a24: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x3b7a24u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b7a28:
    // 0x3b7a28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3b7a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b7a2c:
    // 0x3b7a2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b7a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b7a30:
    // 0x3b7a30: 0xc0f809  jalr        $a2
label_3b7a34:
    if (ctx->pc == 0x3B7A34u) {
        ctx->pc = 0x3B7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A30u;
        // 0x3b7a34: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7A38u;
        goto label_3b7a38;
    }
    ctx->pc = 0x3B7A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3B7A38u);
        ctx->pc = 0x3B7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A30u;
        // 0x3b7a34: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7A30u, 0x3B7A38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B7A38u;
label_3b7a38:
    // 0x3b7a38: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3b7a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3b7a3c:
    // 0x3b7a3c: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_3b7a40:
    if (ctx->pc == 0x3B7A40u) {
        ctx->pc = 0x3B7A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A3Cu;
        // 0x3b7a40: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7A44u;
        goto label_3b7a44;
    }
    ctx->pc = 0x3B7A3Cu;
    {
        const bool branch_taken_0x3b7a3c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A3Cu;
        // 0x3b7a40: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7a3c) {
            ctx->pc = 0x3B7A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7a10;
        }
    }
    ctx->pc = 0x3B7A44u;
label_3b7a44:
    // 0x3b7a44: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x3b7a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3b7a48:
    // 0x3b7a48: 0x240e02d  daddu       $gp, $s2, $zero
    ctx->pc = 0x3b7a48u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b7a4c:
    // 0x3b7a4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b7a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b7a50:
    // 0x3b7a50: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b7a50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b7a54:
    // 0x3b7a54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b7a54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b7a58:
    // 0x3b7a58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b7a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b7a5c:
    // 0x3b7a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b7a60:
    // 0x3b7a60: 0x3e00008  jr          $ra
label_3b7a64:
    if (ctx->pc == 0x3B7A64u) {
        ctx->pc = 0x3B7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A60u;
        // 0x3b7a64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7A68u;
        goto label_3b7a68;
    }
    ctx->pc = 0x3B7A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A60u;
        // 0x3b7a64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7A68u;
label_3b7a68:
    // 0x3b7a68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b7a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b7a6c:
    // 0x3b7a6c: 0x0  nop
    ctx->pc = 0x3b7a6cu;
    // NOP
label_3b7a70:
    // 0x3b7a70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b7a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b7a74:
    // 0x3b7a74: 0x0  nop
    ctx->pc = 0x3b7a74u;
    // NOP
label_3b7a78:
    // 0x3b7a78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b7a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b7a7c:
    // 0x3b7a7c: 0x0  nop
    ctx->pc = 0x3b7a7cu;
    // NOP
label_3b7a80:
    // 0x3b7a80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b7a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b7a84:
    // 0x3b7a84: 0x0  nop
    ctx->pc = 0x3b7a84u;
    // NOP
label_3b7a88:
    // 0x3b7a88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b7a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b7a8c:
    // 0x3b7a8c: 0x0  nop
    ctx->pc = 0x3b7a8cu;
    // NOP
label_3b7a90:
    // 0x3b7a90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b7a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b7a94:
    // 0x3b7a94: 0x0  nop
    ctx->pc = 0x3b7a94u;
    // NOP
label_3b7a98:
    // 0x3b7a98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b7a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b7a9c:
    // 0x3b7a9c: 0x0  nop
    ctx->pc = 0x3b7a9cu;
    // NOP
label_3b7aa0:
    // 0x3b7aa0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b7aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b7aa4:
    // 0x3b7aa4: 0x0  nop
    ctx->pc = 0x3b7aa4u;
    // NOP
    ctx->pc = 0x3b7aa8u;
}
