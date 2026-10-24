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

// Function: cOl21_createShapes
// Address: 0x17dcb8 - 0x17df88
void cOl21_createShapes_0x17dcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl21_createShapes_0x17dcb8");
#endif

    switch (ctx->pc) {
        case 0x17ddb8u: goto label_17ddb8;
        case 0x17de18u: goto label_17de18;
        case 0x17de68u: goto label_17de68;
        case 0x17dec8u: goto label_17dec8;
        case 0x17df38u: goto label_17df38;
        default: break;
    }

    ctx->pc = 0x17dcb8u;

    // 0x17dcb8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x17dcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x17dcbc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17dcc0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x17dcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x17dcc4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17dcc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcc8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x17dcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x17dccc: 0x26830654  addiu       $v1, $s4, 0x654
    ctx->pc = 0x17dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1620));
    // 0x17dcd0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17dcd4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x17dcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x17dcd8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x17dcd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcdc: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x17dcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x17dce0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17dce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dce4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x17dce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x17dce8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x17dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x17dcec: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x17dcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x17dcf0: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x17dcf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17dcf4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17dcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17dcf8: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x17dcf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17dcfc: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x17dcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x17dd00: 0x26970080  addiu       $s7, $s4, 0x80
    ctx->pc = 0x17dd00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x17dd04: 0xe7b90118  swc1        $f25, 0x118($sp)
    ctx->pc = 0x17dd04u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x17dd08: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x17dd08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd0c: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x17dd0cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x17dd10: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x17dd10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd14: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x17dd14u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x17dd18: 0x3c1e005d  lui         $fp, 0x5D
    ctx->pc = 0x17dd18u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)93 << 16));
    // 0x17dd1c: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x17dd1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x17dd20: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x17dd20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x17dd24: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x17dd24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x17dd28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17dd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17dd2c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x17dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x17dd30: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x17dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x17dd34: 0x3c014086  lui         $at, 0x4086
    ctx->pc = 0x17dd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16518 << 16));
    // 0x17dd38: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x17dd38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x17dd3c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x17dd3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x17dd40: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x17dd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x17dd44: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x17dd44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x17dd48: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x17dd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x17dd4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17dd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17dd50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17dd50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17dd54: 0x3c01bfec  lui         $at, 0xBFEC
    ctx->pc = 0x17dd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49132 << 16));
    // 0x17dd58: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x17dd58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x17dd5c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x17dd5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x17dd60: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x17dd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x17dd64: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x17dd64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x17dd68: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x17dd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x17dd6c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x17dd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x17dd70: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x17dd70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x17dd74: 0x24441f00  addiu       $a0, $v0, 0x1F00
    ctx->pc = 0x17dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7936));
    // 0x17dd78: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x17dd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x17dd7c: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x17dd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x17dd80: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x17dd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17dd84: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x17dd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x17dd88: 0x68830017  ldl         $v1, 0x17($a0)
    ctx->pc = 0x17dd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17dd8c: 0x6c830010  ldr         $v1, 0x10($a0)
    ctx->pc = 0x17dd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17dd90: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x17dd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dd94: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x17dd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dd98: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x17dd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dd9c: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x17dd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dda0: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x17dda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dda4: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x17dda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dda8: 0x6885001f  ldl         $a1, 0x1F($a0)
    ctx->pc = 0x17dda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x17ddac: 0x6c850018  ldr         $a1, 0x18($a0)
    ctx->pc = 0x17ddacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x17ddb0: 0xb3a5001f  sdl         $a1, 0x1F($sp)
    ctx->pc = 0x17ddb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ddb4: 0xb7a50018  sdr         $a1, 0x18($sp)
    ctx->pc = 0x17ddb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17ddb8:
    // 0x17ddb8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x17ddb8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ddbc: 0x0  nop
    ctx->pc = 0x17ddbcu;
    // NOP
    // 0x17ddc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17ddc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17ddc4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x17ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x17ddc8: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x17ddc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x17ddcc: 0x4617ab01  sub.s       $f12, $f21, $f23
    ctx->pc = 0x17ddccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    // 0x17ddd0: 0xe6590008  swc1        $f25, 0x8($s2)
    ctx->pc = 0x17ddd0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x17ddd4: 0x27c4ae50  addiu       $a0, $fp, -0x51B0
    ctx->pc = 0x17ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946384));
    // 0x17ddd8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x17ddd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x17dddc: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x17dddcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x17dde0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x17dde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x17dde4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17dde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dde8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x17dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x17ddec: 0x26860080  addiu       $a2, $s4, 0x80
    ctx->pc = 0x17ddecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x17ddf0: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x17ddf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x17ddf4: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x17ddf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x17ddf8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x17ddf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x17ddfc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x17ddfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17de00: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17de00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de04: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x17de04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de08: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x17de08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de0c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x17de0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x17de10: 0xc04ba64  jal         func_12E990
    ctx->pc = 0x17DE10u;
    SET_GPR_U32(ctx, 31, 0x17DE18u);
    ctx->pc = 0x17DE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DE10u;
    // 0x17de14: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E990u, 0x17DE10u, 0x17DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DE18u;
label_17de18:
    // 0x17de18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17de18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17de1c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x17de1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17de20: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17DE20u;
    {
        const bool branch_taken_0x17de20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE20u;
        // 0x17de24: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de20) {
            ctx->pc = 0x17DDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ddb8;
        }
    }
    ctx->pc = 0x17DE28u;
    // 0x17de28: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x17de28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17de2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17de2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17de30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17de34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17de34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17de38: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x17de38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de3c: 0x3c01c02c  lui         $at, 0xC02C
    ctx->pc = 0x17de3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49196 << 16));
    // 0x17de40: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x17de40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x17de44: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x17de44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x17de48: 0x24b20010  addiu       $s2, $a1, 0x10
    ctx->pc = 0x17de48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x17de4c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x17de4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x17de50: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x17de50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x17de54: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x17de54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x17de58: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x17de58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de5c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x17de5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x17de60: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x17de60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x17de64: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x17de64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_17de68:
    // 0x17de68: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x17de68u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17de6c: 0x0  nop
    ctx->pc = 0x17de6cu;
    // NOP
    // 0x17de70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17de70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17de74: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x17de74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x17de78: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x17de78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x17de7c: 0x4617ab00  add.s       $f12, $f21, $f23
    ctx->pc = 0x17de7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x17de80: 0xe6190008  swc1        $f25, 0x8($s0)
    ctx->pc = 0x17de80u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x17de84: 0x27c4ae50  addiu       $a0, $fp, -0x51B0
    ctx->pc = 0x17de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946384));
    // 0x17de88: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x17de88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x17de8c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x17de8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x17de90: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x17de90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x17de94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17de94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de98: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x17de98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x17de9c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x17de9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dea0: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x17dea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x17dea4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x17dea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x17dea8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x17dea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17deac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17deacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17deb0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x17deb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17deb4: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x17deb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17deb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17deb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17debc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x17debcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x17dec0: 0xc04ba64  jal         func_12E990
    ctx->pc = 0x17DEC0u;
    SET_GPR_U32(ctx, 31, 0x17DEC8u);
    ctx->pc = 0x17DEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DEC0u;
    // 0x17dec4: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E990u, 0x17DEC0u, 0x17DEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DEC8u;
label_17dec8:
    // 0x17dec8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x17dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x17decc: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x17deccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17ded0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17DED0u;
    {
        const bool branch_taken_0x17ded0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DED0u;
        // 0x17ded4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ded0) {
            ctx->pc = 0x17DE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17de68;
        }
    }
    ctx->pc = 0x17DED8u;
    // 0x17ded8: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x17ded8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x17dedc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x17dedcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x17dee0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17dee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dee4: 0x27c4ae50  addiu       $a0, $fp, -0x51B0
    ctx->pc = 0x17dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946384));
    // 0x17dee8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17dee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17deec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17deecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17def0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x17def0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17def4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17def4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x17def8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17def8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17defc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x17defcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df00: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x17df00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17df04: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x17df04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df08: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x17df08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x17df0c: 0x460cab01  sub.s       $f12, $f21, $f12
    ctx->pc = 0x17df0cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
    // 0x17df10: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x17df10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x17df14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17df14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df18: 0xe6a1000c  swc1        $f1, 0xC($s5)
    ctx->pc = 0x17df18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x17df1c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x17df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x17df20: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x17df20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x17df24: 0x8fa90044  lw          $t1, 0x44($sp)
    ctx->pc = 0x17df24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x17df28: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x17df28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x17df2c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x17df2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x17df30: 0xc04ba64  jal         func_12E990
    ctx->pc = 0x17DF30u;
    SET_GPR_U32(ctx, 31, 0x17DF38u);
    ctx->pc = 0x17DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF30u;
    // 0x17df34: 0xe6c1000c  swc1        $f1, 0xC($s6) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E990u, 0x17DF30u, 0x17DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF38u;
label_17df38:
    // 0x17df38: 0xae820674  sw          $v0, 0x674($s4)
    ctx->pc = 0x17df38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1652), GPR_U32(ctx, 2));
    // 0x17df3c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x17df3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17df40: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x17df40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17df44: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x17df44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17df48: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x17df48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17df4c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x17df4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17df50: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x17df50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17df54: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x17df54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17df58: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17df58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17df5c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x17df5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17df60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17df60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17df64: 0xc7b90118  lwc1        $f25, 0x118($sp)
    ctx->pc = 0x17df64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x17df68: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x17df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x17df6c: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x17df6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x17df70: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x17df70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17df74: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x17df74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17df78: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x17df78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17df7c: 0x3e00008  jr          $ra
    ctx->pc = 0x17DF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF7Cu;
        // 0x17df80: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DF84u;
    // 0x17df84: 0x0  nop
    ctx->pc = 0x17df84u;
    // NOP
    ctx->pc = 0x17df88u;
}
