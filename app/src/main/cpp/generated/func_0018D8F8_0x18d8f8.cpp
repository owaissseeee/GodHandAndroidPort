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

// Function: func_0018D8F8
// Address: 0x18d8f8 - 0x18db00
void func_0018D8F8_0x18d8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018D8F8_0x18d8f8");
#endif

    switch (ctx->pc) {
        case 0x18d924u: goto label_18d924;
        case 0x18d938u: goto label_18d938;
        case 0x18d948u: goto label_18d948;
        case 0x18d958u: goto label_18d958;
        case 0x18d968u: goto label_18d968;
        case 0x18d9a0u: goto label_18d9a0;
        case 0x18da50u: goto label_18da50;
        case 0x18dab8u: goto label_18dab8;
        case 0x18dac8u: goto label_18dac8;
        default: break;
    }

    ctx->pc = 0x18d8f8u;

    // 0x18d8f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18d8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18d8fc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18d8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18d900: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18d900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18d904: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18d904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d908: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18d90c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18d90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18d910: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x18d910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x18d914: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D914u;
    {
        const bool branch_taken_0x18d914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d914) {
            ctx->pc = 0x18D918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D914u;
            // 0x18d918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D928u;
            goto label_18d928;
        }
    }
    ctx->pc = 0x18D91Cu;
    // 0x18d91c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x18D91Cu;
    SET_GPR_U32(ctx, 31, 0x18D924u);
    ctx->pc = 0x18D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D91Cu;
    // 0x18d920: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x18D91Cu, 0x18D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D924u;
label_18d924:
    // 0x18d924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d928:
    // 0x18d928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18d928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d92c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d930: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18D930u;
    SET_GPR_U32(ctx, 31, 0x18D938u);
    ctx->pc = 0x18D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D930u;
    // 0x18d934: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18D930u, 0x18D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D938u;
label_18d938:
    // 0x18d938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d93c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18d93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d940: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18D940u;
    SET_GPR_U32(ctx, 31, 0x18D948u);
    ctx->pc = 0x18D944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D940u;
    // 0x18d944: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18D940u, 0x18D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D948u;
label_18d948:
    // 0x18d948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d94c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18d94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d950: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x18D950u;
    SET_GPR_U32(ctx, 31, 0x18D958u);
    ctx->pc = 0x18D954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D950u;
    // 0x18d954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x18D950u, 0x18D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D958u;
label_18d958:
    // 0x18d958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d95c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18d95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d960: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x18D960u;
    SET_GPR_U32(ctx, 31, 0x18D968u);
    ctx->pc = 0x18D964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D960u;
    // 0x18d964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x18D960u, 0x18D968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D968u;
label_18d968:
    // 0x18d968: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x18d968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x18d96c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x18d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x18d970: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x18d970u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18d974: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x18d974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18d978: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18d978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18d97c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18d97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d980: 0x10850031  beq         $a0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x18D980u;
    {
        const bool branch_taken_0x18d980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x18D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D980u;
        // 0x18d984: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d980) {
            ctx->pc = 0x18DA48u;
            goto label_18da48;
        }
    }
    ctx->pc = 0x18D988u;
    // 0x18d988: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18d988u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d98c: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x18d98cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x18d990: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x18d990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x18d994: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18d994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d998: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x18d998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18d99c: 0x0  nop
    ctx->pc = 0x18d99cu;
    // NOP
label_18d9a0:
    // 0x18d9a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9a4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18d9a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18d9a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D9A8u;
    {
        const bool branch_taken_0x18d9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9A8u;
        // 0x18d9ac: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9a8) {
            ctx->pc = 0x18D9B8u;
            goto label_18d9b8;
        }
    }
    ctx->pc = 0x18D9B0u;
    // 0x18d9b0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x18d9b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18d9b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d9b8:
    // 0x18d9b8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18d9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18d9bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D9BCu;
    {
        const bool branch_taken_0x18d9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9BCu;
        // 0x18d9c0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9bc) {
            ctx->pc = 0x18D9D4u;
            goto label_18d9d4;
        }
    }
    ctx->pc = 0x18D9C4u;
    // 0x18d9c4: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18d9c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d9cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D9CCu;
    {
        const bool branch_taken_0x18d9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9CCu;
        // 0x18d9d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9cc) {
            ctx->pc = 0x18D9D8u;
            goto label_18d9d8;
        }
    }
    ctx->pc = 0x18D9D4u;
label_18d9d4:
    // 0x18d9d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d9d8:
    // 0x18d9d8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18d9dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9e0: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x18d9e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18d9e4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x18d9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x18d9e8: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x18d9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x18d9ec: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18d9ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18d9f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D9F0u;
    {
        const bool branch_taken_0x18d9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9F0u;
        // 0x18d9f4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9f0) {
            ctx->pc = 0x18DA00u;
            goto label_18da00;
        }
    }
    ctx->pc = 0x18D9F8u;
    // 0x18d9f8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18d9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18d9fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18d9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18da00:
    // 0x18da00: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x18da00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18da04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DA04u;
    {
        const bool branch_taken_0x18da04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA04u;
        // 0x18da08: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da04) {
            ctx->pc = 0x18DA1Cu;
            goto label_18da1c;
        }
    }
    ctx->pc = 0x18DA0Cu;
    // 0x18da0c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18da10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18da10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18da14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18DA14u;
    {
        const bool branch_taken_0x18da14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA14u;
        // 0x18da18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da14) {
            ctx->pc = 0x18DA20u;
            goto label_18da20;
        }
    }
    ctx->pc = 0x18DA1Cu;
label_18da1c:
    // 0x18da1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18da1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18da20:
    // 0x18da20: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18da24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18da24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18da28: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18da28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18da2c: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x18da2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x18da30: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x18da30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x18da34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DA34u;
    {
        const bool branch_taken_0x18da34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA34u;
        // 0x18da38: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da34) {
            ctx->pc = 0x18DA48u;
            goto label_18da48;
        }
    }
    ctx->pc = 0x18DA3Cu;
    // 0x18da3c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18da3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18da40: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x18DA40u;
    {
        const bool branch_taken_0x18da40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18da40) {
            ctx->pc = 0x18DA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DA40u;
            // 0x18da44: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d9a0;
        }
    }
    ctx->pc = 0x18DA48u;
label_18da48:
    // 0x18da48: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x18DA48u;
    SET_GPR_U32(ctx, 31, 0x18DA50u);
    ctx->pc = 0x18DA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA48u;
    // 0x18da4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x18DA48u, 0x18DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA50u;
label_18da50:
    // 0x18da50: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18da50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18da54: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18da54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18da58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18da58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18da5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18da5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18da60: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18da60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18da64: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18da64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18da68: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18da68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18da6c: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x18da6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x18da70: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x18da70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x18da74: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18da74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18da78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18da78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18da7c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18da7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18da80: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x18da80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x18da84: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18da84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18da88: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18da88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18da8c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18da8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18da90: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18da94: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18da94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18da98: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x18da98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x18da9c: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x18da9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x18daa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18daa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18daa4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18daa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18daa8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18daa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18daac: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x18DAACu;
    {
        const bool branch_taken_0x18daac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x18DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAACu;
        // 0x18dab0: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18daac) {
            ctx->pc = 0x18DAE4u;
            goto label_18dae4;
        }
    }
    ctx->pc = 0x18DAB4u;
    // 0x18dab4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18dab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18dab8:
    // 0x18dab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dabc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x18dabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18dac0: 0xc0635ae  jal         func_18D6B8
    ctx->pc = 0x18DAC0u;
    SET_GPR_U32(ctx, 31, 0x18DAC8u);
    ctx->pc = 0x18DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAC0u;
    // 0x18dac4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D6B8u, 0x18DAC0u, 0x18DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAC8u;
label_18dac8:
    // 0x18dac8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18dac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18dacc: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x18daccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x18dad0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DAD0u;
    {
        const bool branch_taken_0x18dad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dad0) {
            ctx->pc = 0x18DAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DAD0u;
            // 0x18dad4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DAE8u;
            goto label_18dae8;
        }
    }
    ctx->pc = 0x18DAD8u;
    // 0x18dad8: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18dad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18dadc: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x18DADCu;
    {
        const bool branch_taken_0x18dadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x18DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DADCu;
        // 0x18dae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dadc) {
            ctx->pc = 0x18DAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dab8;
        }
    }
    ctx->pc = 0x18DAE4u;
label_18dae4:
    // 0x18dae4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18dae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18dae8:
    // 0x18dae8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18dae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18daec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18daecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18daf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18daf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18daf4: 0x3e00008  jr          $ra
    ctx->pc = 0x18DAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAF4u;
        // 0x18daf8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DAFCu;
    // 0x18dafc: 0x0  nop
    ctx->pc = 0x18dafcu;
    // NOP
    ctx->pc = 0x18db00u;
}
