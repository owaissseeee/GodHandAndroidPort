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

// Function: func_0026A200
// Address: 0x26a200 - 0x26a338
void func_0026A200_0x26a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026A200_0x26a200");
#endif

    switch (ctx->pc) {
        case 0x26a270u: goto label_26a270;
        default: break;
    }

    ctx->pc = 0x26a200u;

    // 0x26a200: 0x8c820564  lw          $v0, 0x564($a0)
    ctx->pc = 0x26a200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x26a204: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26a204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26a208: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x26a208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x26a20c: 0x246852d8  addiu       $t0, $v1, 0x52D8
    ctx->pc = 0x26a20cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 21208));
    // 0x26a210: 0x89050003  lwl         $a1, 0x3($t0)
    ctx->pc = 0x26a210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x26a214: 0x99050000  lwr         $a1, 0x0($t0)
    ctx->pc = 0x26a214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x26a218: 0x81060004  lb          $a2, 0x4($t0)
    ctx->pc = 0x26a218u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x4452DCu));
    // 0x26a21c: 0x81070005  lb          $a3, 0x5($t0)
    ctx->pc = 0x26a21cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x4452DDu));
    // 0x26a220: 0xaba50003  swl         $a1, 0x3($sp)
    ctx->pc = 0x26a220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26a224: 0xbba50000  swr         $a1, 0x0($sp)
    ctx->pc = 0x26a224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26a228: 0xa3a60004  sb          $a2, 0x4($sp)
    ctx->pc = 0x26a228u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x26a22c: 0xa3a70005  sb          $a3, 0x5($sp)
    ctx->pc = 0x26a22cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x26a230: 0x81050006  lb          $a1, 0x6($t0)
    ctx->pc = 0x26a230u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x4452DEu));
    // 0x26a234: 0xa3a50006  sb          $a1, 0x6($sp)
    ctx->pc = 0x26a234u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 5));
    // 0x26a238: 0x38420222  xori        $v0, $v0, 0x222
    ctx->pc = 0x26a238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)546);
    // 0x26a23c: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x26A23Cu;
    {
        const bool branch_taken_0x26a23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a23c) {
            ctx->pc = 0x26A330u;
            goto label_26a330;
        }
    }
    ctx->pc = 0x26A244u;
    // 0x26a244: 0x80821865  lb          $v0, 0x1865($a0)
    ctx->pc = 0x26a244u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6245)));
    // 0x26a248: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A248u;
    {
        const bool branch_taken_0x26a248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A248u;
        // 0x26a24c: 0x90831865  lbu         $v1, 0x1865($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6245)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a248) {
            ctx->pc = 0x26A258u;
            goto label_26a258;
        }
    }
    ctx->pc = 0x26A250u;
    // 0x26a250: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x26a250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26a254: 0xa0821865  sb          $v0, 0x1865($a0)
    ctx->pc = 0x26a254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6245), (uint8_t)GPR_U32(ctx, 2));
label_26a258:
    // 0x26a258: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26a258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26a25c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26a25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26a260: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26a260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a264: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26a264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a268: 0x3a71021  addu        $v0, $sp, $a3
    ctx->pc = 0x26a268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x26a26c: 0x0  nop
    ctx->pc = 0x26a26cu;
    // NOP
label_26a270:
    // 0x26a270: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x26a270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x26a274: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x26a274u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26a278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a27c: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x26a27cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x26a280: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A280u;
    {
        const bool branch_taken_0x26a280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A280u;
        // 0x26a284: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a280) {
            ctx->pc = 0x26A290u;
            goto label_26a290;
        }
    }
    ctx->pc = 0x26A288u;
    // 0x26a288: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x26a288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26a28c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26a28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a290:
    // 0x26a290: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x26a290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x26a294: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A294u;
    {
        const bool branch_taken_0x26a294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A294u;
        // 0x26a298: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a294) {
            ctx->pc = 0x26A2ACu;
            goto label_26a2ac;
        }
    }
    ctx->pc = 0x26A29Cu;
    // 0x26a29c: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x26a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x26a2a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a2a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26A2A4u;
    {
        const bool branch_taken_0x26a2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2A4u;
        // 0x26a2a8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2a4) {
            ctx->pc = 0x26A2B0u;
            goto label_26a2b0;
        }
    }
    ctx->pc = 0x26A2ACu;
label_26a2ac:
    // 0x26a2ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x26a2acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a2b0:
    // 0x26a2b0: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x26A2B0u;
    {
        const bool branch_taken_0x26a2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a2b0) {
            ctx->pc = 0x26A2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A2B0u;
            // 0x26a2b4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A324u;
            goto label_26a324;
        }
    }
    ctx->pc = 0x26A2B8u;
    // 0x26a2b8: 0x80821865  lb          $v0, 0x1865($a0)
    ctx->pc = 0x26a2b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6245)));
    // 0x26a2bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26A2BCu;
    {
        const bool branch_taken_0x26a2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2BCu;
        // 0x26a2c0: 0xc48005a8  lwc1        $f0, 0x5A8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2bc) {
            ctx->pc = 0x26A2ECu;
            goto label_26a2ec;
        }
    }
    ctx->pc = 0x26A2C4u;
    // 0x26a2c4: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x26a2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a2c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26a2c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a2cc: 0xe4610110  swc1        $f1, 0x110($v1)
    ctx->pc = 0x26a2ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x26a2d0: 0xc48017d4  lwc1        $f0, 0x17D4($a0)
    ctx->pc = 0x26a2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a2d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26a2d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a2d8: 0x0  nop
    ctx->pc = 0x26a2d8u;
    // NOP
    // 0x26a2dc: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x26A2DCu;
    {
        const bool branch_taken_0x26a2dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a2dc) {
            ctx->pc = 0x26A2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A2DCu;
            // 0x26a2e0: 0xe4600110  swc1        $f0, 0x110($v1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A314u;
            goto label_26a314;
        }
    }
    ctx->pc = 0x26A2E4u;
    // 0x26a2e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26A2E4u;
    {
        const bool branch_taken_0x26a2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2E4u;
        // 0x26a2e8: 0xc4600110  lwc1        $f0, 0x110($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2e4) {
            ctx->pc = 0x26A318u;
            goto label_26a318;
        }
    }
    ctx->pc = 0x26A2ECu;
label_26a2ec:
    // 0x26a2ec: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x26a2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a2f0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x26a2f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x26a2f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26a2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26a2f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26a2f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a2fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26a2fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26a300: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x26a300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a304: 0x0  nop
    ctx->pc = 0x26a304u;
    // NOP
    // 0x26a308: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26A308u;
    {
        const bool branch_taken_0x26a308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A308u;
        // 0x26a30c: 0xe4610110  swc1        $f1, 0x110($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a308) {
            ctx->pc = 0x26A314u;
            goto label_26a314;
        }
    }
    ctx->pc = 0x26A310u;
    // 0x26a310: 0xe4620110  swc1        $f2, 0x110($v1)
    ctx->pc = 0x26a310u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
label_26a314:
    // 0x26a314: 0xc4600110  lwc1        $f0, 0x110($v1)
    ctx->pc = 0x26a314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a318:
    // 0x26a318: 0xe4600114  swc1        $f0, 0x114($v1)
    ctx->pc = 0x26a318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 276), bits); }
    // 0x26a31c: 0xe4600118  swc1        $f0, 0x118($v1)
    ctx->pc = 0x26a31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 280), bits); }
    // 0x26a320: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x26a320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_26a324:
    // 0x26a324: 0x2ce20007  sltiu       $v0, $a3, 0x7
    ctx->pc = 0x26a324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x26a328: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x26A328u;
    {
        const bool branch_taken_0x26a328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A328u;
        // 0x26a32c: 0x3a71021  addu        $v0, $sp, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a328) {
            ctx->pc = 0x26A270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26a270;
        }
    }
    ctx->pc = 0x26A330u;
label_26a330:
    // 0x26a330: 0x3e00008  jr          $ra
    ctx->pc = 0x26A330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A330u;
        // 0x26a334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A338u;
}
