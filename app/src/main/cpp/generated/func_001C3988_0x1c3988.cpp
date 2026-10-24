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

// Function: func_001C3988
// Address: 0x1c3988 - 0x1c3b98
void func_001C3988_0x1c3988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C3988_0x1c3988");
#endif

    switch (ctx->pc) {
        case 0x1c399cu: goto label_1c399c;
        case 0x1c39e8u: goto label_1c39e8;
        case 0x1c3aa0u: goto label_1c3aa0;
        case 0x1c3ad8u: goto label_1c3ad8;
        default: break;
    }

    ctx->pc = 0x1c3988u;

    // 0x1c3988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c398c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c3990: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c3990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c3994: 0xc06dfaa  jal         func_1B7EA8
    ctx->pc = 0x1C3994u;
    SET_GPR_U32(ctx, 31, 0x1C399Cu);
    ctx->pc = 0x1C3998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3994u;
    // 0x1c3998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EA8u, 0x1C3994u, 0x1C399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C399Cu;
label_1c399c:
    // 0x1c399c: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x1c399cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1c39a0: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1c39a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1c39a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c39a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c39a8: 0x54400078  bnel        $v0, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x1C39A8u;
    {
        const bool branch_taken_0x1c39a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c39a8) {
            ctx->pc = 0x1C39ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C39A8u;
            // 0x1c39ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3B8Cu;
            goto label_1c3b8c;
        }
    }
    ctx->pc = 0x1C39B0u;
    // 0x1c39b0: 0x8202060c  lb          $v0, 0x60C($s0)
    ctx->pc = 0x1c39b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x1c39b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c39b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c39b8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c39b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c39bc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C39BCu;
    {
        const bool branch_taken_0x1c39bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c39bc) {
            ctx->pc = 0x1C3A98u;
            goto label_1c3a98;
        }
    }
    ctx->pc = 0x1C39C4u;
    // 0x1c39c4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c39c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c39c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c39c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39cc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c39ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c39d0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C39D0u;
    {
        const bool branch_taken_0x1c39d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39D0u;
        // 0x1c39d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39d0) {
            ctx->pc = 0x1C3A98u;
            goto label_1c3a98;
        }
    }
    ctx->pc = 0x1C39D8u;
    // 0x1c39d8: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x1c39d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1c39dc: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x1c39dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1c39e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c39e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c39e4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c39e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1c39e8:
    // 0x1c39e8: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1c39e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c39ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C39ECu;
    {
        const bool branch_taken_0x1c39ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C39F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39ECu;
        // 0x1c39f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39ec) {
            ctx->pc = 0x1C39FCu;
            goto label_1c39fc;
        }
    }
    ctx->pc = 0x1C39F4u;
    // 0x1c39f4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1c39f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c39f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c39f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c39fc:
    // 0x1c39fc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c39fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1c3a00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3A00u;
    {
        const bool branch_taken_0x1c3a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A00u;
        // 0x1c3a04: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a00) {
            ctx->pc = 0x1C3A18u;
            goto label_1c3a18;
        }
    }
    ctx->pc = 0x1C3A08u;
    // 0x1c3a08: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1c3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c3a0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3a10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3A10u;
    {
        const bool branch_taken_0x1c3a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A10u;
        // 0x1c3a14: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a10) {
            ctx->pc = 0x1C3A1Cu;
            goto label_1c3a1c;
        }
    }
    ctx->pc = 0x1C3A18u;
label_1c3a18:
    // 0x1c3a18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3a1c:
    // 0x1c3a1c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1c3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1c3a20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a24: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1c3a24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c3a28: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1c3a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1c3a2c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1c3a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1c3a30: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c3a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c3a34: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3A34u;
    {
        const bool branch_taken_0x1c3a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A34u;
        // 0x1c3a38: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a34) {
            ctx->pc = 0x1C3A44u;
            goto label_1c3a44;
        }
    }
    ctx->pc = 0x1C3A3Cu;
    // 0x1c3a3c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c3a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3a40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c3a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3a44:
    // 0x1c3a44: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1c3a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1c3a48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3A48u;
    {
        const bool branch_taken_0x1c3a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A48u;
        // 0x1c3a4c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a48) {
            ctx->pc = 0x1C3A60u;
            goto label_1c3a60;
        }
    }
    ctx->pc = 0x1C3A50u;
    // 0x1c3a50: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1c3a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c3a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3a58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3A58u;
    {
        const bool branch_taken_0x1c3a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A58u;
        // 0x1c3a5c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a58) {
            ctx->pc = 0x1C3A64u;
            goto label_1c3a64;
        }
    }
    ctx->pc = 0x1C3A60u;
label_1c3a60:
    // 0x1c3a60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3a64:
    // 0x1c3a64: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x1c3a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1c3a68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c3a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c3a6c: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x1c3a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x1c3a70: 0xac430154  sw          $v1, 0x154($v0)
    ctx->pc = 0x1c3a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 3));
    // 0x1c3a74: 0x8202060c  lb          $v0, 0x60C($s0)
    ctx->pc = 0x1c3a74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x1c3a78: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c3a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3a7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3A7Cu;
    {
        const bool branch_taken_0x1c3a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A7Cu;
        // 0x1c3a80: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a7c) {
            ctx->pc = 0x1C3A98u;
            goto label_1c3a98;
        }
    }
    ctx->pc = 0x1C3A84u;
    // 0x1c3a84: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c3a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c3a88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c3a88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a8c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c3a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3a90: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1C3A90u;
    {
        const bool branch_taken_0x1c3a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a90) {
            ctx->pc = 0x1C3A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3A90u;
            // 0x1c3a94: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C39E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c39e8;
        }
    }
    ctx->pc = 0x1C3A98u;
label_1c3a98:
    // 0x1c3a98: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1C3A98u;
    SET_GPR_U32(ctx, 31, 0x1C3AA0u);
    ctx->pc = 0x1C3A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A98u;
    // 0x1c3a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1C3A98u, 0x1C3AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AA0u;
label_1c3aa0:
    // 0x1c3aa0: 0x8202060c  lb          $v0, 0x60C($s0)
    ctx->pc = 0x1c3aa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x1c3aa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c3aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3aa8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c3aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3aac: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C3AACu;
    {
        const bool branch_taken_0x1c3aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3aac) {
            ctx->pc = 0x1C3AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3AACu;
            // 0x1c3ab0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3B8Cu;
            goto label_1c3b8c;
        }
    }
    ctx->pc = 0x1C3AB4u;
    // 0x1c3ab4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c3ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c3ab8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c3ab8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3abc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c3abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3ac0: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x1C3AC0u;
    {
        const bool branch_taken_0x1c3ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ac0) {
            ctx->pc = 0x1C3AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3AC0u;
            // 0x1c3ac4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3B8Cu;
            goto label_1c3b8c;
        }
    }
    ctx->pc = 0x1C3AC8u;
    // 0x1c3ac8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3ac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3acc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3ad0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c3ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1c3ad4: 0x0  nop
    ctx->pc = 0x1c3ad4u;
    // NOP
label_1c3ad8:
    // 0x1c3ad8: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1c3ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c3adc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3ADCu;
    {
        const bool branch_taken_0x1c3adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3ADCu;
        // 0x1c3ae0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3adc) {
            ctx->pc = 0x1C3AECu;
            goto label_1c3aec;
        }
    }
    ctx->pc = 0x1C3AE4u;
    // 0x1c3ae4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1c3ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c3ae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c3ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3aec:
    // 0x1c3aec: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c3aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1c3af0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3AF0u;
    {
        const bool branch_taken_0x1c3af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3AF0u;
        // 0x1c3af4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3af0) {
            ctx->pc = 0x1C3B08u;
            goto label_1c3b08;
        }
    }
    ctx->pc = 0x1C3AF8u;
    // 0x1c3af8: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1c3af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c3afc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3b00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3B00u;
    {
        const bool branch_taken_0x1c3b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B00u;
        // 0x1c3b04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b00) {
            ctx->pc = 0x1C3B0Cu;
            goto label_1c3b0c;
        }
    }
    ctx->pc = 0x1C3B08u;
label_1c3b08:
    // 0x1c3b08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b0c:
    // 0x1c3b0c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1c3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1c3b10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b14: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1c3b14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c3b18: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1c3b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1c3b1c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1c3b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1c3b20: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c3b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c3b24: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3B24u;
    {
        const bool branch_taken_0x1c3b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B24u;
        // 0x1c3b28: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b24) {
            ctx->pc = 0x1C3B34u;
            goto label_1c3b34;
        }
    }
    ctx->pc = 0x1C3B2Cu;
    // 0x1c3b2c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c3b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3b30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c3b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b34:
    // 0x1c3b34: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1c3b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1c3b38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3B38u;
    {
        const bool branch_taken_0x1c3b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B38u;
        // 0x1c3b3c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b38) {
            ctx->pc = 0x1C3B50u;
            goto label_1c3b50;
        }
    }
    ctx->pc = 0x1C3B40u;
    // 0x1c3b40: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1c3b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c3b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3b48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3B48u;
    {
        const bool branch_taken_0x1c3b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B48u;
        // 0x1c3b4c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b48) {
            ctx->pc = 0x1C3B54u;
            goto label_1c3b54;
        }
    }
    ctx->pc = 0x1C3B50u;
label_1c3b50:
    // 0x1c3b50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b54:
    // 0x1c3b54: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x1c3b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1c3b58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c3b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c3b5c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1c3b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1c3b60: 0xac430154  sw          $v1, 0x154($v0)
    ctx->pc = 0x1c3b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 3));
    // 0x1c3b64: 0x8202060c  lb          $v0, 0x60C($s0)
    ctx->pc = 0x1c3b64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x1c3b68: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c3b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3b6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3B6Cu;
    {
        const bool branch_taken_0x1c3b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B6Cu;
        // 0x1c3b70: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b6c) {
            ctx->pc = 0x1C3B88u;
            goto label_1c3b88;
        }
    }
    ctx->pc = 0x1C3B74u;
    // 0x1c3b74: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c3b74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c3b78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c3b78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b7c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c3b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3b80: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1C3B80u;
    {
        const bool branch_taken_0x1c3b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3b80) {
            ctx->pc = 0x1C3B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3B80u;
            // 0x1c3b84: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3ad8;
        }
    }
    ctx->pc = 0x1C3B88u;
label_1c3b88:
    // 0x1c3b88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c3b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3b8c:
    // 0x1c3b8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c3b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3b90: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B90u;
        // 0x1c3b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3B98u;
}
