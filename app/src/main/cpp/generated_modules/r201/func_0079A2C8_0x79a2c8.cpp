#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: func_0079A2C8
// Address: 0x79a2c8 - 0x79a718
void func_0079A2C8_0x79a2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A2C8_0x79a2c8");
#endif

    switch (ctx->pc) {
        case 0x79a3b8u: goto label_79a3b8;
        case 0x79a408u: goto label_79a408;
        case 0x79a470u: goto label_79a470;
        case 0x79a4a0u: goto label_79a4a0;
        case 0x79a4b0u: goto label_79a4b0;
        case 0x79a4f4u: goto label_79a4f4;
        case 0x79a50cu: goto label_79a50c;
        case 0x79a520u: goto label_79a520;
        case 0x79a564u: goto label_79a564;
        case 0x79a578u: goto label_79a578;
        case 0x79a5a8u: goto label_79a5a8;
        case 0x79a5c8u: goto label_79a5c8;
        case 0x79a5d4u: goto label_79a5d4;
        case 0x79a5e4u: goto label_79a5e4;
        case 0x79a604u: goto label_79a604;
        case 0x79a614u: goto label_79a614;
        case 0x79a628u: goto label_79a628;
        case 0x79a638u: goto label_79a638;
        case 0x79a654u: goto label_79a654;
        case 0x79a66cu: goto label_79a66c;
        case 0x79a69cu: goto label_79a69c;
        case 0x79a6b4u: goto label_79a6b4;
        case 0x79a6dcu: goto label_79a6dc;
        case 0x79a6e8u: goto label_79a6e8;
        default: break;
    }

    ctx->pc = 0x79a2c8u;

    // 0x79a2c8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x79a2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x79a2cc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x79a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79a2d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x79a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a2d4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x79a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x79a2d8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x79a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79a2dc: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a2e0: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79a2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a2e4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x79a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a2e8: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x79a2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x79a2ec: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x79a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a2f0: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x79a2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x79a2f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79a2f8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x79a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79a2fc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x79a2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79a300: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x79a300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x79a304: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x79a304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a308: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x79a308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x79a30c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79a30cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a310: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x79a310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x79a314: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x79a314u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a318: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x79a318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x79a31c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x79a31cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a320: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x79a320u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a324: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x79a324u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    // 0x79a328: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x79a328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x79a32c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x79a32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a330: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x79a330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x79a334: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x79a334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x79a338: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x79a338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
    // 0x79a33c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x79a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x79a340: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x79a340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x79a344: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a348: 0xafbd0070  sw          $sp, 0x70($sp)
    ctx->pc = 0x79a348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 29));
    // 0x79a34c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79a350: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x79a350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x79a354: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x79a354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x79a358: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x79a358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x79a35c: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x79a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x79a360: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x79a360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x79a364: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x79a364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x79a368: 0x6ba50077  ldl         $a1, 0x77($sp)
    ctx->pc = 0x79a368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x79a36c: 0x6fa50070  ldr         $a1, 0x70($sp)
    ctx->pc = 0x79a36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x79a370: 0x6ba8007f  ldl         $t0, 0x7F($sp)
    ctx->pc = 0x79a370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x79a374: 0x6fa80078  ldr         $t0, 0x78($sp)
    ctx->pc = 0x79a374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x79a378: 0x8fa90080  lw          $t1, 0x80($sp)
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a37c: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x79a37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a380: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x79a380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a384: 0xb3a8005f  sdl         $t0, 0x5F($sp)
    ctx->pc = 0x79a384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a388: 0xb7a80058  sdr         $t0, 0x58($sp)
    ctx->pc = 0x79a388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a38c: 0xafa90060  sw          $t1, 0x60($sp)
    ctx->pc = 0x79a38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 9));
    // 0x79a390: 0xa3a60070  sb          $a2, 0x70($sp)
    ctx->pc = 0x79a390u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a394: 0xa3a70090  sb          $a3, 0x90($sp)
    ctx->pc = 0x79a394u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 7));
    // 0x79a398: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x79a398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x79a39c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x79a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x79a3a0: 0x6ba200b7  ldl         $v0, 0xB7($sp)
    ctx->pc = 0x79a3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79a3a4: 0x6fa200b0  ldr         $v0, 0xB0($sp)
    ctx->pc = 0x79a3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79a3a8: 0xb3a200a7  sdl         $v0, 0xA7($sp)
    ctx->pc = 0x79a3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a3ac: 0xb7a200a0  sdr         $v0, 0xA0($sp)
    ctx->pc = 0x79a3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a3b0: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79A3B0u;
    SET_GPR_U32(ctx, 31, 0x79A3B8u);
    ctx->pc = 0x79A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3B0u;
    // 0x79a3b4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79A3B0u, 0x79A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3B8u;
label_79a3b8:
    // 0x79a3b8: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x79a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x79a3bc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a3c0: 0x8c648658  lw          $a0, -0x79A8($v1)
    ctx->pc = 0x79a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a3c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x79a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x79a3c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a3cc: 0x8ca7bd80  lw          $a3, -0x4280($a1)
    ctx->pc = 0x79a3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x79BD80u));
    // 0x79a3d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x79a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79a3d4: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x79a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x79a3d8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x79a3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x79a3dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a3e0: 0xc2980b  movn        $s3, $a2, $v0
    ctx->pc = 0x79a3e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
    // 0x79a3e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79a3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79a3e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a3ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a3f0: 0x14a400b6  bne         $a1, $a0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x79A3F0u;
    {
        const bool branch_taken_0x79a3f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x79A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3F0u;
        // 0x79a3f4: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3f0) {
            ctx->pc = 0x79A6CCu;
            goto label_79a6cc;
        }
    }
    ctx->pc = 0x79A3F8u;
    // 0x79a3f8: 0x3c08005f  lui         $t0, 0x5F
    ctx->pc = 0x79a3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)95 << 16));
    // 0x79a3fc: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x79a3fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79a400: 0x25148658  addiu       $s4, $t0, -0x79A8
    ctx->pc = 0x79a400u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936152));
    // 0x79a404: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x79a404u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_79a408:
    // 0x79a408: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x79a408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x79a40c: 0x8d238658  lw          $v1, -0x79A8($t1)
    ctx->pc = 0x79a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294936152)));
    // 0x79a410: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x79a410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a414: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a418: 0x144000ac  bnez        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x79A418u;
    {
        const bool branch_taken_0x79a418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A418u;
        // 0x79a41c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a418) {
            ctx->pc = 0x79A6CCu;
            goto label_79a6cc;
        }
    }
    ctx->pc = 0x79A420u;
    // 0x79a420: 0x126a0015  beq         $s3, $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x79A420u;
    {
        const bool branch_taken_0x79a420 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 10));
        ctx->pc = 0x79A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A420u;
        // 0x79a424: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a420) {
            ctx->pc = 0x79A478u;
            goto label_79a478;
        }
    }
    ctx->pc = 0x79A428u;
    // 0x79a428: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A428u;
    {
        const bool branch_taken_0x79a428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A428u;
        // 0x79a42c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a428) {
            ctx->pc = 0x79A440u;
            goto label_79a440;
        }
    }
    ctx->pc = 0x79A430u;
    // 0x79a430: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A430u;
    {
        const bool branch_taken_0x79a430 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A430u;
        // 0x79a434: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a430) {
            ctx->pc = 0x79A458u;
            goto label_79a458;
        }
    }
    ctx->pc = 0x79A438u;
    // 0x79a438: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x79A438u;
    {
        const bool branch_taken_0x79a438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a438) {
            ctx->pc = 0x79A6A0u;
            goto label_79a6a0;
        }
    }
    ctx->pc = 0x79A440u;
label_79a440:
    // 0x79a440: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A440u;
    {
        const bool branch_taken_0x79a440 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A440u;
        // 0x79a444: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a440) {
            ctx->pc = 0x79A490u;
            goto label_79a490;
        }
    }
    ctx->pc = 0x79A448u;
    // 0x79a448: 0x12620027  beq         $s3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x79A448u;
    {
        const bool branch_taken_0x79a448 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A448u;
        // 0x79a44c: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a448) {
            ctx->pc = 0x79A4E8u;
            goto label_79a4e8;
        }
    }
    ctx->pc = 0x79A450u;
    // 0x79a450: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x79A450u;
    {
        const bool branch_taken_0x79a450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a450) {
            ctx->pc = 0x79A6A0u;
            goto label_79a6a0;
        }
    }
    ctx->pc = 0x79A458u;
label_79a458:
    // 0x79a458: 0x8fc42f84  lw          $a0, 0x2F84($fp)
    ctx->pc = 0x79a458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12164)));
    // 0x79a45c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a460: 0x2465a9c0  addiu       $a1, $v1, -0x5640
    ctx->pc = 0x79a460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945216));
    // 0x79a464: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79a464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a468: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79A468u;
    SET_GPR_U32(ctx, 31, 0x79A470u);
    ctx->pc = 0x79A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A468u;
    // 0x79a46c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A468u, 0x79A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A470u;
label_79a470:
    // 0x79a470: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x79A470u;
    {
        const bool branch_taken_0x79a470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A470u;
        // 0x79a474: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a470) {
            ctx->pc = 0x79A6A0u;
            goto label_79a6a0;
        }
    }
    ctx->pc = 0x79A478u;
label_79a478:
    // 0x79a478: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x79a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x79a47c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x79a47cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a480: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a484: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a488: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x79A488u;
    {
        const bool branch_taken_0x79a488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A488u;
        // 0x79a48c: 0xa2980a  movz        $s3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a488) {
            ctx->pc = 0x79A69Cu;
            goto label_79a69c;
        }
    }
    ctx->pc = 0x79A490u;
label_79a490:
    // 0x79a490: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a494: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a498: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x79a498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x79a49c: 0x0  nop
    ctx->pc = 0x79a49cu;
    // NOP
label_79a4a0:
    // 0x79a4a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a4a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79a4a8: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A4A8u;
    SET_GPR_U32(ctx, 31, 0x79A4B0u);
    ctx->pc = 0x79A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4A8u;
    // 0x79a4ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A4A8u, 0x79A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4B0u;
label_79a4b0:
    // 0x79a4b0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x79a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79a4b4: 0x2e240002  sltiu       $a0, $s1, 0x2
    ctx->pc = 0x79a4b4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a4b8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A4B8u;
    {
        const bool branch_taken_0x79a4b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4B8u;
        // 0x79a4bc: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4b8) {
            ctx->pc = 0x79A4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4a0;
        }
    }
    ctx->pc = 0x79A4C0u;
    // 0x79a4c0: 0x1a400076  blez        $s2, . + 4 + (0x76 << 2)
    ctx->pc = 0x79A4C0u;
    {
        const bool branch_taken_0x79a4c0 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x79A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4C0u;
        // 0x79a4c4: 0x3c06005f  lui         $a2, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4c0) {
            ctx->pc = 0x79A69Cu;
            goto label_79a69c;
        }
    }
    ctx->pc = 0x79A4C8u;
    // 0x79a4c8: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x79a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x79a4cc: 0x8cc28658  lw          $v0, -0x79A8($a2)
    ctx->pc = 0x79a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294936152)));
    // 0x79a4d0: 0x24150a8c  addiu       $s5, $zero, 0xA8C
    ctx->pc = 0x79a4d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2700));
    // 0x79a4d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x79a4d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x79a4d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79a4dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79a4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79a4e0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x79A4E0u;
    {
        const bool branch_taken_0x79a4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4E0u;
        // 0x79a4e4: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4e0) {
            ctx->pc = 0x79A69Cu;
            goto label_79a69c;
        }
    }
    ctx->pc = 0x79A4E8u;
label_79a4e8:
    // 0x79a4e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4ec: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A4ECu;
    SET_GPR_U32(ctx, 31, 0x79A4F4u);
    ctx->pc = 0x79A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4ECu;
    // 0x79a4f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A4ECu, 0x79A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4F4u;
label_79a4f4:
    // 0x79a4f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a4f8: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x79a4f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x79a4fc: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x79A4FCu;
    {
        const bool branch_taken_0x79a4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4FCu;
        // 0x79a500: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4fc) {
            ctx->pc = 0x79A644u;
            goto label_79a644;
        }
    }
    ctx->pc = 0x79A504u;
    // 0x79a504: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A504u;
    SET_GPR_U32(ctx, 31, 0x79A50Cu);
    ctx->pc = 0x79A508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A504u;
    // 0x79a508: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A504u, 0x79A50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A50Cu;
label_79a50c:
    // 0x79a50c: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x79a50cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x79a510: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a514: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a518: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A518u;
    SET_GPR_U32(ctx, 31, 0x79A520u);
    ctx->pc = 0x79A51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A518u;
    // 0x79a51c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A518u, 0x79A520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A520u;
label_79a520:
    // 0x79a520: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x79a520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a524: 0x41942  srl         $v1, $a0, 5
    ctx->pc = 0x79a524u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x79a528: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a52c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x79a52cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x79a530: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x79a530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x79a534: 0x912006  srlv        $a0, $s1, $a0
    ctx->pc = 0x79a534u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 4) & 0x1F));
    // 0x79a538: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a53c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79a540: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x79A540u;
    {
        const bool branch_taken_0x79a540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a540) {
            ctx->pc = 0x79A544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A540u;
            // 0x79a544: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A60Cu;
            goto label_79a60c;
        }
    }
    ctx->pc = 0x79A548u;
    // 0x79a548: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x79a548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a54c: 0x284201c3  slti        $v0, $v0, 0x1C3
    ctx->pc = 0x79a54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)451) ? 1 : 0);
    // 0x79a550: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x79A550u;
    {
        const bool branch_taken_0x79a550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A550u;
        // 0x79a554: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a550) {
            ctx->pc = 0x79A644u;
            goto label_79a644;
        }
    }
    ctx->pc = 0x79A558u;
    // 0x79a558: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a55c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A55Cu;
    SET_GPR_U32(ctx, 31, 0x79A564u);
    ctx->pc = 0x79A560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A55Cu;
    // 0x79a560: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A55Cu, 0x79A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A564u;
label_79a564:
    // 0x79a564: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x79a564u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a56c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a570: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A570u;
    SET_GPR_U32(ctx, 31, 0x79A578u);
    ctx->pc = 0x79A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A570u;
    // 0x79a574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A570u, 0x79A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A578u;
label_79a578:
    // 0x79a578: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x79a578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a57c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a584: 0x61942  srl         $v1, $a2, 5
    ctx->pc = 0x79a584u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x79a588: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a58c: 0x30c6001f  andi        $a2, $a2, 0x1F
    ctx->pc = 0x79a58cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x79a590: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x79a590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x79a594: 0xd13006  srlv        $a2, $s1, $a2
    ctx->pc = 0x79a594u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 6) & 0x1F));
    // 0x79a598: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a59c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79a59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79a5a0: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A5A0u;
    SET_GPR_U32(ctx, 31, 0x79A5A8u);
    ctx->pc = 0x79A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5A0u;
    // 0x79a5a4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A5A0u, 0x79A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5A8u;
label_79a5a8:
    // 0x79a5a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a5ac: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x79a5acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x79a5b0: 0x24e46ab0  addiu       $a0, $a3, 0x6AB0
    ctx->pc = 0x79a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 27312));
    // 0x79a5b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a5b8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x79a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x79a5bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a5c0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A5C0u;
    SET_GPR_U32(ctx, 31, 0x79A5C8u);
    ctx->pc = 0x79A5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5C0u;
    // 0x79a5c4: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A5C0u, 0x79A5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5C8u;
label_79a5c8:
    // 0x79a5c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5cc: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A5CCu;
    SET_GPR_U32(ctx, 31, 0x79A5D4u);
    ctx->pc = 0x79A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5CCu;
    // 0x79a5d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A5CCu, 0x79A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5D4u;
label_79a5d4:
    // 0x79a5d4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x79a5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a5d8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x79a5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x79a5dc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A5DCu;
    SET_GPR_U32(ctx, 31, 0x79A5E4u);
    ctx->pc = 0x79A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5DCu;
    // 0x79a5e0: 0x2d08021  addu        $s0, $s6, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A5DCu, 0x79A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5E4u;
label_79a5e4:
    // 0x79a5e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79a5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a5e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a5ec: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79a5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a5f0: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79a5f4: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a5f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79a5f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a5fc: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79A5FCu;
    SET_GPR_U32(ctx, 31, 0x79A604u);
    ctx->pc = 0x79A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5FCu;
    // 0x79a600: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A5FCu, 0x79A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A604u;
label_79a604:
    // 0x79a604: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x79A604u;
    {
        const bool branch_taken_0x79a604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A604u;
        // 0x79a608: 0x3c08005f  lui         $t0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a604) {
            ctx->pc = 0x79A648u;
            goto label_79a648;
        }
    }
    ctx->pc = 0x79A60Cu;
label_79a60c:
    // 0x79a60c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A60Cu;
    SET_GPR_U32(ctx, 31, 0x79A614u);
    ctx->pc = 0x79A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A60Cu;
    // 0x79a610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A60Cu, 0x79A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A614u;
label_79a614:
    // 0x79a614: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a618: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79a618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79a61c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x79a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x79a620: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A620u;
    SET_GPR_U32(ctx, 31, 0x79A628u);
    ctx->pc = 0x79A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A620u;
    // 0x79a624: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A620u, 0x79A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A628u;
label_79a628:
    // 0x79a628: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A628u;
    {
        const bool branch_taken_0x79a628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A628u;
        // 0x79a62c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a628) {
            ctx->pc = 0x79A644u;
            goto label_79a644;
        }
    }
    ctx->pc = 0x79A630u;
    // 0x79a630: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A630u;
    SET_GPR_U32(ctx, 31, 0x79A638u);
    ctx->pc = 0x79A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A630u;
    // 0x79a634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A630u, 0x79A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A638u;
label_79a638:
    // 0x79a638: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a63c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a640: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x79a640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_79a644:
    // 0x79a644: 0x3c08005f  lui         $t0, 0x5F
    ctx->pc = 0x79a644u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)95 << 16));
label_79a648:
    // 0x79a648: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a64c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A64Cu;
    SET_GPR_U32(ctx, 31, 0x79A654u);
    ctx->pc = 0x79A650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A64Cu;
    // 0x79a650: 0x25048658  addiu       $a0, $t0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A64Cu, 0x79A654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A654u;
label_79a654:
    // 0x79a654: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a658: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x79a658u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79a65c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x79A65Cu;
    {
        const bool branch_taken_0x79a65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A65Cu;
        // 0x79a660: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a65c) {
            ctx->pc = 0x79A6A0u;
            goto label_79a6a0;
        }
    }
    ctx->pc = 0x79A664u;
    // 0x79a664: 0xc1e6da8  jal         func_79B6A0
    ctx->pc = 0x79A664u;
    SET_GPR_U32(ctx, 31, 0x79A66Cu);
    ctx->pc = 0x79B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B6A0u, 0x79A664u, 0x79A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A66Cu;
label_79a66c:
    // 0x79a66c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x79a66cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a670: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79A670u;
    {
        const bool branch_taken_0x79a670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A670u;
        // 0x79a674: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a670) {
            ctx->pc = 0x79A69Cu;
            goto label_79a69c;
        }
    }
    ctx->pc = 0x79A678u;
    // 0x79a678: 0x284201c3  slti        $v0, $v0, 0x1C3
    ctx->pc = 0x79a678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)451) ? 1 : 0);
    // 0x79a67c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A67Cu;
    {
        const bool branch_taken_0x79a67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A67Cu;
        // 0x79a680: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a67c) {
            ctx->pc = 0x79A69Cu;
            goto label_79a69c;
        }
    }
    ctx->pc = 0x79A684u;
    // 0x79a684: 0x3c09007a  lui         $t1, 0x7A
    ctx->pc = 0x79a684u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)122 << 16));
    // 0x79a688: 0x8fc42f84  lw          $a0, 0x2F84($fp)
    ctx->pc = 0x79a688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12164)));
    // 0x79a68c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x79a68cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a690: 0x2525ae60  addiu       $a1, $t1, -0x51A0
    ctx->pc = 0x79a690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946400));
    // 0x79a694: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79A694u;
    SET_GPR_U32(ctx, 31, 0x79A69Cu);
    ctx->pc = 0x79A698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A694u;
    // 0x79a698: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A694u, 0x79A69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A69Cu;
label_79a69c:
    // 0x79a69c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x79a69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_79a6a0:
    // 0x79a6a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79A6A0u;
    {
        const bool branch_taken_0x79a6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6A0u;
        // 0x79a6a4: 0x8fc22f84  lw          $v0, 0x2F84($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6a0) {
            ctx->pc = 0x79A6CCu;
            goto label_79a6cc;
        }
    }
    ctx->pc = 0x79A6A8u;
    // 0x79a6a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a6ac: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A6ACu;
    SET_GPR_U32(ctx, 31, 0x79A6B4u);
    ctx->pc = 0x79A6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6ACu;
    // 0x79a6b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A6ACu, 0x79A6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6B4u;
label_79a6b4:
    // 0x79a6b4: 0x3c0a007a  lui         $t2, 0x7A
    ctx->pc = 0x79a6b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)122 << 16));
    // 0x79a6b8: 0x8d42bd80  lw          $v0, -0x4280($t2)
    ctx->pc = 0x79a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79BD80u));
    // 0x79a6bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a6c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a6c4: 0x1062ff50  beq         $v1, $v0, . + 4 + (-0xB0 << 2)
    ctx->pc = 0x79A6C4u;
    {
        const bool branch_taken_0x79a6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6C4u;
        // 0x79a6c8: 0x3c09005f  lui         $t1, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6c4) {
            ctx->pc = 0x79A408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a408;
        }
    }
    ctx->pc = 0x79A6CCu;
label_79a6cc:
    // 0x79a6cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x79a6d0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x79a6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79a6d4: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79A6D4u;
    SET_GPR_U32(ctx, 31, 0x79A6DCu);
    ctx->pc = 0x79A6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6D4u;
    // 0x79a6d8: 0x2464ea60  addiu       $a0, $v1, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79A6D4u, 0x79A6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6DCu;
label_79a6dc:
    // 0x79a6dc: 0x8fc32f84  lw          $v1, 0x2F84($fp)
    ctx->pc = 0x79a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12164)));
    // 0x79a6e0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A6E0u;
    SET_GPR_U32(ctx, 31, 0x79A6E8u);
    ctx->pc = 0x79A6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6E0u;
    // 0x79a6e4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A6E0u, 0x79A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6E8u;
label_79a6e8:
    // 0x79a6e8: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x79a6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x79a6ec: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x79a6ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x79a6f0: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x79a6f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x79a6f4: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x79a6f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x79a6f8: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x79a6f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x79a6fc: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x79a6fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x79a700: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x79a700u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79a704: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x79a704u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79a708: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x79a708u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79a70c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x79a70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79a710: 0x3e00008  jr          $ra
    ctx->pc = 0x79A710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A710u;
        // 0x79a714: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A718u;
}
} // namespace gh_r201
