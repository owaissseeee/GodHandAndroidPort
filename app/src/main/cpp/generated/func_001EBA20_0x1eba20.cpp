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

// Function: func_001EBA20
// Address: 0x1eba20 - 0x1ebb78
void func_001EBA20_0x1eba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EBA20_0x1eba20");
#endif

    switch (ctx->pc) {
        case 0x1eba58u: goto label_1eba58;
        case 0x1ebb3cu: goto label_1ebb3c;
        default: break;
    }

    ctx->pc = 0x1eba20u;

    // 0x1eba20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1eba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1eba24: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1eba24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1eba28: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1eba28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1eba2c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1eba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1eba30: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1eba30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1eba34: 0x2490005c  addiu       $s0, $a0, 0x5C
    ctx->pc = 0x1eba34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x1eba38: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1eba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1eba3c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1eba3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eba40: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1eba40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1eba44: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1eba44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1eba48: 0x3c01c1f0  lui         $at, 0xC1F0
    ctx->pc = 0x1eba48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49648 << 16));
    // 0x1eba4c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1eba4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1eba50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eba50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eba54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1eba54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1eba58:
    // 0x1eba58: 0x9e020030  lwu         $v0, 0x30($s0)
    ctx->pc = 0x1eba58u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1eba5c: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1eba5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1eba60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eba60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eba64: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x1EBA64u;
    {
        const bool branch_taken_0x1eba64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eba64) {
            ctx->pc = 0x1EBA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBA64u;
            // 0x1eba68: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBB4Cu;
            goto label_1ebb4c;
        }
    }
    ctx->pc = 0x1EBA6Cu;
    // 0x1eba6c: 0x6a02000f  ldl         $v0, 0xF($s0)
    ctx->pc = 0x1eba6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1eba70: 0x6e020008  ldr         $v0, 0x8($s0)
    ctx->pc = 0x1eba70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1eba74: 0x6a030017  ldl         $v1, 0x17($s0)
    ctx->pc = 0x1eba74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1eba78: 0x6e030010  ldr         $v1, 0x10($s0)
    ctx->pc = 0x1eba78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1eba7c: 0x6a04001f  ldl         $a0, 0x1F($s0)
    ctx->pc = 0x1eba7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1eba80: 0x6e040018  ldr         $a0, 0x18($s0)
    ctx->pc = 0x1eba80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1eba84: 0x6a050027  ldl         $a1, 0x27($s0)
    ctx->pc = 0x1eba84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1eba88: 0x6e050020  ldr         $a1, 0x20($s0)
    ctx->pc = 0x1eba88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1eba8c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1eba8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1eba90: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1eba90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1eba94: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1eba94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1eba98: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1eba98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1eba9c: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x1eba9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebaa0: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x1ebaa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebaa4: 0xb3a5001f  sdl         $a1, 0x1F($sp)
    ctx->pc = 0x1ebaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebaa8: 0xb7a50018  sdr         $a1, 0x18($sp)
    ctx->pc = 0x1ebaa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebaac: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1ebaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1ebab0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1ebab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1ebab4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1ebab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebab8: 0x461500c0  add.s       $f3, $f0, $f21
    ctx->pc = 0x1ebab8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1ebabc: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1ebabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ebac0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ebac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebac4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EBAC4u;
    {
        const bool branch_taken_0x1ebac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAC4u;
        // 0x1ebac8: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebac4) {
            ctx->pc = 0x1EBAF4u;
            goto label_1ebaf4;
        }
    }
    ctx->pc = 0x1EBACCu;
    // 0x1ebacc: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1ebaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ebad0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EBAD0u;
    {
        const bool branch_taken_0x1ebad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAD0u;
        // 0x1ebad4: 0xc7a00038  lwc1        $f0, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebad0) {
            ctx->pc = 0x1EBB20u;
            goto label_1ebb20;
        }
    }
    ctx->pc = 0x1EBAD8u;
    // 0x1ebad8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ebad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebadc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ebadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ebae0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ebae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebae4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1ebae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ebae8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ebae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebaec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EBAECu;
    {
        const bool branch_taken_0x1ebaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAECu;
        // 0x1ebaf0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebaec) {
            ctx->pc = 0x1EBB1Cu;
            goto label_1ebb1c;
        }
    }
    ctx->pc = 0x1EBAF4u;
label_1ebaf4:
    // 0x1ebaf4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1ebaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1ebaf8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1ebaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1ebafc: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1ebafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1ebb00: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1ebb00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1ebb04: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1ebb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebb08: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1ebb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebb0c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1ebb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ebb10: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ebb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ebb14: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1ebb14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ebb18: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1ebb18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1ebb1c:
    // 0x1ebb1c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1ebb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebb20:
    // 0x1ebb20: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1ebb20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebb24: 0x0  nop
    ctx->pc = 0x1ebb24u;
    // NOP
    // 0x1ebb28: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1EBB28u;
    {
        const bool branch_taken_0x1ebb28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebb28) {
            ctx->pc = 0x1EBB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBB28u;
            // 0x1ebb2c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBB4Cu;
            goto label_1ebb4c;
        }
    }
    ctx->pc = 0x1EBB30u;
    // 0x1ebb30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ebb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebb34: 0xc0560a2  jal         func_158288
    ctx->pc = 0x1EBB34u;
    SET_GPR_U32(ctx, 31, 0x1EBB3Cu);
    ctx->pc = 0x1EBB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB34u;
    // 0x1ebb38: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1EBB34u, 0x1EBB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB3Cu;
label_1ebb3c:
    // 0x1ebb3c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1ebb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ebb40: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1ebb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1ebb44: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1ebb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1ebb48: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ebb48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1ebb4c:
    // 0x1ebb4c: 0x621ffc2  bgez        $s1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1EBB4Cu;
    {
        const bool branch_taken_0x1ebb4c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1EBB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB4Cu;
        // 0x1ebb50: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb4c) {
            ctx->pc = 0x1EBA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eba58;
        }
    }
    ctx->pc = 0x1EBB54u;
    // 0x1ebb54: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1ebb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ebb58: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1ebb58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ebb5c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1ebb5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ebb60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ebb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ebb64: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1ebb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ebb68: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1ebb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ebb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB6Cu;
        // 0x1ebb70: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBB74u;
    // 0x1ebb74: 0x0  nop
    ctx->pc = 0x1ebb74u;
    // NOP
    ctx->pc = 0x1ebb78u;
}
