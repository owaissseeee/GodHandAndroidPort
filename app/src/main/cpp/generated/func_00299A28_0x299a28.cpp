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

// Function: func_00299A28
// Address: 0x299a28 - 0x299ba0
void func_00299A28_0x299a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00299A28_0x299a28");
#endif

    switch (ctx->pc) {
        case 0x299a58u: goto label_299a58;
        case 0x299a90u: goto label_299a90;
        case 0x299aa0u: goto label_299aa0;
        case 0x299abcu: goto label_299abc;
        case 0x299accu: goto label_299acc;
        case 0x299ae4u: goto label_299ae4;
        case 0x299af4u: goto label_299af4;
        case 0x299afcu: goto label_299afc;
        case 0x299b40u: goto label_299b40;
        case 0x299b74u: goto label_299b74;
        case 0x299b84u: goto label_299b84;
        case 0x299b8cu: goto label_299b8c;
        default: break;
    }

    ctx->pc = 0x299a28u;

    // 0x299a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299a2c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x299a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x299a30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x299a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x299a34: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x299a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x299a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x299a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x299a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x299a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299a48: 0x2448d758  addiu       $t0, $v0, -0x28A8
    ctx->pc = 0x299a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956888));
    // 0x299a4c: 0x24656980  addiu       $a1, $v1, 0x6980
    ctx->pc = 0x299a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 27008));
    // 0x299a50: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x299a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x299a54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x299a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299a58:
    // 0x299a58: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x299a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x299a5c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x299a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x299a60: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x299a60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299a64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x299a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x299a68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x299a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x299a6c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x299a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x299a70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x299a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x299a74: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x299a74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x299a78: 0x14e0fff7  bnez        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x299A78u;
    {
        const bool branch_taken_0x299a78 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x299A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299A78u;
        // 0x299a7c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299a78) {
            ctx->pc = 0x299A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299a58;
        }
    }
    ctx->pc = 0x299A80u;
    // 0x299a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a88: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x299A88u;
    SET_GPR_U32(ctx, 31, 0x299A90u);
    ctx->pc = 0x299A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299A88u;
    // 0x299a8c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x299A88u, 0x299A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299A90u;
label_299a90:
    // 0x299a90: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x299a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x299a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a98: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299A98u;
    SET_GPR_U32(ctx, 31, 0x299AA0u);
    ctx->pc = 0x299A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299A98u;
    // 0x299a9c: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299A98u, 0x299AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299AA0u;
label_299aa0:
    // 0x299aa0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x299aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x299aa4: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x299aa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x299aa8: 0x6307c  dsll32      $a2, $a2, 1
    ctx->pc = 0x299aa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 1));
    // 0x299aac: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x299aacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x299ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ab4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299AB4u;
    SET_GPR_U32(ctx, 31, 0x299ABCu);
    ctx->pc = 0x299AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299AB4u;
    // 0x299ab8: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299AB4u, 0x299ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299ABCu;
label_299abc:
    // 0x299abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ac0: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x299ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x299ac4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299AC4u;
    SET_GPR_U32(ctx, 31, 0x299ACCu);
    ctx->pc = 0x299AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299AC4u;
    // 0x299ac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299AC4u, 0x299ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299ACCu;
label_299acc:
    // 0x299acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ad0: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x299ad0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x299ad4: 0x63578  dsll        $a2, $a2, 21
    ctx->pc = 0x299ad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 21);
    // 0x299ad8: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x299ad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x299adc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299ADCu;
    SET_GPR_U32(ctx, 31, 0x299AE4u);
    ctx->pc = 0x299AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299ADCu;
    // 0x299ae0: 0x24050052  addiu       $a1, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299ADCu, 0x299AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299AE4u;
label_299ae4:
    // 0x299ae4: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x299ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x299ae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x299ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299aec: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299AECu;
    SET_GPR_U32(ctx, 31, 0x299AF4u);
    ctx->pc = 0x299AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299AECu;
    // 0x299af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299AECu, 0x299AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299AF4u;
label_299af4:
    // 0x299af4: 0xc0a6642  jal         func_299908
    ctx->pc = 0x299AF4u;
    SET_GPR_U32(ctx, 31, 0x299AFCu);
    ctx->pc = 0x299AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299AF4u;
    // 0x299af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x299AF4u, 0x299AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299AFCu;
label_299afc:
    // 0x299afc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x299afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x299b00: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x299b00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x299b04: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x299b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x299b08: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x299b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x299b0c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x299b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x299b10: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x299b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x299b14: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x299b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299b18: 0x24496980  addiu       $t1, $v0, 0x6980
    ctx->pc = 0x299b18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 27008));
    // 0x299b1c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x299b1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b20: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x299b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x299b24: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x299b24u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x299b28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x299b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299b2c: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x299b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x299b30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x299b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299b34: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x299b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x299b38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x299b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x299b3c: 0x0  nop
    ctx->pc = 0x299b3cu;
    // NOP
label_299b40:
    // 0x299b40: 0xdd240000  ld          $a0, 0x0($t1)
    ctx->pc = 0x299b40u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x299b44: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x299b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x299b48: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x299b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x299b4c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x299b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x299b50: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x299b50u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x299b54: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x299b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x299b58: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x299b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299b5c: 0x14e0fff8  bnez        $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x299B5Cu;
    {
        const bool branch_taken_0x299b5c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x299B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B5Cu;
        // 0x299b60: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299b5c) {
            ctx->pc = 0x299B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299b40;
        }
    }
    ctx->pc = 0x299B64u;
    // 0x299b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b6c: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x299B6Cu;
    SET_GPR_U32(ctx, 31, 0x299B74u);
    ctx->pc = 0x299B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B6Cu;
    // 0x299b70: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x299B6Cu, 0x299B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B74u;
label_299b74:
    // 0x299b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b78: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x299b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x299b7c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299B7Cu;
    SET_GPR_U32(ctx, 31, 0x299B84u);
    ctx->pc = 0x299B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B7Cu;
    // 0x299b80: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299B7Cu, 0x299B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B84u;
label_299b84:
    // 0x299b84: 0xc0a6642  jal         func_299908
    ctx->pc = 0x299B84u;
    SET_GPR_U32(ctx, 31, 0x299B8Cu);
    ctx->pc = 0x299B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B84u;
    // 0x299b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x299B84u, 0x299B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B8Cu;
label_299b8c:
    // 0x299b8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x299b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x299b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299b98: 0x3e00008  jr          $ra
    ctx->pc = 0x299B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B98u;
        // 0x299b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299BA0u;
}
