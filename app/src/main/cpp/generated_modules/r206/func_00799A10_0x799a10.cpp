#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: func_00799A10
// Address: 0x799a10 - 0x799e40
void func_00799A10_0x799a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799A10_0x799a10");
#endif

    switch (ctx->pc) {
        case 0x799accu: goto label_799acc;
        case 0x799ae8u: goto label_799ae8;
        case 0x799b20u: goto label_799b20;
        case 0x799b44u: goto label_799b44;
        case 0x799b68u: goto label_799b68;
        case 0x799bd0u: goto label_799bd0;
        case 0x799bf4u: goto label_799bf4;
        case 0x799c78u: goto label_799c78;
        case 0x799c88u: goto label_799c88;
        case 0x799c98u: goto label_799c98;
        case 0x799ca0u: goto label_799ca0;
        case 0x799cccu: goto label_799ccc;
        case 0x799cdcu: goto label_799cdc;
        case 0x799ce0u: goto label_799ce0;
        case 0x799cecu: goto label_799cec;
        case 0x799cfcu: goto label_799cfc;
        case 0x799d2cu: goto label_799d2c;
        case 0x799d44u: goto label_799d44;
        case 0x799d4cu: goto label_799d4c;
        case 0x799d54u: goto label_799d54;
        case 0x799d68u: goto label_799d68;
        case 0x799d80u: goto label_799d80;
        case 0x799d98u: goto label_799d98;
        case 0x799dfcu: goto label_799dfc;
        case 0x799e08u: goto label_799e08;
        default: break;
    }

    ctx->pc = 0x799a10u;

    // 0x799a10: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x799a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x799a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799a1c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x799a20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x799a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799a24: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x799a24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x799a28: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x799a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799a2c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x799a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x799a30: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x799a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x799a34: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799a38: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x799a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x799a3c: 0x2463ac80  addiu       $v1, $v1, -0x5380
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945920));
    // 0x799a40: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x799a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x799a44: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x799a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x799a48: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x799a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x799a4c: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x799a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x799a50: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x799a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x799a54: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x799a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x799a58: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x799a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x799a5c: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x799a5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x799a60: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799a60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799a64: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x799a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x799a68: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x799a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x799a6c: 0xafbd0040  sw          $sp, 0x40($sp)
    ctx->pc = 0x799a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 29));
    // 0x799a70: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x799a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799a74: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x799a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799a78: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x799a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x799a7c: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x799a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a80: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x799a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a84: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x799a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x799a88: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x799a88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x79AC80u));
    // 0x799a8c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x799a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799a90: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799a94: 0x2442ac90  addiu       $v0, $v0, -0x5370
    ctx->pc = 0x799a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945936));
    // 0x799a98: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799a98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x79AC90u));
    // 0x799a9c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x799a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799aa0: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799aa4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x799aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x799aa8: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799aac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799ab0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799ab4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799AB4u;
    {
        const bool branch_taken_0x799ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB4u;
        // 0x799ab8: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ab4) {
            ctx->pc = 0x799AD4u;
            goto label_799ad4;
        }
    }
    ctx->pc = 0x799ABCu;
    // 0x799abc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799ac0: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799ac4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799AC4u;
    SET_GPR_U32(ctx, 31, 0x799ACCu);
    ctx->pc = 0x799AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC4u;
    // 0x799ac8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799AC4u, 0x799ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ACCu;
label_799acc:
    // 0x799acc: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x799ACCu;
    {
        const bool branch_taken_0x799acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ACCu;
        // 0x799ad0: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799acc) {
            ctx->pc = 0x799E0Cu;
            goto label_799e0c;
        }
    }
    ctx->pc = 0x799AD4u;
label_799ad4:
    // 0x799ad4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x799ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x799ad8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799adc: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x799adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x799ae0: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799AE0u;
    SET_GPR_U32(ctx, 31, 0x799AE8u);
    ctx->pc = 0x799AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE0u;
    // 0x799ae4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799AE0u, 0x799AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AE8u;
label_799ae8:
    // 0x799ae8: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x799ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x799aec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799aecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799af0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799af4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x799af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799af8: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x799af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x799afc: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x799b00: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x799b04: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x799b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x799b08: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x799b0c: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x799b10: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x799b10u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x799b14: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x799b14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b18: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x799b18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x799b1c: 0x0  nop
    ctx->pc = 0x799b1cu;
    // NOP
label_799b20:
    // 0x799b20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x799b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b24: 0xa3a00041  sb          $zero, 0x41($sp)
    ctx->pc = 0x799b24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x799b28: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x799b28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x799b2c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x799b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799b30: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799b34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799b38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b3c: 0xc1e697c  jal         func_79A5F0
    ctx->pc = 0x799B3Cu;
    SET_GPR_U32(ctx, 31, 0x799B44u);
    ctx->pc = 0x799B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B3Cu;
    // 0x799b40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5F0u, 0x799B3Cu, 0x799B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B44u;
label_799b44:
    // 0x799b44: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x799B44u;
    {
        const bool branch_taken_0x799b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799b44) {
            ctx->pc = 0x799B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B44u;
            // 0x799b48: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B74u;
            goto label_799b74;
        }
    }
    ctx->pc = 0x799B4Cu;
    // 0x799b4c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x799b4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x799b50: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x799b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799b54: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799b58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799b5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b60: 0xc1e697c  jal         func_79A5F0
    ctx->pc = 0x799B60u;
    SET_GPR_U32(ctx, 31, 0x799B68u);
    ctx->pc = 0x799B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B60u;
    // 0x799b64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5F0u, 0x799B60u, 0x799B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B68u;
label_799b68:
    // 0x799b68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799B68u;
    {
        const bool branch_taken_0x799b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B68u;
        // 0x799b6c: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b68) {
            ctx->pc = 0x799B78u;
            goto label_799b78;
        }
    }
    ctx->pc = 0x799B70u;
    // 0x799b70: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x799b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799b74:
    // 0x799b74: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x799b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_799b78:
    // 0x799b78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799B78u;
    {
        const bool branch_taken_0x799b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B78u;
        // 0x799b7c: 0x8e82aca0  lw          $v0, -0x5360($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b78) {
            ctx->pc = 0x799BA0u;
            goto label_799ba0;
        }
    }
    ctx->pc = 0x799B80u;
    // 0x799b80: 0xa3b60040  sb          $s6, 0x40($sp)
    ctx->pc = 0x799b80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 22));
    // 0x799b84: 0x8e82aca0  lw          $v0, -0x5360($s4)
    ctx->pc = 0x799b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945952)));
    // 0x799b88: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x799b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799b8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799B8Cu;
    {
        const bool branch_taken_0x799b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B8Cu;
        // 0x799b90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b8c) {
            ctx->pc = 0x799BB4u;
            goto label_799bb4;
        }
    }
    ctx->pc = 0x799B94u;
    // 0x799b94: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799b98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x799B98u;
    {
        const bool branch_taken_0x799b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B98u;
        // 0x799b9c: 0xe4540004  swc1        $f20, 0x4($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b98) {
            ctx->pc = 0x799BB4u;
            goto label_799bb4;
        }
    }
    ctx->pc = 0x799BA0u;
label_799ba0:
    // 0x799ba0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799ba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799BA4u;
    {
        const bool branch_taken_0x799ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA4u;
        // 0x799ba8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ba4) {
            ctx->pc = 0x799BB4u;
            goto label_799bb4;
        }
    }
    ctx->pc = 0x799BACu;
    // 0x799bac: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x799bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799bb0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x799bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_799bb4:
    // 0x799bb4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x799bb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799bb8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x799bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799bbc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799bc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799bc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bc8: 0xc1e697c  jal         func_79A5F0
    ctx->pc = 0x799BC8u;
    SET_GPR_U32(ctx, 31, 0x799BD0u);
    ctx->pc = 0x799BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC8u;
    // 0x799bcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5F0u, 0x799BC8u, 0x799BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BD0u;
label_799bd0:
    // 0x799bd0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x799BD0u;
    {
        const bool branch_taken_0x799bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799bd0) {
            ctx->pc = 0x799BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BD0u;
            // 0x799bd4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C00u;
            goto label_799c00;
        }
    }
    ctx->pc = 0x799BD8u;
    // 0x799bd8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x799bd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799bdc: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x799bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799be0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799be4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799be8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799bec: 0xc1e697c  jal         func_79A5F0
    ctx->pc = 0x799BECu;
    SET_GPR_U32(ctx, 31, 0x799BF4u);
    ctx->pc = 0x799BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BECu;
    // 0x799bf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5F0u, 0x799BECu, 0x799BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF4u;
label_799bf4:
    // 0x799bf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799BF4u;
    {
        const bool branch_taken_0x799bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF4u;
        // 0x799bf8: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bf4) {
            ctx->pc = 0x799C04u;
            goto label_799c04;
        }
    }
    ctx->pc = 0x799BFCu;
    // 0x799bfc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x799bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799c00:
    // 0x799c00: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x799c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_799c04:
    // 0x799c04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799C04u;
    {
        const bool branch_taken_0x799c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C04u;
        // 0x799c08: 0x8e82aca0  lw          $v0, -0x5360($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c04) {
            ctx->pc = 0x799C2Cu;
            goto label_799c2c;
        }
    }
    ctx->pc = 0x799C0Cu;
    // 0x799c0c: 0xa3b60041  sb          $s6, 0x41($sp)
    ctx->pc = 0x799c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 22));
    // 0x799c10: 0x8e82aca0  lw          $v0, -0x5360($s4)
    ctx->pc = 0x799c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945952)));
    // 0x799c14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x799c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799c18: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x799C18u;
    {
        const bool branch_taken_0x799c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C18u;
        // 0x799c1c: 0x8fc38658  lw          $v1, -0x79A8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c18) {
            ctx->pc = 0x799C44u;
            goto label_799c44;
        }
    }
    ctx->pc = 0x799C20u;
    // 0x799c20: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799c24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x799C24u;
    {
        const bool branch_taken_0x799c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C24u;
        // 0x799c28: 0xe4540004  swc1        $f20, 0x4($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c24) {
            ctx->pc = 0x799C40u;
            goto label_799c40;
        }
    }
    ctx->pc = 0x799C2Cu;
label_799c2c:
    // 0x799c2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x799c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799c30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799C30u;
    {
        const bool branch_taken_0x799c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C30u;
        // 0x799c34: 0x8fc38658  lw          $v1, -0x79A8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c30) {
            ctx->pc = 0x799C44u;
            goto label_799c44;
        }
    }
    ctx->pc = 0x799C38u;
    // 0x799c38: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x799c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799c3c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x799c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_799c40:
    // 0x799c40: 0x8fc38658  lw          $v1, -0x79A8($fp)
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294936152)));
label_799c44:
    // 0x799c44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799c48: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x799c4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799c50: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799C50u;
    {
        const bool branch_taken_0x799c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C50u;
        // 0x799c54: 0x93a20040  lbu         $v0, 0x40($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c50) {
            ctx->pc = 0x799C80u;
            goto label_799c80;
        }
    }
    ctx->pc = 0x799C58u;
    // 0x799c58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799C58u;
    {
        const bool branch_taken_0x799c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C58u;
        // 0x799c5c: 0x93a20041  lbu         $v0, 0x41($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 65)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c58) {
            ctx->pc = 0x799C68u;
            goto label_799c68;
        }
    }
    ctx->pc = 0x799C60u;
    // 0x799c60: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799C60u;
    {
        const bool branch_taken_0x799c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C60u;
        // 0x799c64: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c60) {
            ctx->pc = 0x799C98u;
            goto label_799c98;
        }
    }
    ctx->pc = 0x799C68u;
label_799c68:
    // 0x799c68: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799c6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c70: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799C70u;
    SET_GPR_U32(ctx, 31, 0x799C78u);
    ctx->pc = 0x799C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C70u;
    // 0x799c74: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799C70u, 0x799C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C78u;
label_799c78:
    // 0x799c78: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
    ctx->pc = 0x799C78u;
    {
        const bool branch_taken_0x799c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C78u;
        // 0x799c7c: 0xa3a00040  sb          $zero, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c78) {
            ctx->pc = 0x799B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b20;
        }
    }
    ctx->pc = 0x799C80u;
label_799c80:
    // 0x799c80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799C80u;
    {
        const bool branch_taken_0x799c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C80u;
        // 0x799c84: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c80) {
            ctx->pc = 0x799C98u;
            goto label_799c98;
        }
    }
    ctx->pc = 0x799C88u;
label_799c88:
    // 0x799c88: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799c8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c90: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799C90u;
    SET_GPR_U32(ctx, 31, 0x799C98u);
    ctx->pc = 0x799C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C90u;
    // 0x799c94: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799C90u, 0x799C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C98u;
label_799c98:
    // 0x799c98: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x799C98u;
    SET_GPR_U32(ctx, 31, 0x799CA0u);
    ctx->pc = 0x799C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C98u;
    // 0x799c9c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799C98u, 0x799CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CA0u;
label_799ca0:
    // 0x799ca0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799CA0u;
    {
        const bool branch_taken_0x799ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA0u;
        // 0x799ca4: 0x8fc38658  lw          $v1, -0x79A8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ca0) {
            ctx->pc = 0x799C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c88;
        }
    }
    ctx->pc = 0x799CA8u;
    // 0x799ca8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799cac: 0x8fb00090  lw          $s0, 0x90($sp)
    ctx->pc = 0x799cacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799cb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cbc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x799cc0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799cc4: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799CC4u;
    SET_GPR_U32(ctx, 31, 0x799CCCu);
    ctx->pc = 0x799CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CC4u;
    // 0x799cc8: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799CC4u, 0x799CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CCCu;
label_799ccc:
    // 0x799ccc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799cd0: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799cd4: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799CD4u;
    SET_GPR_U32(ctx, 31, 0x799CDCu);
    ctx->pc = 0x799CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CD4u;
    // 0x799cd8: 0x24a5ac58  addiu       $a1, $a1, -0x53A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799CD4u, 0x799CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CDCu;
label_799cdc:
    // 0x799cdc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799ce0:
    // 0x799ce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ce4: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799CE4u;
    SET_GPR_U32(ctx, 31, 0x799CECu);
    ctx->pc = 0x799CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CE4u;
    // 0x799ce8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799CE4u, 0x799CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CECu;
label_799cec:
    // 0x799cec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799cf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cf4: 0xc0a588c  jal         func_296230
    ctx->pc = 0x799CF4u;
    SET_GPR_U32(ctx, 31, 0x799CFCu);
    ctx->pc = 0x799CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CF4u;
    // 0x799cf8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x799CF4u, 0x799CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CFCu;
label_799cfc:
    // 0x799cfc: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x799cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799d00: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799D00u;
    {
        const bool branch_taken_0x799d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799d00) {
            ctx->pc = 0x799D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D00u;
            // 0x799d04: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ce0;
        }
    }
    ctx->pc = 0x799D08u;
    // 0x799d08: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799d0c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799d10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799d10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799d14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799d1c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799d20: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x799d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x799d24: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799D24u;
    SET_GPR_U32(ctx, 31, 0x799D2Cu);
    ctx->pc = 0x799D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D24u;
    // 0x799d28: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799D24u, 0x799D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D2Cu;
label_799d2c:
    // 0x799d2c: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799d30: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799d34: 0x24a5a1d0  addiu       $a1, $a1, -0x5E30
    ctx->pc = 0x799d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943184));
    // 0x799d38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d3c: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x799D3Cu;
    SET_GPR_U32(ctx, 31, 0x799D44u);
    ctx->pc = 0x799D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D3Cu;
    // 0x799d40: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x799D3Cu, 0x799D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D44u;
label_799d44:
    // 0x799d44: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799D44u;
    SET_GPR_U32(ctx, 31, 0x799D4Cu);
    ctx->pc = 0x799D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D44u;
    // 0x799d48: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799D44u, 0x799D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D4Cu;
label_799d4c:
    // 0x799d4c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799D4Cu;
    SET_GPR_U32(ctx, 31, 0x799D54u);
    ctx->pc = 0x799D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D4Cu;
    // 0x799d50: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799D4Cu, 0x799D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D54u;
label_799d54:
    // 0x799d54: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x799d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x799d58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d5c: 0x24a4ae50  addiu       $a0, $a1, -0x51B0
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946384));
    // 0x799d60: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799D60u;
    SET_GPR_U32(ctx, 31, 0x799D68u);
    ctx->pc = 0x799D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D60u;
    // 0x799d64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799D60u, 0x799D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D68u;
label_799d68:
    // 0x799d68: 0x8e82aca0  lw          $v0, -0x5360($s4)
    ctx->pc = 0x799d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945952)));
    // 0x799d6c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x799d70: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799D70u;
    {
        const bool branch_taken_0x799d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799d70) {
            ctx->pc = 0x799D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D70u;
            // 0x799d74: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D88u;
            goto label_799d88;
        }
    }
    ctx->pc = 0x799D78u;
    // 0x799d78: 0xc06c2c2  jal         func_1B0B08
    ctx->pc = 0x799D78u;
    SET_GPR_U32(ctx, 31, 0x799D80u);
    ctx->pc = 0x1B0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0B08u, 0x799D78u, 0x799D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D80u;
label_799d80:
    // 0x799d80: 0x8e82aca0  lw          $v0, -0x5360($s4)
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945952)));
    // 0x799d84: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_799d88:
    // 0x799d88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799D88u;
    {
        const bool branch_taken_0x799d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799d88) {
            ctx->pc = 0x799D98u;
            goto label_799d98;
        }
    }
    ctx->pc = 0x799D90u;
    // 0x799d90: 0xc06c2c2  jal         func_1B0B08
    ctx->pc = 0x799D90u;
    SET_GPR_U32(ctx, 31, 0x799D98u);
    ctx->pc = 0x1B0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0B08u, 0x799D90u, 0x799D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D98u;
label_799d98:
    // 0x799d98: 0x3c01c190  lui         $at, 0xC190
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49552 << 16));
    // 0x799d9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799da0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799da4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799da8: 0x3c013e9e  lui         $at, 0x3E9E
    ctx->pc = 0x799da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16030 << 16));
    // 0x799dac: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x799dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x799db0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799db4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x799db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799db8: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x799db8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x799dbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799dc0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799dc4: 0x3c014292  lui         $at, 0x4292
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17042 << 16));
    // 0x799dc8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799dcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799dd0: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x799dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x799dd4: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x799dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x799dd8: 0xe643000c  swc1        $f3, 0xC($s2)
    ctx->pc = 0x799dd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x799ddc: 0x3c014046  lui         $at, 0x4046
    ctx->pc = 0x799ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16454 << 16));
    // 0x799de0: 0x3421d3f2  ori         $at, $at, 0xD3F2
    ctx->pc = 0x799de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54258);
    // 0x799de4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799de8: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x799de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x799dec: 0xe6e00004  swc1        $f0, 0x4($s7)
    ctx->pc = 0x799decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x799df0: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x799df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x799df4: 0xc1e69e0  jal         func_79A780
    ctx->pc = 0x799DF4u;
    SET_GPR_U32(ctx, 31, 0x799DFCu);
    ctx->pc = 0x799DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DF4u;
    // 0x799df8: 0xe6e3000c  swc1        $f3, 0xC($s7) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A780u, 0x799DF4u, 0x799DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DFCu;
label_799dfc:
    // 0x799dfc: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x799e00: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799E00u;
    SET_GPR_U32(ctx, 31, 0x799E08u);
    ctx->pc = 0x799E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E00u;
    // 0x799e04: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799E00u, 0x799E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E08u;
label_799e08:
    // 0x799e08: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x799e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_799e0c:
    // 0x799e0c: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x799e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x799e10: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x799e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x799e14: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x799e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x799e18: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x799e18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x799e1c: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x799e1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x799e20: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x799e20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799e24: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x799e24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799e28: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x799e28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799e2c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x799e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799e30: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x799e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799e34: 0x3e00008  jr          $ra
    ctx->pc = 0x799E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E34u;
        // 0x799e38: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799E3Cu;
    // 0x799e3c: 0x0  nop
    ctx->pc = 0x799e3cu;
    // NOP
    ctx->pc = 0x799e40u;
}
} // namespace gh_r206
