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
// Function: func_0079AE60
// Address: 0x79ae60 - 0x79b230
void func_0079AE60_0x79ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AE60_0x79ae60");
#endif

    switch (ctx->pc) {
        case 0x79aea0u: goto label_79aea0;
        case 0x79af5cu: goto label_79af5c;
        case 0x79af70u: goto label_79af70;
        case 0x79af80u: goto label_79af80;
        case 0x79af88u: goto label_79af88;
        case 0x79afa0u: goto label_79afa0;
        case 0x79afbcu: goto label_79afbc;
        case 0x79afccu: goto label_79afcc;
        case 0x79afe4u: goto label_79afe4;
        case 0x79aff0u: goto label_79aff0;
        case 0x79b00cu: goto label_79b00c;
        case 0x79b018u: goto label_79b018;
        case 0x79b02cu: goto label_79b02c;
        case 0x79b038u: goto label_79b038;
        case 0x79b05cu: goto label_79b05c;
        case 0x79b068u: goto label_79b068;
        case 0x79b084u: goto label_79b084;
        case 0x79b090u: goto label_79b090;
        case 0x79b0b0u: goto label_79b0b0;
        case 0x79b0bcu: goto label_79b0bc;
        case 0x79b0d4u: goto label_79b0d4;
        case 0x79b0e0u: goto label_79b0e0;
        case 0x79b108u: goto label_79b108;
        case 0x79b114u: goto label_79b114;
        case 0x79b128u: goto label_79b128;
        case 0x79b130u: goto label_79b130;
        case 0x79b138u: goto label_79b138;
        case 0x79b140u: goto label_79b140;
        case 0x79b158u: goto label_79b158;
        case 0x79b168u: goto label_79b168;
        case 0x79b180u: goto label_79b180;
        case 0x79b190u: goto label_79b190;
        case 0x79b1a4u: goto label_79b1a4;
        case 0x79b1bcu: goto label_79b1bc;
        case 0x79b1c8u: goto label_79b1c8;
        case 0x79b1dcu: goto label_79b1dc;
        case 0x79b1f4u: goto label_79b1f4;
        case 0x79b200u: goto label_79b200;
        default: break;
    }

    ctx->pc = 0x79ae60u;

    // 0x79ae60: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x79ae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x79ae64: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x79ae64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x79ae68: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x79ae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x79ae6c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x79ae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x79ae70: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x79ae70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x79ae74: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x79ae74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x79ae78: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x79ae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x79ae7c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x79ae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x79ae80: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x79ae80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x79ae84: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x79ae84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x79ae88: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79ae88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79ae8c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79ae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79ae90: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x79ae90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79ae94: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79ae98: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79AE98u;
    SET_GPR_U32(ctx, 31, 0x79AEA0u);
    ctx->pc = 0x79AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE98u;
    // 0x79ae9c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79AE98u, 0x79AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEA0u;
label_79aea0:
    // 0x79aea0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x79aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79aea4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x79aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79aea8: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x79aea8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x79aeac: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79aeb0: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79aeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x79aeb4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x79aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79aeb8: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x79aeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x79aebc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79aec0: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x79aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x79aec4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x79aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79aec8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x79aec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x79aecc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x79aeccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79aed0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x79aed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79aed4: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x79aed4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79aed8: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x79aed8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79aedc: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x79aedcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79aee0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x79aee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79aee4: 0xa3a40030  sb          $a0, 0x30($sp)
    ctx->pc = 0x79aee4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x79aee8: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x79aee8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x79aeec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79aeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aef0: 0xa3a70060  sb          $a3, 0x60($sp)
    ctx->pc = 0x79aef0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 7));
    // 0x79aef4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x79aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x79aef8: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x79aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
    // 0x79aefc: 0xafaa0094  sw          $t2, 0x94($sp)
    ctx->pc = 0x79aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 10));
    // 0x79af00: 0xafab0098  sw          $t3, 0x98($sp)
    ctx->pc = 0x79af00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 11));
    // 0x79af04: 0xafa8009c  sw          $t0, 0x9C($sp)
    ctx->pc = 0x79af04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 8));
    // 0x79af08: 0xafa500a4  sw          $a1, 0xA4($sp)
    ctx->pc = 0x79af08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
    // 0x79af0c: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79af10: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x79af10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79af14: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x79af14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79af18: 0x6ba5009f  ldl         $a1, 0x9F($sp)
    ctx->pc = 0x79af18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x79af1c: 0x6fa50098  ldr         $a1, 0x98($sp)
    ctx->pc = 0x79af1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x79af20: 0x6ba600a7  ldl         $a2, 0xA7($sp)
    ctx->pc = 0x79af20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79af24: 0x6fa600a0  ldr         $a2, 0xA0($sp)
    ctx->pc = 0x79af24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79af28: 0xb3a20077  sdl         $v0, 0x77($sp)
    ctx->pc = 0x79af28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79af2c: 0xb7a20070  sdr         $v0, 0x70($sp)
    ctx->pc = 0x79af2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79af30: 0xb3a5007f  sdl         $a1, 0x7F($sp)
    ctx->pc = 0x79af30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79af34: 0xb7a50078  sdr         $a1, 0x78($sp)
    ctx->pc = 0x79af34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79af38: 0xb3a60087  sdl         $a2, 0x87($sp)
    ctx->pc = 0x79af38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79af3c: 0xb7a60080  sdr         $a2, 0x80($sp)
    ctx->pc = 0x79af3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79af40: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79af40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79af44: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79af44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79af48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AF48u;
    {
        const bool branch_taken_0x79af48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF48u;
        // 0x79af4c: 0x3c15003c  lui         $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af48) {
            ctx->pc = 0x79AF5Cu;
            goto label_79af5c;
        }
    }
    ctx->pc = 0x79AF50u;
    // 0x79af50: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79af50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79af54: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79AF54u;
    SET_GPR_U32(ctx, 31, 0x79AF5Cu);
    ctx->pc = 0x79AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF54u;
    // 0x79af58: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79AF54u, 0x79AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF5Cu;
label_79af5c:
    // 0x79af5c: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x79af5cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x79af60: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x79af60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x79af64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79AF64u;
    {
        const bool branch_taken_0x79af64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF64u;
        // 0x79af68: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af64) {
            ctx->pc = 0x79AF80u;
            goto label_79af80;
        }
    }
    ctx->pc = 0x79AF6Cu;
    // 0x79af6c: 0x0  nop
    ctx->pc = 0x79af6cu;
    // NOP
label_79af70:
    // 0x79af70: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79af74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79af74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79af78: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AF78u;
    SET_GPR_U32(ctx, 31, 0x79AF80u);
    ctx->pc = 0x79AF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF78u;
    // 0x79af7c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AF78u, 0x79AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF80u;
label_79af80:
    // 0x79af80: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x79AF80u;
    SET_GPR_U32(ctx, 31, 0x79AF88u);
    ctx->pc = 0x79AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF80u;
    // 0x79af84: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79AF80u, 0x79AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF88u;
label_79af88:
    // 0x79af88: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79AF88u;
    {
        const bool branch_taken_0x79af88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF88u;
        // 0x79af8c: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af88) {
            ctx->pc = 0x79AF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79af70;
        }
    }
    ctx->pc = 0x79AF90u;
    // 0x79af90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79af90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af94: 0x26108658  addiu       $s0, $s0, -0x79A8
    ctx->pc = 0x79af94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x79af98: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79AF98u;
    SET_GPR_U32(ctx, 31, 0x79AFA0u);
    ctx->pc = 0x79AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF98u;
    // 0x79af9c: 0x26316ab0  addiu       $s1, $s1, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79AF98u, 0x79AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFA0u;
label_79afa0:
    // 0x79afa0: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79afa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79afa4: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79afa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79afa8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79afa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79afac: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x79afacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79afb0: 0x2685bcc8  addiu       $a1, $s4, -0x4338
    ctx->pc = 0x79afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950088));
    // 0x79afb4: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79AFB4u;
    SET_GPR_U32(ctx, 31, 0x79AFBCu);
    ctx->pc = 0x79AFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFB4u;
    // 0x79afb8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79AFB4u, 0x79AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFBCu;
label_79afbc:
    // 0x79afbc: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x79afbcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x79afc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79afc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afc4: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79AFC4u;
    SET_GPR_U32(ctx, 31, 0x79AFCCu);
    ctx->pc = 0x79AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFC4u;
    // 0x79afc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79AFC4u, 0x79AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFCCu;
label_79afcc:
    // 0x79afcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79afccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79afd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79afd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79afd8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x79afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x79afdc: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79AFDCu;
    SET_GPR_U32(ctx, 31, 0x79AFE4u);
    ctx->pc = 0x79AFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFDCu;
    // 0x79afe0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79AFDCu, 0x79AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFE4u;
label_79afe4:
    // 0x79afe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79afe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afe8: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79AFE8u;
    SET_GPR_U32(ctx, 31, 0x79AFF0u);
    ctx->pc = 0x79AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFE8u;
    // 0x79afec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79AFE8u, 0x79AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFF0u;
label_79aff0:
    // 0x79aff0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79aff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79aff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aff8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79affc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x79affcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x79b000: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b004: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B004u;
    SET_GPR_U32(ctx, 31, 0x79B00Cu);
    ctx->pc = 0x79B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B004u;
    // 0x79b008: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B004u, 0x79B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B00Cu;
label_79b00c:
    // 0x79b00c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b010: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B010u;
    SET_GPR_U32(ctx, 31, 0x79B018u);
    ctx->pc = 0x79B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B010u;
    // 0x79b014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B010u, 0x79B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B018u;
label_79b018:
    // 0x79b018: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b01c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79b020: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x79b020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x79b024: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B024u;
    SET_GPR_U32(ctx, 31, 0x79B02Cu);
    ctx->pc = 0x79B028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B024u;
    // 0x79b028: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B024u, 0x79B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B02Cu;
label_79b02c:
    // 0x79b02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b030: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B030u;
    SET_GPR_U32(ctx, 31, 0x79B038u);
    ctx->pc = 0x79B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B030u;
    // 0x79b034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B030u, 0x79B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B038u;
label_79b038:
    // 0x79b038: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b03c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79b03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b044: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b048: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79b048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79b04c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b04cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b050: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x79b050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x79b054: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B054u;
    SET_GPR_U32(ctx, 31, 0x79B05Cu);
    ctx->pc = 0x79B058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B054u;
    // 0x79b058: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B054u, 0x79B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B05Cu;
label_79b05c:
    // 0x79b05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b060: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B060u;
    SET_GPR_U32(ctx, 31, 0x79B068u);
    ctx->pc = 0x79B064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B060u;
    // 0x79b064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B060u, 0x79B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B068u;
label_79b068:
    // 0x79b068: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b06c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b070: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79b070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79b074: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79b074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79b078: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x79b078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x79b07c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79B07Cu;
    SET_GPR_U32(ctx, 31, 0x79B084u);
    ctx->pc = 0x79B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B07Cu;
    // 0x79b080: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79B07Cu, 0x79B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B084u;
label_79b084:
    // 0x79b084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b088: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B088u;
    SET_GPR_U32(ctx, 31, 0x79B090u);
    ctx->pc = 0x79B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B088u;
    // 0x79b08c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B088u, 0x79B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B090u;
label_79b090:
    // 0x79b090: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79b094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b098: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79b098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79b09c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79b0a0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x79b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x79b0a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b0a8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B0A8u;
    SET_GPR_U32(ctx, 31, 0x79B0B0u);
    ctx->pc = 0x79B0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0A8u;
    // 0x79b0ac: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B0A8u, 0x79B0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0B0u;
label_79b0b0:
    // 0x79b0b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b0b4: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B0B4u;
    SET_GPR_U32(ctx, 31, 0x79B0BCu);
    ctx->pc = 0x79B0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0B4u;
    // 0x79b0b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B0B4u, 0x79B0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0BCu;
label_79b0bc:
    // 0x79b0bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b0c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79b0c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79b0c8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x79b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x79b0cc: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B0CCu;
    SET_GPR_U32(ctx, 31, 0x79B0D4u);
    ctx->pc = 0x79B0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0CCu;
    // 0x79b0d0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B0CCu, 0x79B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0D4u;
label_79b0d4:
    // 0x79b0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0d8: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B0D8u;
    SET_GPR_U32(ctx, 31, 0x79B0E0u);
    ctx->pc = 0x79B0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0D8u;
    // 0x79b0dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B0D8u, 0x79B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0E0u;
label_79b0e0:
    // 0x79b0e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b0e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79b0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b0ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79b0f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b0f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b0f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79b0fc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x79b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x79b100: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B100u;
    SET_GPR_U32(ctx, 31, 0x79B108u);
    ctx->pc = 0x79B104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B100u;
    // 0x79b104: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B100u, 0x79B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B108u;
label_79b108:
    // 0x79b108: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b10c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B10Cu;
    SET_GPR_U32(ctx, 31, 0x79B114u);
    ctx->pc = 0x79B110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B10Cu;
    // 0x79b110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B10Cu, 0x79B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B114u;
label_79b114:
    // 0x79b114: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b118: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x79b118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x79b11c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x79b11cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x79b120: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79B120u;
    SET_GPR_U32(ctx, 31, 0x79B128u);
    ctx->pc = 0x79B124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B120u;
    // 0x79b124: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79B120u, 0x79B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B128u;
label_79b128:
    // 0x79b128: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B128u;
    SET_GPR_U32(ctx, 31, 0x79B130u);
    ctx->pc = 0x79B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B128u;
    // 0x79b12c: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B128u, 0x79B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B130u;
label_79b130:
    // 0x79b130: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79b130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b134: 0x0  nop
    ctx->pc = 0x79b134u;
    // NOP
label_79b138:
    // 0x79b138: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B138u;
    SET_GPR_U32(ctx, 31, 0x79B140u);
    ctx->pc = 0x79B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B138u;
    // 0x79b13c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B138u, 0x79B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B140u;
label_79b140:
    // 0x79b140: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b144: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x79b144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x79b148: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79b148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79b14c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x79b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x79b150: 0xc0a5806  jal         func_296018
    ctx->pc = 0x79B150u;
    SET_GPR_U32(ctx, 31, 0x79B158u);
    ctx->pc = 0x79B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B150u;
    // 0x79b154: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296018u, 0x79B150u, 0x79B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B158u;
label_79b158:
    // 0x79b158: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79B158u;
    {
        const bool branch_taken_0x79b158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B158u;
        // 0x79b15c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b158) {
            ctx->pc = 0x79B188u;
            goto label_79b188;
        }
    }
    ctx->pc = 0x79B160u;
    // 0x79b160: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B160u;
    SET_GPR_U32(ctx, 31, 0x79B168u);
    ctx->pc = 0x79B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B160u;
    // 0x79b164: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B160u, 0x79B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B168u;
label_79b168:
    // 0x79b168: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b16c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x79b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x79b170: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79b170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79b174: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x79b174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x79b178: 0xc0a5806  jal         func_296018
    ctx->pc = 0x79B178u;
    SET_GPR_U32(ctx, 31, 0x79B180u);
    ctx->pc = 0x79B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B178u;
    // 0x79b17c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296018u, 0x79B178u, 0x79B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B180u;
label_79b180:
    // 0x79b180: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x79B180u;
    {
        const bool branch_taken_0x79b180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B180u;
        // 0x79b184: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b180) {
            ctx->pc = 0x79B138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b138;
        }
    }
    ctx->pc = 0x79B188u;
label_79b188:
    // 0x79b188: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B188u;
    SET_GPR_U32(ctx, 31, 0x79B190u);
    ctx->pc = 0x79B18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B188u;
    // 0x79b18c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B188u, 0x79B190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B190u;
label_79b190:
    // 0x79b190: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x79b190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b194: 0x2610fffe  addiu       $s0, $s0, -0x2
    ctx->pc = 0x79b194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x79b198: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x79b198u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x79b19c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B19Cu;
    SET_GPR_U32(ctx, 31, 0x79B1A4u);
    ctx->pc = 0x79B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B19Cu;
    // 0x79b1a0: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B19Cu, 0x79B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1A4u;
label_79b1a4:
    // 0x79b1a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b1a8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79b1a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x79b1ac: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79b1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b1b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79b1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b1b4: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B1B4u;
    SET_GPR_U32(ctx, 31, 0x79B1BCu);
    ctx->pc = 0x79B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1B4u;
    // 0x79b1b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B1B4u, 0x79B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1BCu;
label_79b1bc:
    // 0x79b1bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79b1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b1c0: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79B1C0u;
    SET_GPR_U32(ctx, 31, 0x79B1C8u);
    ctx->pc = 0x79B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1C0u;
    // 0x79b1c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79B1C0u, 0x79B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1C8u;
label_79b1c8:
    // 0x79b1c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x79b1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b1cc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x79b1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x79b1d0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x79b1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x79b1d4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B1D4u;
    SET_GPR_U32(ctx, 31, 0x79B1DCu);
    ctx->pc = 0x79B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1D4u;
    // 0x79b1d8: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B1D4u, 0x79B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1DCu;
label_79b1dc:
    // 0x79b1dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b1e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79b1e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x79b1e4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79b1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b1e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79b1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b1ec: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B1ECu;
    SET_GPR_U32(ctx, 31, 0x79B1F4u);
    ctx->pc = 0x79B1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1ECu;
    // 0x79b1f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B1ECu, 0x79B1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1F4u;
label_79b1f4:
    // 0x79b1f4: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79b1f8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B1F8u;
    SET_GPR_U32(ctx, 31, 0x79B200u);
    ctx->pc = 0x79B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1F8u;
    // 0x79b1fc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B1F8u, 0x79B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B200u;
label_79b200:
    // 0x79b200: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x79b200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x79b204: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x79b204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x79b208: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x79b208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79b20c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x79b20cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79b210: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x79b210u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79b214: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x79b214u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79b218: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x79b218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79b21c: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x79b21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79b220: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x79b220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b224: 0x3e00008  jr          $ra
    ctx->pc = 0x79B224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B224u;
        // 0x79b228: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B22Cu;
    // 0x79b22c: 0x0  nop
    ctx->pc = 0x79b22cu;
    // NOP
    ctx->pc = 0x79b230u;
}
} // namespace gh_r201
