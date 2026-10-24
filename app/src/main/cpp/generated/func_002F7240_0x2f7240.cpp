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

// Function: func_002F7240
// Address: 0x2f7240 - 0x2f7918
void func_002F7240_0x2f7240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F7240_0x2f7240");
#endif

    switch (ctx->pc) {
        case 0x2f7550u: goto label_2f7550;
        case 0x2f75b4u: goto label_2f75b4;
        case 0x2f75c4u: goto label_2f75c4;
        case 0x2f7630u: goto label_2f7630;
        case 0x2f7804u: goto label_2f7804;
        case 0x2f784cu: goto label_2f784c;
        case 0x2f789cu: goto label_2f789c;
        case 0x2f78a8u: goto label_2f78a8;
        case 0x2f78b8u: goto label_2f78b8;
        default: break;
    }

    ctx->pc = 0x2f7240u;

    // 0x2f7240: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2f7240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2f7244: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2f7244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7248: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2f7248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x2f724c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2f724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x2f7250: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f7250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7254: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2f7254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x2f7258: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2f7258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x2f725c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2f725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x2f7260: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x2f7260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x2f7264: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x2f7264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x2f7268: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x2f7268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x2f726c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2f726cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x2f7270: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f7270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2f7274: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x2f7274u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2f7278: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2f7278u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2f727c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2f727cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2f7280: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2f7280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2f7284: 0x8e4202e0  lw          $v0, 0x2E0($s2)
    ctx->pc = 0x2f7284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
    // 0x2f7288: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2f7288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2f728c: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x2f728cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x2f7290: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2f7290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2f7294: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2f7294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2f7298: 0xae4202e0  sw          $v0, 0x2E0($s2)
    ctx->pc = 0x2f7298u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 736), GPR_U32(ctx, 2));
    // 0x2f729c: 0x6a42018f  ldl         $v0, 0x18F($s2)
    ctx->pc = 0x2f729cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f72a0: 0x6e420188  ldr         $v0, 0x188($s2)
    ctx->pc = 0x2f72a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f72a4: 0x6a430197  ldl         $v1, 0x197($s2)
    ctx->pc = 0x2f72a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f72a8: 0x6e430190  ldr         $v1, 0x190($s2)
    ctx->pc = 0x2f72a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f72ac: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2f72acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f72b0: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2f72b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f72b4: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x2f72b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f72b8: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x2f72b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f72bc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2f72bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f72c0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2f72c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f72c4: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2f72c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f72c8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2f72c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2f72cc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2f72ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f72d0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2f72d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2f72d4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2f72d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2f72d8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2f72d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2f72dc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2f72dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f72e0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2f72e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f72e4: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2f72e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2f72e8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2f72e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2f72ec: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x2f72ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f72f0: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x2f72f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f72f4: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x2f72f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f72f8: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x2f72f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f72fc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2f72fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f7300: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2f7300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f7304: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2f7304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f7308: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2f7308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f730c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f730cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7310: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2f7310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7314: 0x0  nop
    ctx->pc = 0x2f7314u;
    // NOP
    // 0x2f7318: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F7318u;
    {
        const bool branch_taken_0x2f7318 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7318) {
            ctx->pc = 0x2F731Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7318u;
            // 0x2f731c: 0xe7a50000  swc1        $f5, 0x0($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7320u;
            goto label_2f7320;
        }
    }
    ctx->pc = 0x2F7320u;
label_2f7320:
    // 0x2f7320: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2f7320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7324: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2f7324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7328: 0x0  nop
    ctx->pc = 0x2f7328u;
    // NOP
    // 0x2f732c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F732Cu;
    {
        const bool branch_taken_0x2f732c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f732c) {
            ctx->pc = 0x2F7330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F732Cu;
            // 0x2f7330: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7334u;
            goto label_2f7334;
        }
    }
    ctx->pc = 0x2F7334u;
label_2f7334:
    // 0x2f7334: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f7334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7338: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2f7338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f733c: 0x0  nop
    ctx->pc = 0x2f733cu;
    // NOP
    // 0x2f7340: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F7340u;
    {
        const bool branch_taken_0x2f7340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7340) {
            ctx->pc = 0x2F7344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7340u;
            // 0x2f7344: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7348u;
            goto label_2f7348;
        }
    }
    ctx->pc = 0x2F7348u;
label_2f7348:
    // 0x2f7348: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2f7348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f734c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2f734cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7350: 0x0  nop
    ctx->pc = 0x2f7350u;
    // NOP
    // 0x2f7354: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F7354u;
    {
        const bool branch_taken_0x2f7354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7354) {
            ctx->pc = 0x2F7358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7354u;
            // 0x2f7358: 0xe7a5000c  swc1        $f5, 0xC($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F735Cu;
            goto label_2f735c;
        }
    }
    ctx->pc = 0x2F735Cu;
label_2f735c:
    // 0x2f735c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7360: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2f7360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7364: 0x0  nop
    ctx->pc = 0x2f7364u;
    // NOP
    // 0x2f7368: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F7368u;
    {
        const bool branch_taken_0x2f7368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7368) {
            ctx->pc = 0x2F736Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7368u;
            // 0x2f736c: 0xe7a60000  swc1        $f6, 0x0($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7370u;
            goto label_2f7370;
        }
    }
    ctx->pc = 0x2F7370u;
label_2f7370:
    // 0x2f7370: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2f7370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7374: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2f7374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7378: 0x0  nop
    ctx->pc = 0x2f7378u;
    // NOP
    // 0x2f737c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F737Cu;
    {
        const bool branch_taken_0x2f737c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f737c) {
            ctx->pc = 0x2F7380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F737Cu;
            // 0x2f7380: 0xe7a60004  swc1        $f6, 0x4($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7384u;
            goto label_2f7384;
        }
    }
    ctx->pc = 0x2F7384u;
label_2f7384:
    // 0x2f7384: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f7384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7388: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2f7388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f738c: 0x0  nop
    ctx->pc = 0x2f738cu;
    // NOP
    // 0x2f7390: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F7390u;
    {
        const bool branch_taken_0x2f7390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7390) {
            ctx->pc = 0x2F7394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7390u;
            // 0x2f7394: 0xe7a60008  swc1        $f6, 0x8($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7398u;
            goto label_2f7398;
        }
    }
    ctx->pc = 0x2F7398u;
label_2f7398:
    // 0x2f7398: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2f7398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f739c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2f739cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f73a0: 0x0  nop
    ctx->pc = 0x2f73a0u;
    // NOP
    // 0x2f73a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F73A4u;
    {
        const bool branch_taken_0x2f73a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f73a4) {
            ctx->pc = 0x2F73A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F73A4u;
            // 0x2f73a8: 0xe7a6000c  swc1        $f6, 0xC($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F73ACu;
            goto label_2f73ac;
        }
    }
    ctx->pc = 0x2F73ACu;
label_2f73ac:
    // 0x2f73ac: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f73acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f73b0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f73b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f73b4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f73b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2f73b8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2f73b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f73bc: 0x8e450110  lw          $a1, 0x110($s2)
    ctx->pc = 0x2f73bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x2f73c0: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f73c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2f73c4: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x2f73c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f73c8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2f73c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f73cc: 0x8ca6016c  lw          $a2, 0x16C($a1)
    ctx->pc = 0x2f73ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 364)));
    // 0x2f73d0: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2f73d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f73d4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2f73d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f73d8: 0xae460304  sw          $a2, 0x304($s2)
    ctx->pc = 0x2f73d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 6));
    // 0x2f73dc: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f73dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f73e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f73e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f73e4: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x2f73e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f73e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f73e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f73ec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2f73ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f73f0: 0x8ca50170  lw          $a1, 0x170($a1)
    ctx->pc = 0x2f73f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 368)));
    // 0x2f73f4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x2f73f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f73f8: 0xae450308  sw          $a1, 0x308($s2)
    ctx->pc = 0x2f73f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 776), GPR_U32(ctx, 5));
    // 0x2f73fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f73fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f7400: 0x10c00044  beqz        $a2, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F7400u;
    {
        const bool branch_taken_0x2f7400 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7400u;
        // 0x2f7404: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7400) {
            ctx->pc = 0x2F7514u;
            goto label_2f7514;
        }
    }
    ctx->pc = 0x2F7408u;
    // 0x2f7408: 0x8e430114  lw          $v1, 0x114($s2)
    ctx->pc = 0x2f7408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x2f740c: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x2F740Cu;
    {
        const bool branch_taken_0x2f740c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F740Cu;
        // 0x2f7410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f740c) {
            ctx->pc = 0x2F7558u;
            goto label_2f7558;
        }
    }
    ctx->pc = 0x2F7414u;
    // 0x2f7414: 0x906402b4  lbu         $a0, 0x2B4($v1)
    ctx->pc = 0x2f7414u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x2f7418: 0x4a00002  bltz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7418u;
    {
        const bool branch_taken_0x2f7418 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2F741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7418u;
        // 0x2f741c: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7418) {
            ctx->pc = 0x2F7424u;
            goto label_2f7424;
        }
    }
    ctx->pc = 0x2F7420u;
    // 0x2f7420: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2f7420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2f7424:
    // 0x2f7424: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f7424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f7428: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7428u;
    {
        const bool branch_taken_0x2f7428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7428u;
        // 0x2f742c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7428) {
            ctx->pc = 0x2F7440u;
            goto label_2f7440;
        }
    }
    ctx->pc = 0x2F7430u;
    // 0x2f7430: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x2f7430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x2f7434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f7434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f7438: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7438u;
    {
        const bool branch_taken_0x2f7438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7438u;
        // 0x2f743c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7438) {
            ctx->pc = 0x2F7444u;
            goto label_2f7444;
        }
    }
    ctx->pc = 0x2F7440u;
label_2f7440:
    // 0x2f7440: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7444:
    // 0x2f7444: 0x10400126  beqz        $v0, . + 4 + (0x126 << 2)
    ctx->pc = 0x2F7444u;
    {
        const bool branch_taken_0x2f7444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7444u;
        // 0x2f7448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7444) {
            ctx->pc = 0x2F78E0u;
            goto label_2f78e0;
        }
    }
    ctx->pc = 0x2F744Cu;
    // 0x2f744c: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2f7450: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2f7450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2f7454: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2F7454u;
    {
        const bool branch_taken_0x2f7454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7454u;
        // 0x2f7458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7454) {
            ctx->pc = 0x2F7514u;
            goto label_2f7514;
        }
    }
    ctx->pc = 0x2F745Cu;
    // 0x2f745c: 0x8e450114  lw          $a1, 0x114($s2)
    ctx->pc = 0x2f745cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x2f7460: 0x8e440308  lw          $a0, 0x308($s2)
    ctx->pc = 0x2f7460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
    // 0x2f7464: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x2f7464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x2f7468: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7468u;
    {
        const bool branch_taken_0x2f7468 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7468u;
        // 0x2f746c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7468) {
            ctx->pc = 0x2F7474u;
            goto label_2f7474;
        }
    }
    ctx->pc = 0x2F7470u;
    // 0x2f7470: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2f7470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2f7474:
    // 0x2f7474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f7474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f7478: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7478u;
    {
        const bool branch_taken_0x2f7478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7478u;
        // 0x2f747c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7478) {
            ctx->pc = 0x2F7490u;
            goto label_2f7490;
        }
    }
    ctx->pc = 0x2F7480u;
    // 0x2f7480: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x2f7480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x2f7484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f7484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f7488: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7488u;
    {
        const bool branch_taken_0x2f7488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7488u;
        // 0x2f748c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7488) {
            ctx->pc = 0x2F7494u;
            goto label_2f7494;
        }
    }
    ctx->pc = 0x2F7490u;
label_2f7490:
    // 0x2f7490: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7494:
    // 0x2f7494: 0x8c42014c  lw          $v0, 0x14C($v0)
    ctx->pc = 0x2f7494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x2f7498: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F7498u;
    {
        const bool branch_taken_0x2f7498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7498u;
        // 0x2f749c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7498) {
            ctx->pc = 0x2F7514u;
            goto label_2f7514;
        }
    }
    ctx->pc = 0x2F74A0u;
    // 0x2f74a0: 0x8e450114  lw          $a1, 0x114($s2)
    ctx->pc = 0x2f74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x2f74a4: 0x8e440308  lw          $a0, 0x308($s2)
    ctx->pc = 0x2f74a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
    // 0x2f74a8: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x2f74a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x2f74ac: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F74ACu;
    {
        const bool branch_taken_0x2f74ac = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74ACu;
        // 0x2f74b0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74ac) {
            ctx->pc = 0x2F74B8u;
            goto label_2f74b8;
        }
    }
    ctx->pc = 0x2F74B4u;
    // 0x2f74b4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2f74b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2f74b8:
    // 0x2f74b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f74b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f74bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F74BCu;
    {
        const bool branch_taken_0x2f74bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F74C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74BCu;
        // 0x2f74c0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74bc) {
            ctx->pc = 0x2F74D4u;
            goto label_2f74d4;
        }
    }
    ctx->pc = 0x2F74C4u;
    // 0x2f74c4: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x2f74c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x2f74c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f74cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F74CCu;
    {
        const bool branch_taken_0x2f74cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74CCu;
        // 0x2f74d0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74cc) {
            ctx->pc = 0x2F74D8u;
            goto label_2f74d8;
        }
    }
    ctx->pc = 0x2F74D4u;
label_2f74d4:
    // 0x2f74d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f74d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f74d8:
    // 0x2f74d8: 0x8e430114  lw          $v1, 0x114($s2)
    ctx->pc = 0x2f74d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x2f74dc: 0x8c44014c  lw          $a0, 0x14C($v0)
    ctx->pc = 0x2f74dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x2f74e0: 0x906202b4  lbu         $v0, 0x2B4($v1)
    ctx->pc = 0x2f74e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x2f74e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F74E4u;
    {
        const bool branch_taken_0x2f74e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74E4u;
        // 0x2f74e8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74e4) {
            ctx->pc = 0x2F74F8u;
            goto label_2f74f8;
        }
    }
    ctx->pc = 0x2F74ECu;
    // 0x2f74ec: 0x8c620278  lw          $v0, 0x278($v1)
    ctx->pc = 0x2f74ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x2f74f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F74F0u;
    {
        const bool branch_taken_0x2f74f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F74F0u;
        // 0x2f74f4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74f0) {
            ctx->pc = 0x2F74FCu;
            goto label_2f74fc;
        }
    }
    ctx->pc = 0x2F74F8u;
label_2f74f8:
    // 0x2f74f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f74f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f74fc:
    // 0x2f74fc: 0x3c03f0f0  lui         $v1, 0xF0F0
    ctx->pc = 0x2f74fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61680 << 16));
    // 0x2f7500: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2f7500u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f7504: 0x3463f0f1  ori         $v1, $v1, 0xF0F1
    ctx->pc = 0x2f7504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61681);
    // 0x2f7508: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2f7508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f750c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2f750cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2f7510: 0xae420308  sw          $v0, 0x308($s2)
    ctx->pc = 0x2f7510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 776), GPR_U32(ctx, 2));
label_2f7514:
    // 0x2f7514: 0x8e420110  lw          $v0, 0x110($s2)
    ctx->pc = 0x2f7514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x2f7518: 0x9043018d  lbu         $v1, 0x18D($v0)
    ctx->pc = 0x2f7518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 397)));
    // 0x2f751c: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x2f751cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2f7520: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x2f7520u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x2f7524: 0x28820079  slti        $v0, $a0, 0x79
    ctx->pc = 0x2f7524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x2f7528: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7528u;
    {
        const bool branch_taken_0x2f7528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7528u;
        // 0x2f752c: 0xa2430249  sb          $v1, 0x249($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 585), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7528) {
            ctx->pc = 0x2F7538u;
            goto label_2f7538;
        }
    }
    ctx->pc = 0x2F7530u;
    // 0x2f7530: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7530u;
    {
        const bool branch_taken_0x2f7530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7530) {
            ctx->pc = 0x2F7534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7530u;
            // 0x2f7534: 0x82460249  lb          $a2, 0x249($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 585)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7544u;
            goto label_2f7544;
        }
    }
    ctx->pc = 0x2F7538u;
label_2f7538:
    // 0x2f7538: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2f7538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f753c: 0xa2420249  sb          $v0, 0x249($s2)
    ctx->pc = 0x2f753cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 585), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f7540: 0x82460249  lb          $a2, 0x249($s2)
    ctx->pc = 0x2f7540u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 585)));
label_2f7544:
    // 0x2f7544: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2f7544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7548: 0xc0baf44  jal         func_2EBD10
    ctx->pc = 0x2F7548u;
    SET_GPR_U32(ctx, 31, 0x2F7550u);
    ctx->pc = 0x2F754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7548u;
    // 0x2f754c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBD10u, 0x2F7548u, 0x2F7550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7550u;
label_2f7550:
    // 0x2f7550: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7550u;
    {
        const bool branch_taken_0x2f7550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7550) {
            ctx->pc = 0x2F7554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7550u;
            // 0x2f7554: 0x8e420110  lw          $v0, 0x110($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7560u;
            goto label_2f7560;
        }
    }
    ctx->pc = 0x2F7558u;
label_2f7558:
    // 0x2f7558: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x2F7558u;
    {
        const bool branch_taken_0x2f7558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7558u;
        // 0x2f755c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7558) {
            ctx->pc = 0x2F78E0u;
            goto label_2f78e0;
        }
    }
    ctx->pc = 0x2F7560u;
label_2f7560:
    // 0x2f7560: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f7560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f7564: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2f7564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2f7568: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2f7568u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2f756c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f756cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f7570: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f7570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7574: 0xc441013c  lwc1        $f1, 0x13C($v0)
    ctx->pc = 0x2f7574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7578: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f7578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f757c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f757cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f7580: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f7580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f7584: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f7584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f7588: 0xe64102f0  swc1        $f1, 0x2F0($s2)
    ctx->pc = 0x2f7588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 752), bits); }
    // 0x2f758c: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2f758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7590: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f7590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f7594: 0xe64002f4  swc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2f7594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 756), bits); }
    // 0x2f7598: 0xc4410144  lwc1        $f1, 0x144($v0)
    ctx->pc = 0x2f7598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f759c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f759cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f75a0: 0xe64102f8  swc1        $f1, 0x2F8($s2)
    ctx->pc = 0x2f75a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 760), bits); }
    // 0x2f75a4: 0xc4400148  lwc1        $f0, 0x148($v0)
    ctx->pc = 0x2f75a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f75a8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2f75a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2f75ac: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F75ACu;
    SET_GPR_U32(ctx, 31, 0x2F75B4u);
    ctx->pc = 0x2F75B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F75ACu;
    // 0x2f75b0: 0xe6400300  swc1        $f0, 0x300($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 768), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F75ACu, 0x2F75B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F75B4u;
label_2f75b4:
    // 0x2f75b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f75b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f75b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f75b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f75bc: 0xc0bdc68  jal         func_2F71A0
    ctx->pc = 0x2F75BCu;
    SET_GPR_U32(ctx, 31, 0x2F75C4u);
    ctx->pc = 0x2F75C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F75BCu;
    // 0x2f75c0: 0x264602f0  addiu       $a2, $s2, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F71A0u, 0x2F75BCu, 0x2F75C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F75C4u;
label_2f75c4:
    // 0x2f75c4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2f75c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f75c8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2f75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f75cc: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x2f75ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x2f75d0: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x2f75d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x2f75d4: 0x82420249  lb          $v0, 0x249($s2)
    ctx->pc = 0x2f75d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 585)));
    // 0x2f75d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f75d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f75dc: 0x0  nop
    ctx->pc = 0x2f75dcu;
    // NOP
    // 0x2f75e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f75e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f75e4: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2f75e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f75e8: 0x0  nop
    ctx->pc = 0x2f75e8u;
    // NOP
    // 0x2f75ec: 0x0  nop
    ctx->pc = 0x2f75ecu;
    // NOP
    // 0x2f75f0: 0x4600a543  div.s       $f21, $f20, $f0
    ctx->pc = 0x2f75f0u;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x2f75f4: 0x184000a7  blez        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2F75F4u;
    {
        const bool branch_taken_0x2f75f4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2F75F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75F4u;
        // 0x2f75f8: 0xafa40084  sw          $a0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75f4) {
            ctx->pc = 0x2F7894u;
            goto label_2f7894;
        }
    }
    ctx->pc = 0x2F75FCu;
    // 0x2f75fc: 0x111238  dsll        $v0, $s1, 8
    ctx->pc = 0x2f75fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 8);
    // 0x2f7600: 0x101c38  dsll        $v1, $s0, 16
    ctx->pc = 0x2f7600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << 16);
    // 0x2f7604: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x2f7604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x2f7608: 0x341efe00  ori         $fp, $zero, 0xFE00
    ctx->pc = 0x2f7608u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2f760c: 0x1ef7b8  dsll        $fp, $fp, 30
    ctx->pc = 0x2f760cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 30);
    // 0x2f7610: 0x37de8080  ori         $fp, $fp, 0x8080
    ctx->pc = 0x2f7610u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32896);
    // 0x2f7614: 0x1ef438  dsll        $fp, $fp, 16
    ctx->pc = 0x2f7614u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 16);
    // 0x2f7618: 0x37de8080  ori         $fp, $fp, 0x8080
    ctx->pc = 0x2f7618u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32896);
    // 0x2f761c: 0x43b025  or          $s6, $v0, $v1
    ctx->pc = 0x2f761cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f7620: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2f7620u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f7624: 0x3417fe00  ori         $s7, $zero, 0xFE00
    ctx->pc = 0x2f7624u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2f7628: 0x17bbbc  dsll32      $s7, $s7, 14
    ctx->pc = 0x2f7628u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 14));
    // 0x2f762c: 0x8e4202bc  lw          $v0, 0x2BC($s2)
    ctx->pc = 0x2f762cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 700)));
label_2f7630:
    // 0x2f7630: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x2f7630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2f7634: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f7634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f7638: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f7638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f763c: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F763Cu;
    {
        const bool branch_taken_0x2f763c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2F7640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F763Cu;
        // 0x2f7640: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f763c) {
            ctx->pc = 0x2F7658u;
            goto label_2f7658;
        }
    }
    ctx->pc = 0x2F7644u;
    // 0x2f7644: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f7644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f7648: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f7648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f764c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f764cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f7650: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2f7650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7654: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f7654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f7658:
    // 0x2f7658: 0x8e4202c0  lw          $v0, 0x2C0($s2)
    ctx->pc = 0x2f7658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 704)));
    // 0x2f765c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f765cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f7660: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f7660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f7664: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7664u;
    {
        const bool branch_taken_0x2f7664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7664u;
        // 0x2f7668: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7664) {
            ctx->pc = 0x2F7680u;
            goto label_2f7680;
        }
    }
    ctx->pc = 0x2F766Cu;
    // 0x2f766c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f766cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f7670: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2f7670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7674: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f7674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f7678: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2f7678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f767c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f767cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f7680:
    // 0x2f7680: 0x8e4302cc  lw          $v1, 0x2CC($s2)
    ctx->pc = 0x2f7680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x2f7684: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2f7684u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7688: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2f7688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2f768c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f768cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f7690: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f7690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f7694: 0xfc7e0060  sd          $fp, 0x60($v1)
    ctx->pc = 0x2f7694u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 30));
    // 0x2f7698: 0x8e4202cc  lw          $v0, 0x2CC($s2)
    ctx->pc = 0x2f7698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x2f769c: 0xfc540068  sd          $s4, 0x68($v0)
    ctx->pc = 0x2f769cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 20));
    // 0x2f76a0: 0x8e4302d0  lw          $v1, 0x2D0($s2)
    ctx->pc = 0x2f76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x2f76a4: 0xfc7e0060  sd          $fp, 0x60($v1)
    ctx->pc = 0x2f76a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 30));
    // 0x2f76a8: 0x8e4202d0  lw          $v0, 0x2D0($s2)
    ctx->pc = 0x2f76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x2f76ac: 0xfc540068  sd          $s4, 0x68($v0)
    ctx->pc = 0x2f76acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 20));
    // 0x2f76b0: 0x8e43011c  lw          $v1, 0x11C($s2)
    ctx->pc = 0x2f76b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x2f76b4: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x2f76b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2f76b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F76B8u;
    {
        const bool branch_taken_0x2f76b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76B8u;
        // 0x2f76bc: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76b8) {
            ctx->pc = 0x2F76C8u;
            goto label_2f76c8;
        }
    }
    ctx->pc = 0x2F76C0u;
    // 0x2f76c0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f76c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2f76c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f76c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f76c8:
    // 0x2f76c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f76c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f76cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f76ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f76d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f76d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f76d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F76D4u;
    {
        const bool branch_taken_0x2f76d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76D4u;
        // 0x2f76d8: 0x24110060  addiu       $s1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76d4) {
            ctx->pc = 0x2F76E4u;
            goto label_2f76e4;
        }
    }
    ctx->pc = 0x2F76DCu;
    // 0x2f76dc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f76dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2f76e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f76e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f76e4:
    // 0x2f76e4: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x2f76e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2f76e8: 0x2718818  mult        $s1, $s3, $s1
    ctx->pc = 0x2f76e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x2f76ec: 0x8e4302cc  lw          $v1, 0x2CC($s2)
    ctx->pc = 0x2f76ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x2f76f0: 0xb31023  subu        $v0, $a1, $s3
    ctx->pc = 0x2f76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2f76f4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2f76f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f76f8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2f76f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2f76fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f76fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7700: 0x0  nop
    ctx->pc = 0x2f7700u;
    // NOP
    // 0x2f7704: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f7704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f7708: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2f7708u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f770c: 0x0  nop
    ctx->pc = 0x2f770cu;
    // NOP
    // 0x2f7710: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f7710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f7714: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2f7714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2f7718: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f7718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2f771c: 0xac6000a0  sw          $zero, 0xA0($v1)
    ctx->pc = 0x2f771cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 0));
    // 0x2f7720: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2f7720u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2f7724: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f7724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f7728: 0x82420249  lb          $v0, 0x249($s2)
    ctx->pc = 0x2f7728u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 585)));
    // 0x2f772c: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x2f772cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2f7730: 0xc64202d4  lwc1        $f2, 0x2D4($s2)
    ctx->pc = 0x2f7730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f7734: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f7734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f7738: 0x8e4302cc  lw          $v1, 0x2CC($s2)
    ctx->pc = 0x2f7738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x2f773c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f773cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7740: 0x0  nop
    ctx->pc = 0x2f7740u;
    // NOP
    // 0x2f7744: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f7744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f7748: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2f7748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2f774c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f774cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f7750: 0x0  nop
    ctx->pc = 0x2f7750u;
    // NOP
    // 0x2f7754: 0x0  nop
    ctx->pc = 0x2f7754u;
    // NOP
    // 0x2f7758: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f7758u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2f775c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f775cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f7760: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2f7760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2f7764: 0x8e4202cc  lw          $v0, 0x2CC($s2)
    ctx->pc = 0x2f7764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x2f7768: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f7768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f776c: 0xfc5500a8  sd          $s5, 0xA8($v0)
    ctx->pc = 0x2f776cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 168), GPR_U64(ctx, 21));
    // 0x2f7770: 0x8e4302cc  lw          $v1, 0x2CC($s2)
    ctx->pc = 0x2f7770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x2f7774: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2f7774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2f7778: 0xe46300d0  swc1        $f3, 0xD0($v1)
    ctx->pc = 0x2f7778u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2f777c: 0x8e4402cc  lw          $a0, 0x2CC($s2)
    ctx->pc = 0x2f777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x2f7780: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2f7780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2f7784: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x2f7784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7788: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2f7788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x2f778c: 0x8e4202cc  lw          $v0, 0x2CC($s2)
    ctx->pc = 0x2f778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x2f7790: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f7790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f7794: 0xfc5500d8  sd          $s5, 0xD8($v0)
    ctx->pc = 0x2f7794u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 216), GPR_U64(ctx, 21));
    // 0x2f7798: 0x8e4302d0  lw          $v1, 0x2D0($s2)
    ctx->pc = 0x2f7798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x2f779c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2f779cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2f77a0: 0xac6000a0  sw          $zero, 0xA0($v1)
    ctx->pc = 0x2f77a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 0));
    // 0x2f77a4: 0x8e4202cc  lw          $v0, 0x2CC($s2)
    ctx->pc = 0x2f77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x2f77a8: 0x8e4302d0  lw          $v1, 0x2D0($s2)
    ctx->pc = 0x2f77a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x2f77ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f77acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f77b0: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x2f77b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f77b4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2f77b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2f77b8: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2f77b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2f77bc: 0x8e4202d0  lw          $v0, 0x2D0($s2)
    ctx->pc = 0x2f77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x2f77c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f77c4: 0xfc5500a8  sd          $s5, 0xA8($v0)
    ctx->pc = 0x2f77c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 168), GPR_U64(ctx, 21));
    // 0x2f77c8: 0x8e4302d0  lw          $v1, 0x2D0($s2)
    ctx->pc = 0x2f77c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x2f77cc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2f77ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2f77d0: 0xe46300d0  swc1        $f3, 0xD0($v1)
    ctx->pc = 0x2f77d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2f77d4: 0x8e4202cc  lw          $v0, 0x2CC($s2)
    ctx->pc = 0x2f77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x2f77d8: 0x8e4302d0  lw          $v1, 0x2D0($s2)
    ctx->pc = 0x2f77d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x2f77dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f77dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f77e0: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x2f77e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f77e4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2f77e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2f77e8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2f77e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2f77ec: 0x8e4202d0  lw          $v0, 0x2D0($s2)
    ctx->pc = 0x2f77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x2f77f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f77f4: 0xfc5500d8  sd          $s5, 0xD8($v0)
    ctx->pc = 0x2f77f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 216), GPR_U64(ctx, 21));
    // 0x2f77f8: 0x8e5002cc  lw          $s0, 0x2CC($s2)
    ctx->pc = 0x2f77f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x2f77fc: 0xc0c76e8  jal         func_31DBA0
    ctx->pc = 0x2F77FCu;
    SET_GPR_U32(ctx, 31, 0x2F7804u);
    ctx->pc = 0x2F7800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F77FCu;
    // 0x2f7800: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DBA0u, 0x2F77FCu, 0x2F7804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7804u;
label_2f7804:
    // 0x2f7804: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2f7804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2f7808: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f7808u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f780c: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x2f780cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x2f7810: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x2f7810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x2f7814: 0xfe0200b0  sd          $v0, 0xB0($s0)
    ctx->pc = 0x2f7814u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 176), GPR_U64(ctx, 2));
    // 0x2f7818: 0x8e4202cc  lw          $v0, 0x2CC($s2)
    ctx->pc = 0x2f7818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x2f781c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f7820: 0xfc5400b8  sd          $s4, 0xB8($v0)
    ctx->pc = 0x2f7820u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 184), GPR_U64(ctx, 20));
    // 0x2f7824: 0x8e4302cc  lw          $v1, 0x2CC($s2)
    ctx->pc = 0x2f7824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x2f7828: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2f7828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2f782c: 0xdc6400b0  ld          $a0, 0xB0($v1)
    ctx->pc = 0x2f782cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x2f7830: 0xfc6400e0  sd          $a0, 0xE0($v1)
    ctx->pc = 0x2f7830u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 224), GPR_U64(ctx, 4));
    // 0x2f7834: 0x8e4202cc  lw          $v0, 0x2CC($s2)
    ctx->pc = 0x2f7834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x2f7838: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f7838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f783c: 0xfc5400e8  sd          $s4, 0xE8($v0)
    ctx->pc = 0x2f783cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 232), GPR_U64(ctx, 20));
    // 0x2f7840: 0x8e5002d0  lw          $s0, 0x2D0($s2)
    ctx->pc = 0x2f7840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x2f7844: 0xc0c76e8  jal         func_31DBA0
    ctx->pc = 0x2F7844u;
    SET_GPR_U32(ctx, 31, 0x2F784Cu);
    ctx->pc = 0x2F7848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7844u;
    // 0x2f7848: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DBA0u, 0x2F7844u, 0x2F784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F784Cu;
label_2f784c:
    // 0x2f784c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2f784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2f7850: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x2f7850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x2f7854: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x2f7854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x2f7858: 0xfe0200b0  sd          $v0, 0xB0($s0)
    ctx->pc = 0x2f7858u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 176), GPR_U64(ctx, 2));
    // 0x2f785c: 0x8e4202d0  lw          $v0, 0x2D0($s2)
    ctx->pc = 0x2f785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x2f7860: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f7860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f7864: 0xfc5400b8  sd          $s4, 0xB8($v0)
    ctx->pc = 0x2f7864u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 184), GPR_U64(ctx, 20));
    // 0x2f7868: 0x8e4302d0  lw          $v1, 0x2D0($s2)
    ctx->pc = 0x2f7868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x2f786c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2f786cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2f7870: 0xdc6400b0  ld          $a0, 0xB0($v1)
    ctx->pc = 0x2f7870u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x2f7874: 0xfc6400e0  sd          $a0, 0xE0($v1)
    ctx->pc = 0x2f7874u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 224), GPR_U64(ctx, 4));
    // 0x2f7878: 0x8e4202d0  lw          $v0, 0x2D0($s2)
    ctx->pc = 0x2f7878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 720)));
    // 0x2f787c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f7880: 0xfc5400e8  sd          $s4, 0xE8($v0)
    ctx->pc = 0x2f7880u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 232), GPR_U64(ctx, 20));
    // 0x2f7884: 0x82430249  lb          $v1, 0x249($s2)
    ctx->pc = 0x2f7884u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 585)));
    // 0x2f7888: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2f7888u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f788c: 0x5460ff68  bnel        $v1, $zero, . + 4 + (-0x98 << 2)
    ctx->pc = 0x2F788Cu;
    {
        const bool branch_taken_0x2f788c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f788c) {
            ctx->pc = 0x2F7890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F788Cu;
            // 0x2f7890: 0x8e4202bc  lw          $v0, 0x2BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7630;
        }
    }
    ctx->pc = 0x2F7894u;
label_2f7894:
    // 0x2f7894: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x2F7894u;
    SET_GPR_U32(ctx, 31, 0x2F789Cu);
    ctx->pc = 0x2F7898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7894u;
    // 0x2f7898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x2F7894u, 0x2F789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F789Cu;
label_2f789c:
    // 0x2f789c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2f789cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f78a0: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2F78A0u;
    SET_GPR_U32(ctx, 31, 0x2F78A8u);
    ctx->pc = 0x2F78A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F78A0u;
    // 0x2f78a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2F78A0u, 0x2F78A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F78A8u;
label_2f78a8:
    // 0x2f78a8: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2f78a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f78ac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2f78acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f78b0: 0xc051f10  jal         func_147C40
    ctx->pc = 0x2F78B0u;
    SET_GPR_U32(ctx, 31, 0x2F78B8u);
    ctx->pc = 0x2F78B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F78B0u;
    // 0x2f78b4: 0x8fa5008c  lw          $a1, 0x8C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x2F78B0u, 0x2F78B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F78B8u;
label_2f78b8:
    // 0x2f78b8: 0x8e420110  lw          $v0, 0x110($s2)
    ctx->pc = 0x2f78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x2f78bc: 0x8e440304  lw          $a0, 0x304($s2)
    ctx->pc = 0x2f78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2f78c0: 0x9043018c  lbu         $v1, 0x18C($v0)
    ctx->pc = 0x2f78c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x2f78c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f78c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f78c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F78C8u;
    {
        const bool branch_taken_0x2f78c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78C8u;
        // 0x2f78cc: 0xae4302e4  sw          $v1, 0x2E4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f78c8) {
            ctx->pc = 0x2F78DCu;
            goto label_2f78dc;
        }
    }
    ctx->pc = 0x2F78D0u;
    // 0x2f78d0: 0x8e430114  lw          $v1, 0x114($s2)
    ctx->pc = 0x2f78d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x2f78d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F78D4u;
    {
        const bool branch_taken_0x2f78d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F78D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78D4u;
        // 0x2f78d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f78d4) {
            ctx->pc = 0x2F78E0u;
            goto label_2f78e0;
        }
    }
    ctx->pc = 0x2F78DCu;
label_2f78dc:
    // 0x2f78dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f78e0:
    // 0x2f78e0: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2f78e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2f78e4: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2f78e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2f78e8: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2f78e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2f78ec: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2f78ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2f78f0: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2f78f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2f78f4: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2f78f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f78f8: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2f78f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f78fc: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2f78fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f7900: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2f7900u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f7904: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f7904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f7908: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x2f7908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f790c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2f790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f7910: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7910u;
        // 0x2f7914: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7918u;
}
