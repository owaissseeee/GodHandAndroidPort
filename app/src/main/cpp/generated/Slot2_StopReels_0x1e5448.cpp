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

// Function: Slot2_StopReels
// Address: 0x1e5448 - 0x1e58b8
void Slot2_StopReels_0x1e5448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_StopReels_0x1e5448");
#endif

    switch (ctx->pc) {
        case 0x1e5528u: goto label_1e5528;
        case 0x1e553cu: goto label_1e553c;
        case 0x1e556cu: goto label_1e556c;
        case 0x1e558cu: goto label_1e558c;
        case 0x1e5878u: goto label_1e5878;
        default: break;
    }

    ctx->pc = 0x1e5448u;

    // 0x1e5448: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e5448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e544c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e5450: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e5450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e5454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e5454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5458: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e5458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e545c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e545cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1e5460: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e5460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e5464: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e5464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e5468: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e5468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e546c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1e546cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1e5470: 0x10400109  beqz        $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x1E5470u;
    {
        const bool branch_taken_0x1e5470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5470u;
        // 0x1e5474: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5470) {
            ctx->pc = 0x1E5898u;
            goto label_1e5898;
        }
    }
    ctx->pc = 0x1E5478u;
    // 0x1e5478: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e5478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e547c: 0x2442b960  addiu       $v0, $v0, -0x46A0
    ctx->pc = 0x1e547cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949216));
    // 0x1e5480: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e5480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e5484: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e5484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5488: 0x800008  jr          $a0
    ctx->pc = 0x1E5488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5490u: goto label_1e5490;
            case 0x1E55C4u: goto label_1e55c4;
            case 0x1E568Cu: goto label_1e568c;
            case 0x1E5754u: goto label_1e5754;
            case 0x1E5830u: goto label_1e5830;
            case 0x1E5888u: goto label_1e5888;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5488u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E5490u;
label_1e5490:
    // 0x1e5490: 0x8e220384  lw          $v0, 0x384($s1)
    ctx->pc = 0x1e5490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
    // 0x1e5494: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1e5494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e5498: 0x8e230388  lw          $v1, 0x388($s1)
    ctx->pc = 0x1e5498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
    // 0x1e549c: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x1e549cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x1e54a0: 0x8e24038c  lw          $a0, 0x38C($s1)
    ctx->pc = 0x1e54a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
    // 0x1e54a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e54a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e54a8: 0x8e250390  lw          $a1, 0x390($s1)
    ctx->pc = 0x1e54a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 912)));
    // 0x1e54ac: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x1e54acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e54b0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e54b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1e54b4: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x1e54b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e54b8: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1e54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1e54bc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1e54bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e54c0: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1e54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1e54c4: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x1e54c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
    // 0x1e54c8: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1e54c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1e54cc: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1e54ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1e54d0: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x1e54d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1e54d4: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x1e54d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1e54d8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1e54d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e54dc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1e54dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e54e0: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1e54e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e54e4: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1e54e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e54e8: 0xae2603d4  sw          $a2, 0x3D4($s1)
    ctx->pc = 0x1e54e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 980), GPR_U32(ctx, 6));
    // 0x1e54ec: 0x24e5b938  addiu       $a1, $a3, -0x46C8
    ctx->pc = 0x1e54ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949176));
    // 0x1e54f0: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x1e54f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1e54f4: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x1e54f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1e54f8: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x1e54f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1e54fc: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x1e54fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1e5500: 0x68a40017  ldl         $a0, 0x17($a1)
    ctx->pc = 0x1e5500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e5504: 0x6ca40010  ldr         $a0, 0x10($a1)
    ctx->pc = 0x1e5504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e5508: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1e5508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e550c: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1e550cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e5510: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x1e5510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e5514: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x1e5514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e5518: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x1e5518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e551c: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x1e551cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e5520: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e5520u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42B950u));
    // 0x1e5524: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1e5524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_1e5528:
    // 0x1e5528: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x1e5528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e552c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x1e552cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1e5530: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e5530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5534: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x1E5534u;
    SET_GPR_U32(ctx, 31, 0x1E553Cu);
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x1E5534u, 0x1E553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E553Cu;
label_1e553c:
    // 0x1e553c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e553cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e5540: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1e5540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e5544: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E5544u;
    {
        const bool branch_taken_0x1e5544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5544) {
            ctx->pc = 0x1E5548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5544u;
            // 0x1e5548: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E55A4u;
            goto label_1e55a4;
        }
    }
    ctx->pc = 0x1E554Cu;
    // 0x1e554c: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1e554cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e5550: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5550u;
    {
        const bool branch_taken_0x1e5550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5550) {
            ctx->pc = 0x1E5564u;
            goto label_1e5564;
        }
    }
    ctx->pc = 0x1E5558u;
    // 0x1e5558: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e5558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e555c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E555Cu;
    {
        const bool branch_taken_0x1e555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E555Cu;
        // 0x1e5560: 0xae2203d4  sw          $v0, 0x3D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e555c) {
            ctx->pc = 0x1E5584u;
            goto label_1e5584;
        }
    }
    ctx->pc = 0x1E5564u;
label_1e5564:
    // 0x1e5564: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E5564u;
    SET_GPR_U32(ctx, 31, 0x1E556Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E5564u, 0x1E556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E556Cu;
label_1e556c:
    // 0x1e556c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1e556cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1e5570: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1e5570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1e5574: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e5574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5578: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1e5578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e557c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5580: 0xae2303d4  sw          $v1, 0x3D4($s1)
    ctx->pc = 0x1e5580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 980), GPR_U32(ctx, 3));
label_1e5584:
    // 0x1e5584: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E5584u;
    SET_GPR_U32(ctx, 31, 0x1E558Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E5584u, 0x1E558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E558Cu;
label_1e558c:
    // 0x1e558c: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1e558cu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e5590: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E5590u;
    {
        const bool branch_taken_0x1e5590 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5590) {
            ctx->pc = 0x1E5594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5590u;
            // 0x1e5594: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5598u;
            goto label_1e5598;
        }
    }
    ctx->pc = 0x1E5598u;
label_1e5598:
    // 0x1e5598: 0x1810  mfhi        $v1
    ctx->pc = 0x1e5598u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1e559c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E559Cu;
    {
        const bool branch_taken_0x1e559c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E55A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E559Cu;
        // 0x1e55a0: 0xa22303d8  sb          $v1, 0x3D8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 984), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e559c) {
            ctx->pc = 0x1E55B0u;
            goto label_1e55b0;
        }
    }
    ctx->pc = 0x1E55A4u;
label_1e55a4:
    // 0x1e55a4: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1e55a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e55a8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1E55A8u;
    {
        const bool branch_taken_0x1e55a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E55ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55A8u;
        // 0x1e55ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55a8) {
            ctx->pc = 0x1E5528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5528;
        }
    }
    ctx->pc = 0x1E55B0u;
label_1e55b0:
    // 0x1e55b0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e55b4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e55b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e55b8: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1e55b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1e55bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e55bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e55c0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1e55c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1e55c4:
    // 0x1e55c4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e55c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E55C8u;
    {
        const bool branch_taken_0x1e55c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55C8u;
        // 0x1e55cc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55c8) {
            ctx->pc = 0x1E55DCu;
            goto label_1e55dc;
        }
    }
    ctx->pc = 0x1E55D0u;
    // 0x1e55d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e55d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e55d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E55D4u;
    {
        const bool branch_taken_0x1e55d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E55D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55D4u;
        // 0x1e55d8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55d4) {
            ctx->pc = 0x1E55E0u;
            goto label_1e55e0;
        }
    }
    ctx->pc = 0x1E55DCu;
label_1e55dc:
    // 0x1e55dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e55e0:
    // 0x1e55e0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e55e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e55e4: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x1E55E4u;
    {
        const bool branch_taken_0x1e55e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E55E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55E4u;
        // 0x1e55e8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55e4) {
            ctx->pc = 0x1E589Cu;
            goto label_1e589c;
        }
    }
    ctx->pc = 0x1E55ECu;
    // 0x1e55ec: 0x8e2203d4  lw          $v0, 0x3D4($s1)
    ctx->pc = 0x1e55ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 980)));
    // 0x1e55f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e55f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e55f4: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x1e55f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x1e55f8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E55F8u;
    {
        const bool branch_taken_0x1e55f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E55FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55F8u;
        // 0x1e55fc: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55f8) {
            ctx->pc = 0x1E565Cu;
            goto label_1e565c;
        }
    }
    ctx->pc = 0x1E5600u;
    // 0x1e5600: 0x922303d8  lbu         $v1, 0x3D8($s1)
    ctx->pc = 0x1e5600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 984)));
    // 0x1e5604: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1e5604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e5608: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E5608u;
    {
        const bool branch_taken_0x1e5608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5608u;
        // 0x1e560c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5608) {
            ctx->pc = 0x1E565Cu;
            goto label_1e565c;
        }
    }
    ctx->pc = 0x1E5610u;
    // 0x1e5610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e5610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e5614: 0x2442b980  addiu       $v0, $v0, -0x4680
    ctx->pc = 0x1e5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949248));
    // 0x1e5618: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e5618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e561c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e561cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5620: 0x800008  jr          $a0
    ctx->pc = 0x1E5620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5628u: goto label_1e5628;
            case 0x1E5634u: goto label_1e5634;
            case 0x1E5648u: goto label_1e5648;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5620u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E5628u;
label_1e5628:
    // 0x1e5628: 0x26220058  addiu       $v0, $s1, 0x58
    ctx->pc = 0x1e5628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1e562c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E562Cu;
    {
        const bool branch_taken_0x1e562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E562Cu;
        // 0x1e5630: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e562c) {
            ctx->pc = 0x1E5650u;
            goto label_1e5650;
        }
    }
    ctx->pc = 0x1E5634u;
label_1e5634:
    // 0x1e5634: 0x26220058  addiu       $v0, $s1, 0x58
    ctx->pc = 0x1e5634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1e5638: 0xac4600c4  sw          $a2, 0xC4($v0)
    ctx->pc = 0x1e5638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 6));
    // 0x1e563c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e563cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5640: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5640u;
    {
        const bool branch_taken_0x1e5640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5640u;
        // 0x1e5644: 0xa04000c8  sb          $zero, 0xC8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 200), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5640) {
            ctx->pc = 0x1E565Cu;
            goto label_1e565c;
        }
    }
    ctx->pc = 0x1E5648u;
label_1e5648:
    // 0x1e5648: 0x26220058  addiu       $v0, $s1, 0x58
    ctx->pc = 0x1e5648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1e564c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e564cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5650:
    // 0x1e5650: 0xa04300c8  sb          $v1, 0xC8($v0)
    ctx->pc = 0x1e5650u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 200), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e5654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5658: 0xac4600c4  sw          $a2, 0xC4($v0)
    ctx->pc = 0x1e5658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 6));
label_1e565c:
    // 0x1e565c: 0x9e220118  lwu         $v0, 0x118($s1)
    ctx->pc = 0x1e565cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1e5660: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e5660u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e5664: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e5664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e5668: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5668u;
    {
        const bool branch_taken_0x1e5668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5668u;
        // 0x1e566c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5668) {
            ctx->pc = 0x1E567Cu;
            goto label_1e567c;
        }
    }
    ctx->pc = 0x1E5670u;
    // 0x1e5670: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1e5670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1e5674: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e5674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1e5678: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1e5678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1e567c:
    // 0x1e567c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e5680: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e5680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e5684: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1E5684u;
    {
        const bool branch_taken_0x1e5684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5684u;
        // 0x1e5688: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5684) {
            ctx->pc = 0x1E587Cu;
            goto label_1e587c;
        }
    }
    ctx->pc = 0x1E568Cu;
label_1e568c:
    // 0x1e568c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e5690: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5690u;
    {
        const bool branch_taken_0x1e5690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5690u;
        // 0x1e5694: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5690) {
            ctx->pc = 0x1E56A4u;
            goto label_1e56a4;
        }
    }
    ctx->pc = 0x1E5698u;
    // 0x1e5698: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e5698u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e569c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E569Cu;
    {
        const bool branch_taken_0x1e569c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E569Cu;
        // 0x1e56a0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e569c) {
            ctx->pc = 0x1E56A8u;
            goto label_1e56a8;
        }
    }
    ctx->pc = 0x1E56A4u;
label_1e56a4:
    // 0x1e56a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e56a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e56a8:
    // 0x1e56a8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e56a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e56ac: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x1E56ACu;
    {
        const bool branch_taken_0x1e56ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E56B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56ACu;
        // 0x1e56b0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56ac) {
            ctx->pc = 0x1E589Cu;
            goto label_1e589c;
        }
    }
    ctx->pc = 0x1E56B4u;
    // 0x1e56b4: 0x8e2203d4  lw          $v0, 0x3D4($s1)
    ctx->pc = 0x1e56b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 980)));
    // 0x1e56b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e56b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e56bc: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x1e56bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x1e56c0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E56C0u;
    {
        const bool branch_taken_0x1e56c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56C0u;
        // 0x1e56c4: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56c0) {
            ctx->pc = 0x1E5724u;
            goto label_1e5724;
        }
    }
    ctx->pc = 0x1E56C8u;
    // 0x1e56c8: 0x922303d8  lbu         $v1, 0x3D8($s1)
    ctx->pc = 0x1e56c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 984)));
    // 0x1e56cc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1e56ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e56d0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E56D0u;
    {
        const bool branch_taken_0x1e56d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E56D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56D0u;
        // 0x1e56d4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56d0) {
            ctx->pc = 0x1E5724u;
            goto label_1e5724;
        }
    }
    ctx->pc = 0x1E56D8u;
    // 0x1e56d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e56dc: 0x2442b9a0  addiu       $v0, $v0, -0x4660
    ctx->pc = 0x1e56dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949280));
    // 0x1e56e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e56e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e56e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e56e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e56e8: 0x800008  jr          $a0
    ctx->pc = 0x1E56E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E56F0u: goto label_1e56f0;
            case 0x1E5704u: goto label_1e5704;
            case 0x1E5710u: goto label_1e5710;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E56E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E56F0u;
label_1e56f0:
    // 0x1e56f0: 0x26220140  addiu       $v0, $s1, 0x140
    ctx->pc = 0x1e56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x1e56f4: 0xac4600c4  sw          $a2, 0xC4($v0)
    ctx->pc = 0x1e56f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 6));
    // 0x1e56f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e56f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e56fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E56FCu;
    {
        const bool branch_taken_0x1e56fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56FCu;
        // 0x1e5700: 0xa04000c8  sb          $zero, 0xC8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 200), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56fc) {
            ctx->pc = 0x1E5724u;
            goto label_1e5724;
        }
    }
    ctx->pc = 0x1E5704u;
label_1e5704:
    // 0x1e5704: 0x26220140  addiu       $v0, $s1, 0x140
    ctx->pc = 0x1e5704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x1e5708: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5708u;
    {
        const bool branch_taken_0x1e5708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5708u;
        // 0x1e570c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5708) {
            ctx->pc = 0x1E5718u;
            goto label_1e5718;
        }
    }
    ctx->pc = 0x1E5710u;
label_1e5710:
    // 0x1e5710: 0x26220140  addiu       $v0, $s1, 0x140
    ctx->pc = 0x1e5710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x1e5714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5718:
    // 0x1e5718: 0xa04300c8  sb          $v1, 0xC8($v0)
    ctx->pc = 0x1e5718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 200), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e571c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e571cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5720: 0xac4600c4  sw          $a2, 0xC4($v0)
    ctx->pc = 0x1e5720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 6));
label_1e5724:
    // 0x1e5724: 0x9e220200  lwu         $v0, 0x200($s1)
    ctx->pc = 0x1e5724u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1e5728: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e5728u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e572c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e572cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e5730: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5730u;
    {
        const bool branch_taken_0x1e5730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5730u;
        // 0x1e5734: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5730) {
            ctx->pc = 0x1E5744u;
            goto label_1e5744;
        }
    }
    ctx->pc = 0x1E5738u;
    // 0x1e5738: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1e5738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1e573c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e573cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1e5740: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1e5740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1e5744:
    // 0x1e5744: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e5744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e5748: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e5748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e574c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1E574Cu;
    {
        const bool branch_taken_0x1e574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E574Cu;
        // 0x1e5750: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e574c) {
            ctx->pc = 0x1E587Cu;
            goto label_1e587c;
        }
    }
    ctx->pc = 0x1E5754u;
label_1e5754:
    // 0x1e5754: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e5754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e5758: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5758u;
    {
        const bool branch_taken_0x1e5758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5758u;
        // 0x1e575c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5758) {
            ctx->pc = 0x1E576Cu;
            goto label_1e576c;
        }
    }
    ctx->pc = 0x1E5760u;
    // 0x1e5760: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e5760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5764u;
    {
        const bool branch_taken_0x1e5764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5764u;
        // 0x1e5768: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5764) {
            ctx->pc = 0x1E5770u;
            goto label_1e5770;
        }
    }
    ctx->pc = 0x1E576Cu;
label_1e576c:
    // 0x1e576c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e576cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5770:
    // 0x1e5770: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e5770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e5774: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1E5774u;
    {
        const bool branch_taken_0x1e5774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5774u;
        // 0x1e5778: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5774) {
            ctx->pc = 0x1E589Cu;
            goto label_1e589c;
        }
    }
    ctx->pc = 0x1E577Cu;
    // 0x1e577c: 0x8e2203d4  lw          $v0, 0x3D4($s1)
    ctx->pc = 0x1e577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 980)));
    // 0x1e5780: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e5780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5784: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x1e5784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x1e5788: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E5788u;
    {
        const bool branch_taken_0x1e5788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5788) {
            ctx->pc = 0x1E578Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5788u;
            // 0x1e578c: 0x8e220218  lw          $v0, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E57F4u;
            goto label_1e57f4;
        }
    }
    ctx->pc = 0x1E5790u;
    // 0x1e5790: 0x922303d8  lbu         $v1, 0x3D8($s1)
    ctx->pc = 0x1e5790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 984)));
    // 0x1e5794: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1e5794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e5798: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E5798u;
    {
        const bool branch_taken_0x1e5798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5798u;
        // 0x1e579c: 0x26250228  addiu       $a1, $s1, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5798) {
            ctx->pc = 0x1E580Cu;
            goto label_1e580c;
        }
    }
    ctx->pc = 0x1E57A0u;
    // 0x1e57a0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1e57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1e57a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e57a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e57a8: 0x2442b9c0  addiu       $v0, $v0, -0x4640
    ctx->pc = 0x1e57a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949312));
    // 0x1e57ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e57acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e57b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e57b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e57b4: 0x800008  jr          $a0
    ctx->pc = 0x1E57B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E57BCu: goto label_1e57bc;
            case 0x1E57C8u: goto label_1e57c8;
            case 0x1E57E0u: goto label_1e57e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E57B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E57BCu;
label_1e57bc:
    // 0x1e57bc: 0x26220228  addiu       $v0, $s1, 0x228
    ctx->pc = 0x1e57bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    // 0x1e57c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E57C0u;
    {
        const bool branch_taken_0x1e57c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57C0u;
        // 0x1e57c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57c0) {
            ctx->pc = 0x1E57D0u;
            goto label_1e57d0;
        }
    }
    ctx->pc = 0x1E57C8u;
label_1e57c8:
    // 0x1e57c8: 0x26220228  addiu       $v0, $s1, 0x228
    ctx->pc = 0x1e57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    // 0x1e57cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e57ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e57d0:
    // 0x1e57d0: 0xa04300c8  sb          $v1, 0xC8($v0)
    ctx->pc = 0x1e57d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 200), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e57d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e57d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e57d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E57D8u;
    {
        const bool branch_taken_0x1e57d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57D8u;
        // 0x1e57dc: 0xac4600c4  sw          $a2, 0xC4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57d8) {
            ctx->pc = 0x1E580Cu;
            goto label_1e580c;
        }
    }
    ctx->pc = 0x1E57E0u;
label_1e57e0:
    // 0x1e57e0: 0x26220228  addiu       $v0, $s1, 0x228
    ctx->pc = 0x1e57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    // 0x1e57e4: 0xac4600c4  sw          $a2, 0xC4($v0)
    ctx->pc = 0x1e57e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 6));
    // 0x1e57e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e57e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e57ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E57ECu;
    {
        const bool branch_taken_0x1e57ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57ECu;
        // 0x1e57f0: 0xa04000c8  sb          $zero, 0xC8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 200), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57ec) {
            ctx->pc = 0x1E580Cu;
            goto label_1e580c;
        }
    }
    ctx->pc = 0x1E57F4u;
label_1e57f4:
    // 0x1e57f4: 0x26250228  addiu       $a1, $s1, 0x228
    ctx->pc = 0x1e57f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    // 0x1e57f8: 0x8e23021c  lw          $v1, 0x21C($s1)
    ctx->pc = 0x1e57f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x1e57fc: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x1e57fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x1e5800: 0xae2202f4  sw          $v0, 0x2F4($s1)
    ctx->pc = 0x1e5800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 756), GPR_U32(ctx, 2));
    // 0x1e5804: 0xae2302f8  sw          $v1, 0x2F8($s1)
    ctx->pc = 0x1e5804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 760), GPR_U32(ctx, 3));
    // 0x1e5808: 0xae2402fc  sw          $a0, 0x2FC($s1)
    ctx->pc = 0x1e5808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 764), GPR_U32(ctx, 4));
label_1e580c:
    // 0x1e580c: 0x9e2202e8  lwu         $v0, 0x2E8($s1)
    ctx->pc = 0x1e580cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 744)));
    // 0x1e5810: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e5810u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e5814: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e5814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e5818: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E5818u;
    {
        const bool branch_taken_0x1e5818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5818u;
        // 0x1e581c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5818) {
            ctx->pc = 0x1E5878u;
            goto label_1e5878;
        }
    }
    ctx->pc = 0x1E5820u;
    // 0x1e5820: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1e5820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1e5824: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1e5824u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1e5828: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E5828u;
    {
        const bool branch_taken_0x1e5828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5828u;
        // 0x1e582c: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5828) {
            ctx->pc = 0x1E5878u;
            goto label_1e5878;
        }
    }
    ctx->pc = 0x1E5830u;
label_1e5830:
    // 0x1e5830: 0x9e220118  lwu         $v0, 0x118($s1)
    ctx->pc = 0x1e5830u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1e5834: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1e5834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1e5838: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e5838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e583c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E583Cu;
    {
        const bool branch_taken_0x1e583c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E583Cu;
        // 0x1e5840: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e583c) {
            ctx->pc = 0x1E589Cu;
            goto label_1e589c;
        }
    }
    ctx->pc = 0x1E5844u;
    // 0x1e5844: 0x9e220200  lwu         $v0, 0x200($s1)
    ctx->pc = 0x1e5844u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1e5848: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1e5848u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1e584c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e584cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e5850: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E5850u;
    {
        const bool branch_taken_0x1e5850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5850) {
            ctx->pc = 0x1E5854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5850u;
            // 0x1e5854: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E58A0u;
            goto label_1e58a0;
        }
    }
    ctx->pc = 0x1E5858u;
    // 0x1e5858: 0x9e2202e8  lwu         $v0, 0x2E8($s1)
    ctx->pc = 0x1e5858u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 744)));
    // 0x1e585c: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1e585cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1e5860: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e5860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e5864: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E5864u;
    {
        const bool branch_taken_0x1e5864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5864u;
        // 0x1e5868: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5864) {
            ctx->pc = 0x1E589Cu;
            goto label_1e589c;
        }
    }
    ctx->pc = 0x1E586Cu;
    // 0x1e586c: 0x8e2503ec  lw          $a1, 0x3EC($s1)
    ctx->pc = 0x1e586cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x1e5870: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1E5870u;
    SET_GPR_U32(ctx, 31, 0x1E5878u);
    ctx->pc = 0x1E5874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5870u;
    // 0x1e5874: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1E5870u, 0x1E5878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5878u;
label_1e5878:
    // 0x1e5878: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e5878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e587c:
    // 0x1e587c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e5880: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5880u;
    {
        const bool branch_taken_0x1e5880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5880u;
        // 0x1e5884: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5880) {
            ctx->pc = 0x1E5898u;
            goto label_1e5898;
        }
    }
    ctx->pc = 0x1E5888u;
label_1e5888:
    // 0x1e5888: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e5888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e588c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e588cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1e5890: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e5890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e5894: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e5894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1e5898:
    // 0x1e5898: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e5898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e589c:
    // 0x1e589c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e589cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e58a0:
    // 0x1e58a0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e58a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e58a4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e58a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e58a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e58a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e58ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e58acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e58b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E58B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58B0u;
        // 0x1e58b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E58B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E58B8u;
}
