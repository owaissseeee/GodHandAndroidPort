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

// Function: func_0032A018
// Address: 0x32a018 - 0x32a148
void func_0032A018_0x32a018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A018_0x32a018");
#endif

    switch (ctx->pc) {
        case 0x32a05cu: goto label_32a05c;
        case 0x32a068u: goto label_32a068;
        case 0x32a074u: goto label_32a074;
        case 0x32a084u: goto label_32a084;
        case 0x32a0bcu: goto label_32a0bc;
        case 0x32a0c8u: goto label_32a0c8;
        case 0x32a0d4u: goto label_32a0d4;
        default: break;
    }

    ctx->pc = 0x32a018u;

    // 0x32a018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a01c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32a01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32a020: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x32a020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a024: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32a024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32a028: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32a028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a02c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32a02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32a030: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32a030u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a034: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32a034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32a038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32a038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32a03c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x32a03cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x32a040: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x32a040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32a044: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x32a044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x32a048: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x32a048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x32a04c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32A04Cu;
    {
        const bool branch_taken_0x32a04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A04Cu;
        // 0x32a050: 0x31e03  sra         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a04c) {
            ctx->pc = 0x32A0A8u;
            goto label_32a0a8;
        }
    }
    ctx->pc = 0x32A054u;
    // 0x32a054: 0xc0c9de2  jal         func_327788
    ctx->pc = 0x32A054u;
    SET_GPR_U32(ctx, 31, 0x32A05Cu);
    ctx->pc = 0x32A058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A054u;
    // 0x32a058: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327788u, 0x32A054u, 0x32A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A05Cu;
label_32a05c:
    // 0x32a05c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32a060: 0xc0c9dc4  jal         func_327710
    ctx->pc = 0x32A060u;
    SET_GPR_U32(ctx, 31, 0x32A068u);
    ctx->pc = 0x32A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A060u;
    // 0x32a064: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327710u, 0x32A060u, 0x32A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A068u;
label_32a068:
    // 0x32a068: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x32a068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x32a06c: 0xc0c98d6  jal         func_326358
    ctx->pc = 0x32A06Cu;
    SET_GPR_U32(ctx, 31, 0x32A074u);
    ctx->pc = 0x32A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A06Cu;
    // 0x32a070: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326358u, 0x32A06Cu, 0x32A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A074u;
label_32a074:
    // 0x32a074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32a074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32a078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a07c: 0xc0cab6a  jal         func_32ADA8
    ctx->pc = 0x32A07Cu;
    SET_GPR_U32(ctx, 31, 0x32A084u);
    ctx->pc = 0x32A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A07Cu;
    // 0x32a080: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ADA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ADA8u, 0x32A07Cu, 0x32A084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A084u;
label_32a084:
    // 0x32a084: 0x8e4300a8  lw          $v1, 0xA8($s2)
    ctx->pc = 0x32a084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x32a088: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x32a088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x32a08c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x32a08cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a090: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x32a090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a094: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x32a094u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x32a098: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x32a098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x32a09c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x32A09Cu;
    {
        const bool branch_taken_0x32a09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A09Cu;
        // 0x32a0a0: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a09c) {
            ctx->pc = 0x32A110u;
            goto label_32a110;
        }
    }
    ctx->pc = 0x32A0A4u;
    // 0x32a0a4: 0x0  nop
    ctx->pc = 0x32a0a4u;
    // NOP
label_32a0a8:
    // 0x32a0a8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32a0ac: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32A0ACu;
    {
        const bool branch_taken_0x32a0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32a0ac) {
            ctx->pc = 0x32A0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A0ACu;
            // 0x32a0b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A108u;
            goto label_32a108;
        }
    }
    ctx->pc = 0x32A0B4u;
    // 0x32a0b4: 0xc0c9dfa  jal         func_3277E8
    ctx->pc = 0x32A0B4u;
    SET_GPR_U32(ctx, 31, 0x32A0BCu);
    ctx->pc = 0x32A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0B4u;
    // 0x32a0b8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277E8u, 0x32A0B4u, 0x32A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0BCu;
label_32a0bc:
    // 0x32a0bc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32a0c0: 0xc0c9de2  jal         func_327788
    ctx->pc = 0x32A0C0u;
    SET_GPR_U32(ctx, 31, 0x32A0C8u);
    ctx->pc = 0x32A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0C0u;
    // 0x32a0c4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327788u, 0x32A0C0u, 0x32A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0C8u;
label_32a0c8:
    // 0x32a0c8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32a0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32a0cc: 0xc0c9dee  jal         func_3277B8
    ctx->pc = 0x32A0CCu;
    SET_GPR_U32(ctx, 31, 0x32A0D4u);
    ctx->pc = 0x32A0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0CCu;
    // 0x32a0d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277B8u, 0x32A0CCu, 0x32A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0D4u;
label_32a0d4:
    // 0x32a0d4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x32a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32a0d8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x32a0d8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32a0dc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32A0DCu;
    {
        const bool branch_taken_0x32a0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a0dc) {
            ctx->pc = 0x32A0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A0DCu;
            // 0x32a0e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A0E4u;
            goto label_32a0e4;
        }
    }
    ctx->pc = 0x32A0E4u;
label_32a0e4:
    // 0x32a0e4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x32a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32a0e8: 0x1812  mflo        $v1
    ctx->pc = 0x32a0e8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x32a0ec: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x32a0ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x32a0f0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x32a0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x32a0f4: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x32a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x32a0f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32a0fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32A0FCu;
    {
        const bool branch_taken_0x32a0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0FCu;
        // 0x32a100: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a0fc) {
            ctx->pc = 0x32A110u;
            goto label_32a110;
        }
    }
    ctx->pc = 0x32A104u;
    // 0x32a104: 0x0  nop
    ctx->pc = 0x32a104u;
    // NOP
label_32a108:
    // 0x32a108: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x32a108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x32a10c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_32a110:
    // 0x32a110: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x32a110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x32a114: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x32a114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32a118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32a118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a11c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32a120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32a120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32a124: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x32a124u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x32a128: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32a128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a12c: 0x4180b  movn        $v1, $zero, $a0
    ctx->pc = 0x32a12cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x32a130: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32a130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a134: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x32a134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x32a138: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32a138u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32a13c: 0x3e00008  jr          $ra
    ctx->pc = 0x32A13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A13Cu;
        // 0x32a140: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A144u;
    // 0x32a144: 0x0  nop
    ctx->pc = 0x32a144u;
    // NOP
    ctx->pc = 0x32a148u;
}
