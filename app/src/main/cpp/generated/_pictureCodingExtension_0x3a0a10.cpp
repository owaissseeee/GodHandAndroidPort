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

// Function: _pictureCodingExtension
// Address: 0x3a0a10 - 0x3a0bf8
void _pictureCodingExtension_0x3a0a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureCodingExtension_0x3a0a10");
#endif

    switch (ctx->pc) {
        case 0x3a0a28u: goto label_3a0a28;
        case 0x3a0a38u: goto label_3a0a38;
        case 0x3a0a48u: goto label_3a0a48;
        case 0x3a0a58u: goto label_3a0a58;
        case 0x3a0a68u: goto label_3a0a68;
        case 0x3a0a98u: goto label_3a0a98;
        case 0x3a0ab8u: goto label_3a0ab8;
        case 0x3a0ac8u: goto label_3a0ac8;
        case 0x3a0ad8u: goto label_3a0ad8;
        case 0x3a0ae8u: goto label_3a0ae8;
        case 0x3a0b18u: goto label_3a0b18;
        case 0x3a0b48u: goto label_3a0b48;
        case 0x3a0b78u: goto label_3a0b78;
        case 0x3a0b88u: goto label_3a0b88;
        case 0x3a0b94u: goto label_3a0b94;
        case 0x3a0ba4u: goto label_3a0ba4;
        case 0x3a0bb4u: goto label_3a0bb4;
        case 0x3a0bc0u: goto label_3a0bc0;
        case 0x3a0bccu: goto label_3a0bcc;
        case 0x3a0bd8u: goto label_3a0bd8;
        case 0x3a0be4u: goto label_3a0be4;
        default: break;
    }

    ctx->pc = 0x3a0a10u;

    // 0x3a0a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a0a14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3a0a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a0a18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a0a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a0a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a0a20: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0A20u;
    SET_GPR_U32(ctx, 31, 0x3A0A28u);
    ctx->pc = 0x3A0A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0A20u;
    // 0x3a0a24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0A20u, 0x3A0A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0A28u;
label_3a0a28:
    // 0x3a0a28: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x3a0a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x3a0a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a30: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0A30u;
    SET_GPR_U32(ctx, 31, 0x3A0A38u);
    ctx->pc = 0x3A0A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0A30u;
    // 0x3a0a34: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0A30u, 0x3A0A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0A38u;
label_3a0a38:
    // 0x3a0a38: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x3a0a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x3a0a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a40: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0A40u;
    SET_GPR_U32(ctx, 31, 0x3A0A48u);
    ctx->pc = 0x3A0A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0A40u;
    // 0x3a0a44: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0A40u, 0x3A0A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0A48u;
label_3a0a48:
    // 0x3a0a48: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x3a0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x3a0a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a50: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0A50u;
    SET_GPR_U32(ctx, 31, 0x3A0A58u);
    ctx->pc = 0x3A0A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0A50u;
    // 0x3a0a54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0A50u, 0x3A0A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0A58u;
label_3a0a58:
    // 0x3a0a58: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x3a0a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x3a0a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a60: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0A60u;
    SET_GPR_U32(ctx, 31, 0x3A0A68u);
    ctx->pc = 0x3A0A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0A60u;
    // 0x3a0a64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0A60u, 0x3A0A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0A68u;
label_3a0a68:
    // 0x3a0a68: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3a0a68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3a0a6c: 0x3c06fffc  lui         $a2, 0xFFFC
    ctx->pc = 0x3a0a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65532 << 16));
    // 0x3a0a70: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x3a0a70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x3a0a74: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3a0a74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x3a0a78: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3a0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x3a0a7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3a0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3a0a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a0a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a0a88: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3a0a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3a0a8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a0a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a0a90: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0A90u;
    SET_GPR_U32(ctx, 31, 0x3A0A98u);
    ctx->pc = 0x3A0A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0A90u;
    // 0x3a0a94: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0A90u, 0x3A0A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0A98u;
label_3a0a98:
    // 0x3a0a98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a0a98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a9c: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x3a0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x3a0aa0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A0AA0u;
    {
        const bool branch_taken_0x3a0aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0AA0u;
        // 0x3a0aa4: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0aa0) {
            ctx->pc = 0x3A0AACu;
            goto label_3a0aac;
        }
    }
    ctx->pc = 0x3A0AA8u;
    // 0x3a0aa8: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x3a0aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_3a0aac:
    // 0x3a0aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ab0: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0AB0u;
    SET_GPR_U32(ctx, 31, 0x3A0AB8u);
    ctx->pc = 0x3A0AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0AB0u;
    // 0x3a0ab4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0AB0u, 0x3A0AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0AB8u;
label_3a0ab8:
    // 0x3a0ab8: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x3a0ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x3a0abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ac0: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0AC0u;
    SET_GPR_U32(ctx, 31, 0x3A0AC8u);
    ctx->pc = 0x3A0AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0AC0u;
    // 0x3a0ac4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0AC0u, 0x3A0AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0AC8u;
label_3a0ac8:
    // 0x3a0ac8: 0xae02018c  sw          $v0, 0x18C($s0)
    ctx->pc = 0x3a0ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 2));
    // 0x3a0acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ad0: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0AD0u;
    SET_GPR_U32(ctx, 31, 0x3A0AD8u);
    ctx->pc = 0x3A0AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0AD0u;
    // 0x3a0ad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0AD0u, 0x3A0AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0AD8u;
label_3a0ad8:
    // 0x3a0ad8: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x3a0ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x3a0adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ae0: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0AE0u;
    SET_GPR_U32(ctx, 31, 0x3A0AE8u);
    ctx->pc = 0x3A0AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0AE0u;
    // 0x3a0ae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0AE0u, 0x3A0AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0AE8u;
label_3a0ae8:
    // 0x3a0ae8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3a0ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3a0aec: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x3a0aecu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x3a0af0: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x3a0af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x3a0af4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a0af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a0af8: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x3a0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
    // 0x3a0afc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x3a0afcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3a0b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b04: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3a0b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3a0b08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a0b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0b0c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3a0b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3a0b10: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0B10u;
    SET_GPR_U32(ctx, 31, 0x3A0B18u);
    ctx->pc = 0x3A0B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B10u;
    // 0x3a0b14: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0B10u, 0x3A0B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B18u;
label_3a0b18:
    // 0x3a0b18: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3a0b18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3a0b1c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x3a0b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x3a0b20: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x3a0b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x3a0b24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a0b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a0b28: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x3a0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x3a0b2c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x3a0b2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3a0b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b34: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3a0b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3a0b38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a0b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0b3c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3a0b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3a0b40: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0B40u;
    SET_GPR_U32(ctx, 31, 0x3A0B48u);
    ctx->pc = 0x3A0B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B40u;
    // 0x3a0b44: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0B40u, 0x3A0B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B48u;
label_3a0b48:
    // 0x3a0b48: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3a0b48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3a0b4c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x3a0b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x3a0b50: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3a0b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x3a0b54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a0b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a0b58: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x3a0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x3a0b5c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x3a0b5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3a0b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b64: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3a0b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3a0b68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a0b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0b6c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3a0b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3a0b70: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0B70u;
    SET_GPR_U32(ctx, 31, 0x3A0B78u);
    ctx->pc = 0x3A0B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B70u;
    // 0x3a0b74: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0B70u, 0x3A0B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B78u;
label_3a0b78:
    // 0x3a0b78: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x3a0b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
    // 0x3a0b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b80: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0B80u;
    SET_GPR_U32(ctx, 31, 0x3A0B88u);
    ctx->pc = 0x3A0B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B80u;
    // 0x3a0b84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0B80u, 0x3A0B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B88u;
label_3a0b88:
    // 0x3a0b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b8c: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0B8Cu;
    SET_GPR_U32(ctx, 31, 0x3A0B94u);
    ctx->pc = 0x3A0B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B8Cu;
    // 0x3a0b90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0B8Cu, 0x3A0B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B94u;
label_3a0b94:
    // 0x3a0b94: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x3a0b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x3a0b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0b9c: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0B9Cu;
    SET_GPR_U32(ctx, 31, 0x3A0BA4u);
    ctx->pc = 0x3A0BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B9Cu;
    // 0x3a0ba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0B9Cu, 0x3A0BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0BA4u;
label_3a0ba4:
    // 0x3a0ba4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A0BA4u;
    {
        const bool branch_taken_0x3a0ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0BA4u;
        // 0x3a0ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ba4) {
            ctx->pc = 0x3A0BE4u;
            goto label_3a0be4;
        }
    }
    ctx->pc = 0x3A0BACu;
    // 0x3a0bac: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0BACu;
    SET_GPR_U32(ctx, 31, 0x3A0BB4u);
    ctx->pc = 0x3A0BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0BACu;
    // 0x3a0bb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0BACu, 0x3A0BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0BB4u;
label_3a0bb4:
    // 0x3a0bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0bb8: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0BB8u;
    SET_GPR_U32(ctx, 31, 0x3A0BC0u);
    ctx->pc = 0x3A0BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0BB8u;
    // 0x3a0bbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0BB8u, 0x3A0BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0BC0u;
label_3a0bc0:
    // 0x3a0bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0bc4: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0BC4u;
    SET_GPR_U32(ctx, 31, 0x3A0BCCu);
    ctx->pc = 0x3A0BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0BC4u;
    // 0x3a0bc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0BC4u, 0x3A0BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0BCCu;
label_3a0bcc:
    // 0x3a0bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0bd0: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0BD0u;
    SET_GPR_U32(ctx, 31, 0x3A0BD8u);
    ctx->pc = 0x3A0BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0BD0u;
    // 0x3a0bd4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0BD0u, 0x3A0BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0BD8u;
label_3a0bd8:
    // 0x3a0bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0bdc: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0BDCu;
    SET_GPR_U32(ctx, 31, 0x3A0BE4u);
    ctx->pc = 0x3A0BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0BDCu;
    // 0x3a0be0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0BDCu, 0x3A0BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0BE4u;
label_3a0be4:
    // 0x3a0be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a0be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0be8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0bec: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0BECu;
        // 0x3a0bf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0BF4u;
    // 0x3a0bf4: 0x0  nop
    ctx->pc = 0x3a0bf4u;
    // NOP
    ctx->pc = 0x3a0bf8u;
}
