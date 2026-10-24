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

// Function: func_0018FE60
// Address: 0x18fe60 - 0x190068
void func_0018FE60_0x18fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018FE60_0x18fe60");
#endif

    switch (ctx->pc) {
        case 0x18fe8cu: goto label_18fe8c;
        case 0x18fea0u: goto label_18fea0;
        case 0x18feb0u: goto label_18feb0;
        case 0x18fec0u: goto label_18fec0;
        case 0x18fed0u: goto label_18fed0;
        case 0x18ff08u: goto label_18ff08;
        case 0x18ffb8u: goto label_18ffb8;
        case 0x190020u: goto label_190020;
        case 0x190030u: goto label_190030;
        default: break;
    }

    ctx->pc = 0x18fe60u;

    // 0x18fe60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18fe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18fe64: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18fe64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18fe68: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18fe68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18fe6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18fe6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe70: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18fe70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18fe74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18fe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18fe78: 0x8e240654  lw          $a0, 0x654($s1)
    ctx->pc = 0x18fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    // 0x18fe7c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FE7Cu;
    {
        const bool branch_taken_0x18fe7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fe7c) {
            ctx->pc = 0x18FE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FE7Cu;
            // 0x18fe80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FE90u;
            goto label_18fe90;
        }
    }
    ctx->pc = 0x18FE84u;
    // 0x18fe84: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x18FE84u;
    SET_GPR_U32(ctx, 31, 0x18FE8Cu);
    ctx->pc = 0x18FE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FE84u;
    // 0x18fe88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x18FE84u, 0x18FE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FE8Cu;
label_18fe8c:
    // 0x18fe8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18fe8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18fe90:
    // 0x18fe90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18fe90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18fe94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe98: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18FE98u;
    SET_GPR_U32(ctx, 31, 0x18FEA0u);
    ctx->pc = 0x18FE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FE98u;
    // 0x18fe9c: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18FE98u, 0x18FEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FEA0u;
label_18fea0:
    // 0x18fea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18fea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fea4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18fea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18fea8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18FEA8u;
    SET_GPR_U32(ctx, 31, 0x18FEB0u);
    ctx->pc = 0x18FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FEA8u;
    // 0x18feac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18FEA8u, 0x18FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FEB0u;
label_18feb0:
    // 0x18feb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18feb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18feb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18feb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18feb8: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x18FEB8u;
    SET_GPR_U32(ctx, 31, 0x18FEC0u);
    ctx->pc = 0x18FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FEB8u;
    // 0x18febc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x18FEB8u, 0x18FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FEC0u;
label_18fec0:
    // 0x18fec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18fec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fec4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18fec8: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x18FEC8u;
    SET_GPR_U32(ctx, 31, 0x18FED0u);
    ctx->pc = 0x18FECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FEC8u;
    // 0x18fecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x18FEC8u, 0x18FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FED0u;
label_18fed0:
    // 0x18fed0: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x18fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x18fed4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x18fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x18fed8: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x18fed8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18fedc: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x18fedcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18fee0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18fee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18fee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18fee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fee8: 0x10850031  beq         $a0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x18FEE8u;
    {
        const bool branch_taken_0x18fee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x18FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEE8u;
        // 0x18feec: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fee8) {
            ctx->pc = 0x18FFB0u;
            goto label_18ffb0;
        }
    }
    ctx->pc = 0x18FEF0u;
    // 0x18fef0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18fef0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fef4: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x18fef4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x18fef8: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x18fef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x18fefc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18fefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ff00: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x18ff00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18ff04: 0x0  nop
    ctx->pc = 0x18ff04u;
    // NOP
label_18ff08:
    // 0x18ff08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ff08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff0c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18ff0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18ff10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FF10u;
    {
        const bool branch_taken_0x18ff10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF10u;
        // 0x18ff14: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff10) {
            ctx->pc = 0x18FF20u;
            goto label_18ff20;
        }
    }
    ctx->pc = 0x18FF18u;
    // 0x18ff18: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x18ff18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18ff1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ff1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ff20:
    // 0x18ff20: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18ff20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18ff24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FF24u;
    {
        const bool branch_taken_0x18ff24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF24u;
        // 0x18ff28: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff24) {
            ctx->pc = 0x18FF3Cu;
            goto label_18ff3c;
        }
    }
    ctx->pc = 0x18FF2Cu;
    // 0x18ff2c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18ff30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ff34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18FF34u;
    {
        const bool branch_taken_0x18ff34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF34u;
        // 0x18ff38: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff34) {
            ctx->pc = 0x18FF40u;
            goto label_18ff40;
        }
    }
    ctx->pc = 0x18FF3Cu;
label_18ff3c:
    // 0x18ff3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ff3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ff40:
    // 0x18ff40: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18ff44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ff44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff48: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x18ff48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18ff4c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x18ff4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x18ff50: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x18ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x18ff54: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18ff54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18ff58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FF58u;
    {
        const bool branch_taken_0x18ff58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF58u;
        // 0x18ff5c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff58) {
            ctx->pc = 0x18FF68u;
            goto label_18ff68;
        }
    }
    ctx->pc = 0x18FF60u;
    // 0x18ff60: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18ff60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18ff64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18ff64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ff68:
    // 0x18ff68: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x18ff68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18ff6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FF6Cu;
    {
        const bool branch_taken_0x18ff6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF6Cu;
        // 0x18ff70: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff6c) {
            ctx->pc = 0x18FF84u;
            goto label_18ff84;
        }
    }
    ctx->pc = 0x18FF74u;
    // 0x18ff74: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18ff78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ff7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18FF7Cu;
    {
        const bool branch_taken_0x18ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF7Cu;
        // 0x18ff80: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff7c) {
            ctx->pc = 0x18FF88u;
            goto label_18ff88;
        }
    }
    ctx->pc = 0x18FF84u;
label_18ff84:
    // 0x18ff84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ff84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ff88:
    // 0x18ff88: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18ff8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18ff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18ff90: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18ff90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18ff94: 0x28a30007  slti        $v1, $a1, 0x7
    ctx->pc = 0x18ff94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x18ff98: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x18ff98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x18ff9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FF9Cu;
    {
        const bool branch_taken_0x18ff9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF9Cu;
        // 0x18ffa0: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff9c) {
            ctx->pc = 0x18FFB0u;
            goto label_18ffb0;
        }
    }
    ctx->pc = 0x18FFA4u;
    // 0x18ffa4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18ffa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18ffa8: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x18FFA8u;
    {
        const bool branch_taken_0x18ffa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18ffa8) {
            ctx->pc = 0x18FFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FFA8u;
            // 0x18ffac: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ff08;
        }
    }
    ctx->pc = 0x18FFB0u;
label_18ffb0:
    // 0x18ffb0: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x18FFB0u;
    SET_GPR_U32(ctx, 31, 0x18FFB8u);
    ctx->pc = 0x18FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FFB0u;
    // 0x18ffb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x18FFB0u, 0x18FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FFB8u;
label_18ffb8:
    // 0x18ffb8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18ffb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ffbc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18ffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18ffc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18ffc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18ffc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18ffc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18ffc8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18ffcc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18ffd0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18ffd4: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x18ffd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x18ffd8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x18ffd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x18ffdc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18ffdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18ffe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ffe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ffe4: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18ffe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ffe8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x18ffe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x18ffec: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18ffecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18fff0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18fff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18fff4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18fff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18fff8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18fff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fffc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18fffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190000: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x190000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x190004: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x190004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x190008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19000c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19000cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x190010: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x190010u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x190014: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x190014u;
    {
        const bool branch_taken_0x190014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x190018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190014u;
        // 0x190018: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190014) {
            ctx->pc = 0x19004Cu;
            goto label_19004c;
        }
    }
    ctx->pc = 0x19001Cu;
    // 0x19001c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19001cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190020:
    // 0x190020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x190020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190024: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x190024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190028: 0xc063f04  jal         func_18FC10
    ctx->pc = 0x190028u;
    SET_GPR_U32(ctx, 31, 0x190030u);
    ctx->pc = 0x19002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190028u;
    // 0x19002c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FC10u, 0x190028u, 0x190030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190030u;
label_190030:
    // 0x190030: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x190030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x190034: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x190034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x190038: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x190038u;
    {
        const bool branch_taken_0x190038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190038) {
            ctx->pc = 0x19003Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190038u;
            // 0x19003c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190050u;
            goto label_190050;
        }
    }
    ctx->pc = 0x190040u;
    // 0x190040: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x190040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x190044: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x190044u;
    {
        const bool branch_taken_0x190044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x190048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190044u;
        // 0x190048: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190044) {
            ctx->pc = 0x190020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190020;
        }
    }
    ctx->pc = 0x19004Cu;
label_19004c:
    // 0x19004c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x19004cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_190050:
    // 0x190050: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x190050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x190054: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x190054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x190058: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x190058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19005c: 0x3e00008  jr          $ra
    ctx->pc = 0x19005Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19005Cu;
        // 0x190060: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19005Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190064u;
    // 0x190064: 0x0  nop
    ctx->pc = 0x190064u;
    // NOP
    ctx->pc = 0x190068u;
}
