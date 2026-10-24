#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079B758
// Address: 0x79b758 - 0x79b9b0
void func_0079B758_0x79b758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B758_0x79b758");
#endif

    switch (ctx->pc) {
        case 0x79b800u: goto label_79b800;
        case 0x79b82cu: goto label_79b82c;
        case 0x79b848u: goto label_79b848;
        case 0x79b888u: goto label_79b888;
        case 0x79b8c0u: goto label_79b8c0;
        case 0x79b8d8u: goto label_79b8d8;
        case 0x79b8e4u: goto label_79b8e4;
        case 0x79b8ecu: goto label_79b8ec;
        case 0x79b93cu: goto label_79b93c;
        case 0x79b954u: goto label_79b954;
        case 0x79b960u: goto label_79b960;
        case 0x79b968u: goto label_79b968;
        case 0x79b984u: goto label_79b984;
        case 0x79b994u: goto label_79b994;
        case 0x79b9a8u: goto label_79b9a8;
        default: break;
    }

    ctx->pc = 0x79b758u;

    // 0x79b758: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79b758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79b75c: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x79b75cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x79b760: 0x8c62c800  lw          $v0, -0x3800($v1)
    ctx->pc = 0x79b760u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C800u));
    // 0x79b764: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x79b764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79b768: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x79b768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x79b76c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x79b76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79b770: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x79b770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x79b774: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b778: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x79b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x79b77c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x79b77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b780: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x79b780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x79b784: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x79b784u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x79b788: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x79b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x79b78c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x79b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x79b790: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x79b790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x79b794: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x79b794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x79b798: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x79b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x79b79c: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x79b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x79b7a0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79b7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79b7a4: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x79b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x79b7a8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x79b7a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b7ac: 0x8c62c800  lw          $v0, -0x3800($v1)
    ctx->pc = 0x79b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C800u));
    // 0x79b7b0: 0xa0450017  sb          $a1, 0x17($v0)
    ctx->pc = 0x79b7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23), (uint8_t)GPR_U32(ctx, 5));
    // 0x79b7b4: 0xa3a60010  sb          $a2, 0x10($sp)
    ctx->pc = 0x79b7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x79b7b8: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79b7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79b7bc: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x79b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x79b7c0: 0xafbd0030  sw          $sp, 0x30($sp)
    ctx->pc = 0x79b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 29));
    // 0x79b7c4: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x79b7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79b7c8: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x79b7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79b7cc: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x79b7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b7d0: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x79b7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b7d4: 0x2506c618  addiu       $a2, $t0, -0x39E8
    ctx->pc = 0x79b7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952472));
    // 0x79b7d8: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x79b7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x79b7dc: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x79b7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x79b7e0: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x79b7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b7e4: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x79b7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79b7e8: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x79b7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79b7ec: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x79b7ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7f0: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x79b7f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x79b7f4: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x79b7f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7f8: 0x3c1e0058  lui         $fp, 0x58
    ctx->pc = 0x79b7f8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
    // 0x79b7fc: 0x8ea2c800  lw          $v0, -0x3800($s5)
    ctx->pc = 0x79b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C800u));
label_79b800:
    // 0x79b800: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x79b800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x79b804: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B804u;
    {
        const bool branch_taken_0x79b804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B804u;
        // 0x79b808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b804) {
            ctx->pc = 0x79B81Cu;
            goto label_79b81c;
        }
    }
    ctx->pc = 0x79B80Cu;
    // 0x79b80c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79B80Cu;
    {
        const bool branch_taken_0x79b80c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B80Cu;
        // 0x79b810: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b80c) {
            ctx->pc = 0x79B840u;
            goto label_79b840;
        }
    }
    ctx->pc = 0x79B814u;
    // 0x79b814: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x79B814u;
    {
        const bool branch_taken_0x79b814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B814u;
        // 0x79b818: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b814) {
            ctx->pc = 0x79B9A0u;
            goto label_79b9a0;
        }
    }
    ctx->pc = 0x79B81Cu;
label_79b81c:
    // 0x79b81c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x79b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b820: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x79b820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b824: 0xc1e6fa8  jal         func_79BEA0
    ctx->pc = 0x79B824u;
    SET_GPR_U32(ctx, 31, 0x79B82Cu);
    ctx->pc = 0x79B828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B824u;
    // 0x79b828: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEA0u, 0x79B824u, 0x79B82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B82Cu;
label_79b82c:
    // 0x79b82c: 0x8ea3c800  lw          $v1, -0x3800($s5)
    ctx->pc = 0x79b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952960)));
    // 0x79b830: 0x90620014  lbu         $v0, 0x14($v1)
    ctx->pc = 0x79b830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79b834: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b838: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x79B838u;
    {
        const bool branch_taken_0x79b838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B838u;
        // 0x79b83c: 0xa0620014  sb          $v0, 0x14($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b838) {
            ctx->pc = 0x79B998u;
            goto label_79b998;
        }
    }
    ctx->pc = 0x79B840u;
label_79b840:
    // 0x79b840: 0xc1e6f18  jal         func_79BC60
    ctx->pc = 0x79B840u;
    SET_GPR_U32(ctx, 31, 0x79B848u);
    ctx->pc = 0x79B844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B840u;
    // 0x79b844: 0x24040226  addiu       $a0, $zero, 0x226 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BC60u, 0x79B840u, 0x79B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B848u;
label_79b848:
    // 0x79b848: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x79B848u;
    {
        const bool branch_taken_0x79b848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b848) {
            ctx->pc = 0x79B97Cu;
            goto label_79b97c;
        }
    }
    ctx->pc = 0x79B850u;
    // 0x79b850: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x79b850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b854: 0x0  nop
    ctx->pc = 0x79b854u;
    // NOP
    // 0x79b858: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x79b858u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b85c: 0x0  nop
    ctx->pc = 0x79b85cu;
    // NOP
    // 0x79b860: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x79B860u;
    {
        const bool branch_taken_0x79b860 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B860u;
        // 0x79b864: 0x8ea3c800  lw          $v1, -0x3800($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b860) {
            ctx->pc = 0x79B97Cu;
            goto label_79b97c;
        }
    }
    ctx->pc = 0x79B868u;
    // 0x79b868: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x79b868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x79b86c: 0x90620017  lbu         $v0, 0x17($v1)
    ctx->pc = 0x79b86cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23)));
    // 0x79b870: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x79b870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x79b874: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x79B874u;
    {
        const bool branch_taken_0x79b874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B874u;
        // 0x79b878: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b874) {
            ctx->pc = 0x79B998u;
            goto label_79b998;
        }
    }
    ctx->pc = 0x79B87Cu;
    // 0x79b87c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x79b87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79b880: 0xc0a5544  jal         func_295510
    ctx->pc = 0x79B880u;
    SET_GPR_U32(ctx, 31, 0x79B888u);
    ctx->pc = 0x79B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B880u;
    // 0x79b884: 0x27c56ab0  addiu       $a1, $fp, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295510u, 0x79B880u, 0x79B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B888u;
label_79b888:
    // 0x79b888: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x79b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b88c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79b88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b890: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x79b890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79b894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b898: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x79b898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b89c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b8a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b8a8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x79b8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79b8ac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x79b8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x79b8b0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b8b4: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x79b8b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x79b8b8: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x79B8B8u;
    SET_GPR_U32(ctx, 31, 0x79B8C0u);
    ctx->pc = 0x79B8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8B8u;
    // 0x79b8bc: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x79B8B8u, 0x79B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8C0u;
label_79b8c0:
    // 0x79b8c0: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x79b8c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79b8c4: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x79b8c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x79b8c8: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x79b8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x79b8cc: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x79b8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x79b8d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79B8D0u;
    {
        const bool branch_taken_0x79b8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8D0u;
        // 0x79b8d4: 0x3c120060  lui         $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8d0) {
            ctx->pc = 0x79B8E4u;
            goto label_79b8e4;
        }
    }
    ctx->pc = 0x79B8D8u;
label_79b8d8:
    // 0x79b8d8: 0x8ec22f84  lw          $v0, 0x2F84($s6)
    ctx->pc = 0x79b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x79b8dc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B8DCu;
    SET_GPR_U32(ctx, 31, 0x79B8E4u);
    ctx->pc = 0x79B8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8DCu;
    // 0x79b8e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B8DCu, 0x79B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8E4u;
label_79b8e4:
    // 0x79b8e4: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x79B8E4u;
    SET_GPR_U32(ctx, 31, 0x79B8ECu);
    ctx->pc = 0x79B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8E4u;
    // 0x79b8e8: 0x262464f0  addiu       $a0, $s1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x79B8E4u, 0x79B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8ECu;
label_79b8ec:
    // 0x79b8ec: 0x260274a0  addiu       $v0, $s0, 0x74A0
    ctx->pc = 0x79b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
    // 0x79b8f0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x79b8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x79b8f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b8f8: 0xc4410574  lwc1        $f1, 0x574($v0)
    ctx->pc = 0x79b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b8fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x79b8fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x79b900: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x79b900u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x79b904: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x79b904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b908: 0x0  nop
    ctx->pc = 0x79b908u;
    // NOP
    // 0x79b90c: 0x4500fff2  bc1f        . + 4 + (-0xE << 2)
    ctx->pc = 0x79B90Cu;
    {
        const bool branch_taken_0x79b90c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B90Cu;
        // 0x79b910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b90c) {
            ctx->pc = 0x79B8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b8d8;
        }
    }
    ctx->pc = 0x79B914u;
    // 0x79b914: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x79b914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x79b918: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79b918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b91c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b91cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b920: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b920u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b924: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79b924u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b928: 0x2644ee00  addiu       $a0, $s2, -0x1200
    ctx->pc = 0x79b928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
    // 0x79b92c: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x79b92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x79b930: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b934: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79B934u;
    SET_GPR_U32(ctx, 31, 0x79B93Cu);
    ctx->pc = 0x79B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B934u;
    // 0x79b938: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B934u, 0x79B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B93Cu;
label_79b93c:
    // 0x79b93c: 0x8ee3c800  lw          $v1, -0x3800($s7)
    ctx->pc = 0x79b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294952960)));
    // 0x79b940: 0x26846ab0  addiu       $a0, $s4, 0x6AB0
    ctx->pc = 0x79b940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
    // 0x79b944: 0x90620010  lbu         $v0, 0x10($v1)
    ctx->pc = 0x79b944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x79b948: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x79b948u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b94c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79B94Cu;
    SET_GPR_U32(ctx, 31, 0x79B954u);
    ctx->pc = 0x79B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B94Cu;
    // 0x79b950: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B94Cu, 0x79B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B954u;
label_79b954:
    // 0x79b954: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79b954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b958: 0xc0a588c  jal         func_296230
    ctx->pc = 0x79B958u;
    SET_GPR_U32(ctx, 31, 0x79B960u);
    ctx->pc = 0x79B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B958u;
    // 0x79b95c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x79B958u, 0x79B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B960u;
label_79b960:
    // 0x79b960: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B960u;
    SET_GPR_U32(ctx, 31, 0x79B968u);
    ctx->pc = 0x79B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B960u;
    // 0x79b964: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B960u, 0x79B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B968u;
label_79b968:
    // 0x79b968: 0x8ee3c800  lw          $v1, -0x3800($s7)
    ctx->pc = 0x79b968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294952960)));
    // 0x79b96c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x79b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x79b970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b974: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x79B974u;
    {
        const bool branch_taken_0x79b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B974u;
        // 0x79b978: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b974) {
            ctx->pc = 0x79B998u;
            goto label_79b998;
        }
    }
    ctx->pc = 0x79B97Cu;
label_79b97c:
    // 0x79b97c: 0xc1e6f18  jal         func_79BC60
    ctx->pc = 0x79B97Cu;
    SET_GPR_U32(ctx, 31, 0x79B984u);
    ctx->pc = 0x79B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B97Cu;
    // 0x79b980: 0x24040226  addiu       $a0, $zero, 0x226 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BC60u, 0x79B97Cu, 0x79B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B984u;
label_79b984:
    // 0x79b984: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B984u;
    {
        const bool branch_taken_0x79b984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B984u;
        // 0x79b988: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b984) {
            ctx->pc = 0x79B99Cu;
            goto label_79b99c;
        }
    }
    ctx->pc = 0x79B98Cu;
    // 0x79b98c: 0xc1e68a2  jal         func_79A288
    ctx->pc = 0x79B98Cu;
    SET_GPR_U32(ctx, 31, 0x79B994u);
    ctx->pc = 0x79A288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A288u, 0x79B98Cu, 0x79B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B994u;
label_79b994:
    // 0x79b994: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x79b994u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_79b998:
    // 0x79b998: 0x8ec22f84  lw          $v0, 0x2F84($s6)
    ctx->pc = 0x79b998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
label_79b99c:
    // 0x79b99c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b9a0:
    // 0x79b9a0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B9A0u;
    SET_GPR_U32(ctx, 31, 0x79B9A8u);
    ctx->pc = 0x79B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B9A0u;
    // 0x79b9a4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B9A0u, 0x79B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B9A8u;
label_79b9a8:
    // 0x79b9a8: 0x1000ff95  b           . + 4 + (-0x6B << 2)
    ctx->pc = 0x79B9A8u;
    {
        const bool branch_taken_0x79b9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9A8u;
        // 0x79b9ac: 0x8ea2c800  lw          $v0, -0x3800($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9a8) {
            ctx->pc = 0x79B800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b800;
        }
    }
    ctx->pc = 0x79B9B0u;
}
} // namespace gh_r040
