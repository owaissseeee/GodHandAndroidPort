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

// Function: func_002CCD80
// Address: 0x2ccd80 - 0x2cd1d0
void func_002CCD80_0x2ccd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CCD80_0x2ccd80");
#endif

    switch (ctx->pc) {
        case 0x2ccdc0u: goto label_2ccdc0;
        case 0x2ccde4u: goto label_2ccde4;
        case 0x2cce2cu: goto label_2cce2c;
        case 0x2cce58u: goto label_2cce58;
        case 0x2cce6cu: goto label_2cce6c;
        case 0x2cce88u: goto label_2cce88;
        case 0x2ccea8u: goto label_2ccea8;
        case 0x2cceb0u: goto label_2cceb0;
        case 0x2cced8u: goto label_2cced8;
        case 0x2ccee8u: goto label_2ccee8;
        case 0x2ccef0u: goto label_2ccef0;
        case 0x2ccf40u: goto label_2ccf40;
        case 0x2ccf64u: goto label_2ccf64;
        case 0x2ccf80u: goto label_2ccf80;
        case 0x2ccfd8u: goto label_2ccfd8;
        case 0x2ccffcu: goto label_2ccffc;
        case 0x2cd018u: goto label_2cd018;
        case 0x2cd03cu: goto label_2cd03c;
        case 0x2cd058u: goto label_2cd058;
        case 0x2cd060u: goto label_2cd060;
        case 0x2cd080u: goto label_2cd080;
        case 0x2cd0acu: goto label_2cd0ac;
        case 0x2cd0bcu: goto label_2cd0bc;
        case 0x2cd0d0u: goto label_2cd0d0;
        case 0x2cd0e0u: goto label_2cd0e0;
        case 0x2cd0f4u: goto label_2cd0f4;
        case 0x2cd110u: goto label_2cd110;
        case 0x2cd12cu: goto label_2cd12c;
        case 0x2cd14cu: goto label_2cd14c;
        case 0x2cd160u: goto label_2cd160;
        case 0x2cd18cu: goto label_2cd18c;
        default: break;
    }

    ctx->pc = 0x2ccd80u;

    // 0x2ccd80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ccd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ccd84: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2ccd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2ccd88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ccd88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccd8c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2ccd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2ccd90: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2ccd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2ccd94: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2ccd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2ccd98: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2ccd98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2ccd9c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2ccd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2ccda0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ccda0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccda4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2ccda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2ccda8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ccda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ccdac: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x2ccdacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ccdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ccdb4: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x2ccdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x2ccdb8: 0xc0b32d6  jal         func_2CCB58
    ctx->pc = 0x2CCDB8u;
    SET_GPR_U32(ctx, 31, 0x2CCDC0u);
    ctx->pc = 0x2CCDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDB8u;
    // 0x2ccdbc: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCB58u, 0x2CCDB8u, 0x2CCDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDC0u;
label_2ccdc0:
    // 0x2ccdc0: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x2ccdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x2ccdc4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ccdc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdc8: 0x8e2600bc  lw          $a2, 0xBC($s1)
    ctx->pc = 0x2ccdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2ccdcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdd0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ccdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ccdd4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2ccdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ccdd8: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x2ccdd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ccddc: 0xc0b416e  jal         func_2D05B8
    ctx->pc = 0x2CCDDCu;
    SET_GPR_U32(ctx, 31, 0x2CCDE4u);
    ctx->pc = 0x2CCDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDDCu;
    // 0x2ccde0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D05B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D05B8u, 0x2CCDDCu, 0x2CCDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDE4u;
label_2ccde4:
    // 0x2ccde4: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2ccde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2ccde8: 0x1072006c  beq         $v1, $s2, . + 4 + (0x6C << 2)
    ctx->pc = 0x2CCDE8u;
    {
        const bool branch_taken_0x2ccde8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2CCDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCDE8u;
        // 0x2ccdec: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccde8) {
            ctx->pc = 0x2CCF9Cu;
            goto label_2ccf9c;
        }
    }
    ctx->pc = 0x2CCDF0u;
    // 0x2ccdf0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2ccdf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ccdf4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCDF4u;
    {
        const bool branch_taken_0x2ccdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccdf4) {
            ctx->pc = 0x2CCDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCDF4u;
            // 0x2ccdf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCE0Cu;
            goto label_2cce0c;
        }
    }
    ctx->pc = 0x2CCDFCu;
    // 0x2ccdfc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CCDFCu;
    {
        const bool branch_taken_0x2ccdfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccdfc) {
            ctx->pc = 0x2CCE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCDFCu;
            // 0x2cce00: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCE1Cu;
            goto label_2cce1c;
        }
    }
    ctx->pc = 0x2CCE04u;
    // 0x2cce04: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x2CCE04u;
    {
        const bool branch_taken_0x2cce04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE04u;
        // 0x2cce08: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce04) {
            ctx->pc = 0x2CD1A4u;
            goto label_2cd1a4;
        }
    }
    ctx->pc = 0x2CCE0Cu;
label_2cce0c:
    // 0x2cce0c: 0x106200c5  beq         $v1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2CCE0Cu;
    {
        const bool branch_taken_0x2cce0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CCE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE0Cu;
        // 0x2cce10: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce0c) {
            ctx->pc = 0x2CD124u;
            goto label_2cd124;
        }
    }
    ctx->pc = 0x2CCE14u;
    // 0x2cce14: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x2CCE14u;
    {
        const bool branch_taken_0x2cce14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE14u;
        // 0x2cce18: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce14) {
            ctx->pc = 0x2CD1A8u;
            goto label_2cd1a8;
        }
    }
    ctx->pc = 0x2CCE1Cu;
label_2cce1c:
    // 0x2cce1c: 0x504000e1  beql        $v0, $zero, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2CCE1Cu;
    {
        const bool branch_taken_0x2cce1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cce1c) {
            ctx->pc = 0x2CCE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCE1Cu;
            // 0x2cce20: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD1A4u;
            goto label_2cd1a4;
        }
    }
    ctx->pc = 0x2CCE24u;
    // 0x2cce24: 0xc0b41dc  jal         func_2D0770
    ctx->pc = 0x2CCE24u;
    SET_GPR_U32(ctx, 31, 0x2CCE2Cu);
    ctx->pc = 0x2CCE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE24u;
    // 0x2cce28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0770u, 0x2CCE24u, 0x2CCE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE2Cu;
label_2cce2c:
    // 0x2cce2c: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x2cce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x2cce30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cce30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cce34: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x2CCE34u;
    {
        const bool branch_taken_0x2cce34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE34u;
        // 0x2cce38: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce34) {
            ctx->pc = 0x2CD1A0u;
            goto label_2cd1a0;
        }
    }
    ctx->pc = 0x2CCE3Cu;
    // 0x2cce3c: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x2cce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x2cce40: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x2cce40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x2cce44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2cce44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cce48: 0x546000d6  bnel        $v1, $zero, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2CCE48u;
    {
        const bool branch_taken_0x2cce48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cce48) {
            ctx->pc = 0x2CCE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCE48u;
            // 0x2cce4c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD1A4u;
            goto label_2cd1a4;
        }
    }
    ctx->pc = 0x2CCE50u;
    // 0x2cce50: 0xc0b34e6  jal         func_2CD398
    ctx->pc = 0x2CCE50u;
    SET_GPR_U32(ctx, 31, 0x2CCE58u);
    ctx->pc = 0x2CCE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE50u;
    // 0x2cce54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD398u, 0x2CCE50u, 0x2CCE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE58u;
label_2cce58:
    // 0x2cce58: 0x504000d2  beql        $v0, $zero, . + 4 + (0xD2 << 2)
    ctx->pc = 0x2CCE58u;
    {
        const bool branch_taken_0x2cce58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cce58) {
            ctx->pc = 0x2CCE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCE58u;
            // 0x2cce5c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD1A4u;
            goto label_2cd1a4;
        }
    }
    ctx->pc = 0x2CCE60u;
    // 0x2cce60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cce60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce64: 0xc0dce04  jal         func_373810
    ctx->pc = 0x2CCE64u;
    SET_GPR_U32(ctx, 31, 0x2CCE6Cu);
    ctx->pc = 0x2CCE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE64u;
    // 0x2cce68: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373810u, 0x2CCE64u, 0x2CCE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE6Cu;
label_2cce6c:
    // 0x2cce6c: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x2cce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x2cce70: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2cce70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2cce74: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CCE74u;
    {
        const bool branch_taken_0x2cce74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE74u;
        // 0x2cce78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce74) {
            ctx->pc = 0x2CCEE8u;
            goto label_2ccee8;
        }
    }
    ctx->pc = 0x2CCE7Cu;
    // 0x2cce7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CCE7Cu;
    {
        const bool branch_taken_0x2cce7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE7Cu;
        // 0x2cce80: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce7c) {
            ctx->pc = 0x2CCEA8u;
            goto label_2ccea8;
        }
    }
    ctx->pc = 0x2CCE84u;
    // 0x2cce84: 0x0  nop
    ctx->pc = 0x2cce84u;
    // NOP
label_2cce88:
    // 0x2cce88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cce88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cce8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce90: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2cce90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2cce94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cce94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cce98: 0x0  nop
    ctx->pc = 0x2cce98u;
    // NOP
    // 0x2cce9c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2cce9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ccea0: 0xc0dce28  jal         func_3738A0
    ctx->pc = 0x2CCEA0u;
    SET_GPR_U32(ctx, 31, 0x2CCEA8u);
    ctx->pc = 0x2CCEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEA0u;
    // 0x2ccea4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3738A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3738A0u, 0x2CCEA0u, 0x2CCEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEA8u;
label_2ccea8:
    // 0x2ccea8: 0xc0dcecc  jal         func_373B30
    ctx->pc = 0x2CCEA8u;
    SET_GPR_U32(ctx, 31, 0x2CCEB0u);
    ctx->pc = 0x2CCEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEA8u;
    // 0x2cceac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B30u, 0x2CCEA8u, 0x2CCEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEB0u;
label_2cceb0:
    // 0x2cceb0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2cceb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cceb4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CCEB4u;
    {
        const bool branch_taken_0x2cceb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cceb4) {
            ctx->pc = 0x2CCEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCEB4u;
            // 0x2cceb8: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cce88;
        }
    }
    ctx->pc = 0x2CCEBCu;
    // 0x2ccebc: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x2ccebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x2ccec0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ccec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ccec4: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2ccec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2ccec8: 0xc6340034  lwc1        $f20, 0x34($s1)
    ctx->pc = 0x2ccec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ccecc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2cceccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cced0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2CCED0u;
    {
        const bool branch_taken_0x2cced0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCED0u;
        // 0x2cced4: 0xae230098  sw          $v1, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cced0) {
            ctx->pc = 0x2CCF30u;
            goto label_2ccf30;
        }
    }
    ctx->pc = 0x2CCED8u;
label_2cced8:
    // 0x2cced8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cced8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ccedc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccee0: 0xc0dce28  jal         func_3738A0
    ctx->pc = 0x2CCEE0u;
    SET_GPR_U32(ctx, 31, 0x2CCEE8u);
    ctx->pc = 0x2CCEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEE0u;
    // 0x2ccee4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3738A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3738A0u, 0x2CCEE0u, 0x2CCEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEE8u;
label_2ccee8:
    // 0x2ccee8: 0xc0dcecc  jal         func_373B30
    ctx->pc = 0x2CCEE8u;
    SET_GPR_U32(ctx, 31, 0x2CCEF0u);
    ctx->pc = 0x2CCEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEE8u;
    // 0x2cceec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B30u, 0x2CCEE8u, 0x2CCEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEF0u;
label_2ccef0:
    // 0x2ccef0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2ccef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ccef4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CCEF4u;
    {
        const bool branch_taken_0x2ccef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCEF4u;
        // 0x2ccef8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccef4) {
            ctx->pc = 0x2CCED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cced8;
        }
    }
    ctx->pc = 0x2CCEFCu;
    // 0x2ccefc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ccefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccf00: 0x56a20004  bnel        $s5, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCF00u;
    {
        const bool branch_taken_0x2ccf00 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ccf00) {
            ctx->pc = 0x2CCF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCF00u;
            // 0x2ccf04: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCF14u;
            goto label_2ccf14;
        }
    }
    ctx->pc = 0x2CCF08u;
    // 0x2ccf08: 0x26c2ee00  addiu       $v0, $s6, -0x1200
    ctx->pc = 0x2ccf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x2ccf0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CCF0Cu;
    {
        const bool branch_taken_0x2ccf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF0Cu;
        // 0x2ccf10: 0xc4540124  lwc1        $f20, 0x124($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf0c) {
            ctx->pc = 0x2CCF30u;
            goto label_2ccf30;
        }
    }
    ctx->pc = 0x2CCF14u;
label_2ccf14:
    // 0x2ccf14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCF14u;
    {
        const bool branch_taken_0x2ccf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccf14) {
            ctx->pc = 0x2CCF28u;
            goto label_2ccf28;
        }
    }
    ctx->pc = 0x2CCF1Cu;
    // 0x2ccf1c: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x2ccf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x2ccf20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCF20u;
    {
        const bool branch_taken_0x2ccf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF20u;
        // 0x2ccf24: 0xc454000c  lwc1        $f20, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf20) {
            ctx->pc = 0x2CCF30u;
            goto label_2ccf30;
        }
    }
    ctx->pc = 0x2CCF28u;
label_2ccf28:
    // 0x2ccf28: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2ccf28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2ccf2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ccf2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ccf30:
    // 0x2ccf30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ccf30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf34: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x2ccf34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2CCF38u;
    {
        const bool branch_taken_0x2ccf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF38u;
        // 0x2ccf3c: 0x263000cc  addiu       $s0, $s1, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf38) {
            ctx->pc = 0x2CCF78u;
            goto label_2ccf78;
        }
    }
    ctx->pc = 0x2CCF40u;
label_2ccf40:
    // 0x2ccf40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ccf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf48: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x2ccf48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2ccf4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccf4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccf50: 0x0  nop
    ctx->pc = 0x2ccf50u;
    // NOP
    // 0x2ccf54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ccf54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ccf58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ccf58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ccf5c: 0xc0dce4e  jal         func_373938
    ctx->pc = 0x2CCF5Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF64u);
    ctx->pc = 0x2CCF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF5Cu;
    // 0x2ccf60: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x373938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373938u, 0x2CCF5Cu, 0x2CCF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF64u;
label_2ccf64:
    // 0x2ccf64: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2ccf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ccf68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ccf68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ccf6c: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x2ccf6cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[20]);
    // 0x2ccf70: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2ccf70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2ccf74: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ccf74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2ccf78:
    // 0x2ccf78: 0xc0dcecc  jal         func_373B30
    ctx->pc = 0x2CCF78u;
    SET_GPR_U32(ctx, 31, 0x2CCF80u);
    ctx->pc = 0x2CCF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF78u;
    // 0x2ccf7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B30u, 0x2CCF78u, 0x2CCF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF80u;
label_2ccf80:
    // 0x2ccf80: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2ccf80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ccf84: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2CCF84u;
    {
        const bool branch_taken_0x2ccf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccf84) {
            ctx->pc = 0x2CCF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCF84u;
            // 0x2ccf88: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ccf40;
        }
    }
    ctx->pc = 0x2CCF8Cu;
    // 0x2ccf8c: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x2ccf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2ccf90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ccf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccf94: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x2ccf94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x2ccf98: 0xae2300ac  sw          $v1, 0xAC($s1)
    ctx->pc = 0x2ccf98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
label_2ccf9c:
    // 0x2ccf9c: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x2ccf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2ccfa0: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x2ccfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2ccfa4: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2CCFA4u;
    {
        const bool branch_taken_0x2ccfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CCFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFA4u;
        // 0x2ccfa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccfa4) {
            ctx->pc = 0x2CD04Cu;
            goto label_2cd04c;
        }
    }
    ctx->pc = 0x2CCFACu;
    // 0x2ccfac: 0x56a20004  bnel        $s5, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCFACu;
    {
        const bool branch_taken_0x2ccfac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ccfac) {
            ctx->pc = 0x2CCFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCFACu;
            // 0x2ccfb0: 0x8e2200a8  lw          $v0, 0xA8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCFC0u;
            goto label_2ccfc0;
        }
    }
    ctx->pc = 0x2CCFB4u;
    // 0x2ccfb4: 0x26c2ee00  addiu       $v0, $s6, -0x1200
    ctx->pc = 0x2ccfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x2ccfb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CCFB8u;
    {
        const bool branch_taken_0x2ccfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFB8u;
        // 0x2ccfbc: 0xc4540124  lwc1        $f20, 0x124($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccfb8) {
            ctx->pc = 0x2CCFC4u;
            goto label_2ccfc4;
        }
    }
    ctx->pc = 0x2CCFC0u;
label_2ccfc0:
    // 0x2ccfc0: 0xc454000c  lwc1        $f20, 0xC($v0)
    ctx->pc = 0x2ccfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ccfc4:
    // 0x2ccfc4: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x2ccfc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccfc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ccfc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccfcc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CCFCCu;
    {
        const bool branch_taken_0x2ccfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFCCu;
        // 0x2ccfd0: 0x263000cc  addiu       $s0, $s1, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccfcc) {
            ctx->pc = 0x2CD010u;
            goto label_2cd010;
        }
    }
    ctx->pc = 0x2CCFD4u;
    // 0x2ccfd4: 0x0  nop
    ctx->pc = 0x2ccfd4u;
    // NOP
label_2ccfd8:
    // 0x2ccfd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ccfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccfdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccfe0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x2ccfe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2ccfe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccfe8: 0x0  nop
    ctx->pc = 0x2ccfe8u;
    // NOP
    // 0x2ccfec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ccfecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ccff0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ccff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ccff4: 0xc0dce4e  jal         func_373938
    ctx->pc = 0x2CCFF4u;
    SET_GPR_U32(ctx, 31, 0x2CCFFCu);
    ctx->pc = 0x2CCFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCFF4u;
    // 0x2ccff8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x373938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373938u, 0x2CCFF4u, 0x2CCFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCFFCu;
label_2ccffc:
    // 0x2ccffc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2ccffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd000: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cd000u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cd004: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x2cd004u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[20]);
    // 0x2cd008: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2cd008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2cd00c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2cd00cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2cd010:
    // 0x2cd010: 0xc0dcecc  jal         func_373B30
    ctx->pc = 0x2CD010u;
    SET_GPR_U32(ctx, 31, 0x2CD018u);
    ctx->pc = 0x2CD014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD010u;
    // 0x2cd014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B30u, 0x2CD010u, 0x2CD018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD018u;
label_2cd018:
    // 0x2cd018: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2cd018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cd01c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2CD01Cu;
    {
        const bool branch_taken_0x2cd01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd01c) {
            ctx->pc = 0x2CD020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD01Cu;
            // 0x2cd020: 0x86620000  lh          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ccfd8;
        }
    }
    ctx->pc = 0x2CD024u;
    // 0x2cd024: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2cd024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2cd028: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD028u;
    {
        const bool branch_taken_0x2cd028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd028) {
            ctx->pc = 0x2CD02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD028u;
            // 0x2cd02c: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD04Cu;
            goto label_2cd04c;
        }
    }
    ctx->pc = 0x2CD030u;
    // 0x2cd030: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2cd030u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2cd034: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2CD034u;
    SET_GPR_U32(ctx, 31, 0x2CD03Cu);
    ctx->pc = 0x2CD038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD034u;
    // 0x2cd038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2CD034u, 0x2CD03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD03Cu;
label_2cd03c:
    // 0x2cd03c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd040: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x2cd040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x2cd044: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2cd044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2cd048: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x2cd048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
label_2cd04c:
    // 0x2cd04c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cd04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd050: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2CD050u;
    {
        const bool branch_taken_0x2cd050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD050u;
        // 0x2cd054: 0x263000d4  addiu       $s0, $s1, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd050) {
            ctx->pc = 0x2CD0D8u;
            goto label_2cd0d8;
        }
    }
    ctx->pc = 0x2CD058u;
label_2cd058:
    // 0x2cd058: 0xc0dce4e  jal         func_373938
    ctx->pc = 0x2CD058u;
    SET_GPR_U32(ctx, 31, 0x2CD060u);
    ctx->pc = 0x2CD05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD058u;
    // 0x2cd05c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373938u, 0x2CD058u, 0x2CD060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD060u;
label_2cd060:
    // 0x2cd060: 0xc601fff8  lwc1        $f1, -0x8($s0)
    ctx->pc = 0x2cd060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd064: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2cd064u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd068: 0x0  nop
    ctx->pc = 0x2cd068u;
    // NOP
    // 0x2cd06c: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
    ctx->pc = 0x2CD06Cu;
    {
        const bool branch_taken_0x2cd06c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd06c) {
            ctx->pc = 0x2CD070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD06Cu;
            // 0x2cd070: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD0D4u;
            goto label_2cd0d4;
        }
    }
    ctx->pc = 0x2CD074u;
    // 0x2cd074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd078: 0xc0dce4e  jal         func_373938
    ctx->pc = 0x2CD078u;
    SET_GPR_U32(ctx, 31, 0x2CD080u);
    ctx->pc = 0x2CD07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD078u;
    // 0x2cd07c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373938u, 0x2CD078u, 0x2CD080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD080u;
label_2cd080:
    // 0x2cd080: 0xc60cfff8  lwc1        $f12, -0x8($s0)
    ctx->pc = 0x2cd080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cd084: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2cd084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd088: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x2cd088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2cd08c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2cd08cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2cd090: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2cd090u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2cd094: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cd094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd098: 0x0  nop
    ctx->pc = 0x2cd098u;
    // NOP
    // 0x2cd09c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD09Cu;
    {
        const bool branch_taken_0x2cd09c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD09Cu;
        // 0x2cd0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd09c) {
            ctx->pc = 0x2CD0B4u;
            goto label_2cd0b4;
        }
    }
    ctx->pc = 0x2CD0A4u;
    // 0x2cd0a4: 0xc0dce28  jal         func_3738A0
    ctx->pc = 0x2CD0A4u;
    SET_GPR_U32(ctx, 31, 0x2CD0ACu);
    ctx->pc = 0x2CD0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD0A4u;
    // 0x2cd0a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3738A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3738A0u, 0x2CD0A4u, 0x2CD0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0ACu;
label_2cd0ac:
    // 0x2cd0ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD0ACu;
    {
        const bool branch_taken_0x2cd0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0ACu;
        // 0x2cd0b0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0ac) {
            ctx->pc = 0x2CD0D4u;
            goto label_2cd0d4;
        }
    }
    ctx->pc = 0x2CD0B4u;
label_2cd0b4:
    // 0x2cd0b4: 0xc0dce4e  jal         func_373938
    ctx->pc = 0x2CD0B4u;
    SET_GPR_U32(ctx, 31, 0x2CD0BCu);
    ctx->pc = 0x2CD0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD0B4u;
    // 0x2cd0b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373938u, 0x2CD0B4u, 0x2CD0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0BCu;
label_2cd0bc:
    // 0x2cd0bc: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2cd0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cd0c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cd0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0c8: 0xc0dce28  jal         func_3738A0
    ctx->pc = 0x2CD0C8u;
    SET_GPR_U32(ctx, 31, 0x2CD0D0u);
    ctx->pc = 0x2CD0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD0C8u;
    // 0x2cd0cc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3738A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3738A0u, 0x2CD0C8u, 0x2CD0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0D0u;
label_2cd0d0:
    // 0x2cd0d0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2cd0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2cd0d4:
    // 0x2cd0d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cd0d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2cd0d8:
    // 0x2cd0d8: 0xc0dcecc  jal         func_373B30
    ctx->pc = 0x2CD0D8u;
    SET_GPR_U32(ctx, 31, 0x2CD0E0u);
    ctx->pc = 0x2CD0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD0D8u;
    // 0x2cd0dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B30u, 0x2CD0D8u, 0x2CD0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0E0u;
label_2cd0e0:
    // 0x2cd0e0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2cd0e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cd0e4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2CD0E4u;
    {
        const bool branch_taken_0x2cd0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0E4u;
        // 0x2cd0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0e4) {
            ctx->pc = 0x2CD058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd058;
        }
    }
    ctx->pc = 0x2CD0ECu;
    // 0x2cd0ec: 0xc0b41dc  jal         func_2D0770
    ctx->pc = 0x2CD0ECu;
    SET_GPR_U32(ctx, 31, 0x2CD0F4u);
    ctx->pc = 0x2CD0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD0ECu;
    // 0x2cd0f0: 0x26c4ee00  addiu       $a0, $s6, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0770u, 0x2CD0ECu, 0x2CD0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0F4u;
label_2cd0f4:
    // 0x2cd0f4: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x2cd0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x2cd0f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cd0fc: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2CD0FCu;
    {
        const bool branch_taken_0x2cd0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0FCu;
        // 0x2cd100: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0fc) {
            ctx->pc = 0x2CD1A4u;
            goto label_2cd1a4;
        }
    }
    ctx->pc = 0x2CD104u;
    // 0x2cd104: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cd104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd108: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2CD108u;
    SET_GPR_U32(ctx, 31, 0x2CD110u);
    ctx->pc = 0x2CD10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD108u;
    // 0x2cd10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2CD108u, 0x2CD110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD110u;
label_2cd110:
    // 0x2cd110: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2cd110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2cd114: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cd114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd118: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x2cd118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x2cd11c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2CD11Cu;
    {
        const bool branch_taken_0x2cd11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD11Cu;
        // 0x2cd120: 0xae2300b4  sw          $v1, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd11c) {
            ctx->pc = 0x2CD1A0u;
            goto label_2cd1a0;
        }
    }
    ctx->pc = 0x2CD124u;
label_2cd124:
    // 0x2cd124: 0xc0dce96  jal         func_373A58
    ctx->pc = 0x2CD124u;
    SET_GPR_U32(ctx, 31, 0x2CD12Cu);
    ctx->pc = 0x2CD128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD124u;
    // 0x2cd128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A58u, 0x2CD124u, 0x2CD12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD12Cu;
label_2cd12c:
    // 0x2cd12c: 0x1452000a  bne         $v0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2CD12Cu;
    {
        const bool branch_taken_0x2cd12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2cd12c) {
            ctx->pc = 0x2CD158u;
            goto label_2cd158;
        }
    }
    ctx->pc = 0x2CD134u;
    // 0x2cd134: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x2cd134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2cd138: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CD138u;
    {
        const bool branch_taken_0x2cd138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD138u;
        // 0x2cd13c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd138) {
            ctx->pc = 0x2CD154u;
            goto label_2cd154;
        }
    }
    ctx->pc = 0x2CD140u;
    // 0x2cd140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd144: 0xc0dce16  jal         func_373858
    ctx->pc = 0x2CD144u;
    SET_GPR_U32(ctx, 31, 0x2CD14Cu);
    ctx->pc = 0x2CD148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD144u;
    // 0x2cd148: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373858u, 0x2CD144u, 0x2CD14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD14Cu;
label_2cd14c:
    // 0x2cd14c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2CD14Cu;
    {
        const bool branch_taken_0x2cd14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD14Cu;
        // 0x2cd150: 0xae2000b0  sw          $zero, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd14c) {
            ctx->pc = 0x2CD1A0u;
            goto label_2cd1a0;
        }
    }
    ctx->pc = 0x2CD154u;
label_2cd154:
    // 0x2cd154: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x2cd154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_2cd158:
    // 0x2cd158: 0xc0b41dc  jal         func_2D0770
    ctx->pc = 0x2CD158u;
    SET_GPR_U32(ctx, 31, 0x2CD160u);
    ctx->pc = 0x2CD15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD158u;
    // 0x2cd15c: 0x26c4ee00  addiu       $a0, $s6, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0770u, 0x2CD158u, 0x2CD160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD160u;
label_2cd160:
    // 0x2cd160: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x2cd160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x2cd164: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cd168: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CD168u;
    {
        const bool branch_taken_0x2cd168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD168u;
        // 0x2cd16c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd168) {
            ctx->pc = 0x2CD1A4u;
            goto label_2cd1a4;
        }
    }
    ctx->pc = 0x2CD170u;
    // 0x2cd170: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2cd170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2cd174: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD174u;
    {
        const bool branch_taken_0x2cd174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd174) {
            ctx->pc = 0x2CD178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD174u;
            // 0x2cd178: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD1A8u;
            goto label_2cd1a8;
        }
    }
    ctx->pc = 0x2CD17Cu;
    // 0x2cd17c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2cd17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2cd180: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cd180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd184: 0xc0b351c  jal         func_2CD470
    ctx->pc = 0x2CD184u;
    SET_GPR_U32(ctx, 31, 0x2CD18Cu);
    ctx->pc = 0x2CD188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD184u;
    // 0x2cd188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD470u, 0x2CD184u, 0x2CD18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD18Cu;
label_2cd18c:
    // 0x2cd18c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cd18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd194: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x2cd194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
    // 0x2cd198: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x2cd198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
    // 0x2cd19c: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x2cd19cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_2cd1a0:
    // 0x2cd1a0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2cd1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cd1a4:
    // 0x2cd1a4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2cd1a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cd1a8:
    // 0x2cd1a8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2cd1a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cd1ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cd1acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd1b0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2cd1b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd1b4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2cd1b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd1b8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2cd1b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd1bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd1c0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2cd1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cd1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1C4u;
        // 0x2cd1c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD1CCu;
    // 0x2cd1cc: 0x0  nop
    ctx->pc = 0x2cd1ccu;
    // NOP
    ctx->pc = 0x2cd1d0u;
}
