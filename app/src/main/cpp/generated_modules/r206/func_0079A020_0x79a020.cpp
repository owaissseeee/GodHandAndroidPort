#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: func_0079A020
// Address: 0x79a020 - 0x79a1d0
void func_0079A020_0x79a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A020_0x79a020");
#endif

    switch (ctx->pc) {
        case 0x79a054u: goto label_79a054;
        case 0x79a06cu: goto label_79a06c;
        case 0x79a08cu: goto label_79a08c;
        case 0x79a0a8u: goto label_79a0a8;
        case 0x79a0b8u: goto label_79a0b8;
        case 0x79a0c0u: goto label_79a0c0;
        case 0x79a0d0u: goto label_79a0d0;
        case 0x79a0dcu: goto label_79a0dc;
        case 0x79a0e8u: goto label_79a0e8;
        case 0x79a0f4u: goto label_79a0f4;
        case 0x79a0fcu: goto label_79a0fc;
        case 0x79a11cu: goto label_79a11c;
        case 0x79a128u: goto label_79a128;
        case 0x79a154u: goto label_79a154;
        case 0x79a178u: goto label_79a178;
        case 0x79a184u: goto label_79a184;
        case 0x79a198u: goto label_79a198;
        case 0x79a1a0u: goto label_79a1a0;
        case 0x79a1acu: goto label_79a1ac;
        default: break;
    }

    ctx->pc = 0x79a020u;

    // 0x79a020: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79a020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79a024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a028: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79a028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79a02c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79a02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79a030: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x79a030u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x79a034: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x79a034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a038: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79a038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79a03c: 0x26108658  addiu       $s0, $s0, -0x79A8
    ctx->pc = 0x79a03cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x79a040: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79a040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79a044: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79a044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79a048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79a04c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A04Cu;
    SET_GPR_U32(ctx, 31, 0x79A054u);
    ctx->pc = 0x79A050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A04Cu;
    // 0x79a050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A04Cu, 0x79A054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A054u;
label_79a054:
    // 0x79a054: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x79a054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a05c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a060: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x79a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x79a064: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A064u;
    SET_GPR_U32(ctx, 31, 0x79A06Cu);
    ctx->pc = 0x79A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A064u;
    // 0x79a068: 0xa3a30000  sb          $v1, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A064u, 0x79A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A06Cu;
label_79a06c:
    // 0x79a06c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a070: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x79a070u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x79a074: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A074u;
    {
        const bool branch_taken_0x79a074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A074u;
        // 0x79a078: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a074) {
            ctx->pc = 0x79A094u;
            goto label_79a094;
        }
    }
    ctx->pc = 0x79A07Cu;
    // 0x79a07c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a080: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a080u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a084: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A084u;
    SET_GPR_U32(ctx, 31, 0x79A08Cu);
    ctx->pc = 0x79A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A084u;
    // 0x79a088: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A084u, 0x79A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A08Cu;
label_79a08c:
    // 0x79a08c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x79A08Cu;
    {
        const bool branch_taken_0x79a08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A08Cu;
        // 0x79a090: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a08c) {
            ctx->pc = 0x79A1B0u;
            goto label_79a1b0;
        }
    }
    ctx->pc = 0x79A094u;
label_79a094:
    // 0x79a094: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x79a094u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x79a098: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x79a098u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x79a09c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A09Cu;
    {
        const bool branch_taken_0x79a09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A09Cu;
        // 0x79a0a0: 0x3c110060  lui         $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a09c) {
            ctx->pc = 0x79A0B8u;
            goto label_79a0b8;
        }
    }
    ctx->pc = 0x79A0A4u;
    // 0x79a0a4: 0x0  nop
    ctx->pc = 0x79a0a4u;
    // NOP
label_79a0a8:
    // 0x79a0a8: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a0ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a0b0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A0B0u;
    SET_GPR_U32(ctx, 31, 0x79A0B8u);
    ctx->pc = 0x79A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0B0u;
    // 0x79a0b4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A0B0u, 0x79A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0B8u;
label_79a0b8:
    // 0x79a0b8: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x79A0B8u;
    SET_GPR_U32(ctx, 31, 0x79A0C0u);
    ctx->pc = 0x79A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0B8u;
    // 0x79a0bc: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79A0B8u, 0x79A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0C0u;
label_79a0c0:
    // 0x79a0c0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A0C0u;
    {
        const bool branch_taken_0x79a0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0C0u;
        // 0x79a0c4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0c0) {
            ctx->pc = 0x79A0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0a8;
        }
    }
    ctx->pc = 0x79A0C8u;
    // 0x79a0c8: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A0C8u;
    SET_GPR_U32(ctx, 31, 0x79A0D0u);
    ctx->pc = 0x79A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0C8u;
    // 0x79a0cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A0C8u, 0x79A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0D0u;
label_79a0d0:
    // 0x79a0d0: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a0d4: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A0D4u;
    SET_GPR_U32(ctx, 31, 0x79A0DCu);
    ctx->pc = 0x79A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0D4u;
    // 0x79a0d8: 0x2645ac68  addiu       $a1, $s2, -0x5398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A0D4u, 0x79A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0DCu;
label_79a0dc:
    // 0x79a0dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0e0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79A0E0u;
    SET_GPR_U32(ctx, 31, 0x79A0E8u);
    ctx->pc = 0x79A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0E0u;
    // 0x79a0e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A0E0u, 0x79A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0E8u;
label_79a0e8:
    // 0x79a0e8: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79a0e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a0ec: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A0ECu;
    SET_GPR_U32(ctx, 31, 0x79A0F4u);
    ctx->pc = 0x79A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0ECu;
    // 0x79a0f0: 0x26646ab0  addiu       $a0, $s3, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A0ECu, 0x79A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0F4u;
label_79a0f4:
    // 0x79a0f4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A0F4u;
    SET_GPR_U32(ctx, 31, 0x79A0FCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A0F4u, 0x79A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0FCu;
label_79a0fc:
    // 0x79a0fc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a100: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a104: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79a108: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79a10c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a110: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a114: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79A114u;
    SET_GPR_U32(ctx, 31, 0x79A11Cu);
    ctx->pc = 0x79A118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A114u;
    // 0x79a118: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A114u, 0x79A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A11Cu;
label_79a11c:
    // 0x79a11c: 0x26848658  addiu       $a0, $s4, -0x79A8
    ctx->pc = 0x79a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    // 0x79a120: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A120u;
    SET_GPR_U32(ctx, 31, 0x79A128u);
    ctx->pc = 0x79A124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A120u;
    // 0x79a124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A120u, 0x79A128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A128u;
label_79a128:
    // 0x79a128: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a12c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x79a12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x79a130: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x79A130u;
    {
        const bool branch_taken_0x79a130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A130u;
        // 0x79a134: 0x2624ee00  addiu       $a0, $s1, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a130) {
            ctx->pc = 0x79A15Cu;
            goto label_79a15c;
        }
    }
    ctx->pc = 0x79A138u;
    // 0x79a138: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a13c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79a13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x79a140: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a144: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a148: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a148u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a14c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A14Cu;
    SET_GPR_U32(ctx, 31, 0x79A154u);
    ctx->pc = 0x79A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A14Cu;
    // 0x79a150: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A14Cu, 0x79A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A154u;
label_79a154:
    // 0x79a154: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79A154u;
    {
        const bool branch_taken_0x79a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A154u;
        // 0x79a158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a154) {
            ctx->pc = 0x79A17Cu;
            goto label_79a17c;
        }
    }
    ctx->pc = 0x79A15Cu;
label_79a15c:
    // 0x79a15c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a160: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x79a160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x79a164: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a168: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a16c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a16cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a170: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A170u;
    SET_GPR_U32(ctx, 31, 0x79A178u);
    ctx->pc = 0x79A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A170u;
    // 0x79a174: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A170u, 0x79A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A178u;
label_79a178:
    // 0x79a178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a17c:
    // 0x79a17c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A17Cu;
    SET_GPR_U32(ctx, 31, 0x79A184u);
    ctx->pc = 0x79A180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A17Cu;
    // 0x79a180: 0x26848658  addiu       $a0, $s4, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A17Cu, 0x79A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A184u;
label_79a184:
    // 0x79a184: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a188: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79a188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a18c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x79a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x79a190: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A190u;
    SET_GPR_U32(ctx, 31, 0x79A198u);
    ctx->pc = 0x79A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A190u;
    // 0x79a194: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A190u, 0x79A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A198u;
label_79a198:
    // 0x79a198: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A198u;
    SET_GPR_U32(ctx, 31, 0x79A1A0u);
    ctx->pc = 0x79A19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A198u;
    // 0x79a19c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A198u, 0x79A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1A0u;
label_79a1a0:
    // 0x79a1a0: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a1a4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A1A4u;
    SET_GPR_U32(ctx, 31, 0x79A1ACu);
    ctx->pc = 0x79A1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1A4u;
    // 0x79a1a8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A1A4u, 0x79A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1ACu;
label_79a1ac:
    // 0x79a1ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79a1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79a1b0:
    // 0x79a1b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79a1b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a1b4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79a1b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a1b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79a1b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a1bc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79a1bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a1c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x79A1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1C4u;
        // 0x79a1c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A1CCu;
    // 0x79a1cc: 0x0  nop
    ctx->pc = 0x79a1ccu;
    // NOP
    ctx->pc = 0x79a1d0u;
}
} // namespace gh_r206
