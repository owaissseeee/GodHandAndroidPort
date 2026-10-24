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

// Function: func_001C28A0
// Address: 0x1c28a0 - 0x1c29d0
void func_001C28A0_0x1c28a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C28A0_0x1c28a0");
#endif

    switch (ctx->pc) {
        case 0x1c28c4u: goto label_1c28c4;
        case 0x1c28d4u: goto label_1c28d4;
        case 0x1c2908u: goto label_1c2908;
        default: break;
    }

    ctx->pc = 0x1c28a0u;

    // 0x1c28a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c28a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c28a4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c28a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c28a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c28a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c28ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c28acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c28b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c28b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c28b8: 0xa6020610  sh          $v0, 0x610($s0)
    ctx->pc = 0x1c28b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1552), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c28bc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1C28BCu;
    SET_GPR_U32(ctx, 31, 0x1C28C4u);
    ctx->pc = 0x1C28C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28BCu;
    // 0x1c28c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1C28BCu, 0x1C28C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28C4u;
label_1c28c4:
    // 0x1c28c4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1c28c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c28c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c28c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28cc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1C28CCu;
    SET_GPR_U32(ctx, 31, 0x1C28D4u);
    ctx->pc = 0x1C28D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28CCu;
    // 0x1c28d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1C28CCu, 0x1C28D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28D4u;
label_1c28d4:
    // 0x1c28d4: 0x8202060c  lb          $v0, 0x60C($s0)
    ctx->pc = 0x1c28d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x1c28d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c28d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c28dc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c28dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c28e0: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C28E0u;
    {
        const bool branch_taken_0x1c28e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c28e0) {
            ctx->pc = 0x1C28E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C28E0u;
            // 0x1c28e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C29BCu;
            goto label_1c29bc;
        }
    }
    ctx->pc = 0x1C28E8u;
    // 0x1c28e8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c28e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c28ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c28ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28f0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c28f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c28f4: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C28F4u;
    {
        const bool branch_taken_0x1c28f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c28f4) {
            ctx->pc = 0x1C28F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C28F4u;
            // 0x1c28f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C29BCu;
            goto label_1c29bc;
        }
    }
    ctx->pc = 0x1C28FCu;
    // 0x1c28fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c28fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2900: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2904: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c2904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1c2908:
    // 0x1c2908: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1c2908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c290c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C290Cu;
    {
        const bool branch_taken_0x1c290c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C290Cu;
        // 0x1c2910: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c290c) {
            ctx->pc = 0x1C291Cu;
            goto label_1c291c;
        }
    }
    ctx->pc = 0x1C2914u;
    // 0x1c2914: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x1c2914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c2918: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c2918u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c291c:
    // 0x1c291c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1c291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c2920: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2920u;
    {
        const bool branch_taken_0x1c2920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2920u;
        // 0x1c2924: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2920) {
            ctx->pc = 0x1C2938u;
            goto label_1c2938;
        }
    }
    ctx->pc = 0x1C2928u;
    // 0x1c2928: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1c2928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c292c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2930: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2930u;
    {
        const bool branch_taken_0x1c2930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2930u;
        // 0x1c2934: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2930) {
            ctx->pc = 0x1C293Cu;
            goto label_1c293c;
        }
    }
    ctx->pc = 0x1C2938u;
label_1c2938:
    // 0x1c2938: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c2938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c293c:
    // 0x1c293c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1c293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1c2940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2944: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1c2944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c2948: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1c2948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1c294c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1c294cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1c2950: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c2950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c2954: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2954u;
    {
        const bool branch_taken_0x1c2954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2954u;
        // 0x1c2958: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2954) {
            ctx->pc = 0x1C2964u;
            goto label_1c2964;
        }
    }
    ctx->pc = 0x1C295Cu;
    // 0x1c295c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c295cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c2960: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c2960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c2964:
    // 0x1c2964: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1c2964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1c2968: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2968u;
    {
        const bool branch_taken_0x1c2968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2968u;
        // 0x1c296c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2968) {
            ctx->pc = 0x1C2980u;
            goto label_1c2980;
        }
    }
    ctx->pc = 0x1C2970u;
    // 0x1c2970: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1c2970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c2974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2978: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2978u;
    {
        const bool branch_taken_0x1c2978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2978u;
        // 0x1c297c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2978) {
            ctx->pc = 0x1C2984u;
            goto label_1c2984;
        }
    }
    ctx->pc = 0x1C2980u;
label_1c2980:
    // 0x1c2980: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c2980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2984:
    // 0x1c2984: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x1c2984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1c2988: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c2988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c298c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1c298cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1c2990: 0xac430154  sw          $v1, 0x154($v0)
    ctx->pc = 0x1c2990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 3));
    // 0x1c2994: 0x8202060c  lb          $v0, 0x60C($s0)
    ctx->pc = 0x1c2994u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x1c2998: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c2998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c299c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C299Cu;
    {
        const bool branch_taken_0x1c299c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C299Cu;
        // 0x1c29a0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c299c) {
            ctx->pc = 0x1C29B8u;
            goto label_1c29b8;
        }
    }
    ctx->pc = 0x1C29A4u;
    // 0x1c29a4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c29a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c29a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c29a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29ac: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c29acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c29b0: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1C29B0u;
    {
        const bool branch_taken_0x1c29b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c29b0) {
            ctx->pc = 0x1C29B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C29B0u;
            // 0x1c29b4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2908;
        }
    }
    ctx->pc = 0x1C29B8u;
label_1c29b8:
    // 0x1c29b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c29b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c29bc:
    // 0x1c29bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c29c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c29c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c29c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C29C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29C4u;
        // 0x1c29c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C29C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C29CCu;
    // 0x1c29cc: 0x0  nop
    ctx->pc = 0x1c29ccu;
    // NOP
    ctx->pc = 0x1c29d0u;
}
