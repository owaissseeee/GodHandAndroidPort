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

// Function: func_001A83E0
// Address: 0x1a83e0 - 0x1a85b8
void func_001A83E0_0x1a83e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A83E0_0x1a83e0");
#endif

    switch (ctx->pc) {
        case 0x1a8404u: goto label_1a8404;
        case 0x1a84d0u: goto label_1a84d0;
        case 0x1a8544u: goto label_1a8544;
        case 0x1a858cu: goto label_1a858c;
        default: break;
    }

    ctx->pc = 0x1a83e0u;

    // 0x1a83e0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1a83e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1a83e4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1a83e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1a83e8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1a83e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x1a83ec: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1a83ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x1a83f0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1a83f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x1a83f4: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1a83f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x1a83f8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1a83f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1a83fc: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A83FCu;
    SET_GPR_U32(ctx, 31, 0x1A8404u);
    ctx->pc = 0x1A8400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83FCu;
    // 0x1a8400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A83FCu, 0x1A8404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8404u;
label_1a8404:
    // 0x1a8404: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a8404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1a8408: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a8408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a840c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1a840cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a8410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a8410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a8414: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a8414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a8418: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a8418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a841c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1a841cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1a8420: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a8420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a8424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a8424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a8428: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1a8428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a842c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1a842cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a8430: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a8430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a8434: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1a8434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1a8438: 0x244d7758  addiu       $t5, $v0, 0x7758
    ctx->pc = 0x1a8438u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 30552));
    // 0x1a843c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1a843cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1a8440: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1a8440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a8444: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x1a8444u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1a8448: 0x27ac0060  addiu       $t4, $sp, 0x60
    ctx->pc = 0x1a8448u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a844c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a844cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a8450: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a8450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a8454: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1a8454u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8458: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1a8458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a845c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1a845cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8460: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a8460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8464: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1a8464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8468: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1a8468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a846c: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x1a846cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8470: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1a8470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1a8474: 0x31a30007  andi        $v1, $t5, 0x7
    ctx->pc = 0x1a8474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)7);
    // 0x1a8478: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1a8478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a847c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1a847cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a8480: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x1a8480u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1a8484: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1a8484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1a8488: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1a8488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a848c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1a848cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1a8490: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a8490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a8494: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1a8494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1a8498: 0xe4a3000c  swc1        $f3, 0xC($a1)
    ctx->pc = 0x1a8498u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1a849c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1a849cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1a84a0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1a84a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1a84a4: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1a84a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x1a84a8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A84A8u;
    {
        const bool branch_taken_0x1a84a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84A8u;
        // 0x1a84ac: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84a8) {
            ctx->pc = 0x1A8524u;
            goto label_1a8524;
        }
    }
    ctx->pc = 0x1A84B0u;
    // 0x1a84b0: 0x25af0060  addiu       $t7, $t5, 0x60
    ctx->pc = 0x1a84b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x1a84b4: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1a84b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1a84b8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1a84b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1a84bc: 0x27ab0070  addiu       $t3, $sp, 0x70
    ctx->pc = 0x1a84bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a84c0: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1a84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a84c4: 0x27ae0090  addiu       $t6, $sp, 0x90
    ctx->pc = 0x1a84c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a84c8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1a84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a84cc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1a84ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1a84d0:
    // 0x1a84d0: 0x69b10007  ldl         $s1, 0x7($t5)
    ctx->pc = 0x1a84d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x1a84d4: 0x6db10000  ldr         $s1, 0x0($t5)
    ctx->pc = 0x1a84d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x1a84d8: 0x69b2000f  ldl         $s2, 0xF($t5)
    ctx->pc = 0x1a84d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x1a84dc: 0x6db20008  ldr         $s2, 0x8($t5)
    ctx->pc = 0x1a84dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x1a84e0: 0x69b30017  ldl         $s3, 0x17($t5)
    ctx->pc = 0x1a84e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x1a84e4: 0x6db30010  ldr         $s3, 0x10($t5)
    ctx->pc = 0x1a84e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
    // 0x1a84e8: 0x69b4001f  ldl         $s4, 0x1F($t5)
    ctx->pc = 0x1a84e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x1a84ec: 0x6db40018  ldr         $s4, 0x18($t5)
    ctx->pc = 0x1a84ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x1a84f0: 0xb1910007  sdl         $s1, 0x7($t4)
    ctx->pc = 0x1a84f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a84f4: 0xb5910000  sdr         $s1, 0x0($t4)
    ctx->pc = 0x1a84f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a84f8: 0xb192000f  sdl         $s2, 0xF($t4)
    ctx->pc = 0x1a84f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a84fc: 0xb5920008  sdr         $s2, 0x8($t4)
    ctx->pc = 0x1a84fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8500: 0xb1930017  sdl         $s3, 0x17($t4)
    ctx->pc = 0x1a8500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8504: 0xb5930010  sdr         $s3, 0x10($t4)
    ctx->pc = 0x1a8504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8508: 0xb194001f  sdl         $s4, 0x1F($t4)
    ctx->pc = 0x1a8508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a850c: 0xb5940018  sdr         $s4, 0x18($t4)
    ctx->pc = 0x1a850cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8510: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1a8510u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1a8514: 0x15afffee  bne         $t5, $t7, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A8514u;
    {
        const bool branch_taken_0x1a8514 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x1A8518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8514u;
        // 0x1a8518: 0x258c0020  addiu       $t4, $t4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8514) {
            ctx->pc = 0x1A84D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A851Cu;
    // 0x1a851c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A851Cu;
    {
        const bool branch_taken_0x1a851c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A851Cu;
        // 0x1a8520: 0xafa50018  sw          $a1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a851c) {
            ctx->pc = 0x1A8574u;
            goto label_1a8574;
        }
    }
    ctx->pc = 0x1A8524u;
label_1a8524:
    // 0x1a8524: 0x25af0060  addiu       $t7, $t5, 0x60
    ctx->pc = 0x1a8524u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x1a8528: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1a8528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1a852c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1a852cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1a8530: 0x27ab0070  addiu       $t3, $sp, 0x70
    ctx->pc = 0x1a8530u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a8534: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1a8534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a8538: 0x27ae0090  addiu       $t6, $sp, 0x90
    ctx->pc = 0x1a8538u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a853c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1a853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a8540: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1a8540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1a8544:
    // 0x1a8544: 0xddb10000  ld          $s1, 0x0($t5)
    ctx->pc = 0x1a8544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1a8548: 0xddb20008  ld          $s2, 0x8($t5)
    ctx->pc = 0x1a8548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x1a854c: 0xddb30010  ld          $s3, 0x10($t5)
    ctx->pc = 0x1a854cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x1a8550: 0xddb40018  ld          $s4, 0x18($t5)
    ctx->pc = 0x1a8550u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x1a8554: 0xfd910000  sd          $s1, 0x0($t4)
    ctx->pc = 0x1a8554u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 17));
    // 0x1a8558: 0xfd920008  sd          $s2, 0x8($t4)
    ctx->pc = 0x1a8558u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 18));
    // 0x1a855c: 0xfd930010  sd          $s3, 0x10($t4)
    ctx->pc = 0x1a855cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 19));
    // 0x1a8560: 0xfd940018  sd          $s4, 0x18($t4)
    ctx->pc = 0x1a8560u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 20));
    // 0x1a8564: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1a8564u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1a8568: 0x15affff6  bne         $t5, $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A8568u;
    {
        const bool branch_taken_0x1a8568 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x1A856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8568u;
        // 0x1a856c: 0x258c0020  addiu       $t4, $t4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8568) {
            ctx->pc = 0x1A8544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8544;
        }
    }
    ctx->pc = 0x1A8570u;
    // 0x1a8570: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1a8570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
label_1a8574:
    // 0x1a8574: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x1a8574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x1a8578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a857c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a857cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a8580: 0xafae0008  sw          $t6, 0x8($sp)
    ctx->pc = 0x1a8580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
    // 0x1a8584: 0xc04bab6  jal         func_12EAD8
    ctx->pc = 0x1A8584u;
    SET_GPR_U32(ctx, 31, 0x1A858Cu);
    ctx->pc = 0x1A8588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8584u;
    // 0x1a8588: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EAD8u, 0x1A8584u, 0x1A858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A858Cu;
label_1a858c:
    // 0x1a858c: 0xae020600  sw          $v0, 0x600($s0)
    ctx->pc = 0x1a858cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
    // 0x1a8590: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1a8590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a8594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8598: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1a8598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a859c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1a859cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a85a0: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1a85a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a85a4: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1a85a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a85a8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1a85a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a85ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A85ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A85B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A85ACu;
        // 0x1a85b0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A85ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A85B4u;
    // 0x1a85b4: 0x0  nop
    ctx->pc = 0x1a85b4u;
    // NOP
    ctx->pc = 0x1a85b8u;
}
