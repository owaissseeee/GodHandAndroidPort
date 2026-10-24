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

// Function: func_001471F0
// Address: 0x1471f0 - 0x147460
void func_001471F0_0x1471f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001471F0_0x1471f0");
#endif

    switch (ctx->pc) {
        case 0x147248u: goto label_147248;
        case 0x147450u: goto label_147450;
        default: break;
    }

    ctx->pc = 0x1471f0u;

    // 0x1471f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1471f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1471f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1471f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1471f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1471f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1471fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1471fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147200: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x147200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x147204: 0x50400093  beql        $v0, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x147204u;
    {
        const bool branch_taken_0x147204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147204) {
            ctx->pc = 0x147208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147204u;
            // 0x147208: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147454u;
            goto label_147454;
        }
    }
    ctx->pc = 0x14720Cu;
    // 0x14720c: 0x920200b8  lbu         $v0, 0xB8($s0)
    ctx->pc = 0x14720cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x147210: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x147210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x147214: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x147214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x147218: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x147218u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x14721c: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x14721cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x147220: 0x10600089  beqz        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x147220u;
    {
        const bool branch_taken_0x147220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147220u;
        // 0x147224: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147220) {
            ctx->pc = 0x147448u;
            goto label_147448;
        }
    }
    ctx->pc = 0x147228u;
    // 0x147228: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x147228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14722c: 0x2442e980  addiu       $v0, $v0, -0x1680
    ctx->pc = 0x14722cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961536));
    // 0x147230: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x147230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x147234: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x147234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147238: 0x800008  jr          $a0
    ctx->pc = 0x147238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147240u: goto label_147240;
            case 0x147258u: goto label_147258;
            case 0x1472D8u: goto label_1472d8;
            case 0x1473BCu: goto label_1473bc;
            case 0x14743Cu: goto label_14743c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147238u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x147240u;
label_147240:
    // 0x147240: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x147240u;
    SET_GPR_U32(ctx, 31, 0x147248u);
    ctx->pc = 0x147244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147240u;
    // 0x147244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x147240u, 0x147248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147248u;
label_147248:
    // 0x147248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14724c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14724cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147250: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x147250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x147254: 0xa20300b8  sb          $v1, 0xB8($s0)
    ctx->pc = 0x147254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 3));
label_147258:
    // 0x147258: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x147258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x14725c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x14725cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x147260: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x147260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x147264: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x147264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147268: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x147268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14726c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14726cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x147270: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x147270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x147274: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x147274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x147278: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x147278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14727c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14727cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x147280: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x147280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x147284: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x147284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x147288: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x147288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x14728c: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x14728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147290: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x147290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147294: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147298: 0x0  nop
    ctx->pc = 0x147298u;
    // NOP
    // 0x14729c: 0x4500006a  bc1f        . + 4 + (0x6A << 2)
    ctx->pc = 0x14729Cu;
    {
        const bool branch_taken_0x14729c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1472A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14729Cu;
        // 0x1472a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14729c) {
            ctx->pc = 0x147448u;
            goto label_147448;
        }
    }
    ctx->pc = 0x1472A4u;
    // 0x1472a4: 0xe4610040  swc1        $f1, 0x40($v1)
    ctx->pc = 0x1472a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x1472a8: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1472a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1472ac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1472acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1472b0: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x1472b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1472b4: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x1472b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1472b8: 0x960200ac  lhu         $v0, 0xAC($s0)
    ctx->pc = 0x1472b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1472bc: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x1472bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1472c0: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x1472c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x1472c4: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x1472c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1472c8: 0x960200ac  lhu         $v0, 0xAC($s0)
    ctx->pc = 0x1472c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1472cc: 0xa4620090  sh          $v0, 0x90($v1)
    ctx->pc = 0x1472ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x1472d0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1472D0u;
    {
        const bool branch_taken_0x1472d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1472D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472D0u;
        // 0x1472d4: 0xa20500b8  sb          $a1, 0xB8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472d0) {
            ctx->pc = 0x147448u;
            goto label_147448;
        }
    }
    ctx->pc = 0x1472D8u;
label_1472d8:
    // 0x1472d8: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1472d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1472dc: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1472dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1472e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1472e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1472e4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1472e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1472e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1472e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1472ec: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x1472ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x1472f0: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x1472f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1472f4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1472f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1472f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1472f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1472fc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1472fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x147300: 0x960300ac  lhu         $v1, 0xAC($s0)
    ctx->pc = 0x147300u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x147304: 0x2463e000  addiu       $v1, $v1, -0x2000
    ctx->pc = 0x147304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959104));
    // 0x147308: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x147308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x14730c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x14730Cu;
    {
        const bool branch_taken_0x14730c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14730Cu;
        // 0x147310: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14730c) {
            ctx->pc = 0x147448u;
            goto label_147448;
        }
    }
    ctx->pc = 0x147314u;
    // 0x147314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x147314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147318: 0x2442e9a0  addiu       $v0, $v0, -0x1660
    ctx->pc = 0x147318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961568));
    // 0x14731c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14731cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x147320: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x147320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147324: 0x800008  jr          $a0
    ctx->pc = 0x147324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14732Cu: goto label_14732c;
            case 0x147350u: goto label_147350;
            case 0x14735Cu: goto label_14735c;
            case 0x147368u: goto label_147368;
            case 0x147374u: goto label_147374;
            case 0x1473A4u: goto label_1473a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147324u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14732Cu;
label_14732c:
    // 0x14732c: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x14732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x147330: 0x24052006  addiu       $a1, $zero, 0x2006
    ctx->pc = 0x147330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8198));
    // 0x147334: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x147334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x147338: 0xa4450090  sh          $a1, 0x90($v0)
    ctx->pc = 0x147338u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x14733c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14733cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x147340: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x147340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x147344: 0xa4450090  sh          $a1, 0x90($v0)
    ctx->pc = 0x147344u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x147348: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x147348u;
    {
        const bool branch_taken_0x147348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147348u;
        // 0x14734c: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147348) {
            ctx->pc = 0x147394u;
            goto label_147394;
        }
    }
    ctx->pc = 0x147350u;
label_147350:
    // 0x147350: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x147350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x147354: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x147354u;
    {
        const bool branch_taken_0x147354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147354u;
        // 0x147358: 0x24042007  addiu       $a0, $zero, 0x2007 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147354) {
            ctx->pc = 0x1473ACu;
            goto label_1473ac;
        }
    }
    ctx->pc = 0x14735Cu;
label_14735c:
    // 0x14735c: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x14735cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x147360: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x147360u;
    {
        const bool branch_taken_0x147360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147360u;
        // 0x147364: 0x24042008  addiu       $a0, $zero, 0x2008 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147360) {
            ctx->pc = 0x1473ACu;
            goto label_1473ac;
        }
    }
    ctx->pc = 0x147368u;
label_147368:
    // 0x147368: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x147368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x14736c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14736Cu;
    {
        const bool branch_taken_0x14736c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14736Cu;
        // 0x147370: 0x24042009  addiu       $a0, $zero, 0x2009 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14736c) {
            ctx->pc = 0x1473ACu;
            goto label_1473ac;
        }
    }
    ctx->pc = 0x147374u;
label_147374:
    // 0x147374: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x147374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x147378: 0x2405200a  addiu       $a1, $zero, 0x200A
    ctx->pc = 0x147378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8202));
    // 0x14737c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x14737cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x147380: 0xa4450090  sh          $a1, 0x90($v0)
    ctx->pc = 0x147380u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x147384: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x147384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x147388: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x147388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x14738c: 0xa4450090  sh          $a1, 0x90($v0)
    ctx->pc = 0x14738cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x147390: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x147390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_147394:
    // 0x147394: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x147394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x147398: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x147398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14739c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x14739Cu;
    {
        const bool branch_taken_0x14739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1473A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14739Cu;
        // 0x1473a0: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14739c) {
            ctx->pc = 0x147448u;
            goto label_147448;
        }
    }
    ctx->pc = 0x1473A4u;
label_1473a4:
    // 0x1473a4: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1473a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1473a8: 0x2404200b  addiu       $a0, $zero, 0x200B
    ctx->pc = 0x1473a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8203));
label_1473ac:
    // 0x1473ac: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x1473acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x1473b0: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1473b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1473b4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1473B4u;
    {
        const bool branch_taken_0x1473b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1473B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473B4u;
        // 0x1473b8: 0xa4640090  sh          $a0, 0x90($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473b4) {
            ctx->pc = 0x147448u;
            goto label_147448;
        }
    }
    ctx->pc = 0x1473BCu;
label_1473bc:
    // 0x1473bc: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x1473bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1473c0: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1473c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x1473c4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1473c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1473c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1473c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1473cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1473ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1473d0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1473d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1473d4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1473d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1473d8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1473d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1473dc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1473dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1473e0: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x1473e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1473e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1473e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1473e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1473e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1473ec: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1473ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1473f0: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1473f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1473f4: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x1473f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1473f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1473f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1473fc: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x1473fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x147400: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x147400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x147404: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x147404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147408: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x147408u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14740c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x14740cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x147410: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x147410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x147414: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x147414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147418: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x147418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14741c: 0x0  nop
    ctx->pc = 0x14741cu;
    // NOP
    // 0x147420: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x147420u;
    {
        const bool branch_taken_0x147420 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147420u;
        // 0x147424: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147420) {
            ctx->pc = 0x147448u;
            goto label_147448;
        }
    }
    ctx->pc = 0x147428u;
    // 0x147428: 0xe4420040  swc1        $f2, 0x40($v0)
    ctx->pc = 0x147428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x14742c: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x14742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x147430: 0xe4420044  swc1        $f2, 0x44($v0)
    ctx->pc = 0x147430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x147434: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x147434u;
    {
        const bool branch_taken_0x147434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147434u;
        // 0x147438: 0xa20300b8  sb          $v1, 0xB8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147434) {
            ctx->pc = 0x147448u;
            goto label_147448;
        }
    }
    ctx->pc = 0x14743Cu;
label_14743c:
    // 0x14743c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14743cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x147440: 0xa20000b8  sb          $zero, 0xB8($s0)
    ctx->pc = 0x147440u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 0));
    // 0x147444: 0xa60200ac  sh          $v0, 0xAC($s0)
    ctx->pc = 0x147444u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 172), (uint16_t)GPR_U32(ctx, 2));
label_147448:
    // 0x147448: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x147448u;
    SET_GPR_U32(ctx, 31, 0x147450u);
    ctx->pc = 0x14744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147448u;
    // 0x14744c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x147448u, 0x147450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147450u;
label_147450:
    // 0x147450: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x147450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_147454:
    // 0x147454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147458: 0x3e00008  jr          $ra
    ctx->pc = 0x147458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147458u;
        // 0x14745c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147460u;
}
