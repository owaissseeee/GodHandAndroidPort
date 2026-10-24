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

// Function: func_001EBC58
// Address: 0x1ebc58 - 0x1ebe00
void func_001EBC58_0x1ebc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EBC58_0x1ebc58");
#endif

    switch (ctx->pc) {
        case 0x1ebc90u: goto label_1ebc90;
        case 0x1ebdc8u: goto label_1ebdc8;
        default: break;
    }

    ctx->pc = 0x1ebc58u;

    // 0x1ebc58: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1ebc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1ebc5c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1ebc5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1ebc60: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1ebc60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1ebc64: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1ebc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1ebc68: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1ebc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1ebc6c: 0x2490005c  addiu       $s0, $a0, 0x5C
    ctx->pc = 0x1ebc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x1ebc70: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1ebc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1ebc74: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1ebc74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ebc78: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ebc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ebc7c: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1ebc7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ebc80: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1ebc80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ebc84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ebc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ebc88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ebc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ebc8c: 0x0  nop
    ctx->pc = 0x1ebc8cu;
    // NOP
label_1ebc90:
    // 0x1ebc90: 0x6a02000f  ldl         $v0, 0xF($s0)
    ctx->pc = 0x1ebc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ebc94: 0x6e020008  ldr         $v0, 0x8($s0)
    ctx->pc = 0x1ebc94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ebc98: 0x6a030017  ldl         $v1, 0x17($s0)
    ctx->pc = 0x1ebc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ebc9c: 0x6e030010  ldr         $v1, 0x10($s0)
    ctx->pc = 0x1ebc9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ebca0: 0x6a04001f  ldl         $a0, 0x1F($s0)
    ctx->pc = 0x1ebca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ebca4: 0x6e040018  ldr         $a0, 0x18($s0)
    ctx->pc = 0x1ebca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ebca8: 0x6a050027  ldl         $a1, 0x27($s0)
    ctx->pc = 0x1ebca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ebcac: 0x6e050020  ldr         $a1, 0x20($s0)
    ctx->pc = 0x1ebcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ebcb0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1ebcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebcb4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1ebcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebcb8: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1ebcb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebcbc: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1ebcbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebcc0: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x1ebcc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebcc4: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x1ebcc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebcc8: 0xb3a5001f  sdl         $a1, 0x1F($sp)
    ctx->pc = 0x1ebcc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebccc: 0xb7a50018  sdr         $a1, 0x18($sp)
    ctx->pc = 0x1ebcccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebcd0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1ebcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1ebcd4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1ebcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1ebcd8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1ebcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebcdc: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x1ebcdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebce0: 0x0  nop
    ctx->pc = 0x1ebce0u;
    // NOP
    // 0x1ebce4: 0x4503003c  bc1tl       . + 4 + (0x3C << 2)
    ctx->pc = 0x1EBCE4u;
    {
        const bool branch_taken_0x1ebce4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebce4) {
            ctx->pc = 0x1EBCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBCE4u;
            // 0x1ebce8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBDD8u;
            goto label_1ebdd8;
        }
    }
    ctx->pc = 0x1EBCECu;
    // 0x1ebcec: 0x9e020030  lwu         $v0, 0x30($s0)
    ctx->pc = 0x1ebcecu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ebcf0: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1ebcf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
    // 0x1ebcf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ebcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ebcf8: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x1EBCF8u;
    {
        const bool branch_taken_0x1ebcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebcf8) {
            ctx->pc = 0x1EBCFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBCF8u;
            // 0x1ebcfc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBDD8u;
            goto label_1ebdd8;
        }
    }
    ctx->pc = 0x1EBD00u;
    // 0x1ebd00: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1ebd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ebd04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ebd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebd08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EBD08u;
    {
        const bool branch_taken_0x1ebd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD08u;
        // 0x1ebd0c: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd08) {
            ctx->pc = 0x1EBD38u;
            goto label_1ebd38;
        }
    }
    ctx->pc = 0x1EBD10u;
    // 0x1ebd10: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1ebd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ebd14: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EBD14u;
    {
        const bool branch_taken_0x1ebd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ebd14) {
            ctx->pc = 0x1EBD60u;
            goto label_1ebd60;
        }
    }
    ctx->pc = 0x1EBD1Cu;
    // 0x1ebd1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ebd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebd20: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ebd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ebd24: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ebd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebd28: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1ebd28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ebd2c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ebd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebd30: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EBD30u;
    {
        const bool branch_taken_0x1ebd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD30u;
        // 0x1ebd34: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd30) {
            ctx->pc = 0x1EBD60u;
            goto label_1ebd60;
        }
    }
    ctx->pc = 0x1EBD38u;
label_1ebd38:
    // 0x1ebd38: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1ebd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1ebd3c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1ebd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1ebd40: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1ebd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1ebd44: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1ebd44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1ebd48: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1ebd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebd4c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1ebd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebd50: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1ebd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ebd54: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ebd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ebd58: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1ebd58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ebd5c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1ebd5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1ebd60:
    // 0x1ebd60: 0x6a02000f  ldl         $v0, 0xF($s0)
    ctx->pc = 0x1ebd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ebd64: 0x6e020008  ldr         $v0, 0x8($s0)
    ctx->pc = 0x1ebd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ebd68: 0x6a030017  ldl         $v1, 0x17($s0)
    ctx->pc = 0x1ebd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ebd6c: 0x6e030010  ldr         $v1, 0x10($s0)
    ctx->pc = 0x1ebd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ebd70: 0x6a04001f  ldl         $a0, 0x1F($s0)
    ctx->pc = 0x1ebd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ebd74: 0x6e040018  ldr         $a0, 0x18($s0)
    ctx->pc = 0x1ebd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ebd78: 0x6a050027  ldl         $a1, 0x27($s0)
    ctx->pc = 0x1ebd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ebd7c: 0x6e050020  ldr         $a1, 0x20($s0)
    ctx->pc = 0x1ebd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ebd80: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x1ebd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebd84: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x1ebd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebd88: 0xb3a3005f  sdl         $v1, 0x5F($sp)
    ctx->pc = 0x1ebd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebd8c: 0xb7a30058  sdr         $v1, 0x58($sp)
    ctx->pc = 0x1ebd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebd90: 0xb3a40067  sdl         $a0, 0x67($sp)
    ctx->pc = 0x1ebd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebd94: 0xb7a40060  sdr         $a0, 0x60($sp)
    ctx->pc = 0x1ebd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebd98: 0xb3a5006f  sdl         $a1, 0x6F($sp)
    ctx->pc = 0x1ebd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebd9c: 0xb7a50068  sdr         $a1, 0x68($sp)
    ctx->pc = 0x1ebd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ebda0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1ebda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1ebda4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1ebda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x1ebda8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1ebda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebdac: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1ebdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebdb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ebdb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebdb4: 0x0  nop
    ctx->pc = 0x1ebdb4u;
    // NOP
    // 0x1ebdb8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBDB8u;
    {
        const bool branch_taken_0x1ebdb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebdb8) {
            ctx->pc = 0x1EBDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBDB8u;
            // 0x1ebdbc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBDD8u;
            goto label_1ebdd8;
        }
    }
    ctx->pc = 0x1EBDC0u;
    // 0x1ebdc0: 0xc06c814  jal         func_1B2050
    ctx->pc = 0x1EBDC0u;
    SET_GPR_U32(ctx, 31, 0x1EBDC8u);
    ctx->pc = 0x1EBDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBDC0u;
    // 0x1ebdc4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2050u, 0x1EBDC0u, 0x1EBDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBDC8u;
label_1ebdc8:
    // 0x1ebdc8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1ebdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ebdcc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1ebdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1ebdd0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1ebdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1ebdd4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ebdd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1ebdd8:
    // 0x1ebdd8: 0x621ffad  bgez        $s1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x1EBDD8u;
    {
        const bool branch_taken_0x1ebdd8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1EBDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDD8u;
        // 0x1ebddc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebdd8) {
            ctx->pc = 0x1EBC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ebc90;
        }
    }
    ctx->pc = 0x1EBDE0u;
    // 0x1ebde0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1ebde0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ebde4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1ebde4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebde8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1ebde8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ebdec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ebdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ebdf0: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1ebdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ebdf4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1ebdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ebdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDF8u;
        // 0x1ebdfc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBE00u;
}
