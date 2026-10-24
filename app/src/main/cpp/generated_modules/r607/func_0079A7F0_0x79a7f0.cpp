#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_0079A7F0
// Address: 0x79a7f0 - 0x79aa28
void func_0079A7F0_0x79a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A7F0_0x79a7f0");
#endif

    switch (ctx->pc) {
        case 0x79a8a4u: goto label_79a8a4;
        case 0x79a8d4u: goto label_79a8d4;
        case 0x79a8d8u: goto label_79a8d8;
        case 0x79a8e4u: goto label_79a8e4;
        case 0x79a8f4u: goto label_79a8f4;
        case 0x79a918u: goto label_79a918;
        case 0x79a93cu: goto label_79a93c;
        case 0x79a960u: goto label_79a960;
        case 0x79a984u: goto label_79a984;
        case 0x79a9b4u: goto label_79a9b4;
        case 0x79a9c0u: goto label_79a9c0;
        case 0x79a9ccu: goto label_79a9cc;
        case 0x79a9dcu: goto label_79a9dc;
        case 0x79a9fcu: goto label_79a9fc;
        default: break;
    }

    ctx->pc = 0x79a7f0u;

    // 0x79a7f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x79a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x79a7f4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a7f8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79a7fc: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a800: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x79a800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x79a804: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x79a804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a808: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x79a808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x79a80c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x79a80cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a810: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79a810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79a814: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79a814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79a818: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79a818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79a81c: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x79a81cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x79a820: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x79a820u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x79a824: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x79a824u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x79a828: 0x244ab678  addiu       $t2, $v0, -0x4988
    ctx->pc = 0x79a828u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948472));
    // 0x79a82c: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x79a82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x79a830: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x79a830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x79a834: 0x8d480008  lw          $t0, 0x8($t2)
    ctx->pc = 0x79a834u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x79B680u));
    // 0x79a838: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x79a838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a83c: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x79a83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a840: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x79a840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x79a844: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x79a844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a848: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a84c: 0x246ab688  addiu       $t2, $v1, -0x4978
    ctx->pc = 0x79a84cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948488));
    // 0x79a850: 0x694b0007  ldl         $t3, 0x7($t2)
    ctx->pc = 0x79a850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x79a854: 0x6d4b0000  ldr         $t3, 0x0($t2)
    ctx->pc = 0x79a854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x79a858: 0x8d480008  lw          $t0, 0x8($t2)
    ctx->pc = 0x79a858u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x79B690u));
    // 0x79a85c: 0xb3ab0017  sdl         $t3, 0x17($sp)
    ctx->pc = 0x79a85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a860: 0xb7ab0010  sdr         $t3, 0x10($sp)
    ctx->pc = 0x79a860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a864: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x79a864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x79a868: 0x2448b698  addiu       $t0, $v0, -0x4968
    ctx->pc = 0x79a868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948504));
    // 0x79a86c: 0x690b0007  ldl         $t3, 0x7($t0)
    ctx->pc = 0x79a86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x79a870: 0x6d0b0000  ldr         $t3, 0x0($t0)
    ctx->pc = 0x79a870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x79a874: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x79a874u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79B6A0u));
    // 0x79a878: 0xb3ab0027  sdl         $t3, 0x27($sp)
    ctx->pc = 0x79a878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a87c: 0xb7ab0020  sdr         $t3, 0x20($sp)
    ctx->pc = 0x79a87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a880: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x79a880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x79a884: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x79A884u;
    {
        const bool branch_taken_0x79a884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A884u;
        // 0x79a888: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a884) {
            ctx->pc = 0x79A944u;
            goto label_79a944;
        }
    }
    ctx->pc = 0x79A88Cu;
    // 0x79a88c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x79a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x79a890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a894: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x79a894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x79a898: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a89c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A89Cu;
    SET_GPR_U32(ctx, 31, 0x79A8A4u);
    ctx->pc = 0x79A8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A89Cu;
    // 0x79a8a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A89Cu, 0x79A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8A4u;
label_79a8a4:
    // 0x79a8a4: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x79A8A4u;
    {
        const bool branch_taken_0x79a8a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8A4u;
        // 0x79a8a8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8a4) {
            ctx->pc = 0x79A904u;
            goto label_79a904;
        }
    }
    ctx->pc = 0x79A8ACu;
    // 0x79a8ac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x79a8acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a8b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79a8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a8b4: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x79a8b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x79a8b8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x79a8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x79a8bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a8bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a8c0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79a8c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79a8c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a8c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79a8cc: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x79A8CCu;
    SET_GPR_U32(ctx, 31, 0x79A8D4u);
    ctx->pc = 0x79A8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8CCu;
    // 0x79a8d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79A8CCu, 0x79A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8D4u;
label_79a8d4:
    // 0x79a8d4: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x79a8d4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_79a8d8:
    // 0x79a8d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x79a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a8dc: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x79A8DCu;
    SET_GPR_U32(ctx, 31, 0x79A8E4u);
    ctx->pc = 0x79A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8DCu;
    // 0x79a8e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79A8DCu, 0x79A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8E4u;
label_79a8e4:
    // 0x79a8e4: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a8e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a8ec: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A8ECu;
    SET_GPR_U32(ctx, 31, 0x79A8F4u);
    ctx->pc = 0x79A8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8ECu;
    // 0x79a8f0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A8ECu, 0x79A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8F4u;
label_79a8f4:
    // 0x79a8f4: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x79a8f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a8f8: 0x0  nop
    ctx->pc = 0x79a8f8u;
    // NOP
    // 0x79a8fc: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
    ctx->pc = 0x79A8FCu;
    {
        const bool branch_taken_0x79a8fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a8fc) {
            ctx->pc = 0x79A900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A8FCu;
            // 0x79a900: 0x4616a500  add.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a8d8;
        }
    }
    ctx->pc = 0x79A904u;
label_79a904:
    // 0x79a904: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x79a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x79a908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a90c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a910: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x79A910u;
    SET_GPR_U32(ctx, 31, 0x79A918u);
    ctx->pc = 0x79A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A910u;
    // 0x79a914: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79A910u, 0x79A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A918u;
label_79a918:
    // 0x79a918: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x79a918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x79a91c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x79a91cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x79a920: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x79a920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a924: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a92c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a930: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a934: 0xc0c194a  jal         func_306528
    ctx->pc = 0x79A934u;
    SET_GPR_U32(ctx, 31, 0x79A93Cu);
    ctx->pc = 0x79A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A934u;
    // 0x79a938: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x79A934u, 0x79A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A93Cu;
label_79a93c:
    // 0x79a93c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x79A93Cu;
    {
        const bool branch_taken_0x79a93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A93Cu;
        // 0x79a940: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a93c) {
            ctx->pc = 0x79AA00u;
            goto label_79aa00;
        }
    }
    ctx->pc = 0x79A944u;
label_79a944:
    // 0x79a944: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x79a944u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x79a948: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a94c: 0xf01021  addu        $v0, $a3, $s0
    ctx->pc = 0x79a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x79a950: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a954: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x79a954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a958: 0xc0c185a  jal         func_306168
    ctx->pc = 0x79A958u;
    SET_GPR_U32(ctx, 31, 0x79A960u);
    ctx->pc = 0x79A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A958u;
    // 0x79a95c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306168u, 0x79A958u, 0x79A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A960u;
label_79a960:
    // 0x79a960: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x79a960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x79a964: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x79a964u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x79a968: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x79a968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a96c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a970: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a974: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a978: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a97c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x79A97Cu;
    SET_GPR_U32(ctx, 31, 0x79A984u);
    ctx->pc = 0x79A980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A97Cu;
    // 0x79a980: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x79A97Cu, 0x79A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A984u;
label_79a984:
    // 0x79a984: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x79A984u;
    {
        const bool branch_taken_0x79a984 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A984u;
        // 0x79a988: 0x3b11021  addu        $v0, $sp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a984) {
            ctx->pc = 0x79A9ECu;
            goto label_79a9ec;
        }
    }
    ctx->pc = 0x79A98Cu;
    // 0x79a98c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a990: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a994: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x79a994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a998: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a99c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x79a99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x79a9a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a9a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a9a4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79a9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79a9a8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x79a9a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79a9ac: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x79A9ACu;
    SET_GPR_U32(ctx, 31, 0x79A9B4u);
    ctx->pc = 0x79A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9ACu;
    // 0x79a9b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79A9ACu, 0x79A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9B4u;
label_79a9b4:
    // 0x79a9b4: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x79a9b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x79a9b8: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x79a9b8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x79a9bc: 0x0  nop
    ctx->pc = 0x79a9bcu;
    // NOP
label_79a9c0:
    // 0x79a9c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a9c4: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x79A9C4u;
    SET_GPR_U32(ctx, 31, 0x79A9CCu);
    ctx->pc = 0x79A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9C4u;
    // 0x79a9c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79A9C4u, 0x79A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9CCu;
label_79a9cc:
    // 0x79a9cc: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a9d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a9d4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A9D4u;
    SET_GPR_U32(ctx, 31, 0x79A9DCu);
    ctx->pc = 0x79A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9D4u;
    // 0x79a9d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A9D4u, 0x79A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9DCu;
label_79a9dc:
    // 0x79a9dc: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x79a9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a9e0: 0x0  nop
    ctx->pc = 0x79a9e0u;
    // NOP
    // 0x79a9e4: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
    ctx->pc = 0x79A9E4u;
    {
        const bool branch_taken_0x79a9e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a9e4) {
            ctx->pc = 0x79A9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A9E4u;
            // 0x79a9e8: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a9c0;
        }
    }
    ctx->pc = 0x79A9ECu;
label_79a9ec:
    // 0x79a9ec: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x79a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x79a9f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x79a9f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a9f4: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x79A9F4u;
    SET_GPR_U32(ctx, 31, 0x79A9FCu);
    ctx->pc = 0x79A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9F4u;
    // 0x79a9f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79A9F4u, 0x79A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9FCu;
label_79a9fc:
    // 0x79a9fc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79a9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79aa00:
    // 0x79aa00: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79aa00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79aa04: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79aa04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79aa08: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79aa08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79aa0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x79aa0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79aa10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79aa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79aa14: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x79aa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x79aa18: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x79aa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79aa1c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x79aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79aa20: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA20u;
        // 0x79aa24: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA28u;
}
} // namespace gh_r607
