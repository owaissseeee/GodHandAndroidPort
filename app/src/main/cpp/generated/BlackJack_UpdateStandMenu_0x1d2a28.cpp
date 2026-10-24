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

// Function: BlackJack_UpdateStandMenu
// Address: 0x1d2a28 - 0x1d2bb0
void BlackJack_UpdateStandMenu_0x1d2a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateStandMenu_0x1d2a28");
#endif

    switch (ctx->pc) {
        case 0x1d2a60u: goto label_1d2a60;
        case 0x1d2a6cu: goto label_1d2a6c;
        case 0x1d2aacu: goto label_1d2aac;
        case 0x1d2ab8u: goto label_1d2ab8;
        case 0x1d2adcu: goto label_1d2adc;
        case 0x1d2b1cu: goto label_1d2b1c;
        case 0x1d2b28u: goto label_1d2b28;
        case 0x1d2b4cu: goto label_1d2b4c;
        case 0x1d2b6cu: goto label_1d2b6c;
        case 0x1d2b90u: goto label_1d2b90;
        default: break;
    }

    ctx->pc = 0x1d2a28u;

    // 0x1d2a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d2a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2a2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d2a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d2a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d2a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a38: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d2a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d2a3c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2A3Cu;
    {
        const bool branch_taken_0x1d2a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A3Cu;
        // 0x1d2a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a3c) {
            ctx->pc = 0x1D2A54u;
            goto label_1d2a54;
        }
    }
    ctx->pc = 0x1D2A44u;
    // 0x1d2a44: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D2A44u;
    {
        const bool branch_taken_0x1d2a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A44u;
        // 0x1d2a48: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a44) {
            ctx->pc = 0x1D2A7Cu;
            goto label_1d2a7c;
        }
    }
    ctx->pc = 0x1D2A4Cu;
    // 0x1d2a4c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1D2A4Cu;
    {
        const bool branch_taken_0x1d2a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A4Cu;
        // 0x1d2a50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a4c) {
            ctx->pc = 0x1D2BA0u;
            goto label_1d2ba0;
        }
    }
    ctx->pc = 0x1D2A54u;
label_1d2a54:
    // 0x1d2a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a58: 0xc075594  jal         func_1D5650
    ctx->pc = 0x1D2A58u;
    SET_GPR_U32(ctx, 31, 0x1D2A60u);
    ctx->pc = 0x1D2A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A58u;
    // 0x1d2a5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5650u, 0x1D2A58u, 0x1D2A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A60u;
label_1d2a60:
    // 0x1d2a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a64: 0xc0756ba  jal         func_1D5AE8
    ctx->pc = 0x1D2A64u;
    SET_GPR_U32(ctx, 31, 0x1D2A6Cu);
    ctx->pc = 0x1D2A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A64u;
    // 0x1d2a68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AE8u, 0x1D2A64u, 0x1D2A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A6Cu;
label_1d2a6c:
    // 0x1d2a6c: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d2a70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2a74: 0xae021808  sw          $v0, 0x1808($s0)
    ctx->pc = 0x1d2a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
    // 0x1d2a78: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1d2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1d2a7c:
    // 0x1d2a7c: 0x3402cc00  ori         $v0, $zero, 0xCC00
    ctx->pc = 0x1d2a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d2a80: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1d2a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d2a84: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1d2a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d2a88: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x1d2a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x1d2a8c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x1d2a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1d2a90: 0xdc6401b0  ld          $a0, 0x1B0($v1)
    ctx->pc = 0x1d2a90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1d2a94: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d2a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d2a98: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D2A98u;
    {
        const bool branch_taken_0x1d2a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2a98) {
            ctx->pc = 0x1D2AE4u;
            goto label_1d2ae4;
        }
    }
    ctx->pc = 0x1D2AA0u;
    // 0x1d2aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2aa4: 0xc075594  jal         func_1D5650
    ctx->pc = 0x1D2AA4u;
    SET_GPR_U32(ctx, 31, 0x1D2AACu);
    ctx->pc = 0x1D2AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AA4u;
    // 0x1d2aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5650u, 0x1D2AA4u, 0x1D2AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AACu;
label_1d2aac:
    // 0x1d2aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ab0: 0xc0756ba  jal         func_1D5AE8
    ctx->pc = 0x1D2AB0u;
    SET_GPR_U32(ctx, 31, 0x1D2AB8u);
    ctx->pc = 0x1D2AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AB0u;
    // 0x1d2ab4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AE8u, 0x1D2AB0u, 0x1D2AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AB8u;
label_1d2ab8:
    // 0x1d2ab8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d2ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d2abc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ac0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d2ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d2ac4: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d2ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d2ac8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d2ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2acc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d2accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2ad0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2ad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ad4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D2AD4u;
    SET_GPR_U32(ctx, 31, 0x1D2ADCu);
    ctx->pc = 0x1D2AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AD4u;
    // 0x1d2ad8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D2AD4u, 0x1D2ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2ADCu;
label_1d2adc:
    // 0x1d2adc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1D2ADCu;
    {
        const bool branch_taken_0x1d2adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2ADCu;
        // 0x1d2ae0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2adc) {
            ctx->pc = 0x1D2B94u;
            goto label_1d2b94;
        }
    }
    ctx->pc = 0x1D2AE4u;
label_1d2ae4:
    // 0x1d2ae4: 0x3402cc00  ori         $v0, $zero, 0xCC00
    ctx->pc = 0x1d2ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d2ae8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1d2ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d2aec: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1d2aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d2af0: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x1d2af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1d2af4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d2af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d2af8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D2AF8u;
    {
        const bool branch_taken_0x1d2af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2af8) {
            ctx->pc = 0x1D2AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2AF8u;
            // 0x1d2afc: 0xdc6201a0  ld          $v0, 0x1A0($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2B54u;
            goto label_1d2b54;
        }
    }
    ctx->pc = 0x1D2B00u;
    // 0x1d2b00: 0x9e021800  lwu         $v0, 0x1800($s0)
    ctx->pc = 0x1d2b00u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    // 0x1d2b04: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1d2b04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1d2b08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d2b0c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D2B0Cu;
    {
        const bool branch_taken_0x1d2b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B0Cu;
        // 0x1d2b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b0c) {
            ctx->pc = 0x1D2B9Cu;
            goto label_1d2b9c;
        }
    }
    ctx->pc = 0x1D2B14u;
    // 0x1d2b14: 0xc075594  jal         func_1D5650
    ctx->pc = 0x1D2B14u;
    SET_GPR_U32(ctx, 31, 0x1D2B1Cu);
    ctx->pc = 0x1D2B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B14u;
    // 0x1d2b18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5650u, 0x1D2B14u, 0x1D2B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B1Cu;
label_1d2b1c:
    // 0x1d2b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b20: 0xc0756ba  jal         func_1D5AE8
    ctx->pc = 0x1D2B20u;
    SET_GPR_U32(ctx, 31, 0x1D2B28u);
    ctx->pc = 0x1D2B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B20u;
    // 0x1d2b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AE8u, 0x1D2B20u, 0x1D2B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B28u;
label_1d2b28:
    // 0x1d2b28: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d2b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d2b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b30: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d2b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d2b34: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d2b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d2b38: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d2b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2b3c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d2b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2b40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2b40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b44: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D2B44u;
    SET_GPR_U32(ctx, 31, 0x1D2B4Cu);
    ctx->pc = 0x1D2B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B44u;
    // 0x1d2b48: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D2B44u, 0x1D2B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B4Cu;
label_1d2b4c:
    // 0x1d2b4c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1D2B4Cu;
    {
        const bool branch_taken_0x1d2b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B4Cu;
        // 0x1d2b50: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b4c) {
            ctx->pc = 0x1D2B94u;
            goto label_1d2b94;
        }
    }
    ctx->pc = 0x1D2B54u;
label_1d2b54:
    // 0x1d2b54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d2b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d2b58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d2b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d2b5c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D2B5Cu;
    {
        const bool branch_taken_0x1d2b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B5Cu;
        // 0x1d2b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b5c) {
            ctx->pc = 0x1D2B9Cu;
            goto label_1d2b9c;
        }
    }
    ctx->pc = 0x1D2B64u;
    // 0x1d2b64: 0xc0756ba  jal         func_1D5AE8
    ctx->pc = 0x1D2B64u;
    SET_GPR_U32(ctx, 31, 0x1D2B6Cu);
    ctx->pc = 0x1D2B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B64u;
    // 0x1d2b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AE8u, 0x1D2B64u, 0x1D2B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B6Cu;
label_1d2b6c:
    // 0x1d2b6c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d2b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d2b70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b74: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d2b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d2b78: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1d2b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1d2b7c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d2b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2b80: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d2b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2b84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2b84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b88: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D2B88u;
    SET_GPR_U32(ctx, 31, 0x1D2B90u);
    ctx->pc = 0x1D2B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B88u;
    // 0x1d2b8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D2B88u, 0x1D2B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B90u;
label_1d2b90:
    // 0x1d2b90: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d2b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d2b94:
    // 0x1d2b94: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d2b98: 0xae031804  sw          $v1, 0x1804($s0)
    ctx->pc = 0x1d2b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 3));
label_1d2b9c:
    // 0x1d2b9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d2b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d2ba0:
    // 0x1d2ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BA4u;
        // 0x1d2ba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2BACu;
    // 0x1d2bac: 0x0  nop
    ctx->pc = 0x1d2bacu;
    // NOP
    ctx->pc = 0x1d2bb0u;
}
