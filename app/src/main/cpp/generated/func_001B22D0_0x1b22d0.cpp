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

// Function: func_001B22D0
// Address: 0x1b22d0 - 0x1b2478
void func_001B22D0_0x1b22d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B22D0_0x1b22d0");
#endif

    switch (ctx->pc) {
        case 0x1b22f4u: goto label_1b22f4;
        case 0x1b2364u: goto label_1b2364;
        case 0x1b2398u: goto label_1b2398;
        case 0x1b23a8u: goto label_1b23a8;
        case 0x1b23dcu: goto label_1b23dc;
        case 0x1b23fcu: goto label_1b23fc;
        case 0x1b2450u: goto label_1b2450;
        default: break;
    }

    ctx->pc = 0x1b22d0u;

    // 0x1b22d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b22d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b22d4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1b22d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1b22d8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1b22d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1b22dc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1b22dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1b22e0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1b22e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1b22e4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1b22e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1b22e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b22e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b22ec: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1B22ECu;
    SET_GPR_U32(ctx, 31, 0x1B22F4u);
    ctx->pc = 0x1B22F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B22ECu;
    // 0x1b22f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1B22ECu, 0x1B22F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22F4u;
label_1b22f4:
    // 0x1b22f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b22f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b22f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b22f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b22fc: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x1b22fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x1b2300: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b2300u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1b2304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2308: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1b2308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b230c: 0x3c014033  lui         $at, 0x4033
    ctx->pc = 0x1b230cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16435 << 16));
    // 0x1b2310: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b2310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1b2314: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2318: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1b2318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1b231c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1b231cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1b2320: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1b2320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b2324: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1b2324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b2328: 0x24534380  addiu       $s3, $v0, 0x4380
    ctx->pc = 0x1b2328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x1b232c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b232cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b2330: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b2330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2334: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b2334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b2338: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b233c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b233cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b2340: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b2340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b2344: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1b2344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b2348: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1b2348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b234c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1b234cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1b2350: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1b2350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1b2354: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b2354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1b2358: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1b2358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1b235c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1B235Cu;
    SET_GPR_U32(ctx, 31, 0x1B2364u);
    ctx->pc = 0x1B2360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B235Cu;
    // 0x1b2360: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1B235Cu, 0x1B2364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2364u;
label_1b2364:
    // 0x1b2364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b2364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2368: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2368u;
    {
        const bool branch_taken_0x1b2368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2368u;
        // 0x1b236c: 0xae040600  sw          $a0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2368) {
            ctx->pc = 0x1B2398u;
            goto label_1b2398;
        }
    }
    ctx->pc = 0x1B2370u;
    // 0x1b2370: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b2370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b2374: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1b2374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1b2378: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1b2378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1b237c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b237cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2380: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1b2380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1b2384: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b2384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2388: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1b2388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b238c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1b238cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b2390: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1B2390u;
    SET_GPR_U32(ctx, 31, 0x1B2398u);
    ctx->pc = 0x1B2394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2390u;
    // 0x1b2394: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1B2390u, 0x1B2398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2398u;
label_1b2398:
    // 0x1b2398: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b2398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b239c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b239cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23a0: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1B23A0u;
    SET_GPR_U32(ctx, 31, 0x1B23A8u);
    ctx->pc = 0x1B23A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23A0u;
    // 0x1b23a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1B23A0u, 0x1B23A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23A8u;
label_1b23a8:
    // 0x1b23a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b23a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23ac: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B23ACu;
    {
        const bool branch_taken_0x1b23ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23ACu;
        // 0x1b23b0: 0xae040604  sw          $a0, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23ac) {
            ctx->pc = 0x1B240Cu;
            goto label_1b240c;
        }
    }
    ctx->pc = 0x1B23B4u;
    // 0x1b23b4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b23b8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1b23b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1b23bc: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b23bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b23c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b23c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23c4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1b23c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1b23c8: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1b23c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1b23cc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1b23ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1b23d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b23d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b23d4: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1B23D4u;
    SET_GPR_U32(ctx, 31, 0x1B23DCu);
    ctx->pc = 0x1B23D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23D4u;
    // 0x1b23d8: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1B23D4u, 0x1B23DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23DCu;
label_1b23dc:
    // 0x1b23dc: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x1b23dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1b23e0: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1b23e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1b23e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b23e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23e8: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1b23e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b23ec: 0x8e020604  lw          $v0, 0x604($s0)
    ctx->pc = 0x1b23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1b23f0: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x1b23f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x1b23f4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B23F4u;
    SET_GPR_U32(ctx, 31, 0x1B23FCu);
    ctx->pc = 0x1B23F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23F4u;
    // 0x1b23f8: 0x8e040604  lw          $a0, 0x604($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B23F4u, 0x1B23FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23FCu;
label_1b23fc:
    // 0x1b23fc: 0x8e030604  lw          $v1, 0x604($s0)
    ctx->pc = 0x1b23fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1b2400: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b2400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2404: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1b2404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1b2408: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b2408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1b240c:
    // 0x1b240c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b240cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2410: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x1b2410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1b2414: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1b2414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b2418: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1b2418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b241c: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x1b241cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x1b2420: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b2420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2424: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x1b2424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x1b2428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b242c: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x1b242cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x1b2430: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x1b2430u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b2434: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x1b2434u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b2438: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x1b2438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x1b243c: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x1b243cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b2440: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x1b2440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x1b2444: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x1b2444u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b2448: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x1B2448u;
    SET_GPR_U32(ctx, 31, 0x1B2450u);
    ctx->pc = 0x1B244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2448u;
    // 0x1b244c: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x1B2448u, 0x1B2450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2450u;
label_1b2450:
    // 0x1b2450: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1b2450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b2454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2458: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1b2458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b245c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1b245cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b2460: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b2460u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2464: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b2464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2468: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1b2468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b246c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B246Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B246Cu;
        // 0x1b2470: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B246Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2474u;
    // 0x1b2474: 0x0  nop
    ctx->pc = 0x1b2474u;
    // NOP
    ctx->pc = 0x1b2478u;
}
