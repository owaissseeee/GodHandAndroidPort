#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: titlePressWait__5cR020
// Address: 0x79a050 - 0x79a498
void titlePressWait__5cR020_0x79a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("titlePressWait__5cR020_0x79a050");
#endif

    switch (ctx->pc) {
        case 0x79a0a8u: goto label_79a0a8;
        case 0x79a0c0u: goto label_79a0c0;
        case 0x79a0d0u: goto label_79a0d0;
        case 0x79a0dcu: goto label_79a0dc;
        case 0x79a0f4u: goto label_79a0f4;
        case 0x79a10cu: goto label_79a10c;
        case 0x79a124u: goto label_79a124;
        case 0x79a14cu: goto label_79a14c;
        case 0x79a16cu: goto label_79a16c;
        case 0x79a184u: goto label_79a184;
        case 0x79a194u: goto label_79a194;
        case 0x79a1a4u: goto label_79a1a4;
        case 0x79a1b4u: goto label_79a1b4;
        case 0x79a254u: goto label_79a254;
        case 0x79a274u: goto label_79a274;
        case 0x79a28cu: goto label_79a28c;
        case 0x79a2a4u: goto label_79a2a4;
        case 0x79a2c0u: goto label_79a2c0;
        case 0x79a2dcu: goto label_79a2dc;
        case 0x79a330u: goto label_79a330;
        case 0x79a384u: goto label_79a384;
        case 0x79a3a4u: goto label_79a3a4;
        case 0x79a3bcu: goto label_79a3bc;
        case 0x79a3fcu: goto label_79a3fc;
        case 0x79a460u: goto label_79a460;
        default: break;
    }

    ctx->pc = 0x79a050u;

    // 0x79a050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a054: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79a054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79a058: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a05c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79a05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a060: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a064: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79a064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79a068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a06c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x79a06cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x79a070: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x79a070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x79a074: 0x10400100  beqz        $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x79A074u;
    {
        const bool branch_taken_0x79a074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A074u;
        // 0x79a078: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a074) {
            ctx->pc = 0x79A478u;
            goto label_79a478;
        }
    }
    ctx->pc = 0x79A07Cu;
    // 0x79a07c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a080: 0x2442cb70  addiu       $v0, $v0, -0x3490
    ctx->pc = 0x79a080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953840));
    // 0x79a084: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a088: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79a088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a08c: 0x800008  jr          $a0
    ctx->pc = 0x79A08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79A094u: goto label_79a094;
            case 0x79A1E4u: goto label_79a1e4;
            case 0x79A234u: goto label_79a234;
            case 0x79A350u: goto label_79a350;
            case 0x79A3ECu: goto label_79a3ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A08Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79A094u;
label_79a094:
    // 0x79a094: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x79a094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x79a098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a09c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0a0: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79A0A0u;
    SET_GPR_U32(ctx, 31, 0x79A0A8u);
    ctx->pc = 0x79A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0A0u;
    // 0x79a0a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79A0A0u, 0x79A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0A8u;
label_79a0a8:
    // 0x79a0a8: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x79a0a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
    // 0x79a0ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a0b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a0b8: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79A0B8u;
    SET_GPR_U32(ctx, 31, 0x79A0C0u);
    ctx->pc = 0x79A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0B8u;
    // 0x79a0bc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79A0B8u, 0x79A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0C0u;
label_79a0c0:
    // 0x79a0c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0c8: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79A0C8u;
    SET_GPR_U32(ctx, 31, 0x79A0D0u);
    ctx->pc = 0x79A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0C8u;
    // 0x79a0cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79A0C8u, 0x79A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0D0u;
label_79a0d0:
    // 0x79a0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0d4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A0D4u;
    SET_GPR_U32(ctx, 31, 0x79A0DCu);
    ctx->pc = 0x79A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0D4u;
    // 0x79a0d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A0D4u, 0x79A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0DCu;
label_79a0dc:
    // 0x79a0dc: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a0e8: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x79a0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x79a0ec: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A0ECu;
    SET_GPR_U32(ctx, 31, 0x79A0F4u);
    ctx->pc = 0x79A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0ECu;
    // 0x79a0f0: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A0ECu, 0x79A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0F4u;
label_79a0f4:
    // 0x79a0f4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79a100: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x79a100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x79a104: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A104u;
    SET_GPR_U32(ctx, 31, 0x79A10Cu);
    ctx->pc = 0x79A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A104u;
    // 0x79a108: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A104u, 0x79A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A10Cu;
label_79a10c:
    // 0x79a10c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a114: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x79a114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a118: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x79a118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x79a11c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A11Cu;
    SET_GPR_U32(ctx, 31, 0x79A124u);
    ctx->pc = 0x79A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A11Cu;
    // 0x79a120: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A11Cu, 0x79A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A124u;
label_79a124:
    // 0x79a124: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a128: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79a128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79a12c: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x79a12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x79a130: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79a130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79a134: 0x8c827a34  lw          $v0, 0x7A34($a0)
    ctx->pc = 0x79a134u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x79a138: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x79a138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x79a13c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A13Cu;
    {
        const bool branch_taken_0x79a13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A13Cu;
        // 0x79a140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a13c) {
            ctx->pc = 0x79A164u;
            goto label_79a164;
        }
    }
    ctx->pc = 0x79A144u;
    // 0x79a144: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A144u;
    SET_GPR_U32(ctx, 31, 0x79A14Cu);
    ctx->pc = 0x79A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A144u;
    // 0x79a148: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A144u, 0x79A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A14Cu;
label_79a14c:
    // 0x79a14c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x79a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a150: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x79a150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x79a154: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79a154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79a158: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x79a158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x79a15c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A15Cu;
    {
        const bool branch_taken_0x79a15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A15Cu;
        // 0x79a160: 0xac44002c  sw          $a0, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a15c) {
            ctx->pc = 0x79A178u;
            goto label_79a178;
        }
    }
    ctx->pc = 0x79A164u;
label_79a164:
    // 0x79a164: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A164u;
    SET_GPR_U32(ctx, 31, 0x79A16Cu);
    ctx->pc = 0x79A168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A164u;
    // 0x79a168: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A164u, 0x79A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A16Cu;
label_79a16c:
    // 0x79a16c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a170: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x79a170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x79a174: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79a174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_79a178:
    // 0x79a178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a17c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A17Cu;
    SET_GPR_U32(ctx, 31, 0x79A184u);
    ctx->pc = 0x79A180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A17Cu;
    // 0x79a180: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A17Cu, 0x79A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A184u;
label_79a184:
    // 0x79a184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a188: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x79a188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a18c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A18Cu;
    SET_GPR_U32(ctx, 31, 0x79A194u);
    ctx->pc = 0x79A190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A18Cu;
    // 0x79a190: 0xa040002b  sb          $zero, 0x2B($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A18Cu, 0x79A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A194u;
label_79a194:
    // 0x79a194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a198: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79a198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a19c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A19Cu;
    SET_GPR_U32(ctx, 31, 0x79A1A4u);
    ctx->pc = 0x79A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A19Cu;
    // 0x79a1a0: 0xa040002b  sb          $zero, 0x2B($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A19Cu, 0x79A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1A4u;
label_79a1a4:
    // 0x79a1a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79a1ac: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A1ACu;
    SET_GPR_U32(ctx, 31, 0x79A1B4u);
    ctx->pc = 0x79A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1ACu;
    // 0x79a1b0: 0xa040002b  sb          $zero, 0x2B($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A1ACu, 0x79A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1B4u;
label_79a1b4:
    // 0x79a1b4: 0xa040002b  sb          $zero, 0x2B($v0)
    ctx->pc = 0x79a1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a1b8: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x79a1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a1bc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x79a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x79a1c0: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x79a1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x79a1c4: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x79a1c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a1c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x79a1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x79a1cc: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x79a1ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x79a1d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a1d4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x79a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x79a1d8: 0xa2450000  sb          $a1, 0x0($s2)
    ctx->pc = 0x79a1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x79a1dc: 0xa2440001  sb          $a0, 0x1($s2)
    ctx->pc = 0x79a1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79a1e0: 0xa2430002  sb          $v1, 0x2($s2)
    ctx->pc = 0x79a1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 3));
label_79a1e4:
    // 0x79a1e4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79a1e8: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x79a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x79a1ec: 0xdc430178  ld          $v1, 0x178($v0)
    ctx->pc = 0x79a1ecu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747618u));
    // 0x79a1f0: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x79A1F0u;
    {
        const bool branch_taken_0x79a1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a1f0) {
            ctx->pc = 0x79A1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A1F0u;
            // 0x79a1f4: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A1F8u;
            goto label_79a1f8;
        }
    }
    ctx->pc = 0x79A1F8u;
label_79a1f8:
    // 0x79a1f8: 0xdc4201a0  ld          $v0, 0x1A0($v0)
    ctx->pc = 0x79a1f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x79a1fc: 0x34038010  ori         $v1, $zero, 0x8010
    ctx->pc = 0x79a1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x79a200: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x79a200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x79a204: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79a204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79a208: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x79A208u;
    {
        const bool branch_taken_0x79a208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A208u;
        // 0x79a20c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a208) {
            ctx->pc = 0x79A47Cu;
            goto label_79a47c;
        }
    }
    ctx->pc = 0x79A210u;
    // 0x79a210: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x79a210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x79a214: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x79a214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a218: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x79a218u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x79a21c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a220: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x79a220u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a224: 0xa2440001  sb          $a0, 0x1($s2)
    ctx->pc = 0x79a224u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79a228: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x79a228u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a22c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x79A22Cu;
    {
        const bool branch_taken_0x79a22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A22Cu;
        // 0x79a230: 0xa2400003  sb          $zero, 0x3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a22c) {
            ctx->pc = 0x79A47Cu;
            goto label_79a47c;
        }
    }
    ctx->pc = 0x79A234u;
label_79a234:
    // 0x79a234: 0x3c01430c  lui         $at, 0x430C
    ctx->pc = 0x79a234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17164 << 16));
    // 0x79a238: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a23c: 0x26510080  addiu       $s1, $s2, 0x80
    ctx->pc = 0x79a23cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x79a240: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x79a240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x79a244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a248: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x79a248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x79a24c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A24Cu;
    SET_GPR_U32(ctx, 31, 0x79A254u);
    ctx->pc = 0x79A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A24Cu;
    // 0x79a250: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A24Cu, 0x79A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A254u;
label_79a254:
    // 0x79a254: 0x3c10dfff  lui         $s0, 0xDFFF
    ctx->pc = 0x79a254u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57343 << 16));
    // 0x79a258: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x79a258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x79a25c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a264: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a268: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x79a268u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x79a26c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A26Cu;
    SET_GPR_U32(ctx, 31, 0x79A274u);
    ctx->pc = 0x79A270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A26Cu;
    // 0x79a270: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A26Cu, 0x79A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A274u;
label_79a274:
    // 0x79a274: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a27c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a280: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x79a280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x79a284: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A284u;
    SET_GPR_U32(ctx, 31, 0x79A28Cu);
    ctx->pc = 0x79A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A284u;
    // 0x79a288: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A284u, 0x79A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A28Cu;
label_79a28c:
    // 0x79a28c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a294: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79a294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a298: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x79a298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x79a29c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A29Cu;
    SET_GPR_U32(ctx, 31, 0x79A2A4u);
    ctx->pc = 0x79A2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A29Cu;
    // 0x79a2a0: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A29Cu, 0x79A2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2A4u;
label_79a2a4:
    // 0x79a2a4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a2a8: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x79a2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x79a2ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79a2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a2b4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x79a2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x79a2b8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A2B8u;
    SET_GPR_U32(ctx, 31, 0x79A2C0u);
    ctx->pc = 0x79A2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2B8u;
    // 0x79a2bc: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A2B8u, 0x79A2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2C0u;
label_79a2c0:
    // 0x79a2c0: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x79a2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a2c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2c8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x79a2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x79a2cc: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x79a2ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x79a2d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a2d4: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x79A2D4u;
    SET_GPR_U32(ctx, 31, 0x79A2DCu);
    ctx->pc = 0x79A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2D4u;
    // 0x79a2d8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x79A2D4u, 0x79A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2DCu;
label_79a2dc:
    // 0x79a2dc: 0x3c014340  lui         $at, 0x4340
    ctx->pc = 0x79a2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17216 << 16));
    // 0x79a2e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a2e4: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x79a2e4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x79a2e8: 0x356bfffe  ori         $t3, $t3, 0xFFFE
    ctx->pc = 0x79a2e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65534);
    // 0x79a2ec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a2f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x79a2f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x79a2f4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a2f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2fc: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x79a2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x79a300: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a304: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a308: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79a308u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x79a30c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x79a30cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x79a310: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a310u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a314: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a314u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a318: 0xa203004f  sb          $v1, 0x4F($s0)
    ctx->pc = 0x79a318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a31c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x79a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x79a320: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x79a320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x79a324: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x79a324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x79a328: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A328u;
    SET_GPR_U32(ctx, 31, 0x79A330u);
    ctx->pc = 0x79A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A328u;
    // 0x79a32c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A328u, 0x79A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A330u;
label_79a330:
    // 0x79a330: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x79a330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x79a334: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x79a334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a338: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x79a338u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x79a33c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a340: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x79a340u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a344: 0xa2440001  sb          $a0, 0x1($s2)
    ctx->pc = 0x79a344u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79a348: 0xa2430002  sb          $v1, 0x2($s2)
    ctx->pc = 0x79a348u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a34c: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x79a34cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
label_79a350:
    // 0x79a350: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x79a350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x79a354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a358: 0x28430006  slti        $v1, $v0, 0x6
    ctx->pc = 0x79a358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x79a35c: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x79A35Cu;
    {
        const bool branch_taken_0x79a35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A35Cu;
        // 0x79a360: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a35c) {
            ctx->pc = 0x79A478u;
            goto label_79a478;
        }
    }
    ctx->pc = 0x79A364u;
    // 0x79a364: 0x3c01430c  lui         $at, 0x430C
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17164 << 16));
    // 0x79a368: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a36c: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x79a36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x79a370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a374: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79a374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a378: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x79a378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x79a37c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A37Cu;
    SET_GPR_U32(ctx, 31, 0x79A384u);
    ctx->pc = 0x79A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A37Cu;
    // 0x79a380: 0x3c112000  lui         $s1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A37Cu, 0x79A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A384u;
label_79a384:
    // 0x79a384: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x79a384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a388: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x79a388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x79a38c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79a38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79a390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a394: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79a394u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79a398: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a39c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A39Cu;
    SET_GPR_U32(ctx, 31, 0x79A3A4u);
    ctx->pc = 0x79A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A39Cu;
    // 0x79a3a0: 0xac46002c  sw          $a2, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A39Cu, 0x79A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A4u;
label_79a3a4:
    // 0x79a3a4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a3a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a3b0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x79a3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x79a3b4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A3B4u;
    SET_GPR_U32(ctx, 31, 0x79A3BCu);
    ctx->pc = 0x79A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3B4u;
    // 0x79a3b8: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A3B4u, 0x79A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3BCu;
label_79a3bc:
    // 0x79a3bc: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79a3c0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x79a3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x79a3c4: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79a3c8: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x79a3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a3cc: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x79a3ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x79a3d0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x79a3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a3d4: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x79a3d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x79a3d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a3dc: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x79a3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a3e0: 0xa2440001  sb          $a0, 0x1($s2)
    ctx->pc = 0x79a3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79a3e4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x79A3E4u;
    {
        const bool branch_taken_0x79a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E4u;
        // 0x79a3e8: 0xa2420002  sb          $v0, 0x2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3e4) {
            ctx->pc = 0x79A478u;
            goto label_79a478;
        }
    }
    ctx->pc = 0x79A3ECu;
label_79a3ec:
    // 0x79a3ec: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x79a3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x79a3f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79a3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a3f4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79A3F4u;
    SET_GPR_U32(ctx, 31, 0x79A3FCu);
    ctx->pc = 0x79A3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3F4u;
    // 0x79a3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79A3F4u, 0x79A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3FCu;
label_79a3fc:
    // 0x79a3fc: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x79a3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a400: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x79a400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x79a404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a408: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x79a408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x79a40c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a410: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x79a410u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x79a414: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x79a414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x79a418: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a41c: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x79a41cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x79a420: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x79a420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a424: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x79a424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x79a428: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x79a428u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a42c: 0x0  nop
    ctx->pc = 0x79a42cu;
    // NOP
    // 0x79a430: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x79A430u;
    {
        const bool branch_taken_0x79a430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A430u;
        // 0x79a434: 0xe6400028  swc1        $f0, 0x28($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a430) {
            ctx->pc = 0x79A478u;
            goto label_79a478;
        }
    }
    ctx->pc = 0x79A438u;
    // 0x79a438: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x79a43c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79a440: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x79a440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x79a444: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x79a444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x79a448: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a44c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a450: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x79a450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x79a454: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a458: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79A458u;
    SET_GPR_U32(ctx, 31, 0x79A460u);
    ctx->pc = 0x79A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A458u;
    // 0x79a45c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79A458u, 0x79A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A460u;
label_79a460:
    // 0x79a460: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x79a460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a464: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a468: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x79a468u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a46c: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x79a46cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a470: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x79a470u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a474: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x79a474u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_79a478:
    // 0x79a478: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79a47c:
    // 0x79a47c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a47cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a480: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79a480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a484: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79a484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a48c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A48Cu;
        // 0x79a490: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A494u;
    // 0x79a494: 0x0  nop
    ctx->pc = 0x79a494u;
    // NOP
    ctx->pc = 0x79a498u;
}
} // namespace gh_r020
