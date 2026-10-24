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

// Function: func_0023F028
// Address: 0x23f028 - 0x23f5c8
void func_0023F028_0x23f028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023F028_0x23f028");
#endif

    switch (ctx->pc) {
        case 0x23f108u: goto label_23f108;
        case 0x23f184u: goto label_23f184;
        case 0x23f1b4u: goto label_23f1b4;
        case 0x23f1d4u: goto label_23f1d4;
        case 0x23f1f0u: goto label_23f1f0;
        case 0x23f1fcu: goto label_23f1fc;
        case 0x23f228u: goto label_23f228;
        case 0x23f234u: goto label_23f234;
        case 0x23f290u: goto label_23f290;
        case 0x23f2a0u: goto label_23f2a0;
        case 0x23f2acu: goto label_23f2ac;
        case 0x23f2f4u: goto label_23f2f4;
        case 0x23f2fcu: goto label_23f2fc;
        case 0x23f380u: goto label_23f380;
        case 0x23f3c4u: goto label_23f3c4;
        case 0x23f3fcu: goto label_23f3fc;
        case 0x23f498u: goto label_23f498;
        case 0x23f4d0u: goto label_23f4d0;
        case 0x23f4fcu: goto label_23f4fc;
        case 0x23f528u: goto label_23f528;
        case 0x23f53cu: goto label_23f53c;
        case 0x23f568u: goto label_23f568;
        case 0x23f574u: goto label_23f574;
        case 0x23f59cu: goto label_23f59c;
        default: break;
    }

    ctx->pc = 0x23f028u;

    // 0x23f028: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23f028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23f02c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x23f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x23f030: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x23f030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x23f034: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23f034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23f038: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23f038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f03c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23f03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23f040: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23f040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23f044: 0x244264f0  addiu       $v0, $v0, 0x64F0
    ctx->pc = 0x23f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x23f048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23f048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23f04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f054: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x23f054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f058: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x23f058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23f05c: 0xa0430540  sb          $v1, 0x540($v0)
    ctx->pc = 0x23f05cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x586A30u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x586A30u, _value); } while (0);
    // 0x23f060: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x23f060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23f064: 0x10710051  beq         $v1, $s1, . + 4 + (0x51 << 2)
    ctx->pc = 0x23F064u;
    {
        const bool branch_taken_0x23f064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x23F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F064u;
        // 0x23f068: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f064) {
            ctx->pc = 0x23F1ACu;
            goto label_23f1ac;
        }
    }
    ctx->pc = 0x23F06Cu;
    // 0x23f06c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F06Cu;
    {
        const bool branch_taken_0x23f06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F06Cu;
        // 0x23f070: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f06c) {
            ctx->pc = 0x23F084u;
            goto label_23f084;
        }
    }
    ctx->pc = 0x23F074u;
    // 0x23f074: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23F074u;
    {
        const bool branch_taken_0x23f074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f074) {
            ctx->pc = 0x23F078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F074u;
            // 0x23f078: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F09Cu;
            goto label_23f09c;
        }
    }
    ctx->pc = 0x23F07Cu;
    // 0x23f07c: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x23F07Cu;
    {
        const bool branch_taken_0x23f07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F07Cu;
        // 0x23f080: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f07c) {
            ctx->pc = 0x23F578u;
            goto label_23f578;
        }
    }
    ctx->pc = 0x23F084u;
label_23f084:
    // 0x23f084: 0x10620106  beq         $v1, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x23F084u;
    {
        const bool branch_taken_0x23f084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F084u;
        // 0x23f088: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f084) {
            ctx->pc = 0x23F4A0u;
            goto label_23f4a0;
        }
    }
    ctx->pc = 0x23F08Cu;
    // 0x23f08c: 0x10620119  beq         $v1, $v0, . + 4 + (0x119 << 2)
    ctx->pc = 0x23F08Cu;
    {
        const bool branch_taken_0x23f08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23f08c) {
            ctx->pc = 0x23F4F4u;
            goto label_23f4f4;
        }
    }
    ctx->pc = 0x23F094u;
    // 0x23f094: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x23F094u;
    {
        const bool branch_taken_0x23f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F094u;
        // 0x23f098: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f094) {
            ctx->pc = 0x23F578u;
            goto label_23f578;
        }
    }
    ctx->pc = 0x23F09Cu;
label_23f09c:
    // 0x23f09c: 0x2463fde6  addiu       $v1, $v1, -0x21A
    ctx->pc = 0x23f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966758));
    // 0x23f0a0: 0x2c620041  sltiu       $v0, $v1, 0x41
    ctx->pc = 0x23f0a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x23f0a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F0A4u;
    {
        const bool branch_taken_0x23f0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0A4u;
        // 0x23f0a8: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0a4) {
            ctx->pc = 0x23F0C8u;
            goto label_23f0c8;
        }
    }
    ctx->pc = 0x23F0ACu;
    // 0x23f0ac: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x23f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x23f0b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f0b4: 0x2442b930  addiu       $v0, $v0, -0x46D0
    ctx->pc = 0x23f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949168));
    // 0x23f0b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f0bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f0c0: 0x800008  jr          $a0
    ctx->pc = 0x23F0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F0C8u: goto label_23f0c8;
            case 0x23F0E4u: goto label_23f0e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F0C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23F0C8u;
label_23f0c8:
    // 0x23f0c8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23f0cc: 0x8c43041c  lw          $v1, 0x41C($v0)
    ctx->pc = 0x23f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1052)));
    // 0x23f0d0: 0x8c440420  lw          $a0, 0x420($v0)
    ctx->pc = 0x23f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1056)));
    // 0x23f0d4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23f0d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f0d8: 0xa6000568  sh          $zero, 0x568($s0)
    ctx->pc = 0x23f0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
    // 0x23f0dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23F0DCu;
    {
        const bool branch_taken_0x23f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0DCu;
        // 0x23f0e0: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0dc) {
            ctx->pc = 0x23F100u;
            goto label_23f100;
        }
    }
    ctx->pc = 0x23F0E4u;
label_23f0e4:
    // 0x23f0e4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23f0e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f0ec: 0x8c441428  lw          $a0, 0x1428($v0)
    ctx->pc = 0x23f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5160)));
    // 0x23f0f0: 0x8c45142c  lw          $a1, 0x142C($v0)
    ctx->pc = 0x23f0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5164)));
    // 0x23f0f4: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x23f0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x23f0f8: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x23f0f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23f0fc: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x23f0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_23f100:
    // 0x23f100: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23F100u;
    SET_GPR_U32(ctx, 31, 0x23F108u);
    ctx->pc = 0x23F104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F100u;
    // 0x23f104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23F100u, 0x23F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F108u;
label_23f108:
    // 0x23f108: 0x8e0317d0  lw          $v1, 0x17D0($s0)
    ctx->pc = 0x23f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6096)));
    // 0x23f10c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23f10cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23f110: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f114: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23f114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f118: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x23f118u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x23f11c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23F11Cu;
    {
        const bool branch_taken_0x23f11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f11c) {
            ctx->pc = 0x23F120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F11Cu;
            // 0x23f120: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F124u;
            goto label_23f124;
        }
    }
    ctx->pc = 0x23F124u;
label_23f124:
    // 0x23f124: 0x1810  mfhi        $v1
    ctx->pc = 0x23f124u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x23f128: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F128u;
    {
        const bool branch_taken_0x23f128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x23f128) {
            ctx->pc = 0x23F14Cu;
            goto label_23f14c;
        }
    }
    ctx->pc = 0x23F130u;
    // 0x23f130: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F130u;
    {
        const bool branch_taken_0x23f130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F130u;
        // 0x23f134: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f130) {
            ctx->pc = 0x23F140u;
            goto label_23f140;
        }
    }
    ctx->pc = 0x23F138u;
    // 0x23f138: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F138u;
    {
        const bool branch_taken_0x23f138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23f138) {
            ctx->pc = 0x23F13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F138u;
            // 0x23f13c: 0x86020568  lh          $v0, 0x568($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F15Cu;
            goto label_23f15c;
        }
    }
    ctx->pc = 0x23F140u;
label_23f140:
    // 0x23f140: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23f140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f144: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23F144u;
    {
        const bool branch_taken_0x23f144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F144u;
        // 0x23f148: 0x86020568  lh          $v0, 0x568($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f144) {
            ctx->pc = 0x23F164u;
            goto label_23f164;
        }
    }
    ctx->pc = 0x23F14Cu;
label_23f14c:
    // 0x23f14c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x23f14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x23f150: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23f150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f154: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23F154u;
    {
        const bool branch_taken_0x23f154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F154u;
        // 0x23f158: 0x86020568  lh          $v0, 0x568($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f154) {
            ctx->pc = 0x23F164u;
            goto label_23f164;
        }
    }
    ctx->pc = 0x23F15Cu;
label_23f15c:
    // 0x23f15c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x23f15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x23f160: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23f160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23f164:
    // 0x23f164: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F164u;
    {
        const bool branch_taken_0x23f164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F164u;
        // 0x23f168: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f164) {
            ctx->pc = 0x23F170u;
            goto label_23f170;
        }
    }
    ctx->pc = 0x23F16Cu;
    // 0x23f16c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23f16cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23f170:
    // 0x23f170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f174: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23f174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f178: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23f178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23f17c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23F17Cu;
    SET_GPR_U32(ctx, 31, 0x23F184u);
    ctx->pc = 0x23F180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F17Cu;
    // 0x23f180: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23F17Cu, 0x23F184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F184u;
label_23f184:
    // 0x23f184: 0x8e0416d0  lw          $a0, 0x16D0($s0)
    ctx->pc = 0x23f184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23f188: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23f188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23f18c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x23f18cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23f190: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x23f190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x23f194: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x23f194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23f198: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23f198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f19c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23f1a0: 0xae0505f0  sw          $a1, 0x5F0($s0)
    ctx->pc = 0x23f1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 5));
    // 0x23f1a4: 0xae0416d0  sw          $a0, 0x16D0($s0)
    ctx->pc = 0x23f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 4));
    // 0x23f1a8: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x23f1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_23f1ac:
    // 0x23f1ac: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23F1ACu;
    SET_GPR_U32(ctx, 31, 0x23F1B4u);
    ctx->pc = 0x23F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F1ACu;
    // 0x23f1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23F1ACu, 0x23F1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1B4u;
label_23f1b4:
    // 0x23f1b4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23F1B4u;
    {
        const bool branch_taken_0x23f1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1B4u;
        // 0x23f1b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1b4) {
            ctx->pc = 0x23F214u;
            goto label_23f214;
        }
    }
    ctx->pc = 0x23F1BCu;
    // 0x23f1bc: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x23f1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x23f1c0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x23f1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x23f1c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23f1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f1c8: 0x266464f0  addiu       $a0, $s3, 0x64F0
    ctx->pc = 0x23f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    // 0x23f1cc: 0xc0a4b72  jal         func_292DC8
    ctx->pc = 0x23F1CCu;
    SET_GPR_U32(ctx, 31, 0x23F1D4u);
    ctx->pc = 0x23F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F1CCu;
    // 0x23f1d0: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292DC8u, 0x23F1CCu, 0x23F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1D4u;
label_23f1d4:
    // 0x23f1d4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23F1D4u;
    {
        const bool branch_taken_0x23f1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f1d4) {
            ctx->pc = 0x23F214u;
            goto label_23f214;
        }
    }
    ctx->pc = 0x23F1DCu;
    // 0x23f1dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23f1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23f1e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23f1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23f1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f1e8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23F1E8u;
    SET_GPR_U32(ctx, 31, 0x23F1F0u);
    ctx->pc = 0x23F1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F1E8u;
    // 0x23f1ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23F1E8u, 0x23F1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1F0u;
label_23f1f0:
    // 0x23f1f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23f1f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23f1f4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23F1F4u;
    SET_GPR_U32(ctx, 31, 0x23F1FCu);
    ctx->pc = 0x23F1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F1F4u;
    // 0x23f1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23F1F4u, 0x23F1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1FCu;
label_23f1fc:
    // 0x23f1fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f200: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x23f200u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f204: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x23f204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f208: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23f208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f20c: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x23F20Cu;
    {
        const bool branch_taken_0x23f20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F20Cu;
        // 0x23f210: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f20c) {
            ctx->pc = 0x23F5A8u;
            goto label_23f5a8;
        }
    }
    ctx->pc = 0x23F214u;
label_23f214:
    // 0x23f214: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23f214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23f218: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23f218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23f21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f220: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23F220u;
    SET_GPR_U32(ctx, 31, 0x23F228u);
    ctx->pc = 0x23F224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F220u;
    // 0x23f224: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23F220u, 0x23F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F228u;
label_23f228:
    // 0x23f228: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23f228u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23f22c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23F22Cu;
    SET_GPR_U32(ctx, 31, 0x23F234u);
    ctx->pc = 0x23F230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F22Cu;
    // 0x23f230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23F22Cu, 0x23F234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F234u;
label_23f234:
    // 0x23f234: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x23f234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x23f238: 0x54400079  bnel        $v0, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x23F238u;
    {
        const bool branch_taken_0x23f238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f238) {
            ctx->pc = 0x23F23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F238u;
            // 0x23f23c: 0xc60116c0  lwc1        $f1, 0x16C0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F420u;
            goto label_23f420;
        }
    }
    ctx->pc = 0x23F240u;
    // 0x23f240: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x23f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f244: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x23f244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x23f248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23f248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f24c: 0x0  nop
    ctx->pc = 0x23f24cu;
    // NOP
    // 0x23f250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23f250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f254: 0x0  nop
    ctx->pc = 0x23f254u;
    // NOP
    // 0x23f258: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x23F258u;
    {
        const bool branch_taken_0x23f258 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F258u;
        // 0x23f25c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f258) {
            ctx->pc = 0x23F310u;
            goto label_23f310;
        }
    }
    ctx->pc = 0x23F260u;
    // 0x23f260: 0x8e0317d0  lw          $v1, 0x17D0($s0)
    ctx->pc = 0x23f260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6096)));
    // 0x23f264: 0x8c8276b0  lw          $v0, 0x76B0($a0)
    ctx->pc = 0x23f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30384)));
    // 0x23f268: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x23f268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x23f26c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23f26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23f270: 0x14430027  bne         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x23F270u;
    {
        const bool branch_taken_0x23f270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f270) {
            ctx->pc = 0x23F310u;
            goto label_23f310;
        }
    }
    ctx->pc = 0x23F278u;
    // 0x23f278: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x23f278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x23f27c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x23f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x23f280: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23f280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23f284: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23f284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23f288: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23F288u;
    SET_GPR_U32(ctx, 31, 0x23F290u);
    ctx->pc = 0x23F28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F288u;
    // 0x23f28c: 0xae0316d4  sw          $v1, 0x16D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23F288u, 0x23F290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F290u;
label_23f290:
    // 0x23f290: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x23f290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x23f294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f298: 0xc0a9d38  jal         func_2A74E0
    ctx->pc = 0x23F298u;
    SET_GPR_U32(ctx, 31, 0x23F2A0u);
    ctx->pc = 0x23F29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F298u;
    // 0x23f29c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74E0u, 0x23F298u, 0x23F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2A0u;
label_23f2a0:
    // 0x23f2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2a4: 0xc0a9f28  jal         func_2A7CA0
    ctx->pc = 0x23F2A4u;
    SET_GPR_U32(ctx, 31, 0x23F2ACu);
    ctx->pc = 0x23F2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2A4u;
    // 0x23f2a8: 0x260516a0  addiu       $a1, $s0, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7CA0u, 0x23F2A4u, 0x23F2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2ACu;
label_23f2ac:
    // 0x23f2ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F2ACu;
    {
        const bool branch_taken_0x23f2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2ACu;
        // 0x23f2b0: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f2ac) {
            ctx->pc = 0x23F2C0u;
            goto label_23f2c0;
        }
    }
    ctx->pc = 0x23F2B4u;
    // 0x23f2b4: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x23f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x23f2b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23f2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23f2bc: 0xae0216d4  sw          $v0, 0x16D4($s0)
    ctx->pc = 0x23f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
label_23f2c0:
    // 0x23f2c0: 0xc6010510  lwc1        $f1, 0x510($s0)
    ctx->pc = 0x23f2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f2c4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x23f2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x23f2c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23f2c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f2cc: 0x0  nop
    ctx->pc = 0x23f2ccu;
    // NOP
    // 0x23f2d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23f2d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f2d4: 0x0  nop
    ctx->pc = 0x23f2d4u;
    // NOP
    // 0x23f2d8: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x23F2D8u;
    {
        const bool branch_taken_0x23f2d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f2d8) {
            ctx->pc = 0x23F2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F2D8u;
            // 0x23f2dc: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F310u;
            goto label_23f310;
        }
    }
    ctx->pc = 0x23F2E0u;
    // 0x23f2e0: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23f2e4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23f2e8: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x23f2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x23f2ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23f2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23f2f0: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x23f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
label_23f2f4:
    // 0x23f2f4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23F2F4u;
    SET_GPR_U32(ctx, 31, 0x23F2FCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23F2F4u, 0x23F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2FCu;
label_23f2fc:
    // 0x23f2fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23f2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23f300: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x23F300u;
    {
        const bool branch_taken_0x23f300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F300u;
        // 0x23f304: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f300) {
            ctx->pc = 0x23F408u;
            goto label_23f408;
        }
    }
    ctx->pc = 0x23F308u;
    // 0x23f308: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x23F308u;
    {
        const bool branch_taken_0x23f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f308) {
            ctx->pc = 0x23F490u;
            goto label_23f490;
        }
    }
    ctx->pc = 0x23F310u;
label_23f310:
    // 0x23f310: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x23f310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x23f314: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23f314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f318: 0x0  nop
    ctx->pc = 0x23f318u;
    // NOP
    // 0x23f31c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23f31cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f320: 0x0  nop
    ctx->pc = 0x23f320u;
    // NOP
    // 0x23f324: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x23F324u;
    {
        const bool branch_taken_0x23f324 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F324u;
        // 0x23f328: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f324) {
            ctx->pc = 0x23F354u;
            goto label_23f354;
        }
    }
    ctx->pc = 0x23F32Cu;
    // 0x23f32c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23f330: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23f330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23f334: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x23f334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x23f338: 0x86040568  lh          $a0, 0x568($s0)
    ctx->pc = 0x23f338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x23f33c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23f33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23f340: 0x1080ffec  beqz        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x23F340u;
    {
        const bool branch_taken_0x23f340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F340u;
        // 0x23f344: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f340) {
            ctx->pc = 0x23F2F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f2f4;
        }
    }
    ctx->pc = 0x23F348u;
    // 0x23f348: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f34c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23f34cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f350: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x23f350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_23f354:
    // 0x23f354: 0x8e0317d0  lw          $v1, 0x17D0($s0)
    ctx->pc = 0x23f354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6096)));
    // 0x23f358: 0x8c8276b0  lw          $v0, 0x76B0($a0)
    ctx->pc = 0x23f358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30384)));
    // 0x23f35c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x23f35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x23f360: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23f360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23f364: 0x5443002e  bnel        $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x23F364u;
    {
        const bool branch_taken_0x23f364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f364) {
            ctx->pc = 0x23F368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F364u;
            // 0x23f368: 0xc60116c0  lwc1        $f1, 0x16C0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F420u;
            goto label_23f420;
        }
    }
    ctx->pc = 0x23F36Cu;
    // 0x23f36c: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x23f36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x23f370: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x23f370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x23f374: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23f374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f378: 0xc0a467e  jal         func_2919F8
    ctx->pc = 0x23F378u;
    SET_GPR_U32(ctx, 31, 0x23F380u);
    ctx->pc = 0x23F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F378u;
    // 0x23f37c: 0x266464f0  addiu       $a0, $s3, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919F8u, 0x23F378u, 0x23F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F380u;
label_23f380:
    // 0x23f380: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x23F380u;
    {
        const bool branch_taken_0x23f380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f380) {
            ctx->pc = 0x23F384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F380u;
            // 0x23f384: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F3B0u;
            goto label_23f3b0;
        }
    }
    ctx->pc = 0x23F388u;
    // 0x23f388: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23f38c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23f390: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x23f390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x23f394: 0x86040568  lh          $a0, 0x568($s0)
    ctx->pc = 0x23f394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x23f398: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23f398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23f39c: 0x1080ffd5  beqz        $a0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x23F39Cu;
    {
        const bool branch_taken_0x23f39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F39Cu;
        // 0x23f3a0: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f39c) {
            ctx->pc = 0x23F2F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f2f4;
        }
    }
    ctx->pc = 0x23F3A4u;
    // 0x23f3a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f3a8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23f3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f3ac: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x23f3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_23f3b0:
    // 0x23f3b0: 0x266464f0  addiu       $a0, $s3, 0x64F0
    ctx->pc = 0x23f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    // 0x23f3b4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23f3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x23f3b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23f3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f3bc: 0xc0a46b2  jal         func_291AC8
    ctx->pc = 0x23F3BCu;
    SET_GPR_U32(ctx, 31, 0x23F3C4u);
    ctx->pc = 0x23F3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F3BCu;
    // 0x23f3c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291AC8u, 0x23F3BCu, 0x23F3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F3C4u;
label_23f3c4:
    // 0x23f3c4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x23F3C4u;
    {
        const bool branch_taken_0x23f3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f3c4) {
            ctx->pc = 0x23F3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F3C4u;
            // 0x23f3c8: 0xc60116c0  lwc1        $f1, 0x16C0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F420u;
            goto label_23f420;
        }
    }
    ctx->pc = 0x23F3CCu;
    // 0x23f3cc: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23f3d0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23f3d4: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x23f3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x23f3d8: 0x86040568  lh          $a0, 0x568($s0)
    ctx->pc = 0x23f3d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x23f3dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23f3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23f3e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F3E0u;
    {
        const bool branch_taken_0x23f3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3E0u;
        // 0x23f3e4: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3e0) {
            ctx->pc = 0x23F3F4u;
            goto label_23f3f4;
        }
    }
    ctx->pc = 0x23F3E8u;
    // 0x23f3e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f3ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23F3ECu;
    {
        const bool branch_taken_0x23f3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3ECu;
        // 0x23f3f0: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3ec) {
            ctx->pc = 0x23F41Cu;
            goto label_23f41c;
        }
    }
    ctx->pc = 0x23F3F4u;
label_23f3f4:
    // 0x23f3f4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23F3F4u;
    SET_GPR_U32(ctx, 31, 0x23F3FCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23F3F4u, 0x23F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F3FCu;
label_23f3fc:
    // 0x23f3fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23f3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23f400: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x23F400u;
    {
        const bool branch_taken_0x23f400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F400u;
        // 0x23f404: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f400) {
            ctx->pc = 0x23F490u;
            goto label_23f490;
        }
    }
    ctx->pc = 0x23F408u;
label_23f408:
    // 0x23f408: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23f408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f40c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x23f40cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f410: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x23f410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f414: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x23F414u;
    {
        const bool branch_taken_0x23f414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F414u;
        // 0x23f418: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f414) {
            ctx->pc = 0x23F574u;
            goto label_23f574;
        }
    }
    ctx->pc = 0x23F41Cu;
label_23f41c:
    // 0x23f41c: 0xc60116c0  lwc1        $f1, 0x16C0($s0)
    ctx->pc = 0x23f41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23f420:
    // 0x23f420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f424: 0x0  nop
    ctx->pc = 0x23f424u;
    // NOP
    // 0x23f428: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23f428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f42c: 0x0  nop
    ctx->pc = 0x23f42cu;
    // NOP
    // 0x23f430: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x23F430u;
    {
        const bool branch_taken_0x23f430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f430) {
            ctx->pc = 0x23F434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F430u;
            // 0x23f434: 0x8e0216ec  lw          $v0, 0x16EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F460u;
            goto label_23f460;
        }
    }
    ctx->pc = 0x23F438u;
    // 0x23f438: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23f438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23f43c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23f440: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x23f440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x23f444: 0x86040568  lh          $a0, 0x568($s0)
    ctx->pc = 0x23f444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x23f448: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23f448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23f44c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23F44Cu;
    {
        const bool branch_taken_0x23f44c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F44Cu;
        // 0x23f450: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f44c) {
            ctx->pc = 0x23F490u;
            goto label_23f490;
        }
    }
    ctx->pc = 0x23F454u;
    // 0x23f454: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f458: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23f458u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f45c: 0x8e0216ec  lw          $v0, 0x16EC($s0)
    ctx->pc = 0x23f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
label_23f460:
    // 0x23f460: 0x58400045  blezl       $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x23F460u;
    {
        const bool branch_taken_0x23f460 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x23f460) {
            ctx->pc = 0x23F464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F460u;
            // 0x23f464: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F578u;
            goto label_23f578;
        }
    }
    ctx->pc = 0x23F468u;
    // 0x23f468: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23f46c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23f470: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x23f470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x23f474: 0x86040568  lh          $a0, 0x568($s0)
    ctx->pc = 0x23f474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x23f478: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23f478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23f47c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F47Cu;
    {
        const bool branch_taken_0x23f47c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F47Cu;
        // 0x23f480: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f47c) {
            ctx->pc = 0x23F490u;
            goto label_23f490;
        }
    }
    ctx->pc = 0x23F484u;
    // 0x23f484: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f488: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x23F488u;
    {
        const bool branch_taken_0x23f488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F488u;
        // 0x23f48c: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f488) {
            ctx->pc = 0x23F574u;
            goto label_23f574;
        }
    }
    ctx->pc = 0x23F490u;
label_23f490:
    // 0x23f490: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23F490u;
    SET_GPR_U32(ctx, 31, 0x23F498u);
    ctx->pc = 0x23F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F490u;
    // 0x23f494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23F490u, 0x23F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F498u;
label_23f498:
    // 0x23f498: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x23F498u;
    {
        const bool branch_taken_0x23f498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F498u;
        // 0x23f49c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f498) {
            ctx->pc = 0x23F578u;
            goto label_23f578;
        }
    }
    ctx->pc = 0x23F4A0u;
label_23f4a0:
    // 0x23f4a0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23f4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f4a8: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x23f4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f4ac: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23f4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23f4b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23f4b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f4b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23f4b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f4b8: 0x8c451430  lw          $a1, 0x1430($v0)
    ctx->pc = 0x23f4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5168)));
    // 0x23f4bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23f4bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f4c0: 0x8c461434  lw          $a2, 0x1434($v0)
    ctx->pc = 0x23f4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5172)));
    // 0x23f4c4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23f4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23f4c8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23F4C8u;
    SET_GPR_U32(ctx, 31, 0x23F4D0u);
    ctx->pc = 0x23F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4C8u;
    // 0x23f4cc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23F4C8u, 0x23F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4D0u;
label_23f4d0:
    // 0x23f4d0: 0x8e0416d0  lw          $a0, 0x16D0($s0)
    ctx->pc = 0x23f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23f4d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23f4d8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x23f4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23f4dc: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x23f4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x23f4e0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x23f4e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23f4e4: 0xae1105f0  sw          $s1, 0x5F0($s0)
    ctx->pc = 0x23f4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 17));
    // 0x23f4e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23f4ec: 0xae0416d0  sw          $a0, 0x16D0($s0)
    ctx->pc = 0x23f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 4));
    // 0x23f4f0: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x23f4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_23f4f4:
    // 0x23f4f4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23F4F4u;
    SET_GPR_U32(ctx, 31, 0x23F4FCu);
    ctx->pc = 0x23F4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4F4u;
    // 0x23f4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23F4F4u, 0x23F4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4FCu;
label_23f4fc:
    // 0x23f4fc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23F4FCu;
    {
        const bool branch_taken_0x23f4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f4fc) {
            ctx->pc = 0x23F554u;
            goto label_23f554;
        }
    }
    ctx->pc = 0x23F504u;
    // 0x23f504: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23f504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23f508: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23f508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23f50c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x23f50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x23f510: 0x8e0416ec  lw          $a0, 0x16EC($s0)
    ctx->pc = 0x23f510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
    // 0x23f514: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23f514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23f518: 0x1c800006  bgtz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F518u;
    {
        const bool branch_taken_0x23f518 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x23F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F518u;
        // 0x23f51c: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f518) {
            ctx->pc = 0x23F534u;
            goto label_23f534;
        }
    }
    ctx->pc = 0x23F520u;
    // 0x23f520: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23F520u;
    SET_GPR_U32(ctx, 31, 0x23F528u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23F520u, 0x23F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F528u;
label_23f528:
    // 0x23f528: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23f52c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F52Cu;
    {
        const bool branch_taken_0x23f52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F52Cu;
        // 0x23f530: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f52c) {
            ctx->pc = 0x23F544u;
            goto label_23f544;
        }
    }
    ctx->pc = 0x23F534u;
label_23f534:
    // 0x23f534: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23F534u;
    SET_GPR_U32(ctx, 31, 0x23F53Cu);
    ctx->pc = 0x23F538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F534u;
    // 0x23f538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23F534u, 0x23F53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F53Cu;
label_23f53c:
    // 0x23f53c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23F53Cu;
    {
        const bool branch_taken_0x23f53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f53c) {
            ctx->pc = 0x23F554u;
            goto label_23f554;
        }
    }
    ctx->pc = 0x23F544u;
label_23f544:
    // 0x23f544: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23f544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f548: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x23f548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f54c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x23f54cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f550: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x23f550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_23f554:
    // 0x23f554: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23f554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23f558: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23f558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23f55c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f560: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23F560u;
    SET_GPR_U32(ctx, 31, 0x23F568u);
    ctx->pc = 0x23F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F560u;
    // 0x23f564: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23F560u, 0x23F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F568u;
label_23f568:
    // 0x23f568: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23f568u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23f56c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23F56Cu;
    SET_GPR_U32(ctx, 31, 0x23F574u);
    ctx->pc = 0x23F570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F56Cu;
    // 0x23f570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23F56Cu, 0x23F574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F574u;
label_23f574:
    // 0x23f574: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x23f574u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_23f578:
    // 0x23f578: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23f578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23f57c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23F57Cu;
    {
        const bool branch_taken_0x23f57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F57Cu;
        // 0x23f580: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f57c) {
            ctx->pc = 0x23F5A4u;
            goto label_23f5a4;
        }
    }
    ctx->pc = 0x23F584u;
    // 0x23f584: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x23f584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x23f588: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F588u;
    {
        const bool branch_taken_0x23f588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F588u;
        // 0x23f58c: 0x266464f0  addiu       $a0, $s3, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f588) {
            ctx->pc = 0x23F5A8u;
            goto label_23f5a8;
        }
    }
    ctx->pc = 0x23F590u;
    // 0x23f590: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x23f590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x23f594: 0xc0a4b46  jal         func_292D18
    ctx->pc = 0x23F594u;
    SET_GPR_U32(ctx, 31, 0x23F59Cu);
    ctx->pc = 0x23F598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F594u;
    // 0x23f598: 0xae0005f0  sw          $zero, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D18u, 0x23F594u, 0x23F59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F59Cu;
label_23f59c:
    // 0x23f59c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23F59Cu;
    {
        const bool branch_taken_0x23f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F59Cu;
        // 0x23f5a0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f59c) {
            ctx->pc = 0x23F5ACu;
            goto label_23f5ac;
        }
    }
    ctx->pc = 0x23F5A4u;
label_23f5a4:
    // 0x23f5a4: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x23f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
label_23f5a8:
    // 0x23f5a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23f5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23f5ac:
    // 0x23f5ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23f5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f5b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23f5b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f5b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x23f5b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f5bc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x23f5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x23F5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5C0u;
        // 0x23f5c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F5C8u;
}
