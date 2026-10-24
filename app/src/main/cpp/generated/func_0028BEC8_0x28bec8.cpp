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

// Function: func_0028BEC8
// Address: 0x28bec8 - 0x28c398
void func_0028BEC8_0x28bec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028BEC8_0x28bec8");
#endif

    switch (ctx->pc) {
        case 0x28c2d0u: goto label_28c2d0;
        case 0x28c2fcu: goto label_28c2fc;
        case 0x28c310u: goto label_28c310;
        case 0x28c318u: goto label_28c318;
        case 0x28c320u: goto label_28c320;
        case 0x28c328u: goto label_28c328;
        case 0x28c330u: goto label_28c330;
        case 0x28c33cu: goto label_28c33c;
        case 0x28c344u: goto label_28c344;
        case 0x28c34cu: goto label_28c34c;
        case 0x28c354u: goto label_28c354;
        case 0x28c35cu: goto label_28c35c;
        default: break;
    }

    ctx->pc = 0x28bec8u;

    // 0x28bec8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x28bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x28becc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28beccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28bed0: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x28bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x28bed4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x28bed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x28bed8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28bed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28bedc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28bedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28bee0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x28bee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x28bee4: 0x14600127  bnez        $v1, . + 4 + (0x127 << 2)
    ctx->pc = 0x28BEE4u;
    {
        const bool branch_taken_0x28bee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEE4u;
        // 0x28bee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bee4) {
            ctx->pc = 0x28C384u;
            goto label_28c384;
        }
    }
    ctx->pc = 0x28BEECu;
    // 0x28beec: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x28beecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28bef0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28BEF0u;
    {
        const bool branch_taken_0x28bef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEF0u;
        // 0x28bef4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bef0) {
            ctx->pc = 0x28BF08u;
            goto label_28bf08;
        }
    }
    ctx->pc = 0x28BEF8u;
    // 0x28bef8: 0x10620103  beq         $v1, $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x28BEF8u;
    {
        const bool branch_taken_0x28bef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28bef8) {
            ctx->pc = 0x28C308u;
            goto label_28c308;
        }
    }
    ctx->pc = 0x28BF00u;
    // 0x28bf00: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x28BF00u;
    {
        const bool branch_taken_0x28bf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bf00) {
            ctx->pc = 0x28C320u;
            goto label_28c320;
        }
    }
    ctx->pc = 0x28BF08u;
label_28bf08:
    // 0x28bf08: 0x96040640  lhu         $a0, 0x640($s0)
    ctx->pc = 0x28bf08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x28bf0c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x28bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28bf10: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28BF10u;
    {
        const bool branch_taken_0x28bf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bf10) {
            ctx->pc = 0x28BF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BF10u;
            // 0x28bf14: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BF18u;
            goto label_28bf18;
        }
    }
    ctx->pc = 0x28BF18u;
label_28bf18:
    // 0x28bf18: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x28bf18u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x28bf1c: 0x1810  mfhi        $v1
    ctx->pc = 0x28bf1cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28bf20: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28bf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28bf24: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x28bf24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x28bf28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28BF28u;
    {
        const bool branch_taken_0x28bf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF28u;
        // 0x28bf2c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf28) {
            ctx->pc = 0x28BF48u;
            goto label_28bf48;
        }
    }
    ctx->pc = 0x28BF30u;
    // 0x28bf30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28bf34: 0x244294f0  addiu       $v0, $v0, -0x6B10
    ctx->pc = 0x28bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939888));
    // 0x28bf38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28bf3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28bf40: 0x800008  jr          $a0
    ctx->pc = 0x28BF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28BF48u: goto label_28bf48;
            case 0x28BF58u: goto label_28bf58;
            case 0x28BF68u: goto label_28bf68;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BF98u: goto label_28bf98;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFB8u: goto label_28bfb8;
            case 0x28BFC8u: goto label_28bfc8;
            case 0x28BFD8u: goto label_28bfd8;
            case 0x28BFE8u: goto label_28bfe8;
            case 0x28BFF8u: goto label_28bff8;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C028u: goto label_28c028;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BF40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28BF48u;
label_28bf48:
    // 0x28bf48: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x28bf48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x28bf4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bf4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bf50: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x28BF50u;
    {
        const bool branch_taken_0x28bf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF50u;
        // 0x28bf54: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf50) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28BF58u;
label_28bf58:
    // 0x28bf58: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x28bf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x28bf5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bf5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bf60: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x28BF60u;
    {
        const bool branch_taken_0x28bf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF60u;
        // 0x28bf64: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf60) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28BF68u;
label_28bf68:
    // 0x28bf68: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x28bf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x28bf6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bf6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bf70: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x28BF70u;
    {
        const bool branch_taken_0x28bf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF70u;
        // 0x28bf74: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf70) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28BF78u;
label_28bf78:
    // 0x28bf78: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x28bf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x28bf7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bf7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bf80: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x28BF80u;
    {
        const bool branch_taken_0x28bf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF80u;
        // 0x28bf84: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf80) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28BF88u;
label_28bf88:
    // 0x28bf88: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x28bf88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x28bf8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bf8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bf90: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x28BF90u;
    {
        const bool branch_taken_0x28bf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF90u;
        // 0x28bf94: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf90) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28BF98u;
label_28bf98:
    // 0x28bf98: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x28bf98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x28bf9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bf9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bfa0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x28BFA0u;
    {
        const bool branch_taken_0x28bfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFA0u;
        // 0x28bfa4: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfa0) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28BFA8u;
label_28bfa8:
    // 0x28bfa8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x28bfa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x28bfac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bfacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bfb0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x28BFB0u;
    {
        const bool branch_taken_0x28bfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFB0u;
        // 0x28bfb4: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfb0) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28BFB8u;
label_28bfb8:
    // 0x28bfb8: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x28bfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x28bfbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bfbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bfc0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x28BFC0u;
    {
        const bool branch_taken_0x28bfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFC0u;
        // 0x28bfc4: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfc0) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28BFC8u;
label_28bfc8:
    // 0x28bfc8: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x28bfc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x28bfcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bfccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bfd0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x28BFD0u;
    {
        const bool branch_taken_0x28bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFD0u;
        // 0x28bfd4: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfd0) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28BFD8u;
label_28bfd8:
    // 0x28bfd8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x28bfd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x28bfdc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bfdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bfe0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28BFE0u;
    {
        const bool branch_taken_0x28bfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFE0u;
        // 0x28bfe4: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfe0) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28BFE8u;
label_28bfe8:
    // 0x28bfe8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x28bfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x28bfec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bfecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bff0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28BFF0u;
    {
        const bool branch_taken_0x28bff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFF0u;
        // 0x28bff4: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bff0) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28BFF8u;
label_28bff8:
    // 0x28bff8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x28bff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x28bffc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28bffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28c000: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28C000u;
    {
        const bool branch_taken_0x28c000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C000u;
        // 0x28c004: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c000) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28C008u;
label_28c008:
    // 0x28c008: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x28c008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x28c00c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28c00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28c010: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28C010u;
    {
        const bool branch_taken_0x28c010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C010u;
        // 0x28c014: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c010) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28C018u;
label_28c018:
    // 0x28c018: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28c018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28c01c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28c01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28c020: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28C020u;
    {
        const bool branch_taken_0x28c020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C020u;
        // 0x28c024: 0x92031540  lbu         $v1, 0x1540($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c020) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28C028u;
label_28c028:
    // 0x28c028: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28c028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28c02c: 0x92031540  lbu         $v1, 0x1540($s0)
    ctx->pc = 0x28c02cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5440)));
label_28c030:
    // 0x28c030: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x28c030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x28c034: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28C034u;
    {
        const bool branch_taken_0x28c034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C034u;
        // 0x28c038: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c034) {
            ctx->pc = 0x28C054u;
            goto label_28c054;
        }
    }
    ctx->pc = 0x28C03Cu;
    // 0x28c03c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28c040: 0x24429530  addiu       $v0, $v0, -0x6AD0
    ctx->pc = 0x28c040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939952));
    // 0x28c044: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28c044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c048: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28c048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c04c: 0x800008  jr          $a0
    ctx->pc = 0x28C04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28C054u: goto label_28c054;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C09Cu: goto label_28c09c;
            case 0x28C0B4u: goto label_28c0b4;
            case 0x28C0CCu: goto label_28c0cc;
            case 0x28C0E4u: goto label_28c0e4;
            case 0x28C0FCu: goto label_28c0fc;
            case 0x28C114u: goto label_28c114;
            case 0x28C12Cu: goto label_28c12c;
            case 0x28C144u: goto label_28c144;
            case 0x28C15Cu: goto label_28c15c;
            case 0x28C174u: goto label_28c174;
            case 0x28C18Cu: goto label_28c18c;
            case 0x28C1A4u: goto label_28c1a4;
            case 0x28C1BCu: goto label_28c1bc;
            case 0x28C1D4u: goto label_28c1d4;
            case 0x28C1ECu: goto label_28c1ec;
            case 0x28C204u: goto label_28c204;
            case 0x28C21Cu: goto label_28c21c;
            case 0x28C234u: goto label_28c234;
            case 0x28C24Cu: goto label_28c24c;
            case 0x28C264u: goto label_28c264;
            case 0x28C27Cu: goto label_28c27c;
            case 0x28C294u: goto label_28c294;
            case 0x28C2ACu: goto label_28c2ac;
            case 0x28C2D8u: goto label_28c2d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C04Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28C054u;
label_28c054:
    // 0x28c054: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c05c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c060: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c064: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x28C064u;
    {
        const bool branch_taken_0x28c064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C064u;
        // 0x28c068: 0x8c450080  lw          $a1, 0x80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c064) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C06Cu;
label_28c06c:
    // 0x28c06c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c078: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c07c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x28C07Cu;
    {
        const bool branch_taken_0x28c07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C07Cu;
        // 0x28c080: 0x8c450084  lw          $a1, 0x84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c07c) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C084u;
label_28c084:
    // 0x28c084: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c08c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c090: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c094: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x28C094u;
    {
        const bool branch_taken_0x28c094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C094u;
        // 0x28c098: 0x8c450088  lw          $a1, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c094) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C09Cu;
label_28c09c:
    // 0x28c09c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c0a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c0a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c0a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0ac: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x28C0ACu;
    {
        const bool branch_taken_0x28c0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0ACu;
        // 0x28c0b0: 0x8c45008c  lw          $a1, 0x8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0ac) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C0B4u;
label_28c0b4:
    // 0x28c0b4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c0b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c0c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0c4: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x28C0C4u;
    {
        const bool branch_taken_0x28c0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0C4u;
        // 0x28c0c8: 0x8c450090  lw          $a1, 0x90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0c4) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C0CCu;
label_28c0cc:
    // 0x28c0cc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c0d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c0d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0dc: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x28C0DCu;
    {
        const bool branch_taken_0x28c0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0DCu;
        // 0x28c0e0: 0x8c450094  lw          $a1, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0dc) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C0E4u;
label_28c0e4:
    // 0x28c0e4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c0f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0f4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x28C0F4u;
    {
        const bool branch_taken_0x28c0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0F4u;
        // 0x28c0f8: 0x8c450098  lw          $a1, 0x98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0f4) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C0FCu;
label_28c0fc:
    // 0x28c0fc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c108: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c10c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x28C10Cu;
    {
        const bool branch_taken_0x28c10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C10Cu;
        // 0x28c110: 0x8c45009c  lw          $a1, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c10c) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C114u;
label_28c114:
    // 0x28c114: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c11c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c120: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c124: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x28C124u;
    {
        const bool branch_taken_0x28c124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C124u;
        // 0x28c128: 0x8c4500a0  lw          $a1, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c124) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C12Cu;
label_28c12c:
    // 0x28c12c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c138: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c13c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x28C13Cu;
    {
        const bool branch_taken_0x28c13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C13Cu;
        // 0x28c140: 0x8c4500a4  lw          $a1, 0xA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c13c) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C144u;
label_28c144:
    // 0x28c144: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c14c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c150: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c154: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x28C154u;
    {
        const bool branch_taken_0x28c154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C154u;
        // 0x28c158: 0x8c4500a8  lw          $a1, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c154) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C15Cu;
label_28c15c:
    // 0x28c15c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c168: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c16c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x28C16Cu;
    {
        const bool branch_taken_0x28c16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C16Cu;
        // 0x28c170: 0x8c4500ac  lw          $a1, 0xAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c16c) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C174u;
label_28c174:
    // 0x28c174: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c17c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c180: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c184: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x28C184u;
    {
        const bool branch_taken_0x28c184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C184u;
        // 0x28c188: 0x8c4500b0  lw          $a1, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c184) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C18Cu;
label_28c18c:
    // 0x28c18c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c198: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c19c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x28C19Cu;
    {
        const bool branch_taken_0x28c19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C19Cu;
        // 0x28c1a0: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c19c) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C1A4u;
label_28c1a4:
    // 0x28c1a4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c1a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c1b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1b4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x28C1B4u;
    {
        const bool branch_taken_0x28c1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1B4u;
        // 0x28c1b8: 0x8c4500b8  lw          $a1, 0xB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1b4) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C1BCu;
label_28c1bc:
    // 0x28c1bc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c1c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c1c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1cc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x28C1CCu;
    {
        const bool branch_taken_0x28c1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1CCu;
        // 0x28c1d0: 0x8c4500bc  lw          $a1, 0xBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1cc) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C1D4u;
label_28c1d4:
    // 0x28c1d4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c1d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c1e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1e4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x28C1E4u;
    {
        const bool branch_taken_0x28c1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1E4u;
        // 0x28c1e8: 0x8c4500c0  lw          $a1, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1e4) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C1ECu;
label_28c1ec:
    // 0x28c1ec: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c1f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1fc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x28C1FCu;
    {
        const bool branch_taken_0x28c1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1FCu;
        // 0x28c200: 0x8c4500c4  lw          $a1, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1fc) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C204u;
label_28c204:
    // 0x28c204: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c20c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c210: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c214: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x28C214u;
    {
        const bool branch_taken_0x28c214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C214u;
        // 0x28c218: 0x8c4500c8  lw          $a1, 0xC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c214) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C21Cu;
label_28c21c:
    // 0x28c21c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c22c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x28C22Cu;
    {
        const bool branch_taken_0x28c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C22Cu;
        // 0x28c230: 0x8c4500cc  lw          $a1, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c22c) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C234u;
label_28c234:
    // 0x28c234: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c23c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c240: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c244: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x28C244u;
    {
        const bool branch_taken_0x28c244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C244u;
        // 0x28c248: 0x8c4500d0  lw          $a1, 0xD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c244) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C24Cu;
label_28c24c:
    // 0x28c24c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c254: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c258: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c25c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28C25Cu;
    {
        const bool branch_taken_0x28c25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C25Cu;
        // 0x28c260: 0x8c4500d4  lw          $a1, 0xD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c25c) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C264u;
label_28c264:
    // 0x28c264: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c26c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c270: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c274: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28C274u;
    {
        const bool branch_taken_0x28c274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C274u;
        // 0x28c278: 0x8c4500d8  lw          $a1, 0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c274) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C27Cu;
label_28c27c:
    // 0x28c27c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c288: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c28c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28C28Cu;
    {
        const bool branch_taken_0x28c28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C28Cu;
        // 0x28c290: 0x8c4500dc  lw          $a1, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c28c) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C294u;
label_28c294:
    // 0x28c294: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c29c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c2a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28C2A4u;
    {
        const bool branch_taken_0x28c2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2A4u;
        // 0x28c2a8: 0x8c4500e0  lw          $a1, 0xE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2a4) {
            ctx->pc = 0x28C2C0u;
            goto label_28c2c0;
        }
    }
    ctx->pc = 0x28C2ACu;
label_28c2ac:
    // 0x28c2ac: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c2b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c2b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2bc: 0x8c4500e4  lw          $a1, 0xE4($v0)
    ctx->pc = 0x28c2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_28c2c0:
    // 0x28c2c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28c2c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28c2c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2c8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28C2C8u;
    SET_GPR_U32(ctx, 31, 0x28C2D0u);
    ctx->pc = 0x28C2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C2C8u;
    // 0x28c2cc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28C2C8u, 0x28C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C2D0u;
label_28c2d0:
    // 0x28c2d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28C2D0u;
    {
        const bool branch_taken_0x28c2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2D0u;
        // 0x28c2d4: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2d0) {
            ctx->pc = 0x28C300u;
            goto label_28c300;
        }
    }
    ctx->pc = 0x28C2D8u;
label_28c2d8:
    // 0x28c2d8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28c2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c2e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2e8: 0x8c4500e8  lw          $a1, 0xE8($v0)
    ctx->pc = 0x28c2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x28c2ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28c2ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28c2f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2f4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28C2F4u;
    SET_GPR_U32(ctx, 31, 0x28C2FCu);
    ctx->pc = 0x28C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C2F4u;
    // 0x28c2f8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28C2F4u, 0x28C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C2FCu;
label_28c2fc:
    // 0x28c2fc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x28c2fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_28c300:
    // 0x28c300: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28c304: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x28c304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_28c308:
    // 0x28c308: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28C308u;
    SET_GPR_U32(ctx, 31, 0x28C310u);
    ctx->pc = 0x28C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C308u;
    // 0x28c30c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28C308u, 0x28C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C310u;
label_28c310:
    // 0x28c310: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x28C310u;
    SET_GPR_U32(ctx, 31, 0x28C318u);
    ctx->pc = 0x28C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C310u;
    // 0x28c314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x28C310u, 0x28C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C318u;
label_28c318:
    // 0x28c318: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x28C318u;
    SET_GPR_U32(ctx, 31, 0x28C320u);
    ctx->pc = 0x28C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C318u;
    // 0x28c31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x28C318u, 0x28C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C320u;
label_28c320:
    // 0x28c320: 0xc053ed2  jal         func_14FB48
    ctx->pc = 0x28C320u;
    SET_GPR_U32(ctx, 31, 0x28C328u);
    ctx->pc = 0x28C324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C320u;
    // 0x28c324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x28C320u, 0x28C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C328u;
label_28c328:
    // 0x28c328: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x28C328u;
    SET_GPR_U32(ctx, 31, 0x28C330u);
    ctx->pc = 0x28C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C328u;
    // 0x28c32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x28C328u, 0x28C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C330u;
label_28c330:
    // 0x28c330: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c334: 0xc054a88  jal         func_152A20
    ctx->pc = 0x28C334u;
    SET_GPR_U32(ctx, 31, 0x28C33Cu);
    ctx->pc = 0x28C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C334u;
    // 0x28c338: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x28C334u, 0x28C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C33Cu;
label_28c33c:
    // 0x28c33c: 0xc05280e  jal         func_14A038
    ctx->pc = 0x28C33Cu;
    SET_GPR_U32(ctx, 31, 0x28C344u);
    ctx->pc = 0x28C340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C33Cu;
    // 0x28c340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x28C33Cu, 0x28C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C344u;
label_28c344:
    // 0x28c344: 0xc0a33aa  jal         func_28CEA8
    ctx->pc = 0x28C344u;
    SET_GPR_U32(ctx, 31, 0x28C34Cu);
    ctx->pc = 0x28C348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C344u;
    // 0x28c348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CEA8u, 0x28C344u, 0x28C34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C34Cu;
label_28c34c:
    // 0x28c34c: 0xc0a35fa  jal         func_28D7E8
    ctx->pc = 0x28C34Cu;
    SET_GPR_U32(ctx, 31, 0x28C354u);
    ctx->pc = 0x28C350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C34Cu;
    // 0x28c350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7E8u, 0x28C34Cu, 0x28C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C354u;
label_28c354:
    // 0x28c354: 0xc0a32e4  jal         func_28CB90
    ctx->pc = 0x28C354u;
    SET_GPR_U32(ctx, 31, 0x28C35Cu);
    ctx->pc = 0x28C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C354u;
    // 0x28c358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB90u, 0x28C354u, 0x28C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C35Cu;
label_28c35c:
    // 0x28c35c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x28c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x28c360: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x28c360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x28c364: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C364u;
    {
        const bool branch_taken_0x28c364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28c364) {
            ctx->pc = 0x28C368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C364u;
            // 0x28c368: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C388u;
            goto label_28c388;
        }
    }
    ctx->pc = 0x28C36Cu;
    // 0x28c36c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28c36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c370: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x28c370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x28c374: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28c374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28c378: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28c378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28c37c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28c37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c380: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28c380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_28c384:
    // 0x28c384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28c384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28c388:
    // 0x28c388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28c388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c38c: 0x3e00008  jr          $ra
    ctx->pc = 0x28C38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C38Cu;
        // 0x28c390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C394u;
    // 0x28c394: 0x0  nop
    ctx->pc = 0x28c394u;
    // NOP
    ctx->pc = 0x28c398u;
}
