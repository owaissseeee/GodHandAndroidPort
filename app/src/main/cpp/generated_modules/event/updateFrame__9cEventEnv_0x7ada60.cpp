#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: updateFrame__9cEventEnv
// Address: 0x7ada60 - 0x7adbf8
void updateFrame__9cEventEnv_0x7ada60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("updateFrame__9cEventEnv_0x7ada60");
#endif

    switch (ctx->pc) {
        case 0x7ada74u: goto label_7ada74;
        case 0x7adabcu: goto label_7adabc;
        case 0x7adaccu: goto label_7adacc;
        case 0x7adb0cu: goto label_7adb0c;
        case 0x7adb1cu: goto label_7adb1c;
        case 0x7adb70u: goto label_7adb70;
        default: break;
    }

    ctx->pc = 0x7ada60u;

    // 0x7ada60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ada60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ada64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ada64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ada68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ada68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ada6c: 0xc1eb694  jal         func_7ADA50
    ctx->pc = 0x7ADA6Cu;
    SET_GPR_U32(ctx, 31, 0x7ADA74u);
    ctx->pc = 0x7ADA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADA6Cu;
    // 0x7ada70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ADA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ADA50u, 0x7ADA6Cu, 0x7ADA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADA74u;
label_7ada74:
    // 0x7ada74: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x7ADA74u;
    {
        const bool branch_taken_0x7ada74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ada74) {
            ctx->pc = 0x7ADA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ADA74u;
            // 0x7ada78: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ADA90u;
            goto label_7ada90;
        }
    }
    ctx->pc = 0x7ADA7Cu;
    // 0x7ada7c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x7ada7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7ada80: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x7ada80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ada84: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x7ada84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x7ada88: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x7ada88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x7ada8c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x7ada8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_7ada90:
    // 0x7ada90: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x7ada90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x7ada94: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x7ADA94u;
    {
        const bool branch_taken_0x7ada94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x7ada94) {
            ctx->pc = 0x7ADB04u;
            goto label_7adb04;
        }
    }
    ctx->pc = 0x7ADA9Cu;
    // 0x7ada9c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x7ada9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7adaa0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x7adaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7adaa4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x7adaa4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7adaa8: 0x0  nop
    ctx->pc = 0x7adaa8u;
    // NOP
    // 0x7adaac: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x7ADAACu;
    {
        const bool branch_taken_0x7adaac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7adaac) {
            ctx->pc = 0x7ADB04u;
            goto label_7adb04;
        }
    }
    ctx->pc = 0x7ADAB4u;
    // 0x7adab4: 0xc1ebafa  jal         func_7AEBE8
    ctx->pc = 0x7ADAB4u;
    SET_GPR_U32(ctx, 31, 0x7ADABCu);
    ctx->pc = 0x7ADAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADAB4u;
    // 0x7adab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEBE8u, 0x7ADAB4u, 0x7ADABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADABCu;
label_7adabc:
    // 0x7adabc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7ADABCu;
    {
        const bool branch_taken_0x7adabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ADAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADABCu;
        // 0x7adac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7adabc) {
            ctx->pc = 0x7ADAF4u;
            goto label_7adaf4;
        }
    }
    ctx->pc = 0x7ADAC4u;
    // 0x7adac4: 0xc1ed280  jal         func_7B4A00
    ctx->pc = 0x7ADAC4u;
    SET_GPR_U32(ctx, 31, 0x7ADACCu);
    ctx->pc = 0x7ADAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADAC4u;
    // 0x7adac8: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7ADAC4u, 0x7ADACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADACCu;
label_7adacc:
    // 0x7adacc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7adaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7adad0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x7ADAD0u;
    {
        const bool branch_taken_0x7adad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7adad0) {
            ctx->pc = 0x7ADAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ADAD0u;
            // 0x7adad4: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ADAF8u;
            goto label_7adaf8;
        }
    }
    ctx->pc = 0x7ADAD8u;
    // 0x7adad8: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x7adad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x7adadc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x7adadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x7adae0: 0x8ca27a78  lw          $v0, 0x7A78($a1)
    ctx->pc = 0x7adae0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x7adae4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x7adae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x7adae8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7adae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x7adaec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7adaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7adaf0: 0xaca27a78  sw          $v0, 0x7A78($a1)
    ctx->pc = 0x7adaf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A78u, _value); } while (0);
label_7adaf4:
    // 0x7adaf4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x7adaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_7adaf8:
    // 0x7adaf8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x7adaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7adafc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x7ADAFCu;
    {
        const bool branch_taken_0x7adafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ADB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADAFCu;
        // 0x7adb00: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7adafc) {
            ctx->pc = 0x7ADB54u;
            goto label_7adb54;
        }
    }
    ctx->pc = 0x7ADB04u;
label_7adb04:
    // 0x7adb04: 0xc1ebafa  jal         func_7AEBE8
    ctx->pc = 0x7ADB04u;
    SET_GPR_U32(ctx, 31, 0x7ADB0Cu);
    ctx->pc = 0x7ADB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADB04u;
    // 0x7adb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEBE8u, 0x7ADB04u, 0x7ADB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADB0Cu;
label_7adb0c:
    // 0x7adb0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7ADB0Cu;
    {
        const bool branch_taken_0x7adb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ADB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADB0Cu;
        // 0x7adb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7adb0c) {
            ctx->pc = 0x7ADB4Cu;
            goto label_7adb4c;
        }
    }
    ctx->pc = 0x7ADB14u;
    // 0x7adb14: 0xc1ed280  jal         func_7B4A00
    ctx->pc = 0x7ADB14u;
    SET_GPR_U32(ctx, 31, 0x7ADB1Cu);
    ctx->pc = 0x7ADB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADB14u;
    // 0x7adb18: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7ADB14u, 0x7ADB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADB1Cu;
label_7adb1c:
    // 0x7adb1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7adb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7adb20: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x7ADB20u;
    {
        const bool branch_taken_0x7adb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7adb20) {
            ctx->pc = 0x7ADB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ADB20u;
            // 0x7adb24: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ADB50u;
            goto label_7adb50;
        }
    }
    ctx->pc = 0x7ADB28u;
    // 0x7adb28: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x7adb28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x7adb2c: 0x3c03efff  lui         $v1, 0xEFFF
    ctx->pc = 0x7adb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
    // 0x7adb30: 0x8ca47a78  lw          $a0, 0x7A78($a1)
    ctx->pc = 0x7adb30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A78u));
    // 0x7adb34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7adb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7adb38: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x7adb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x7adb3c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x7adb3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x7adb40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x7adb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x7adb44: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x7adb44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x7adb48: 0xaca47a78  sw          $a0, 0x7A78($a1)
    ctx->pc = 0x7adb48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 31352), GPR_U32(ctx, 4));
label_7adb4c:
    // 0x7adb4c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x7adb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_7adb50:
    // 0x7adb50: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7adb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_7adb54:
    // 0x7adb54: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x7adb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x7adb58: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x7adb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x7adb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7adb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7adb60: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x7adb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7adb64: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x7adb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x7adb68: 0xc1ebafa  jal         func_7AEBE8
    ctx->pc = 0x7ADB68u;
    SET_GPR_U32(ctx, 31, 0x7ADB70u);
    ctx->pc = 0x7ADB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADB68u;
    // 0x7adb6c: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEBE8u, 0x7ADB68u, 0x7ADB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADB70u;
label_7adb70:
    // 0x7adb70: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x7ADB70u;
    {
        const bool branch_taken_0x7adb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7adb70) {
            ctx->pc = 0x7ADB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ADB70u;
            // 0x7adb74: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ADBE8u;
            goto label_7adbe8;
        }
    }
    ctx->pc = 0x7ADB78u;
    // 0x7adb78: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x7adb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7adb7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7adb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7adb80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7adb80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7adb84: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x7adb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7adb88: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x7adb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7adb8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x7adb8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x7adb90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x7adb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x7adb94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7adb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7adb98: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x7adb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x7adb9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x7adb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7adba0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x7adba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7adba4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x7adba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7adba8: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7ADBA8u;
    {
        const bool branch_taken_0x7adba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7ADBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADBA8u;
        // 0x7adbac: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7adba8) {
            ctx->pc = 0x7ADBE4u;
            goto label_7adbe4;
        }
    }
    ctx->pc = 0x7ADBB0u;
    // 0x7adbb0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x7adbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7adbb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7adbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7adbb8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x7adbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7adbbc: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x7adbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x7adbc0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x7adbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7adbc4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7adbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7adbc8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x7adbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x7adbcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7adbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7adbd0: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x7adbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x7adbd4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x7adbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7adbd8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x7adbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7adbdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x7adbdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x7adbe0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x7adbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_7adbe4:
    // 0x7adbe4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7adbe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7adbe8:
    // 0x7adbe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7adbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7adbec: 0x3e00008  jr          $ra
    ctx->pc = 0x7ADBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ADBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADBECu;
        // 0x7adbf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ADBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ADBF4u;
    // 0x7adbf4: 0x0  nop
    ctx->pc = 0x7adbf4u;
    // NOP
    ctx->pc = 0x7adbf8u;
}
} // namespace gh_event
