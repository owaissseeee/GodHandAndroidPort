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

// Function: func_001BBF68
// Address: 0x1bbf68 - 0x1bc0a0
void func_001BBF68_0x1bbf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BBF68_0x1bbf68");
#endif

    switch (ctx->pc) {
        case 0x1bbf84u: goto label_1bbf84;
        case 0x1bbf94u: goto label_1bbf94;
        case 0x1bbfc0u: goto label_1bbfc0;
        default: break;
    }

    ctx->pc = 0x1bbf68u;

    // 0x1bbf68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bbf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bbf6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bbf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bbf74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bbf74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbf78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bbf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bbf7c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1BBF7Cu;
    SET_GPR_U32(ctx, 31, 0x1BBF84u);
    ctx->pc = 0x1BBF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF7Cu;
    // 0x1bbf80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1BBF7Cu, 0x1BBF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF84u;
label_1bbf84:
    // 0x1bbf84: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1bbf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bbf88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf8c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1BBF8Cu;
    SET_GPR_U32(ctx, 31, 0x1BBF94u);
    ctx->pc = 0x1BBF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF8Cu;
    // 0x1bbf90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1BBF8Cu, 0x1BBF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF94u;
label_1bbf94:
    // 0x1bbf94: 0x82020624  lb          $v0, 0x624($s0)
    ctx->pc = 0x1bbf94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x1bbf98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbf9c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1bbf9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bbfa0: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x1BBFA0u;
    {
        const bool branch_taken_0x1bbfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbfa0) {
            ctx->pc = 0x1BBFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBFA0u;
            // 0x1bbfa4: 0x8e0205b8  lw          $v0, 0x5B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC070u;
            goto label_1bc070;
        }
    }
    ctx->pc = 0x1BBFA8u;
    // 0x1bbfa8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1bbfa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1bbfac: 0x1045002f  beq         $v0, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1BBFACu;
    {
        const bool branch_taken_0x1bbfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1BBFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFACu;
        // 0x1bbfb0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfac) {
            ctx->pc = 0x1BC06Cu;
            goto label_1bc06c;
        }
    }
    ctx->pc = 0x1BBFB4u;
    // 0x1bbfb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bbfb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bbfb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbfbc: 0x0  nop
    ctx->pc = 0x1bbfbcu;
    // NOP
label_1bbfc0:
    // 0x1bbfc0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bbfc4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1bbfc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1bbfc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBFC8u;
    {
        const bool branch_taken_0x1bbfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFC8u;
        // 0x1bbfcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfc8) {
            ctx->pc = 0x1BBFD8u;
            goto label_1bbfd8;
        }
    }
    ctx->pc = 0x1BBFD0u;
    // 0x1bbfd0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1bbfd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1bbfd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bbfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bbfd8:
    // 0x1bbfd8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1bbfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1bbfdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBFDCu;
    {
        const bool branch_taken_0x1bbfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFDCu;
        // 0x1bbfe0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfdc) {
            ctx->pc = 0x1BBFF4u;
            goto label_1bbff4;
        }
    }
    ctx->pc = 0x1BBFE4u;
    // 0x1bbfe4: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1bbfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1bbfe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bbfec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BBFECu;
    {
        const bool branch_taken_0x1bbfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFECu;
        // 0x1bbff0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfec) {
            ctx->pc = 0x1BBFF8u;
            goto label_1bbff8;
        }
    }
    ctx->pc = 0x1BBFF4u;
label_1bbff4:
    // 0x1bbff4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bbff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbff8:
    // 0x1bbff8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1bbff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1bbffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bbffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc000: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1bc000u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1bc004: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1bc004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1bc008: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1bc008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1bc00c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1bc00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1bc010: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC010u;
    {
        const bool branch_taken_0x1bc010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC010u;
        // 0x1bc014: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc010) {
            ctx->pc = 0x1BC020u;
            goto label_1bc020;
        }
    }
    ctx->pc = 0x1BC018u;
    // 0x1bc018: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1bc018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bc01c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bc01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bc020:
    // 0x1bc020: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1bc020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bc024: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC024u;
    {
        const bool branch_taken_0x1bc024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC024u;
        // 0x1bc028: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc024) {
            ctx->pc = 0x1BC03Cu;
            goto label_1bc03c;
        }
    }
    ctx->pc = 0x1BC02Cu;
    // 0x1bc02c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1bc02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1bc030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc034: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC034u;
    {
        const bool branch_taken_0x1bc034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC034u;
        // 0x1bc038: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc034) {
            ctx->pc = 0x1BC040u;
            goto label_1bc040;
        }
    }
    ctx->pc = 0x1BC03Cu;
label_1bc03c:
    // 0x1bc03c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bc03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc040:
    // 0x1bc040: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x1bc040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1bc044: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bc044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bc048: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1bc048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1bc04c: 0xac430154  sw          $v1, 0x154($v0)
    ctx->pc = 0x1bc04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 3));
    // 0x1bc050: 0x82020624  lb          $v0, 0x624($s0)
    ctx->pc = 0x1bc050u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x1bc054: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1bc054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bc058: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC058u;
    {
        const bool branch_taken_0x1bc058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC058u;
        // 0x1bc05c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc058) {
            ctx->pc = 0x1BC06Cu;
            goto label_1bc06c;
        }
    }
    ctx->pc = 0x1BC060u;
    // 0x1bc060: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1bc060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1bc064: 0x1445ffd6  bne         $v0, $a1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1BC064u;
    {
        const bool branch_taken_0x1bc064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1BC068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC064u;
        // 0x1bc068: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc064) {
            ctx->pc = 0x1BBFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbfc0;
        }
    }
    ctx->pc = 0x1BC06Cu;
label_1bc06c:
    // 0x1bc06c: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x1bc06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_1bc070:
    // 0x1bc070: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1bc070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1bc074: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1bc074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1bc078: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC078u;
    {
        const bool branch_taken_0x1bc078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC078u;
        // 0x1bc07c: 0xae0205b8  sw          $v0, 0x5B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc078) {
            ctx->pc = 0x1BC08Cu;
            goto label_1bc08c;
        }
    }
    ctx->pc = 0x1BC080u;
    // 0x1bc080: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bc080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc084: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bc084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bc088: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bc088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1bc08c:
    // 0x1bc08c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bc08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc098: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC098u;
        // 0x1bc09c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC0A0u;
}
