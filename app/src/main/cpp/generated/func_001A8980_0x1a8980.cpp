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

// Function: func_001A8980
// Address: 0x1a8980 - 0x1a8a70
void func_001A8980_0x1a8980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A8980_0x1a8980");
#endif

    switch (ctx->pc) {
        case 0x1a8994u: goto label_1a8994;
        case 0x1a89a4u: goto label_1a89a4;
        case 0x1a89b8u: goto label_1a89b8;
        case 0x1a89d8u: goto label_1a89d8;
        default: break;
    }

    ctx->pc = 0x1a8980u;

    // 0x1a8980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a8984: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a8984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a8988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a898c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A898Cu;
    SET_GPR_U32(ctx, 31, 0x1A8994u);
    ctx->pc = 0x1A8990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A898Cu;
    // 0x1a8990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A898Cu, 0x1A8994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8994u;
label_1a8994:
    // 0x1a8994: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x1a8994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1a8998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a899c: 0xc06a484  jal         func_1A9210
    ctx->pc = 0x1A899Cu;
    SET_GPR_U32(ctx, 31, 0x1A89A4u);
    ctx->pc = 0x1A89A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A899Cu;
    // 0x1a89a0: 0x26060100  addiu       $a2, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9210u, 0x1A899Cu, 0x1A89A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A89A4u;
label_1a89a4:
    // 0x1a89a4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a89a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a89a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a89ac: 0x244b7948  addiu       $t3, $v0, 0x7948
    ctx->pc = 0x1a89acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 31048));
    // 0x1a89b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a89b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a89b4: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1a89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1a89b8:
    // 0x1a89b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a89b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a89bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a89c0: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x1a89c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a89c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1a89c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1a89c8: 0x4b4021  addu        $t0, $v0, $t3
    ctx->pc = 0x1a89c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1a89cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a89d0: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x1a89d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a89d4: 0x0  nop
    ctx->pc = 0x1a89d4u;
    // NOP
label_1a89d8:
    // 0x1a89d8: 0x54e00017  bnel        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A89D8u;
    {
        const bool branch_taken_0x1a89d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a89d8) {
            ctx->pc = 0x1A89DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A89D8u;
            // 0x1a89dc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8A38u;
            goto label_1a8a38;
        }
    }
    ctx->pc = 0x1A89E0u;
    // 0x1a89e0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1a89e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a89e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a89e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a89e8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1a89e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1a89ec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a89ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a89f0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1a89f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a89f4: 0x8a102a  slt         $v0, $a0, $t2
    ctx->pc = 0x1a89f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1a89f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A89F8u;
    {
        const bool branch_taken_0x1a89f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89F8u;
        // 0x1a89fc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a89f8) {
            ctx->pc = 0x1A8A08u;
            goto label_1a8a08;
        }
    }
    ctx->pc = 0x1A8A00u;
    // 0x1a8a00: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a8a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8a04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a8a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a08:
    // 0x1a8a08: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a8a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a8a0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8A0Cu;
    {
        const bool branch_taken_0x1a8a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A0Cu;
        // 0x1a8a10: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a0c) {
            ctx->pc = 0x1A8A24u;
            goto label_1a8a24;
        }
    }
    ctx->pc = 0x1A8A14u;
    // 0x1a8a14: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1a8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1a8a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8a1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8A1Cu;
    {
        const bool branch_taken_0x1a8a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A1Cu;
        // 0x1a8a20: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a1c) {
            ctx->pc = 0x1A8A28u;
            goto label_1a8a28;
        }
    }
    ctx->pc = 0x1A8A24u;
label_1a8a24:
    // 0x1a8a24: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a8a24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a28:
    // 0x1a8a28: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1a8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1a8a2c: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x1a8a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x1a8a30: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1a8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1a8a34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a8a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a8a38:
    // 0x1a8a38: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x1a8a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a8a3c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1A8A3Cu;
    {
        const bool branch_taken_0x1a8a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A3Cu;
        // 0x1a8a40: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a3c) {
            ctx->pc = 0x1A89D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a89d8;
        }
    }
    ctx->pc = 0x1A8A44u;
    // 0x1a8a44: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1a8a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a8a48: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1A8A48u;
    {
        const bool branch_taken_0x1a8a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A48u;
        // 0x1a8a4c: 0x317c2  srl         $v0, $v1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a48) {
            ctx->pc = 0x1A89B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a89b8;
        }
    }
    ctx->pc = 0x1A8A50u;
    // 0x1a8a50: 0x8e0305a0  lw          $v1, 0x5A0($s0)
    ctx->pc = 0x1a8a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x1a8a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8a58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8a5c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1a8a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1a8a60: 0xae0305a0  sw          $v1, 0x5A0($s0)
    ctx->pc = 0x1a8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 3));
    // 0x1a8a64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a8a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8a68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A68u;
        // 0x1a8a6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8A70u;
}
