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

// Function: func_002D22F0
// Address: 0x2d22f0 - 0x2d2c18
void func_002D22F0_0x2d22f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D22F0_0x2d22f0");
#endif

    switch (ctx->pc) {
        case 0x2d2360u: goto label_2d2360;
        case 0x2d23b0u: goto label_2d23b0;
        case 0x2d23e8u: goto label_2d23e8;
        case 0x2d23fcu: goto label_2d23fc;
        case 0x2d2470u: goto label_2d2470;
        case 0x2d2504u: goto label_2d2504;
        case 0x2d251cu: goto label_2d251c;
        case 0x2d2534u: goto label_2d2534;
        case 0x2d259cu: goto label_2d259c;
        case 0x2d25b4u: goto label_2d25b4;
        case 0x2d25c8u: goto label_2d25c8;
        case 0x2d25e0u: goto label_2d25e0;
        case 0x2d2640u: goto label_2d2640;
        case 0x2d2670u: goto label_2d2670;
        case 0x2d2694u: goto label_2d2694;
        case 0x2d26bcu: goto label_2d26bc;
        case 0x2d26e8u: goto label_2d26e8;
        case 0x2d2700u: goto label_2d2700;
        case 0x2d2724u: goto label_2d2724;
        case 0x2d274cu: goto label_2d274c;
        case 0x2d275cu: goto label_2d275c;
        case 0x2d2788u: goto label_2d2788;
        case 0x2d27b0u: goto label_2d27b0;
        case 0x2d27ccu: goto label_2d27cc;
        case 0x2d2848u: goto label_2d2848;
        case 0x2d29d0u: goto label_2d29d0;
        case 0x2d2a24u: goto label_2d2a24;
        case 0x2d2a8cu: goto label_2d2a8c;
        case 0x2d2ae8u: goto label_2d2ae8;
        case 0x2d2b24u: goto label_2d2b24;
        case 0x2d2b40u: goto label_2d2b40;
        case 0x2d2b4cu: goto label_2d2b4c;
        default: break;
    }

    ctx->pc = 0x2d22f0u;

    // 0x2d22f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2d22f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2d22f4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2d22f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2d22f8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2d22f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2d22fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d22fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2300: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2d2300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2d2304: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2d2304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2d2308: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2d2308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2d230c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2d230cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x2d2310: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2d2310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2d2314: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2d2314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2d2318: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2d2318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x2d231c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d231cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d2320: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x2d2320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2d2324: 0x8e6300b0  lw          $v1, 0xB0($s3)
    ctx->pc = 0x2d2324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x2d2328: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x2d2328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2d232c: 0xc660009c  lwc1        $f0, 0x9C($s3)
    ctx->pc = 0x2d232cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2330: 0xc66100a0  lwc1        $f1, 0xA0($s3)
    ctx->pc = 0x2d2330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2334: 0x8e660024  lw          $a2, 0x24($s3)
    ctx->pc = 0x2d2334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2d2338: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x2d2338u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x2d233c: 0xae6300ac  sw          $v1, 0xAC($s3)
    ctx->pc = 0x2d233cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 3));
    // 0x2d2340: 0xae640050  sw          $a0, 0x50($s3)
    ctx->pc = 0x2d2340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 4));
    // 0x2d2344: 0xe6600074  swc1        $f0, 0x74($s3)
    ctx->pc = 0x2d2344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
    // 0x2d2348: 0x10c00226  beqz        $a2, . + 4 + (0x226 << 2)
    ctx->pc = 0x2D2348u;
    {
        const bool branch_taken_0x2d2348 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2348u;
        // 0x2d234c: 0xe6610088  swc1        $f1, 0x88($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2348) {
            ctx->pc = 0x2D2BE4u;
            goto label_2d2be4;
        }
    }
    ctx->pc = 0x2D2350u;
    // 0x2d2350: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d2350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d2354: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d2354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2358: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x2D2358u;
    SET_GPR_U32(ctx, 31, 0x2D2360u);
    ctx->pc = 0x2D235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2358u;
    // 0x2d235c: 0x24a5d100  addiu       $a1, $a1, -0x2F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x2D2358u, 0x2D2360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2360u;
label_2d2360:
    // 0x2d2360: 0x54400220  bnel        $v0, $zero, . + 4 + (0x220 << 2)
    ctx->pc = 0x2D2360u;
    {
        const bool branch_taken_0x2d2360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2360) {
            ctx->pc = 0x2D2364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2360u;
            // 0x2d2364: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2BE4u;
            goto label_2d2be4;
        }
    }
    ctx->pc = 0x2D2368u;
    // 0x2d2368: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x2d2368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2d236c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x2d236cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x2d2370: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2d2370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2d2374: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d2374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2378: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d2378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d237c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2d237cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2380: 0x0  nop
    ctx->pc = 0x2d2380u;
    // NOP
    // 0x2d2384: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2384u;
    {
        const bool branch_taken_0x2d2384 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2384u;
        // 0x2d2388: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2384) {
            ctx->pc = 0x2D2394u;
            goto label_2d2394;
        }
    }
    ctx->pc = 0x2D238Cu;
    // 0x2d238c: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x2D238Cu;
    {
        const bool branch_taken_0x2d238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D238Cu;
        // 0x2d2390: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d238c) {
            ctx->pc = 0x2D2BE4u;
            goto label_2d2be4;
        }
    }
    ctx->pc = 0x2D2394u;
label_2d2394:
    // 0x2d2394: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2d2394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x2d2398: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2d2398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2d239c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2d239cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2d23a0: 0x14600211  bnez        $v1, . + 4 + (0x211 << 2)
    ctx->pc = 0x2D23A0u;
    {
        const bool branch_taken_0x2d23a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D23A0u;
        // 0x2d23a4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d23a0) {
            ctx->pc = 0x2D2BE8u;
            goto label_2d2be8;
        }
    }
    ctx->pc = 0x2D23A8u;
    // 0x2d23a8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2D23A8u;
    SET_GPR_U32(ctx, 31, 0x2D23B0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2D23A8u, 0x2D23B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D23B0u;
label_2d23b0:
    // 0x2d23b0: 0x1040020c  beqz        $v0, . + 4 + (0x20C << 2)
    ctx->pc = 0x2D23B0u;
    {
        const bool branch_taken_0x2d23b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D23B0u;
        // 0x2d23b4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d23b0) {
            ctx->pc = 0x2D2BE4u;
            goto label_2d2be4;
        }
    }
    ctx->pc = 0x2D23B8u;
    // 0x2d23b8: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x2d23b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2d23bc: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x2d23bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d23c0: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x2d23c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2d23c4: 0x10600207  beqz        $v1, . + 4 + (0x207 << 2)
    ctx->pc = 0x2D23C4u;
    {
        const bool branch_taken_0x2d23c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D23C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D23C4u;
        // 0x2d23c8: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d23c4) {
            ctx->pc = 0x2D2BE4u;
            goto label_2d2be4;
        }
    }
    ctx->pc = 0x2D23CCu;
    // 0x2d23cc: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D23CCu;
    {
        const bool branch_taken_0x2d23cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D23CCu;
        // 0x2d23d0: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d23cc) {
            ctx->pc = 0x2D2458u;
            goto label_2d2458;
        }
    }
    ctx->pc = 0x2D23D4u;
    // 0x2d23d4: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x2d23d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d23d8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2d23d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d23dc: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x2d23dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d23e0: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x2d23e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d23e4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2d23e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d23e8:
    // 0x2d23e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d23ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d23ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d23f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d23f4: 0xc0b02a6  jal         func_2C0A98
    ctx->pc = 0x2D23F4u;
    SET_GPR_U32(ctx, 31, 0x2D23FCu);
    ctx->pc = 0x2D23F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D23F4u;
    // 0x2d23f8: 0x8c4500f0  lw          $a1, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0A98u, 0x2D23F4u, 0x2D23FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D23FCu;
label_2d23fc:
    // 0x2d23fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D23FCu;
    {
        const bool branch_taken_0x2d23fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D23FCu;
        // 0x2d2400: 0x8e22005c  lw          $v0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d23fc) {
            ctx->pc = 0x2D2418u;
            goto label_2d2418;
        }
    }
    ctx->pc = 0x2D2404u;
    // 0x2d2404: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d2404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d2408: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D2408u;
    {
        const bool branch_taken_0x2d2408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2408) {
            ctx->pc = 0x2D240Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2408u;
            // 0x2d240c: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D244Cu;
            goto label_2d244c;
        }
    }
    ctx->pc = 0x2D2410u;
    // 0x2d2410: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D2410u;
    {
        const bool branch_taken_0x2d2410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2410u;
        // 0x2d2414: 0xae36005c  sw          $s6, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2410) {
            ctx->pc = 0x2D244Cu;
            goto label_2d244c;
        }
    }
    ctx->pc = 0x2D2418u;
label_2d2418:
    // 0x2d2418: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d2418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d241c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D241Cu;
    {
        const bool branch_taken_0x2d241c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d241c) {
            ctx->pc = 0x2D2420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D241Cu;
            // 0x2d2420: 0xae35005c  sw          $s5, 0x5C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2428u;
            goto label_2d2428;
        }
    }
    ctx->pc = 0x2D2424u;
    // 0x2d2424: 0xae32005c  sw          $s2, 0x5C($s1)
    ctx->pc = 0x2d2424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 18));
label_2d2428:
    // 0x2d2428: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x2d2428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2d242c: 0x54540008  bnel        $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D242Cu;
    {
        const bool branch_taken_0x2d242c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2d242c) {
            ctx->pc = 0x2D2430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D242Cu;
            // 0x2d2430: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2450u;
            goto label_2d2450;
        }
    }
    ctx->pc = 0x2D2434u;
    // 0x2d2434: 0x9222003d  lbu         $v0, 0x3D($s1)
    ctx->pc = 0x2d2434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 61)));
    // 0x2d2438: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2438u;
    {
        const bool branch_taken_0x2d2438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2438u;
        // 0x2d243c: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2438) {
            ctx->pc = 0x2D244Cu;
            goto label_2d244c;
        }
    }
    ctx->pc = 0x2D2440u;
    // 0x2d2440: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x2d2440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d2444: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d2444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d2448: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2d2448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_2d244c:
    // 0x2d244c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d244cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2d2450:
    // 0x2d2450: 0x1600ffe5  bnez        $s0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2D2450u;
    {
        const bool branch_taken_0x2d2450 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2450u;
        // 0x2d2454: 0x2631006c  addiu       $s1, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2450) {
            ctx->pc = 0x2D23E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d23e8;
        }
    }
    ctx->pc = 0x2D2458u;
label_2d2458:
    // 0x2d2458: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x2d2458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2d245c: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x2d245cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2d2460: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2d2460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2d2464: 0x104001df  beqz        $v0, . + 4 + (0x1DF << 2)
    ctx->pc = 0x2D2464u;
    {
        const bool branch_taken_0x2d2464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2464u;
        // 0x2d2468: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2464) {
            ctx->pc = 0x2D2BE4u;
            goto label_2d2be4;
        }
    }
    ctx->pc = 0x2D246Cu;
    // 0x2d246c: 0x0  nop
    ctx->pc = 0x2d246cu;
    // NOP
label_2d2470:
    // 0x2d2470: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x2d2470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2d2474: 0x2635006c  addiu       $s5, $s1, 0x6C
    ctx->pc = 0x2d2474u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x2d2478: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2d2478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2d247c: 0x104001d4  beqz        $v0, . + 4 + (0x1D4 << 2)
    ctx->pc = 0x2D247Cu;
    {
        const bool branch_taken_0x2d247c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D247Cu;
        // 0x2d2480: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d247c) {
            ctx->pc = 0x2D2BD0u;
            goto label_2d2bd0;
        }
    }
    ctx->pc = 0x2D2484u;
    // 0x2d2484: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2d2484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2d2488: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d2488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d248c: 0x2442d130  addiu       $v0, $v0, -0x2ED0
    ctx->pc = 0x2d248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955312));
    // 0x2d2490: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d2490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d2494: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d2494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d2498: 0x800008  jr          $a0
    ctx->pc = 0x2D2498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D24A0u: goto label_2d24a0;
            case 0x2D253Cu: goto label_2d253c;
            case 0x2D25E8u: goto label_2d25e8;
            case 0x2D2614u: goto label_2d2614;
            case 0x2D2678u: goto label_2d2678;
            case 0x2D26C4u: goto label_2d26c4;
            case 0x2D26F0u: goto label_2d26f0;
            case 0x2D2B54u: goto label_2d2b54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2498u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D24A0u;
label_2d24a0:
    // 0x2d24a0: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x2d24a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2d24a4: 0x26160001  addiu       $s6, $s0, 0x1
    ctx->pc = 0x2d24a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d24a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d24a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d24ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d24acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d24b0: 0x144001c7  bnez        $v0, . + 4 + (0x1C7 << 2)
    ctx->pc = 0x2D24B0u;
    {
        const bool branch_taken_0x2d24b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D24B0u;
        // 0x2d24b4: 0x2635006c  addiu       $s5, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d24b0) {
            ctx->pc = 0x2D2BD0u;
            goto label_2d2bd0;
        }
    }
    ctx->pc = 0x2D24B8u;
    // 0x2d24b8: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2d24b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2d24bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d24bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d24c0: 0x10660012  beq         $v1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D24C0u;
    {
        const bool branch_taken_0x2d24c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2D24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D24C0u;
        // 0x2d24c4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d24c0) {
            ctx->pc = 0x2D250Cu;
            goto label_2d250c;
        }
    }
    ctx->pc = 0x2D24C8u;
    // 0x2d24c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D24C8u;
    {
        const bool branch_taken_0x2d24c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D24C8u;
        // 0x2d24cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d24c8) {
            ctx->pc = 0x2D24E0u;
            goto label_2d24e0;
        }
    }
    ctx->pc = 0x2D24D0u;
    // 0x2d24d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D24D0u;
    {
        const bool branch_taken_0x2d24d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D24D0u;
        // 0x2d24d4: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d24d0) {
            ctx->pc = 0x2D24F0u;
            goto label_2d24f0;
        }
    }
    ctx->pc = 0x2D24D8u;
    // 0x2d24d8: 0x100001bf  b           . + 4 + (0x1BF << 2)
    ctx->pc = 0x2D24D8u;
    {
        const bool branch_taken_0x2d24d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D24D8u;
        // 0x2d24dc: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d24d8) {
            ctx->pc = 0x2D2BD8u;
            goto label_2d2bd8;
        }
    }
    ctx->pc = 0x2D24E0u;
label_2d24e0:
    // 0x2d24e0: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D24E0u;
    {
        const bool branch_taken_0x2d24e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D24E0u;
        // 0x2d24e4: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d24e0) {
            ctx->pc = 0x2D2524u;
            goto label_2d2524;
        }
    }
    ctx->pc = 0x2D24E8u;
    // 0x2d24e8: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x2D24E8u;
    {
        const bool branch_taken_0x2d24e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D24E8u;
        // 0x2d24ec: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d24e8) {
            ctx->pc = 0x2D2BD8u;
            goto label_2d2bd8;
        }
    }
    ctx->pc = 0x2D24F0u;
label_2d24f0:
    // 0x2d24f0: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2d24f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d24f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d24f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d24f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d24f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d24fc: 0xc0b41ca  jal         func_2D0728
    ctx->pc = 0x2D24FCu;
    SET_GPR_U32(ctx, 31, 0x2D2504u);
    ctx->pc = 0x2D2500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D24FCu;
    // 0x2d2500: 0xa62804  sllv        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0728u, 0x2D24FCu, 0x2D2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2504u;
label_2d2504:
    // 0x2d2504: 0x100001b3  b           . + 4 + (0x1B3 << 2)
    ctx->pc = 0x2D2504u;
    {
        const bool branch_taken_0x2d2504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2504u;
        // 0x2d2508: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2504) {
            ctx->pc = 0x2D2BD4u;
            goto label_2d2bd4;
        }
    }
    ctx->pc = 0x2D250Cu;
label_2d250c:
    // 0x2d250c: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2d250cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d2510: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d2510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2514: 0xc0b41d2  jal         func_2D0748
    ctx->pc = 0x2D2514u;
    SET_GPR_U32(ctx, 31, 0x2D251Cu);
    ctx->pc = 0x2D2518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2514u;
    // 0x2d2518: 0xa62804  sllv        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0748u, 0x2D2514u, 0x2D251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D251Cu;
label_2d251c:
    // 0x2d251c: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x2D251Cu;
    {
        const bool branch_taken_0x2d251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D251Cu;
        // 0x2d2520: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d251c) {
            ctx->pc = 0x2D2BD4u;
            goto label_2d2bd4;
        }
    }
    ctx->pc = 0x2D2524u;
label_2d2524:
    // 0x2d2524: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2d2524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d2528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d2528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d252c: 0xc0b41d6  jal         func_2D0758
    ctx->pc = 0x2D252Cu;
    SET_GPR_U32(ctx, 31, 0x2D2534u);
    ctx->pc = 0x2D2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D252Cu;
    // 0x2d2530: 0xa62804  sllv        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0758u, 0x2D252Cu, 0x2D2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2534u;
label_2d2534:
    // 0x2d2534: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x2D2534u;
    {
        const bool branch_taken_0x2d2534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2534u;
        // 0x2d2538: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2534) {
            ctx->pc = 0x2D2BD4u;
            goto label_2d2bd4;
        }
    }
    ctx->pc = 0x2D253Cu;
label_2d253c:
    // 0x2d253c: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x2d253cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2d2540: 0x2635006c  addiu       $s5, $s1, 0x6C
    ctx->pc = 0x2d2540u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x2d2544: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d2544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d2548: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d2548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d254c: 0x144001a0  bnez        $v0, . + 4 + (0x1A0 << 2)
    ctx->pc = 0x2D254Cu;
    {
        const bool branch_taken_0x2d254c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D254Cu;
        // 0x2d2550: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d254c) {
            ctx->pc = 0x2D2BD0u;
            goto label_2d2bd0;
        }
    }
    ctx->pc = 0x2D2554u;
    // 0x2d2554: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2d2554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2d2558: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d2558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d255c: 0x10660011  beq         $v1, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D255Cu;
    {
        const bool branch_taken_0x2d255c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2D2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D255Cu;
        // 0x2d2560: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d255c) {
            ctx->pc = 0x2D25A4u;
            goto label_2d25a4;
        }
    }
    ctx->pc = 0x2D2564u;
    // 0x2d2564: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2564u;
    {
        const bool branch_taken_0x2d2564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2564u;
        // 0x2d2568: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2564) {
            ctx->pc = 0x2D257Cu;
            goto label_2d257c;
        }
    }
    ctx->pc = 0x2D256Cu;
    // 0x2d256c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D256Cu;
    {
        const bool branch_taken_0x2d256c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d256c) {
            ctx->pc = 0x2D2570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D256Cu;
            // 0x2d2570: 0x8e25002c  lw          $a1, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D258Cu;
            goto label_2d258c;
        }
    }
    ctx->pc = 0x2D2574u;
    // 0x2d2574: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2D2574u;
    {
        const bool branch_taken_0x2d2574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2574u;
        // 0x2d2578: 0x8e650058  lw          $a1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2574) {
            ctx->pc = 0x2D25CCu;
            goto label_2d25cc;
        }
    }
    ctx->pc = 0x2D257Cu;
label_2d257c:
    // 0x2d257c: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D257Cu;
    {
        const bool branch_taken_0x2d257c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d257c) {
            ctx->pc = 0x2D2580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D257Cu;
            // 0x2d2580: 0x8e25002c  lw          $a1, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D25BCu;
            goto label_2d25bc;
        }
    }
    ctx->pc = 0x2D2584u;
    // 0x2d2584: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D2584u;
    {
        const bool branch_taken_0x2d2584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2584u;
        // 0x2d2588: 0x8e650058  lw          $a1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2584) {
            ctx->pc = 0x2D25CCu;
            goto label_2d25cc;
        }
    }
    ctx->pc = 0x2D258Cu;
label_2d258c:
    // 0x2d258c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d258cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2590: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d2590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d2594: 0xc0b41e0  jal         func_2D0780
    ctx->pc = 0x2D2594u;
    SET_GPR_U32(ctx, 31, 0x2D259Cu);
    ctx->pc = 0x2D2598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2594u;
    // 0x2d2598: 0xa62804  sllv        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0780u, 0x2D2594u, 0x2D259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D259Cu;
label_2d259c:
    // 0x2d259c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D259Cu;
    {
        const bool branch_taken_0x2d259c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D259Cu;
        // 0x2d25a0: 0x8e650058  lw          $a1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d259c) {
            ctx->pc = 0x2D25CCu;
            goto label_2d25cc;
        }
    }
    ctx->pc = 0x2D25A4u;
label_2d25a4:
    // 0x2d25a4: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2d25a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d25a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d25a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d25ac: 0xc0b41ea  jal         func_2D07A8
    ctx->pc = 0x2D25ACu;
    SET_GPR_U32(ctx, 31, 0x2D25B4u);
    ctx->pc = 0x2D25B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D25ACu;
    // 0x2d25b0: 0xa62804  sllv        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D07A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D07A8u, 0x2D25ACu, 0x2D25B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D25B4u;
label_2d25b4:
    // 0x2d25b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D25B4u;
    {
        const bool branch_taken_0x2d25b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D25B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25B4u;
        // 0x2d25b8: 0x8e650058  lw          $a1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d25b4) {
            ctx->pc = 0x2D25CCu;
            goto label_2d25cc;
        }
    }
    ctx->pc = 0x2D25BCu;
label_2d25bc:
    // 0x2d25bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d25bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d25c0: 0xc0b41f6  jal         func_2D07D8
    ctx->pc = 0x2D25C0u;
    SET_GPR_U32(ctx, 31, 0x2D25C8u);
    ctx->pc = 0x2D25C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D25C0u;
    // 0x2d25c4: 0xa62804  sllv        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D07D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D07D8u, 0x2D25C0u, 0x2D25C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D25C8u;
label_2d25c8:
    // 0x2d25c8: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x2d25c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2d25cc:
    // 0x2d25cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d25ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d25d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d25d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d25d4: 0x2635006c  addiu       $s5, $s1, 0x6C
    ctx->pc = 0x2d25d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x2d25d8: 0xc0b41ca  jal         func_2D0728
    ctx->pc = 0x2D25D8u;
    SET_GPR_U32(ctx, 31, 0x2D25E0u);
    ctx->pc = 0x2D25DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D25D8u;
    // 0x2d25dc: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0728u, 0x2D25D8u, 0x2D25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D25E0u;
label_2d25e0:
    // 0x2d25e0: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x2D25E0u;
    {
        const bool branch_taken_0x2d25e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D25E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25E0u;
        // 0x2d25e4: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d25e0) {
            ctx->pc = 0x2D2BD4u;
            goto label_2d2bd4;
        }
    }
    ctx->pc = 0x2D25E8u;
label_2d25e8:
    // 0x2d25e8: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x2d25e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2d25ec: 0x26160001  addiu       $s6, $s0, 0x1
    ctx->pc = 0x2d25ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d25f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d25f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d25f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d25f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d25f8: 0x14400175  bnez        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x2D25F8u;
    {
        const bool branch_taken_0x2d25f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D25F8u;
        // 0x2d25fc: 0x2635006c  addiu       $s5, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d25f8) {
            ctx->pc = 0x2D2BD0u;
            goto label_2d2bd0;
        }
    }
    ctx->pc = 0x2D2600u;
    // 0x2d2600: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2d2600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2604: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x2d2604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2608: 0xe6600088  swc1        $f0, 0x88($s3)
    ctx->pc = 0x2d2608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
    // 0x2d260c: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x2D260Cu;
    {
        const bool branch_taken_0x2d260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D260Cu;
        // 0x2d2610: 0xe6610074  swc1        $f1, 0x74($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d260c) {
            ctx->pc = 0x2D2BD0u;
            goto label_2d2bd0;
        }
    }
    ctx->pc = 0x2D2614u;
label_2d2614:
    // 0x2d2614: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x2d2614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2d2618: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2d2618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2d261c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D261Cu;
    {
        const bool branch_taken_0x2d261c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D261Cu;
        // 0x2d2620: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d261c) {
            ctx->pc = 0x2D2648u;
            goto label_2d2648;
        }
    }
    ctx->pc = 0x2D2624u;
    // 0x2d2624: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2d2624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d2628: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x2d2628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2d262c: 0x2635006c  addiu       $s5, $s1, 0x6C
    ctx->pc = 0x2d262cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x2d2630: 0x8e270034  lw          $a3, 0x34($s1)
    ctx->pc = 0x2d2630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2d2634: 0x26160001  addiu       $s6, $s0, 0x1
    ctx->pc = 0x2d2634u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d2638: 0xc0b4b5a  jal         func_2D2D68
    ctx->pc = 0x2D2638u;
    SET_GPR_U32(ctx, 31, 0x2D2640u);
    ctx->pc = 0x2D263Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2638u;
    // 0x2d263c: 0xc62c0038  lwc1        $f12, 0x38($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D68u, 0x2D2638u, 0x2D2640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2640u;
label_2d2640:
    // 0x2d2640: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x2D2640u;
    {
        const bool branch_taken_0x2d2640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2640u;
        // 0x2d2644: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2640) {
            ctx->pc = 0x2D2BD4u;
            goto label_2d2bd4;
        }
    }
    ctx->pc = 0x2D2648u;
label_2d2648:
    // 0x2d2648: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2d2648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2d264c: 0x2635006c  addiu       $s5, $s1, 0x6C
    ctx->pc = 0x2d264cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x2d2650: 0x1040015f  beqz        $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x2D2650u;
    {
        const bool branch_taken_0x2d2650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2650u;
        // 0x2d2654: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2650) {
            ctx->pc = 0x2D2BD0u;
            goto label_2d2bd0;
        }
    }
    ctx->pc = 0x2D2658u;
    // 0x2d2658: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d2658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d265c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d265cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2660: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d2660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d2664: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x2d2664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2d2668: 0xc0b4b5a  jal         func_2D2D68
    ctx->pc = 0x2D2668u;
    SET_GPR_U32(ctx, 31, 0x2D2670u);
    ctx->pc = 0x2D266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2668u;
    // 0x2d266c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D68u, 0x2D2668u, 0x2D2670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2670u;
label_2d2670:
    // 0x2d2670: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x2D2670u;
    {
        const bool branch_taken_0x2d2670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2670u;
        // 0x2d2674: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2670) {
            ctx->pc = 0x2D2BD4u;
            goto label_2d2bd4;
        }
    }
    ctx->pc = 0x2D2678u;
label_2d2678:
    // 0x2d2678: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2d2678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2d267c: 0x26160001  addiu       $s6, $s0, 0x1
    ctx->pc = 0x2d267cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d2680: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d2680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d2684: 0x10400152  beqz        $v0, . + 4 + (0x152 << 2)
    ctx->pc = 0x2D2684u;
    {
        const bool branch_taken_0x2d2684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2684u;
        // 0x2d2688: 0x2635006c  addiu       $s5, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2684) {
            ctx->pc = 0x2D2BD0u;
            goto label_2d2bd0;
        }
    }
    ctx->pc = 0x2D268Cu;
    // 0x2d268c: 0xc0b488a  jal         func_2D2228
    ctx->pc = 0x2D268Cu;
    SET_GPR_U32(ctx, 31, 0x2D2694u);
    ctx->pc = 0x2D2690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D268Cu;
    // 0x2d2690: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2228u, 0x2D268Cu, 0x2D2694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2694u;
label_2d2694:
    // 0x2d2694: 0x1040014e  beqz        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x2D2694u;
    {
        const bool branch_taken_0x2d2694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2694u;
        // 0x2d2698: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2694) {
            ctx->pc = 0x2D2BD0u;
            goto label_2d2bd0;
        }
    }
    ctx->pc = 0x2D269Cu;
    // 0x2d269c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2d269cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2d26a0: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x2d26a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2d26a4: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2d26a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d26a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d26a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d26ac: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2d26acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2d26b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d26b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d26b4: 0xc0b3240  jal         func_2CC900
    ctx->pc = 0x2D26B4u;
    SET_GPR_U32(ctx, 31, 0x2D26BCu);
    ctx->pc = 0x2D26B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D26B4u;
    // 0x2d26b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC900u, 0x2D26B4u, 0x2D26BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D26BCu;
label_2d26bc:
    // 0x2d26bc: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x2D26BCu;
    {
        const bool branch_taken_0x2d26bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D26BCu;
        // 0x2d26c0: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d26bc) {
            ctx->pc = 0x2D2BD4u;
            goto label_2d2bd4;
        }
    }
    ctx->pc = 0x2D26C4u;
label_2d26c4:
    // 0x2d26c4: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2d26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2d26c8: 0x26160001  addiu       $s6, $s0, 0x1
    ctx->pc = 0x2d26c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d26cc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d26ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d26d0: 0x1040013f  beqz        $v0, . + 4 + (0x13F << 2)
    ctx->pc = 0x2D26D0u;
    {
        const bool branch_taken_0x2d26d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D26D0u;
        // 0x2d26d4: 0x2635006c  addiu       $s5, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d26d0) {
            ctx->pc = 0x2D2BD0u;
            goto label_2d2bd0;
        }
    }
    ctx->pc = 0x2D26D8u;
    // 0x2d26d8: 0x9626002c  lhu         $a2, 0x2C($s1)
    ctx->pc = 0x2d26d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d26dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d26dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d26e0: 0xc0b4b06  jal         func_2D2C18
    ctx->pc = 0x2D26E0u;
    SET_GPR_U32(ctx, 31, 0x2D26E8u);
    ctx->pc = 0x2D26E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D26E0u;
    // 0x2d26e4: 0x92250030  lbu         $a1, 0x30($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2C18u, 0x2D26E0u, 0x2D26E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D26E8u;
label_2d26e8:
    // 0x2d26e8: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x2D26E8u;
    {
        const bool branch_taken_0x2d26e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D26E8u;
        // 0x2d26ec: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d26e8) {
            ctx->pc = 0x2D2BD4u;
            goto label_2d2bd4;
        }
    }
    ctx->pc = 0x2D26F0u;
label_2d26f0:
    // 0x2d26f0: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2d26f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d26f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d26f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d26f8: 0xc0b48ac  jal         func_2D22B0
    ctx->pc = 0x2D26F8u;
    SET_GPR_U32(ctx, 31, 0x2D2700u);
    ctx->pc = 0x2D26FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D26F8u;
    // 0x2d26fc: 0x8e260030  lw          $a2, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D22B0u, 0x2D26F8u, 0x2D2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2700u;
label_2d2700:
    // 0x2d2700: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x2d2700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2d2704: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d2704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2708: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x2d2708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d270c: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2D270Cu;
    {
        const bool branch_taken_0x2d270c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D270Cu;
        // 0x2d2710: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d270c) {
            ctx->pc = 0x2D2A94u;
            goto label_2d2a94;
        }
    }
    ctx->pc = 0x2D2714u;
    // 0x2d2714: 0x16800011  bnez        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D2714u;
    {
        const bool branch_taken_0x2d2714 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2714u;
        // 0x2d2718: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2714) {
            ctx->pc = 0x2D275Cu;
            goto label_2d275c;
        }
    }
    ctx->pc = 0x2D271Cu;
    // 0x2d271c: 0xc0b488a  jal         func_2D2228
    ctx->pc = 0x2D271Cu;
    SET_GPR_U32(ctx, 31, 0x2D2724u);
    ctx->pc = 0x2D2720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D271Cu;
    // 0x2d2720: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2228u, 0x2D271Cu, 0x2D2724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2724u;
label_2d2724:
    // 0x2d2724: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d2724u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2728: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2d2728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d272c: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x2d272cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2d2730: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2d2730u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2d2734: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d2734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2738: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d273c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2d273cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2d2740: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2d2740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2744: 0xc0b3240  jal         func_2CC900
    ctx->pc = 0x2D2744u;
    SET_GPR_U32(ctx, 31, 0x2D274Cu);
    ctx->pc = 0x2D2748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2744u;
    // 0x2d2748: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC900u, 0x2D2744u, 0x2D274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D274Cu;
label_2d274c:
    // 0x2d274c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d274cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d2750: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d2750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2754: 0xc0dcd58  jal         func_373560
    ctx->pc = 0x2D2754u;
    SET_GPR_U32(ctx, 31, 0x2D275Cu);
    ctx->pc = 0x2D2758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2754u;
    // 0x2d2758: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373560u, 0x2D2754u, 0x2D275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D275Cu;
label_2d275c:
    // 0x2d275c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2d275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2d2760: 0x26160001  addiu       $s6, $s0, 0x1
    ctx->pc = 0x2d2760u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d2764: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d2764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d2768: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D2768u;
    {
        const bool branch_taken_0x2d2768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2768u;
        // 0x2d276c: 0x2635006c  addiu       $s5, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2768) {
            ctx->pc = 0x2D27CCu;
            goto label_2d27cc;
        }
    }
    ctx->pc = 0x2D2770u;
    // 0x2d2770: 0x9222003c  lbu         $v0, 0x3C($s1)
    ctx->pc = 0x2d2770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2d2774: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D2774u;
    {
        const bool branch_taken_0x2d2774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2774) {
            ctx->pc = 0x2D2778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2774u;
            // 0x2d2778: 0xc62c0034  lwc1        $f12, 0x34($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D27C0u;
            goto label_2d27c0;
        }
    }
    ctx->pc = 0x2D277Cu;
    // 0x2d277c: 0x8e700018  lw          $s0, 0x18($s3)
    ctx->pc = 0x2d277cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d2780: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D2780u;
    {
        const bool branch_taken_0x2d2780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2780u;
        // 0x2d2784: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2780) {
            ctx->pc = 0x2D27BCu;
            goto label_2d27bc;
        }
    }
    ctx->pc = 0x2D2788u;
label_2d2788:
    // 0x2d2788: 0x5214000a  beql        $s0, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2788u;
    {
        const bool branch_taken_0x2d2788 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x2d2788) {
            ctx->pc = 0x2D278Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2788u;
            // 0x2d278c: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D27B4u;
            goto label_2d27b4;
        }
    }
    ctx->pc = 0x2D2790u;
    // 0x2d2790: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2d2790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2d2794: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x2d2794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2d2798: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2d2798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2d279c: 0x10720004  beq         $v1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D279Cu;
    {
        const bool branch_taken_0x2d279c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D27A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D279Cu;
        // 0x2d27a0: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d279c) {
            ctx->pc = 0x2D27B0u;
            goto label_2d27b0;
        }
    }
    ctx->pc = 0x2D27A4u;
    // 0x2d27a4: 0xc62c0034  lwc1        $f12, 0x34($s1)
    ctx->pc = 0x2d27a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d27a8: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D27A8u;
    SET_GPR_U32(ctx, 31, 0x2D27B0u);
    ctx->pc = 0x2D27ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D27A8u;
    // 0x2d27ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D27A8u, 0x2D27B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D27B0u;
label_2d27b0:
    // 0x2d27b0: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d27b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d27b4:
    // 0x2d27b4: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D27B4u;
    {
        const bool branch_taken_0x2d27b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d27b4) {
            ctx->pc = 0x2D2788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2788;
        }
    }
    ctx->pc = 0x2D27BCu;
label_2d27bc:
    // 0x2d27bc: 0xc62c0034  lwc1        $f12, 0x34($s1)
    ctx->pc = 0x2d27bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d27c0:
    // 0x2d27c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d27c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d27c4: 0xc0b351c  jal         func_2CD470
    ctx->pc = 0x2D27C4u;
    SET_GPR_U32(ctx, 31, 0x2D27CCu);
    ctx->pc = 0x2D27C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D27C4u;
    // 0x2d27c8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD470u, 0x2D27C4u, 0x2D27CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D27CCu;
label_2d27cc:
    // 0x2d27cc: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x2d27ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x2d27d0: 0x34212400  ori         $at, $at, 0x2400
    ctx->pc = 0x2d27d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9216);
    // 0x2d27d4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2d27d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d27d8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2d27d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d27dc: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2d27dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d27e0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2d27e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d27e4: 0x9225003f  lbu         $a1, 0x3F($s1)
    ctx->pc = 0x2d27e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 63)));
    // 0x2d27e8: 0x54a00043  bnel        $a1, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x2D27E8u;
    {
        const bool branch_taken_0x2d27e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d27e8) {
            ctx->pc = 0x2D27ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D27E8u;
            // 0x2d27ec: 0xc6200040  lwc1        $f0, 0x40($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D28F8u;
            goto label_2d28f8;
        }
    }
    ctx->pc = 0x2D27F0u;
    // 0x2d27f0: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x2d27f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x2d27f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d27f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d27f8: 0x30440006  andi        $a0, $v0, 0x6
    ctx->pc = 0x2d27f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2d27fc: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D27FCu;
    {
        const bool branch_taken_0x2d27fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27FCu;
        // 0x2d2800: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d27fc) {
            ctx->pc = 0x2D2898u;
            goto label_2d2898;
        }
    }
    ctx->pc = 0x2D2804u;
    // 0x2d2804: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2804u;
    {
        const bool branch_taken_0x2d2804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2804) {
            ctx->pc = 0x2D2808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2804u;
            // 0x2d2808: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D281Cu;
            goto label_2d281c;
        }
    }
    ctx->pc = 0x2D280Cu;
    // 0x2d280c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D280Cu;
    {
        const bool branch_taken_0x2d280c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d280c) {
            ctx->pc = 0x2D2810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D280Cu;
            // 0x2d2810: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D282Cu;
            goto label_2d282c;
        }
    }
    ctx->pc = 0x2D2814u;
    // 0x2d2814: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2D2814u;
    {
        const bool branch_taken_0x2d2814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2814u;
        // 0x2d2818: 0x9223003e  lbu         $v1, 0x3E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 62)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2814) {
            ctx->pc = 0x2D2938u;
            goto label_2d2938;
        }
    }
    ctx->pc = 0x2D281Cu;
label_2d281c:
    // 0x2d281c: 0x5082002c  beql        $a0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D281Cu;
    {
        const bool branch_taken_0x2d281c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d281c) {
            ctx->pc = 0x2D2820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D281Cu;
            // 0x2d2820: 0xc6230000  lwc1        $f3, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D28D0u;
            goto label_2d28d0;
        }
    }
    ctx->pc = 0x2D2824u;
    // 0x2d2824: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2D2824u;
    {
        const bool branch_taken_0x2d2824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2824u;
        // 0x2d2828: 0x9223003e  lbu         $v1, 0x3E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 62)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2824) {
            ctx->pc = 0x2D2938u;
            goto label_2d2938;
        }
    }
    ctx->pc = 0x2D282Cu;
label_2d282c:
    // 0x2d282c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2d282cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d2830: 0xc6240020  lwc1        $f4, 0x20($s1)
    ctx->pc = 0x2d2830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d2834: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d2834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d2838: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x2d2838u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x2d283c: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x2d283cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2d2840: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d2840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2844: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d2844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2d2848:
    // 0x2d2848: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d2848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d284c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2d284cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2d2850: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2d2850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2854: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d2854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d2858: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d2858u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d285c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2d285cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2d2860: 0x481fff9  bgez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D2860u;
    {
        const bool branch_taken_0x2d2860 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2D2864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2860u;
        // 0x2d2864: 0x460118c0  add.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2860) {
            ctx->pc = 0x2D2848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2848;
        }
    }
    ctx->pc = 0x2D2868u;
    // 0x2d2868: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d2868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d286c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d286cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2870: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x2d2870u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d2874: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2d2874u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d2878: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2d2878u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d287c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2d287cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2d2880: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2d2880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2884: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2d2884u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d2888: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d2888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d288c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2d288cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d2890: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2D2890u;
    {
        const bool branch_taken_0x2d2890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2890u;
        // 0x2d2894: 0xe4c1000c  swc1        $f1, 0xC($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2890) {
            ctx->pc = 0x2D2934u;
            goto label_2d2934;
        }
    }
    ctx->pc = 0x2D2898u;
label_2d2898:
    // 0x2d2898: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2d2898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d289c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d289cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d28a0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2d28a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d28a4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2d28a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d28a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d28a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d28ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d28acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d28b0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2d28b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d28b4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d28b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d28b8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2d28b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d28bc: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2d28bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2d28c0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2d28c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d28c4: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2d28c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d28c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2D28C8u;
    {
        const bool branch_taken_0x2d28c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28C8u;
        // 0x2d28cc: 0xc6220004  lwc1        $f2, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d28c8) {
            ctx->pc = 0x2D2924u;
            goto label_2d2924;
        }
    }
    ctx->pc = 0x2D28D0u;
label_2d28d0:
    // 0x2d28d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d28d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d28d4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2d28d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d28d8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2d28d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d28dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d28dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d28e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d28e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d28e4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2d28e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d28e8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d28e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d28ec: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2d28ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d28f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D28F0u;
    {
        const bool branch_taken_0x2d28f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28F0u;
        // 0x2d28f4: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d28f0) {
            ctx->pc = 0x2D2934u;
            goto label_2d2934;
        }
    }
    ctx->pc = 0x2D28F8u;
label_2d28f8:
    // 0x2d28f8: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x2d28f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d28fc: 0xc6220048  lwc1        $f2, 0x48($s1)
    ctx->pc = 0x2d28fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2900: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d2900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d2904: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d2904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d2908: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d2908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d290c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d290cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d2910: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2d2910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d2914: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2d2914u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2d2918: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x2d2918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d291c: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x2d291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2920: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x2d2920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d2924:
    // 0x2d2924: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d2924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d2928: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2d2928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d292c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2d292cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d2930: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x2d2930u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2d2934:
    // 0x2d2934: 0x9223003e  lbu         $v1, 0x3E($s1)
    ctx->pc = 0x2d2934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 62)));
label_2d2938:
    // 0x2d2938: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2938u;
    {
        const bool branch_taken_0x2d2938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2938u;
        // 0x2d293c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2938) {
            ctx->pc = 0x2D2950u;
            goto label_2d2950;
        }
    }
    ctx->pc = 0x2D2940u;
    // 0x2d2940: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D2940u;
    {
        const bool branch_taken_0x2d2940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d2940) {
            ctx->pc = 0x2D2944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2940u;
            // 0x2d2944: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2980u;
            goto label_2d2980;
        }
    }
    ctx->pc = 0x2D2948u;
    // 0x2d2948: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2D2948u;
    {
        const bool branch_taken_0x2d2948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2948) {
            ctx->pc = 0x2D29ACu;
            goto label_2d29ac;
        }
    }
    ctx->pc = 0x2D2950u;
label_2d2950:
    // 0x2d2950: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2d2950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2d2954: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d2954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d2958: 0x8c44aff0  lw          $a0, -0x5010($v0)
    ctx->pc = 0x2d2958u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2d295c: 0x24820210  addiu       $v0, $a0, 0x210
    ctx->pc = 0x2d295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    // 0x2d2960: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D2960u;
    {
        const bool branch_taken_0x2d2960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d2960) {
            ctx->pc = 0x2D2964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2960u;
            // 0x2d2964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D29ACu;
            goto label_2d29ac;
        }
    }
    ctx->pc = 0x2D2968u;
    // 0x2d2968: 0xc4800210  lwc1        $f0, 0x210($a0)
    ctx->pc = 0x2d2968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d296c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d296cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d2970: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d2970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2974: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2d2974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d2978: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D2978u;
    {
        const bool branch_taken_0x2d2978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2978u;
        // 0x2d297c: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2978) {
            ctx->pc = 0x2D29A4u;
            goto label_2d29a4;
        }
    }
    ctx->pc = 0x2D2980u;
label_2d2980:
    // 0x2d2980: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x2d2980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2d2984: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2d2984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d2988: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2988u;
    {
        const bool branch_taken_0x2d2988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2988u;
        // 0x2d298c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2988) {
            ctx->pc = 0x2D29ACu;
            goto label_2d29ac;
        }
    }
    ctx->pc = 0x2D2990u;
    // 0x2d2990: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d2990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2994: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d2994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d2998: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d2998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d299c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2d299cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d29a0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d29a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d29a4:
    // 0x2d29a4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d29a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d29a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d29a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d29ac:
    // 0x2d29ac: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D29ACu;
    {
        const bool branch_taken_0x2d29ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29ACu;
        // 0x2d29b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29ac) {
            ctx->pc = 0x2D29D8u;
            goto label_2d29d8;
        }
    }
    ctx->pc = 0x2D29B4u;
    // 0x2d29b4: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D29B4u;
    {
        const bool branch_taken_0x2d29b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d29b4) {
            ctx->pc = 0x2D29B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D29B4u;
            // 0x2d29b8: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2A34u;
            goto label_2d2a34;
        }
    }
    ctx->pc = 0x2D29BCu;
    // 0x2d29bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d29bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d29c0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d29c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d29c4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d29c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d29c8: 0xc055c88  jal         func_157220
    ctx->pc = 0x2D29C8u;
    SET_GPR_U32(ctx, 31, 0x2D29D0u);
    ctx->pc = 0x2D29CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D29C8u;
    // 0x2d29cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157220u, 0x2D29C8u, 0x2D29D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D29D0u;
label_2d29d0:
    // 0x2d29d0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D29D0u;
    {
        const bool branch_taken_0x2d29d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29D0u;
        // 0x2d29d4: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29d0) {
            ctx->pc = 0x2D2A30u;
            goto label_2d2a30;
        }
    }
    ctx->pc = 0x2D29D8u;
label_2d29d8:
    // 0x2d29d8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2d29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d29dc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d29e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2d29e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d29e4: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2d29e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d29e8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2d29e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d29ec: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2d29ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d29f0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2d29f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d29f4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2d29f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2d29f8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2d29f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d29fc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2d29fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2d2a00: 0x13a40006  beq         $sp, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2A00u;
    {
        const bool branch_taken_0x2d2a00 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 4));
        ctx->pc = 0x2D2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A00u;
        // 0x2d2a04: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a00) {
            ctx->pc = 0x2D2A1Cu;
            goto label_2d2a1c;
        }
    }
    ctx->pc = 0x2D2A08u;
    // 0x2d2a08: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2d2a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2a0c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2d2a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2a10: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d2a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d2a14: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d2a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d2a18: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2d2a18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2d2a1c:
    // 0x2d2a1c: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2D2A1Cu;
    SET_GPR_U32(ctx, 31, 0x2D2A24u);
    ctx->pc = 0x2D2A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2A1Cu;
    // 0x2d2a20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2D2A1Cu, 0x2D2A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A24u;
label_2d2a24:
    // 0x2d2a24: 0x0  nop
    ctx->pc = 0x2d2a24u;
    // NOP
    // 0x2d2a28: 0x0  nop
    ctx->pc = 0x2d2a28u;
    // NOP
    // 0x2d2a2c: 0x46000144  c1          0x144
    ctx->pc = 0x2d2a2cu;
    ctx->f[5] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
label_2d2a30:
    // 0x2d2a30: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2d2a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d2a34:
    // 0x2d2a34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d2a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d2a38: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d2a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d2a3c: 0x46002803  div.s       $f0, $f5, $f0
    ctx->pc = 0x2d2a3cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[0]);
    // 0x2d2a40: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2d2a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2a44: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2d2a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d2a48: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2d2a48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2d2a4c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2d2a4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d2a50: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x2d2a50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2a54: 0x0  nop
    ctx->pc = 0x2d2a54u;
    // NOP
    // 0x2d2a58: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2A58u;
    {
        const bool branch_taken_0x2d2a58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2a58) {
            ctx->pc = 0x2D2A6Cu;
            goto label_2d2a6c;
        }
    }
    ctx->pc = 0x2D2A60u;
    // 0x2d2a60: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2d2a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2d2a64: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2d2a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2d2a68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d2a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d2a6c:
    // 0x2d2a6c: 0x0  nop
    ctx->pc = 0x2d2a6cu;
    // NOP
    // 0x2d2a70: 0x460c1834  c.lt.s      $f3, $f12
    ctx->pc = 0x2d2a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2a74: 0x0  nop
    ctx->pc = 0x2d2a74u;
    // NOP
    // 0x2d2a78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D2A78u;
    {
        const bool branch_taken_0x2d2a78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2a78) {
            ctx->pc = 0x2D2A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2A78u;
            // 0x2d2a7c: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2A80u;
            goto label_2d2a80;
        }
    }
    ctx->pc = 0x2D2A80u;
label_2d2a80:
    // 0x2d2a80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d2a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a84: 0xc0dce68  jal         func_3739A0
    ctx->pc = 0x2D2A84u;
    SET_GPR_U32(ctx, 31, 0x2D2A8Cu);
    ctx->pc = 0x2D2A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2A84u;
    // 0x2d2a88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3739A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3739A0u, 0x2D2A84u, 0x2D2A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A8Cu;
label_2d2a8c:
    // 0x2d2a8c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2D2A8Cu;
    {
        const bool branch_taken_0x2d2a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A8Cu;
        // 0x2d2a90: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a8c) {
            ctx->pc = 0x2D2BD4u;
            goto label_2d2bd4;
        }
    }
    ctx->pc = 0x2D2A94u;
label_2d2a94:
    // 0x2d2a94: 0x26160001  addiu       $s6, $s0, 0x1
    ctx->pc = 0x2d2a94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d2a98: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2D2A98u;
    {
        const bool branch_taken_0x2d2a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A98u;
        // 0x2d2a9c: 0x2635006c  addiu       $s5, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a98) {
            ctx->pc = 0x2D2BD0u;
            goto label_2d2bd0;
        }
    }
    ctx->pc = 0x2D2AA0u;
    // 0x2d2aa0: 0x9223003d  lbu         $v1, 0x3D($s1)
    ctx->pc = 0x2d2aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 61)));
    // 0x2d2aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2aa8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x2d2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2d2aac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d2aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d2ab0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d2ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d2ab4: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x2D2AB4u;
    {
        const bool branch_taken_0x2d2ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2ab4) {
            ctx->pc = 0x2D2AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2AB4u;
            // 0x2d2ab8: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2BD4u;
            goto label_2d2bd4;
        }
    }
    ctx->pc = 0x2D2ABCu;
    // 0x2d2abc: 0x9222003c  lbu         $v0, 0x3C($s1)
    ctx->pc = 0x2d2abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2d2ac0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D2AC0u;
    {
        const bool branch_taken_0x2d2ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2ac0) {
            ctx->pc = 0x2D2B30u;
            goto label_2d2b30;
        }
    }
    ctx->pc = 0x2D2AC8u;
    // 0x2d2ac8: 0x8e700018  lw          $s0, 0x18($s3)
    ctx->pc = 0x2d2ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2d2acc: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D2ACCu;
    {
        const bool branch_taken_0x2d2acc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2acc) {
            ctx->pc = 0x2D2B30u;
            goto label_2d2b30;
        }
    }
    ctx->pc = 0x2D2AD4u;
    // 0x2d2ad4: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x2d2ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
    // 0x2d2ad8: 0x241ebfff  addiu       $fp, $zero, -0x4001
    ctx->pc = 0x2d2ad8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2d2adc: 0x3652ff00  ori         $s2, $s2, 0xFF00
    ctx->pc = 0x2d2adcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65280);
    // 0x2d2ae0: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x2d2ae0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d2ae4: 0x0  nop
    ctx->pc = 0x2d2ae4u;
    // NOP
label_2d2ae8:
    // 0x2d2ae8: 0x5214000f  beql        $s0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x2D2AE8u;
    {
        const bool branch_taken_0x2d2ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x2d2ae8) {
            ctx->pc = 0x2D2AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2AE8u;
            // 0x2d2aec: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2B28u;
            goto label_2d2b28;
        }
    }
    ctx->pc = 0x2D2AF0u;
    // 0x2d2af0: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x2d2af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2d2af4: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2d2af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2d2af8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2AF8u;
    {
        const bool branch_taken_0x2d2af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2AF8u;
        // 0x2d2afc: 0x7e1024  and         $v0, $v1, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2af8) {
            ctx->pc = 0x2D2B24u;
            goto label_2d2b24;
        }
    }
    ctx->pc = 0x2D2B00u;
    // 0x2d2b00: 0x521824  and         $v1, $v0, $s2
    ctx->pc = 0x2d2b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2d2b04: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2B04u;
    {
        const bool branch_taken_0x2d2b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B04u;
        // 0x2d2b08: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b04) {
            ctx->pc = 0x2D2B24u;
            goto label_2d2b24;
        }
    }
    ctx->pc = 0x2D2B0Cu;
    // 0x2d2b0c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2d2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2d2b10: 0x50570005  beql        $v0, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2B10u;
    {
        const bool branch_taken_0x2d2b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x2d2b10) {
            ctx->pc = 0x2D2B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2B10u;
            // 0x2d2b14: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2B28u;
            goto label_2d2b28;
        }
    }
    ctx->pc = 0x2D2B18u;
    // 0x2d2b18: 0xc62c0034  lwc1        $f12, 0x34($s1)
    ctx->pc = 0x2d2b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d2b1c: 0xc0b351c  jal         func_2CD470
    ctx->pc = 0x2D2B1Cu;
    SET_GPR_U32(ctx, 31, 0x2D2B24u);
    ctx->pc = 0x2D2B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2B1Cu;
    // 0x2d2b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD470u, 0x2D2B1Cu, 0x2D2B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2B24u;
label_2d2b24:
    // 0x2d2b24: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d2b24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d2b28:
    // 0x2d2b28: 0x1600ffef  bnez        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2D2B28u;
    {
        const bool branch_taken_0x2d2b28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b28) {
            ctx->pc = 0x2D2AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2ae8;
        }
    }
    ctx->pc = 0x2D2B30u;
label_2d2b30:
    // 0x2d2b30: 0x12800027  beqz        $s4, . + 4 + (0x27 << 2)
    ctx->pc = 0x2D2B30u;
    {
        const bool branch_taken_0x2d2b30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B30u;
        // 0x2d2b34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b30) {
            ctx->pc = 0x2D2BD0u;
            goto label_2d2bd0;
        }
    }
    ctx->pc = 0x2D2B38u;
    // 0x2d2b38: 0xc0dce16  jal         func_373858
    ctx->pc = 0x2D2B38u;
    SET_GPR_U32(ctx, 31, 0x2D2B40u);
    ctx->pc = 0x2D2B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2B38u;
    // 0x2d2b3c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373858u, 0x2D2B38u, 0x2D2B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2B40u;
label_2d2b40:
    // 0x2d2b40: 0xc62c0034  lwc1        $f12, 0x34($s1)
    ctx->pc = 0x2d2b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d2b44: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D2B44u;
    SET_GPR_U32(ctx, 31, 0x2D2B4Cu);
    ctx->pc = 0x2D2B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2B44u;
    // 0x2d2b48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D2B44u, 0x2D2B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2B4Cu;
label_2d2b4c:
    // 0x2d2b4c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2D2B4Cu;
    {
        const bool branch_taken_0x2d2b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B4Cu;
        // 0x2d2b50: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b4c) {
            ctx->pc = 0x2D2BD4u;
            goto label_2d2bd4;
        }
    }
    ctx->pc = 0x2D2B54u;
label_2d2b54:
    // 0x2d2b54: 0x9222005c  lbu         $v0, 0x5C($s1)
    ctx->pc = 0x2d2b54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2d2b58: 0x26160001  addiu       $s6, $s0, 0x1
    ctx->pc = 0x2d2b58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d2b5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d2b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d2b60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d2b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d2b64: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D2B64u;
    {
        const bool branch_taken_0x2d2b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B64u;
        // 0x2d2b68: 0x2635006c  addiu       $s5, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b64) {
            ctx->pc = 0x2D2BD0u;
            goto label_2d2bd0;
        }
    }
    ctx->pc = 0x2D2B6Cu;
    // 0x2d2b6c: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x2d2b6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2d2b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2b74: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D2B74u;
    {
        const bool branch_taken_0x2d2b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B74u;
        // 0x2d2b78: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b74) {
            ctx->pc = 0x2D2BA4u;
            goto label_2d2ba4;
        }
    }
    ctx->pc = 0x2D2B7Cu;
    // 0x2d2b7c: 0x266500ac  addiu       $a1, $s3, 0xAC
    ctx->pc = 0x2d2b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 172));
    // 0x2d2b80: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2d2b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2d2b84: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2d2b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2d2b88: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2d2b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d2b8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d2b90: 0x442006  srlv        $a0, $a0, $v0
    ctx->pc = 0x2d2b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d2b94: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d2b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d2b98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d2b9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D2B9Cu;
    {
        const bool branch_taken_0x2d2b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B9Cu;
        // 0x2d2ba0: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b9c) {
            ctx->pc = 0x2D2BCCu;
            goto label_2d2bcc;
        }
    }
    ctx->pc = 0x2D2BA4u;
label_2d2ba4:
    // 0x2d2ba4: 0x266500ac  addiu       $a1, $s3, 0xAC
    ctx->pc = 0x2d2ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 172));
    // 0x2d2ba8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2d2ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2d2bac: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2d2bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2d2bb0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2d2bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d2bb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d2bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d2bb8: 0x442006  srlv        $a0, $a0, $v0
    ctx->pc = 0x2d2bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d2bbc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d2bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d2bc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d2bc4: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x2d2bc4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x2d2bc8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2d2bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2d2bcc:
    // 0x2d2bcc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d2bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2d2bd0:
    // 0x2d2bd0: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x2d2bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2d2bd4:
    // 0x2d2bd4: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x2d2bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d2bd8:
    // 0x2d2bd8: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2d2bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d2bdc: 0x1440fe24  bnez        $v0, . + 4 + (-0x1DC << 2)
    ctx->pc = 0x2D2BDCu;
    {
        const bool branch_taken_0x2d2bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BDCu;
        // 0x2d2be0: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2bdc) {
            ctx->pc = 0x2D2470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2470;
        }
    }
    ctx->pc = 0x2D2BE4u;
label_2d2be4:
    // 0x2d2be4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2d2be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2d2be8:
    // 0x2d2be8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2d2be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d2bec: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2d2becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d2bf0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2d2bf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d2bf4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2d2bf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d2bf8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2d2bf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d2bfc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2d2bfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d2c00: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2d2c00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d2c04: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2d2c04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d2c08: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d2c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d2c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C0Cu;
        // 0x2d2c10: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2C14u;
    // 0x2d2c14: 0x0  nop
    ctx->pc = 0x2d2c14u;
    // NOP
    ctx->pc = 0x2d2c18u;
}
