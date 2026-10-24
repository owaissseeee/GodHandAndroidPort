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

// Function: func_0019CFE0
// Address: 0x19cfe0 - 0x19d1e8
void func_0019CFE0_0x19cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019CFE0_0x19cfe0");
#endif

    switch (ctx->pc) {
        case 0x19d00cu: goto label_19d00c;
        case 0x19d020u: goto label_19d020;
        case 0x19d030u: goto label_19d030;
        case 0x19d040u: goto label_19d040;
        case 0x19d050u: goto label_19d050;
        case 0x19d088u: goto label_19d088;
        case 0x19d138u: goto label_19d138;
        case 0x19d1a0u: goto label_19d1a0;
        case 0x19d1b0u: goto label_19d1b0;
        default: break;
    }

    ctx->pc = 0x19cfe0u;

    // 0x19cfe0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19cfe4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x19cfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x19cfe8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x19cfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x19cfec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19cfecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cff0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x19cff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x19cff4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19cff8: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x19cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x19cffc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19CFFCu;
    {
        const bool branch_taken_0x19cffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cffc) {
            ctx->pc = 0x19D000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CFFCu;
            // 0x19d000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D010u;
            goto label_19d010;
        }
    }
    ctx->pc = 0x19D004u;
    // 0x19d004: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x19D004u;
    SET_GPR_U32(ctx, 31, 0x19D00Cu);
    ctx->pc = 0x19D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D004u;
    // 0x19d008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x19D004u, 0x19D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D00Cu;
label_19d00c:
    // 0x19d00c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19d010:
    // 0x19d010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19d010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19d014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d018: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19D018u;
    SET_GPR_U32(ctx, 31, 0x19D020u);
    ctx->pc = 0x19D01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D018u;
    // 0x19d01c: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19D018u, 0x19D020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D020u;
label_19d020:
    // 0x19d020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d024: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x19d024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19d028: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19D028u;
    SET_GPR_U32(ctx, 31, 0x19D030u);
    ctx->pc = 0x19D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D028u;
    // 0x19d02c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19D028u, 0x19D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D030u;
label_19d030:
    // 0x19d030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19d034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d038: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x19D038u;
    SET_GPR_U32(ctx, 31, 0x19D040u);
    ctx->pc = 0x19D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D038u;
    // 0x19d03c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x19D038u, 0x19D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D040u;
label_19d040:
    // 0x19d040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d044: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x19d044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19d048: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x19D048u;
    SET_GPR_U32(ctx, 31, 0x19D050u);
    ctx->pc = 0x19D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D048u;
    // 0x19d04c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x19D048u, 0x19D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D050u;
label_19d050:
    // 0x19d050: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x19d050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x19d054: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x19d054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x19d058: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x19d058u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19d05c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x19d05cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19d060: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19d060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19d064: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19d064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d068: 0x10850031  beq         $a0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x19D068u;
    {
        const bool branch_taken_0x19d068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x19D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D068u;
        // 0x19d06c: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d068) {
            ctx->pc = 0x19D130u;
            goto label_19d130;
        }
    }
    ctx->pc = 0x19D070u;
    // 0x19d070: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19d070u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d074: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x19d074u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x19d078: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x19d078u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x19d07c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19d07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d080: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x19d080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19d084: 0x0  nop
    ctx->pc = 0x19d084u;
    // NOP
label_19d088:
    // 0x19d088: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19d088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d08c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x19d08cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x19d090: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D090u;
    {
        const bool branch_taken_0x19d090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D090u;
        // 0x19d094: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d090) {
            ctx->pc = 0x19D0A0u;
            goto label_19d0a0;
        }
    }
    ctx->pc = 0x19D098u;
    // 0x19d098: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x19d098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19d09c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19d0a0:
    // 0x19d0a0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x19d0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19d0a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19D0A4u;
    {
        const bool branch_taken_0x19d0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0A4u;
        // 0x19d0a8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0a4) {
            ctx->pc = 0x19D0BCu;
            goto label_19d0bc;
        }
    }
    ctx->pc = 0x19D0ACu;
    // 0x19d0ac: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x19d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x19d0b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d0b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19D0B4u;
    {
        const bool branch_taken_0x19d0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0B4u;
        // 0x19d0b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0b4) {
            ctx->pc = 0x19D0C0u;
            goto label_19d0c0;
        }
    }
    ctx->pc = 0x19D0BCu;
label_19d0bc:
    // 0x19d0bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19d0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d0c0:
    // 0x19d0c0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x19d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19d0c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19d0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0c8: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x19d0c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x19d0cc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x19d0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x19d0d0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x19d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x19d0d4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19d0d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19d0d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D0D8u;
    {
        const bool branch_taken_0x19d0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0D8u;
        // 0x19d0dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0d8) {
            ctx->pc = 0x19D0E8u;
            goto label_19d0e8;
        }
    }
    ctx->pc = 0x19D0E0u;
    // 0x19d0e0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x19d0e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19d0e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19d0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19d0e8:
    // 0x19d0e8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x19d0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19d0ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19D0ECu;
    {
        const bool branch_taken_0x19d0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0ECu;
        // 0x19d0f0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0ec) {
            ctx->pc = 0x19D104u;
            goto label_19d104;
        }
    }
    ctx->pc = 0x19D0F4u;
    // 0x19d0f4: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x19d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x19d0f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d0fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19D0FCu;
    {
        const bool branch_taken_0x19d0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0FCu;
        // 0x19d100: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0fc) {
            ctx->pc = 0x19D108u;
            goto label_19d108;
        }
    }
    ctx->pc = 0x19D104u;
label_19d104:
    // 0x19d104: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19d104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d108:
    // 0x19d108: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x19d108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19d10c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19d10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19d110: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19d110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19d114: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x19d114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19d118: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x19d118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x19d11c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D11Cu;
    {
        const bool branch_taken_0x19d11c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D11Cu;
        // 0x19d120: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d11c) {
            ctx->pc = 0x19D130u;
            goto label_19d130;
        }
    }
    ctx->pc = 0x19D124u;
    // 0x19d124: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19d124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19d128: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x19D128u;
    {
        const bool branch_taken_0x19d128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x19d128) {
            ctx->pc = 0x19D12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D128u;
            // 0x19d12c: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d088;
        }
    }
    ctx->pc = 0x19D130u;
label_19d130:
    // 0x19d130: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x19D130u;
    SET_GPR_U32(ctx, 31, 0x19D138u);
    ctx->pc = 0x19D134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D130u;
    // 0x19d134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x19D130u, 0x19D138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D138u;
label_19d138:
    // 0x19d138: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x19d138u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d13c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x19d13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19d140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19d144: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19d144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d148: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19d148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19d14c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19d150: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19d150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19d154: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x19d154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19d158: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x19d158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x19d15c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19d15cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x19d160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d164: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x19d164u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d168: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x19d168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19d16c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19d16cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x19d170: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x19d170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x19d174: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x19d174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19d178: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19d178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d17c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19d17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d180: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x19d180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x19d184: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x19d184u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x19d188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d18c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19d18cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19d190: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19d190u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19d194: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x19D194u;
    {
        const bool branch_taken_0x19d194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x19D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D194u;
        // 0x19d198: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d194) {
            ctx->pc = 0x19D1CCu;
            goto label_19d1cc;
        }
    }
    ctx->pc = 0x19D19Cu;
    // 0x19d19c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19d19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19d1a0:
    // 0x19d1a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1a4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x19d1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19d1a8: 0xc067368  jal         func_19CDA0
    ctx->pc = 0x19D1A8u;
    SET_GPR_U32(ctx, 31, 0x19D1B0u);
    ctx->pc = 0x19D1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D1A8u;
    // 0x19d1ac: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDA0u, 0x19D1A8u, 0x19D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D1B0u;
label_19d1b0:
    // 0x19d1b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19d1b4: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x19d1b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19d1b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19D1B8u;
    {
        const bool branch_taken_0x19d1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d1b8) {
            ctx->pc = 0x19D1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D1B8u;
            // 0x19d1bc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D1D0u;
            goto label_19d1d0;
        }
    }
    ctx->pc = 0x19D1C0u;
    // 0x19d1c0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19d1c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19d1c4: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19D1C4u;
    {
        const bool branch_taken_0x19d1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x19D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1C4u;
        // 0x19d1c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1c4) {
            ctx->pc = 0x19D1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d1a0;
        }
    }
    ctx->pc = 0x19D1CCu;
label_19d1cc:
    // 0x19d1cc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x19d1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19d1d0:
    // 0x19d1d0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x19d1d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d1d4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x19d1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d1d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19d1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x19D1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1DCu;
        // 0x19d1e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D1E4u;
    // 0x19d1e4: 0x0  nop
    ctx->pc = 0x19d1e4u;
    // NOP
    ctx->pc = 0x19d1e8u;
}
