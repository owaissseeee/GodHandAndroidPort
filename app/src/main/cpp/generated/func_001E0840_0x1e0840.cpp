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

// Function: func_001E0840
// Address: 0x1e0840 - 0x1e0ca8
void func_001E0840_0x1e0840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E0840_0x1e0840");
#endif

    switch (ctx->pc) {
        case 0x1e0940u: goto label_1e0940;
        case 0x1e0968u: goto label_1e0968;
        case 0x1e09d4u: goto label_1e09d4;
        case 0x1e09e4u: goto label_1e09e4;
        case 0x1e0a68u: goto label_1e0a68;
        case 0x1e0a74u: goto label_1e0a74;
        case 0x1e0a98u: goto label_1e0a98;
        case 0x1e0aa4u: goto label_1e0aa4;
        case 0x1e0ac8u: goto label_1e0ac8;
        case 0x1e0ad4u: goto label_1e0ad4;
        case 0x1e0ae0u: goto label_1e0ae0;
        case 0x1e0b30u: goto label_1e0b30;
        case 0x1e0b50u: goto label_1e0b50;
        default: break;
    }

    ctx->pc = 0x1e0840u;

    // 0x1e0840: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1e0840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1e0844: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1e0844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1e0848: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1e0848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1e084c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e084cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0850: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1e0850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1e0854: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1e0854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1e0858: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1e0858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1e085c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1e085cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1e0860: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e0860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1e0864: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1e0864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x1e0868: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1e0868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x1e086c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e0870: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e0870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e0874: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1e0874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e0878: 0x104000ff  beqz        $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x1E0878u;
    {
        const bool branch_taken_0x1e0878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0878u;
        // 0x1e087c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0878) {
            ctx->pc = 0x1E0C78u;
            goto label_1e0c78;
        }
    }
    ctx->pc = 0x1E0880u;
    // 0x1e0880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e0880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e0884: 0x2442b740  addiu       $v0, $v0, -0x48C0
    ctx->pc = 0x1e0884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948672));
    // 0x1e0888: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e0888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e088c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e088cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0890: 0x800008  jr          $a0
    ctx->pc = 0x1E0890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0898u: goto label_1e0898;
            case 0x1E0B0Cu: goto label_1e0b0c;
            case 0x1E0B80u: goto label_1e0b80;
            case 0x1E0BD8u: goto label_1e0bd8;
            case 0x1E0C30u: goto label_1e0c30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0890u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E0898u;
label_1e0898:
    // 0x1e0898: 0x8e2503e4  lw          $a1, 0x3E4($s1)
    ctx->pc = 0x1e0898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 996)));
    // 0x1e089c: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x1e089cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x1e08a0: 0x8e2403e8  lw          $a0, 0x3E8($s1)
    ctx->pc = 0x1e08a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1000)));
    // 0x1e08a4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1e08a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e08a8: 0x8e2303f0  lw          $v1, 0x3F0($s1)
    ctx->pc = 0x1e08a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
    // 0x1e08ac: 0x8e2203ec  lw          $v0, 0x3EC($s1)
    ctx->pc = 0x1e08acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x1e08b0: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1e08b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1e08b4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1e08b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1e08b8: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x1e08b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x1e08bc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1e08bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1e08c0: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x1e08c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x1e08c4: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x1e08c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1e08c8: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x1e08c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1e08cc: 0x6ba4001f  ldl         $a0, 0x1F($sp)
    ctx->pc = 0x1e08ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e08d0: 0x6fa40018  ldr         $a0, 0x18($sp)
    ctx->pc = 0x1e08d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e08d4: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1e08d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e08d8: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1e08d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e08dc: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1e08dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e08e0: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1e08e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e08e4: 0x24e8b718  addiu       $t0, $a3, -0x48E8
    ctx->pc = 0x1e08e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948632));
    // 0x1e08e8: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x1e08e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1e08ec: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x1e08ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1e08f0: 0x6904000f  ldl         $a0, 0xF($t0)
    ctx->pc = 0x1e08f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e08f4: 0x6d040008  ldr         $a0, 0x8($t0)
    ctx->pc = 0x1e08f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e08f8: 0x69050017  ldl         $a1, 0x17($t0)
    ctx->pc = 0x1e08f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e08fc: 0x6d050010  ldr         $a1, 0x10($t0)
    ctx->pc = 0x1e08fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e0900: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x1e0900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e0904: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x1e0904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e0908: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x1e0908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e090c: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x1e090cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e0910: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x1e0910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e0914: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x1e0914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e0918: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x1e0918u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42B730u));
    // 0x1e091c: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1e091cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x1e0920: 0x14460073  bne         $v0, $a2, . + 4 + (0x73 << 2)
    ctx->pc = 0x1E0920u;
    {
        const bool branch_taken_0x1e0920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1E0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0920u;
        // 0x1e0924: 0x26350370  addiu       $s5, $s1, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0920) {
            ctx->pc = 0x1E0AF0u;
            goto label_1e0af0;
        }
    }
    ctx->pc = 0x1E0928u;
    // 0x1e0928: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x1e0928u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e092c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1e092cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0930: 0x3c1e005f  lui         $fp, 0x5F
    ctx->pc = 0x1e0930u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)95 << 16));
    // 0x1e0934: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x1e0934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0938: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e0938u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e093c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1e093cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e0940:
    // 0x1e0940: 0x9e220054  lwu         $v0, 0x54($s1)
    ctx->pc = 0x1e0940u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1e0944: 0x2123b  dsra        $v0, $v0, 8
    ctx->pc = 0x1e0944u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 8);
    // 0x1e0948: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e094c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E094Cu;
    {
        const bool branch_taken_0x1e094c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E094Cu;
        // 0x1e0950: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e094c) {
            ctx->pc = 0x1E0960u;
            goto label_1e0960;
        }
    }
    ctx->pc = 0x1E0954u;
    // 0x1e0954: 0x1017c2  srl         $v0, $s0, 31
    ctx->pc = 0x1e0954u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x1e0958: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e0958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e095c: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x1e095cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_1e0960:
    // 0x1e0960: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E0960u;
    SET_GPR_U32(ctx, 31, 0x1E0968u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E0960u, 0x1E0968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0968u;
label_1e0968:
    // 0x1e0968: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x1e0968u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e096c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E096Cu;
    {
        const bool branch_taken_0x1e096c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e096c) {
            ctx->pc = 0x1E0970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E096Cu;
            // 0x1e0970: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0974u;
            goto label_1e0974;
        }
    }
    ctx->pc = 0x1E0974u;
label_1e0974:
    // 0x1e0974: 0x1810  mfhi        $v1
    ctx->pc = 0x1e0974u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1e0978: 0x54600021  bnel        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E0978u;
    {
        const bool branch_taken_0x1e0978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0978) {
            ctx->pc = 0x1E097Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0978u;
            // 0x1e097c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0A00u;
            goto label_1e0a00;
        }
    }
    ctx->pc = 0x1E0980u;
    // 0x1e0980: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1e0980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e0984: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x1e0984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1e0988: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e0988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e098c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E098Cu;
    {
        const bool branch_taken_0x1e098c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E098Cu;
        // 0x1e0990: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e098c) {
            ctx->pc = 0x1E09A4u;
            goto label_1e09a4;
        }
    }
    ctx->pc = 0x1E0994u;
    // 0x1e0994: 0x50570004  beql        $v0, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0994u;
    {
        const bool branch_taken_0x1e0994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x1e0994) {
            ctx->pc = 0x1E0998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0994u;
            // 0x1e0998: 0x731021  addu        $v0, $v1, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E09A8u;
            goto label_1e09a8;
        }
    }
    ctx->pc = 0x1E099Cu;
    // 0x1e099c: 0x1456000f  bne         $v0, $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x1E099Cu;
    {
        const bool branch_taken_0x1e099c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1e099c) {
            ctx->pc = 0x1E09DCu;
            goto label_1e09dc;
        }
    }
    ctx->pc = 0x1E09A4u;
label_1e09a4:
    // 0x1e09a4: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1e09a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1e09a8:
    // 0x1e09a8: 0x27c48140  addiu       $a0, $fp, -0x7EC0
    ctx->pc = 0x1e09a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294934848));
    // 0x1e09ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e09acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e09b0: 0x3c0503ff  lui         $a1, 0x3FF
    ctx->pc = 0x1e09b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1023 << 16));
    // 0x1e09b4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e09b8: 0xae230490  sw          $v1, 0x490($s1)
    ctx->pc = 0x1e09b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1168), GPR_U32(ctx, 3));
    // 0x1e09bc: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1e09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1e09c0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e09c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e09c4: 0x8c460564  lw          $a2, 0x564($v0)
    ctx->pc = 0x1e09c4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x747A04u));
    // 0x1e09c8: 0xc33004  sllv        $a2, $v1, $a2
    ctx->pc = 0x1e09c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x1e09cc: 0xc0c6ec2  jal         func_31BB08
    ctx->pc = 0x1E09CCu;
    SET_GPR_U32(ctx, 31, 0x1E09D4u);
    ctx->pc = 0x1E09D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E09CCu;
    // 0x1e09d0: 0x63400  sll         $a2, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BB08u, 0x1E09CCu, 0x1E09D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E09D4u;
label_1e09d4:
    // 0x1e09d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E09D4u;
    {
        const bool branch_taken_0x1e09d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E09D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09D4u;
        // 0x1e09d8: 0x8e230490  lw          $v1, 0x490($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e09d4) {
            ctx->pc = 0x1E0A10u;
            goto label_1e0a10;
        }
    }
    ctx->pc = 0x1E09DCu;
label_1e09dc:
    // 0x1e09dc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E09DCu;
    SET_GPR_U32(ctx, 31, 0x1E09E4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E09DCu, 0x1E09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E09E4u;
label_1e09e4:
    // 0x1e09e4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1e09e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1e09e8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1e09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1e09ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e09f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e09f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e09f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e09f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E09F8u;
    {
        const bool branch_taken_0x1e09f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09F8u;
        // 0x1e09fc: 0xae230490  sw          $v1, 0x490($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e09f8) {
            ctx->pc = 0x1E0A0Cu;
            goto label_1e0a0c;
        }
    }
    ctx->pc = 0x1E0A00u;
label_1e0a00:
    // 0x1e0a00: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x1e0a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1e0a04: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1E0A04u;
    {
        const bool branch_taken_0x1e0a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A04u;
        // 0x1e0a08: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a04) {
            ctx->pc = 0x1E0940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0940;
        }
    }
    ctx->pc = 0x1E0A0Cu;
label_1e0a0c:
    // 0x1e0a0c: 0x8e230490  lw          $v1, 0x490($s1)
    ctx->pc = 0x1e0a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
label_1e0a10:
    // 0x1e0a10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0a14: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E0A14u;
    {
        const bool branch_taken_0x1e0a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A14u;
        // 0x1e0a18: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a14) {
            ctx->pc = 0x1E0A7Cu;
            goto label_1e0a7c;
        }
    }
    ctx->pc = 0x1E0A1Cu;
    // 0x1e0a1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0A1Cu;
    {
        const bool branch_taken_0x1e0a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A1Cu;
        // 0x1e0a20: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a1c) {
            ctx->pc = 0x1E0A34u;
            goto label_1e0a34;
        }
    }
    ctx->pc = 0x1E0A24u;
    // 0x1e0a24: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0A24u;
    {
        const bool branch_taken_0x1e0a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A24u;
        // 0x1e0a28: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a24) {
            ctx->pc = 0x1E0A4Cu;
            goto label_1e0a4c;
        }
    }
    ctx->pc = 0x1E0A2Cu;
    // 0x1e0a2c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1E0A2Cu;
    {
        const bool branch_taken_0x1e0a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A2Cu;
        // 0x1e0a30: 0xa622036c  sh          $v0, 0x36C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 876), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a2c) {
            ctx->pc = 0x1E0AE8u;
            goto label_1e0ae8;
        }
    }
    ctx->pc = 0x1E0A34u;
label_1e0a34:
    // 0x1e0a34: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E0A34u;
    {
        const bool branch_taken_0x1e0a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A34u;
        // 0x1e0a38: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a34) {
            ctx->pc = 0x1E0AACu;
            goto label_1e0aac;
        }
    }
    ctx->pc = 0x1E0A3Cu;
    // 0x1e0a3c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1E0A3Cu;
    {
        const bool branch_taken_0x1e0a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A3Cu;
        // 0x1e0a40: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a3c) {
            ctx->pc = 0x1E0AF0u;
            goto label_1e0af0;
        }
    }
    ctx->pc = 0x1E0A44u;
    // 0x1e0a44: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1E0A44u;
    {
        const bool branch_taken_0x1e0a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A44u;
        // 0x1e0a48: 0xa622036c  sh          $v0, 0x36C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 876), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a44) {
            ctx->pc = 0x1E0AE8u;
            goto label_1e0ae8;
        }
    }
    ctx->pc = 0x1E0A4Cu;
label_1e0a4c:
    // 0x1e0a4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0a50: 0x8e240464  lw          $a0, 0x464($s1)
    ctx->pc = 0x1e0a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1124)));
    // 0x1e0a54: 0xa622036c  sh          $v0, 0x36C($s1)
    ctx->pc = 0x1e0a54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 876), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e0a58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0a5c: 0xa622015c  sh          $v0, 0x15C($s1)
    ctx->pc = 0x1e0a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e0a60: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E0A60u;
    SET_GPR_U32(ctx, 31, 0x1E0A68u);
    ctx->pc = 0x1E0A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A60u;
    // 0x1e0a64: 0xa6220264  sh          $v0, 0x264($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 612), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E0A60u, 0x1E0A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0A68u;
label_1e0a68:
    // 0x1e0a68: 0x8e24046c  lw          $a0, 0x46C($s1)
    ctx->pc = 0x1e0a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1e0a6c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E0A6Cu;
    SET_GPR_U32(ctx, 31, 0x1E0A74u);
    ctx->pc = 0x1E0A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A6Cu;
    // 0x1e0a70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E0A6Cu, 0x1E0A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0A74u;
label_1e0a74:
    // 0x1e0a74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E0A74u;
    {
        const bool branch_taken_0x1e0a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A74u;
        // 0x1e0a78: 0x8e240474  lw          $a0, 0x474($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a74) {
            ctx->pc = 0x1E0AD8u;
            goto label_1e0ad8;
        }
    }
    ctx->pc = 0x1E0A7Cu;
label_1e0a7c:
    // 0x1e0a7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0a80: 0x8e24046c  lw          $a0, 0x46C($s1)
    ctx->pc = 0x1e0a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1e0a84: 0xa622036c  sh          $v0, 0x36C($s1)
    ctx->pc = 0x1e0a84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 876), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e0a88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0a8c: 0xa622015c  sh          $v0, 0x15C($s1)
    ctx->pc = 0x1e0a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e0a90: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E0A90u;
    SET_GPR_U32(ctx, 31, 0x1E0A98u);
    ctx->pc = 0x1E0A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A90u;
    // 0x1e0a94: 0xa6220264  sh          $v0, 0x264($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 612), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E0A90u, 0x1E0A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0A98u;
label_1e0a98:
    // 0x1e0a98: 0x8e240464  lw          $a0, 0x464($s1)
    ctx->pc = 0x1e0a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1124)));
    // 0x1e0a9c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E0A9Cu;
    SET_GPR_U32(ctx, 31, 0x1E0AA4u);
    ctx->pc = 0x1E0AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A9Cu;
    // 0x1e0aa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E0A9Cu, 0x1E0AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0AA4u;
label_1e0aa4:
    // 0x1e0aa4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E0AA4u;
    {
        const bool branch_taken_0x1e0aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AA4u;
        // 0x1e0aa8: 0x8e240474  lw          $a0, 0x474($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0aa4) {
            ctx->pc = 0x1E0AD8u;
            goto label_1e0ad8;
        }
    }
    ctx->pc = 0x1E0AACu;
label_1e0aac:
    // 0x1e0aac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0ab0: 0x8e240474  lw          $a0, 0x474($s1)
    ctx->pc = 0x1e0ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
    // 0x1e0ab4: 0xa622036c  sh          $v0, 0x36C($s1)
    ctx->pc = 0x1e0ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 876), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e0ab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0abc: 0xa622015c  sh          $v0, 0x15C($s1)
    ctx->pc = 0x1e0abcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e0ac0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E0AC0u;
    SET_GPR_U32(ctx, 31, 0x1E0AC8u);
    ctx->pc = 0x1E0AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0AC0u;
    // 0x1e0ac4: 0xa6220264  sh          $v0, 0x264($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 612), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E0AC0u, 0x1E0AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0AC8u;
label_1e0ac8:
    // 0x1e0ac8: 0x8e240464  lw          $a0, 0x464($s1)
    ctx->pc = 0x1e0ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1124)));
    // 0x1e0acc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E0ACCu;
    SET_GPR_U32(ctx, 31, 0x1E0AD4u);
    ctx->pc = 0x1E0AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0ACCu;
    // 0x1e0ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E0ACCu, 0x1E0AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0AD4u;
label_1e0ad4:
    // 0x1e0ad4: 0x8e24046c  lw          $a0, 0x46C($s1)
    ctx->pc = 0x1e0ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1132)));
label_1e0ad8:
    // 0x1e0ad8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E0AD8u;
    SET_GPR_U32(ctx, 31, 0x1E0AE0u);
    ctx->pc = 0x1E0ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0AD8u;
    // 0x1e0adc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E0AD8u, 0x1E0AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0AE0u;
label_1e0ae0:
    // 0x1e0ae0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0AE0u;
    {
        const bool branch_taken_0x1e0ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AE0u;
        // 0x1e0ae4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ae0) {
            ctx->pc = 0x1E0AF4u;
            goto label_1e0af4;
        }
    }
    ctx->pc = 0x1E0AE8u;
label_1e0ae8:
    // 0x1e0ae8: 0xa622015c  sh          $v0, 0x15C($s1)
    ctx->pc = 0x1e0ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e0aec: 0xa6220264  sh          $v0, 0x264($s1)
    ctx->pc = 0x1e0aecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 612), (uint16_t)GPR_U32(ctx, 2));
label_1e0af0:
    // 0x1e0af0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e0af4:
    // 0x1e0af4: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x1e0af4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x1e0af8: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x1e0af8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x1e0afc: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x1e0afcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x1e0b00: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e0b04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0b08: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1e0b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1e0b0c:
    // 0x1e0b0c: 0x9e2203c4  lwu         $v0, 0x3C4($s1)
    ctx->pc = 0x1e0b0cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 964)));
    // 0x1e0b10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0b14: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1E0B14u;
    {
        const bool branch_taken_0x1e0b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B14u;
        // 0x1e0b18: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b14) {
            ctx->pc = 0x1E0C7Cu;
            goto label_1e0c7c;
        }
    }
    ctx->pc = 0x1E0B1Cu;
    // 0x1e0b1c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1e0b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e0b20: 0x26300058  addiu       $s0, $s1, 0x58
    ctx->pc = 0x1e0b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1e0b24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e0b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b28: 0xc07a392  jal         func_1E8E48
    ctx->pc = 0x1E0B28u;
    SET_GPR_U32(ctx, 31, 0x1E0B30u);
    ctx->pc = 0x1E0B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0B28u;
    // 0x1e0b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E48u, 0x1E0B28u, 0x1E0B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B30u;
label_1e0b30:
    // 0x1e0b30: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e0b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e0b34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e0b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0b38: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e0b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e0b3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e0b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0b40: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e0b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e0b44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b48: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1E0B48u;
    SET_GPR_U32(ctx, 31, 0x1E0B50u);
    ctx->pc = 0x1E0B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0B48u;
    // 0x1e0b4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1E0B48u, 0x1E0B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B50u;
label_1e0b50:
    // 0x1e0b50: 0x9e230118  lwu         $v1, 0x118($s1)
    ctx->pc = 0x1e0b50u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1e0b54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e0b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e0b58: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0B58u;
    {
        const bool branch_taken_0x1e0b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B58u;
        // 0x1e0b5c: 0xae2204c4  sw          $v0, 0x4C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b58) {
            ctx->pc = 0x1E0B70u;
            goto label_1e0b70;
        }
    }
    ctx->pc = 0x1E0B60u;
    // 0x1e0b60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0b64: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e0b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e0b68: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e0b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e0b6c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e0b70:
    // 0x1e0b70: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e0b74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e0b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e0b78: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1E0B78u;
    {
        const bool branch_taken_0x1e0b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B78u;
        // 0x1e0b7c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b78) {
            ctx->pc = 0x1E0C24u;
            goto label_1e0c24;
        }
    }
    ctx->pc = 0x1E0B80u;
label_1e0b80:
    // 0x1e0b80: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e0b84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0B84u;
    {
        const bool branch_taken_0x1e0b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B84u;
        // 0x1e0b88: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b84) {
            ctx->pc = 0x1E0B98u;
            goto label_1e0b98;
        }
    }
    ctx->pc = 0x1E0B8Cu;
    // 0x1e0b8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0B90u;
    {
        const bool branch_taken_0x1e0b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B90u;
        // 0x1e0b94: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b90) {
            ctx->pc = 0x1E0B9Cu;
            goto label_1e0b9c;
        }
    }
    ctx->pc = 0x1E0B98u;
label_1e0b98:
    // 0x1e0b98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0b9c:
    // 0x1e0b9c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e0b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e0ba0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E0BA0u;
    {
        const bool branch_taken_0x1e0ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BA0u;
        // 0x1e0ba4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ba0) {
            ctx->pc = 0x1E0C7Cu;
            goto label_1e0c7c;
        }
    }
    ctx->pc = 0x1E0BA8u;
    // 0x1e0ba8: 0x9e220220  lwu         $v0, 0x220($s1)
    ctx->pc = 0x1e0ba8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x1e0bac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0bb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0BB0u;
    {
        const bool branch_taken_0x1e0bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BB0u;
        // 0x1e0bb4: 0x26230160  addiu       $v1, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bb0) {
            ctx->pc = 0x1E0BC8u;
            goto label_1e0bc8;
        }
    }
    ctx->pc = 0x1E0BB8u;
    // 0x1e0bb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0bbc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e0bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1e0bc0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e0bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e0bc4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e0bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1e0bc8:
    // 0x1e0bc8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e0bcc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e0bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e0bd0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E0BD0u;
    {
        const bool branch_taken_0x1e0bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BD0u;
        // 0x1e0bd4: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bd0) {
            ctx->pc = 0x1E0C24u;
            goto label_1e0c24;
        }
    }
    ctx->pc = 0x1E0BD8u;
label_1e0bd8:
    // 0x1e0bd8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e0bdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0BDCu;
    {
        const bool branch_taken_0x1e0bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BDCu;
        // 0x1e0be0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bdc) {
            ctx->pc = 0x1E0BF0u;
            goto label_1e0bf0;
        }
    }
    ctx->pc = 0x1E0BE4u;
    // 0x1e0be4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0be4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0be8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0BE8u;
    {
        const bool branch_taken_0x1e0be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BE8u;
        // 0x1e0bec: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0be8) {
            ctx->pc = 0x1E0BF4u;
            goto label_1e0bf4;
        }
    }
    ctx->pc = 0x1E0BF0u;
label_1e0bf0:
    // 0x1e0bf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0bf4:
    // 0x1e0bf4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e0bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e0bf8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E0BF8u;
    {
        const bool branch_taken_0x1e0bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BF8u;
        // 0x1e0bfc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bf8) {
            ctx->pc = 0x1E0C7Cu;
            goto label_1e0c7c;
        }
    }
    ctx->pc = 0x1E0C00u;
    // 0x1e0c00: 0x9e220328  lwu         $v0, 0x328($s1)
    ctx->pc = 0x1e0c00u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x1e0c04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0c08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0C08u;
    {
        const bool branch_taken_0x1e0c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C08u;
        // 0x1e0c0c: 0x26230268  addiu       $v1, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c08) {
            ctx->pc = 0x1E0C20u;
            goto label_1e0c20;
        }
    }
    ctx->pc = 0x1E0C10u;
    // 0x1e0c10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0c14: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e0c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1e0c18: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e0c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e0c1c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e0c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1e0c20:
    // 0x1e0c20: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e0c24:
    // 0x1e0c24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0c28: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E0C28u;
    {
        const bool branch_taken_0x1e0c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C28u;
        // 0x1e0c2c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c28) {
            ctx->pc = 0x1E0C78u;
            goto label_1e0c78;
        }
    }
    ctx->pc = 0x1E0C30u;
label_1e0c30:
    // 0x1e0c30: 0x9e220118  lwu         $v0, 0x118($s1)
    ctx->pc = 0x1e0c30u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1e0c34: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e0c34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e0c38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0c3c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E0C3Cu;
    {
        const bool branch_taken_0x1e0c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C3Cu;
        // 0x1e0c40: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c3c) {
            ctx->pc = 0x1E0C7Cu;
            goto label_1e0c7c;
        }
    }
    ctx->pc = 0x1E0C44u;
    // 0x1e0c44: 0x9e220220  lwu         $v0, 0x220($s1)
    ctx->pc = 0x1e0c44u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x1e0c48: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e0c48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e0c4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0c50: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0C50u;
    {
        const bool branch_taken_0x1e0c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c50) {
            ctx->pc = 0x1E0C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0C50u;
            // 0x1e0c54: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0C80u;
            goto label_1e0c80;
        }
    }
    ctx->pc = 0x1E0C58u;
    // 0x1e0c58: 0x9e220328  lwu         $v0, 0x328($s1)
    ctx->pc = 0x1e0c58u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x1e0c5c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1e0c5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1e0c60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0c64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0C64u;
    {
        const bool branch_taken_0x1e0c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C64u;
        // 0x1e0c68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c64) {
            ctx->pc = 0x1E0C7Cu;
            goto label_1e0c7c;
        }
    }
    ctx->pc = 0x1E0C6Cu;
    // 0x1e0c6c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e0c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1e0c70: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e0c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e0c74: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e0c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1e0c78:
    // 0x1e0c78: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1e0c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1e0c7c:
    // 0x1e0c7c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1e0c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1e0c80:
    // 0x1e0c80: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1e0c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0c84: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1e0c84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0c88: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1e0c88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e0c8c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1e0c8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e0c90: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e0c90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e0c94: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1e0c94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e0c98: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1e0c98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e0c9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e0c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e0ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CA0u;
        // 0x1e0ca4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0CA8u;
}
