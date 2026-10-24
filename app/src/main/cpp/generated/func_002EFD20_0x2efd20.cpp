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

// Function: func_002EFD20
// Address: 0x2efd20 - 0x2f0058
void func_002EFD20_0x2efd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EFD20_0x2efd20");
#endif

    switch (ctx->pc) {
        case 0x2efe1cu: goto label_2efe1c;
        case 0x2efe34u: goto label_2efe34;
        case 0x2efe60u: goto label_2efe60;
        case 0x2eff10u: goto label_2eff10;
        case 0x2eff34u: goto label_2eff34;
        case 0x2eff40u: goto label_2eff40;
        case 0x2eff54u: goto label_2eff54;
        case 0x2eff98u: goto label_2eff98;
        case 0x2efff4u: goto label_2efff4;
        case 0x2f0018u: goto label_2f0018;
        case 0x2f002cu: goto label_2f002c;
        case 0x2f0034u: goto label_2f0034;
        default: break;
    }

    ctx->pc = 0x2efd20u;

    // 0x2efd20: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2efd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2efd24: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x2efd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x2efd28: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x2efd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x2efd2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2efd2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd30: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x2efd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x2efd34: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x2efd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x2efd38: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x2efd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x2efd3c: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x2efd3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2efd40: 0x922202be  lbu         $v0, 0x2BE($s1)
    ctx->pc = 0x2efd40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 702)));
    // 0x2efd44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EFD44u;
    {
        const bool branch_taken_0x2efd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd44) {
            ctx->pc = 0x2EFD68u;
            goto label_2efd68;
        }
    }
    ctx->pc = 0x2EFD4Cu;
    // 0x2efd4c: 0x96240224  lhu         $a0, 0x224($s1)
    ctx->pc = 0x2efd4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efd50: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EFD50u;
    {
        const bool branch_taken_0x2efd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd50) {
            ctx->pc = 0x2EFD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD50u;
            // 0x2efd54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFD58u;
            goto label_2efd58;
        }
    }
    ctx->pc = 0x2EFD58u;
label_2efd58:
    // 0x2efd58: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2efd58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2efd5c: 0x1810  mfhi        $v1
    ctx->pc = 0x2efd5cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2efd60: 0x546000ae  bnel        $v1, $zero, . + 4 + (0xAE << 2)
    ctx->pc = 0x2EFD60u;
    {
        const bool branch_taken_0x2efd60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efd60) {
            ctx->pc = 0x2EFD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD60u;
            // 0x2efd64: 0x922202be  lbu         $v0, 0x2BE($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 702)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F001Cu;
            goto label_2f001c;
        }
    }
    ctx->pc = 0x2EFD68u;
label_2efd68:
    // 0x2efd68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2efd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2efd6c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2efd6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2efd70: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2efd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2efd74: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2efd74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2efd78: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x2efd78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2efd7c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2efd7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2efd80: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2efd80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2efd84: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2efd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2efd88: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2efd88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2efd8c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2efd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2efd90: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2efd90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2efd94: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2efd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2efd98: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2efd98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2efd9c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2efd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2efda0: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x2efda0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2efda4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2efda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2efda8: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x2efda8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2efdac: 0xa045004c  sb          $a1, 0x4C($v0)
    ctx->pc = 0x2efdacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 76), (uint8_t)GPR_U32(ctx, 5));
    // 0x2efdb0: 0xa044004f  sb          $a0, 0x4F($v0)
    ctx->pc = 0x2efdb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 4));
    // 0x2efdb4: 0xe4540040  swc1        $f20, 0x40($v0)
    ctx->pc = 0x2efdb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2efdb8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2efdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x2efdbc: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x2efdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x2efdc0: 0xa040004d  sb          $zero, 0x4D($v0)
    ctx->pc = 0x2efdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2efdc4: 0xa040004e  sb          $zero, 0x4E($v0)
    ctx->pc = 0x2efdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x2efdc8: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x2efdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x2efdcc: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2efdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2efdd0: 0x8e2302b8  lw          $v1, 0x2B8($s1)
    ctx->pc = 0x2efdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
    // 0x2efdd4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2efdd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efdd8: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x2efdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
    // 0x2efddc: 0xa4400070  sh          $zero, 0x70($v0)
    ctx->pc = 0x2efddcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x2efde0: 0xa4400072  sh          $zero, 0x72($v0)
    ctx->pc = 0x2efde0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x2efde4: 0x14720019  bne         $v1, $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EFDE4u;
    {
        const bool branch_taken_0x2efde4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2EFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFDE4u;
        // 0x2efde8: 0xa0400074  sb          $zero, 0x74($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 116), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efde4) {
            ctx->pc = 0x2EFE4Cu;
            goto label_2efe4c;
        }
    }
    ctx->pc = 0x2EFDECu;
    // 0x2efdec: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x2efdecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2efdf0: 0x6a22018f  ldl         $v0, 0x18F($s1)
    ctx->pc = 0x2efdf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2efdf4: 0x6e220188  ldr         $v0, 0x188($s1)
    ctx->pc = 0x2efdf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2efdf8: 0x6a230197  ldl         $v1, 0x197($s1)
    ctx->pc = 0x2efdf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2efdfc: 0x6e230190  ldr         $v1, 0x190($s1)
    ctx->pc = 0x2efdfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2efe00: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x2efe00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2efe04: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x2efe04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2efe08: 0xb3a3006f  sdl         $v1, 0x6F($sp)
    ctx->pc = 0x2efe08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2efe0c: 0xb7a30068  sdr         $v1, 0x68($sp)
    ctx->pc = 0x2efe0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2efe10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2efe10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efe14: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2EFE14u;
    SET_GPR_U32(ctx, 31, 0x2EFE1Cu);
    ctx->pc = 0x2EFE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE14u;
    // 0x2efe18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2EFE14u, 0x2EFE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE1Cu;
label_2efe1c:
    // 0x2efe1c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2efe1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efe20: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2efe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2efe24: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2efe24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2efe28: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x2efe28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2efe2c: 0xc04e11c  jal         func_138470
    ctx->pc = 0x2EFE2Cu;
    SET_GPR_U32(ctx, 31, 0x2EFE34u);
    ctx->pc = 0x2EFE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE2Cu;
    // 0x2efe30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138470u, 0x2EFE2Cu, 0x2EFE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE34u;
label_2efe34:
    // 0x2efe34: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2efe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efe38: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x2efe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2efe3c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2efe3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2efe40: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2efe40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2efe44: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2EFE44u;
    {
        const bool branch_taken_0x2efe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE44u;
        // 0x2efe48: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe44) {
            ctx->pc = 0x2EFF7Cu;
            goto label_2eff7c;
        }
    }
    ctx->pc = 0x2EFE4Cu;
label_2efe4c:
    // 0x2efe4c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2efe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2efe50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2efe50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efe54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2efe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efe58: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2EFE58u;
    SET_GPR_U32(ctx, 31, 0x2EFE60u);
    ctx->pc = 0x2EFE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE58u;
    // 0x2efe5c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2EFE58u, 0x2EFE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE60u;
label_2efe60:
    // 0x2efe60: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2efe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efe64: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2efe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2efe68: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2efe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2efe6c: 0x922202bf  lbu         $v0, 0x2BF($s1)
    ctx->pc = 0x2efe6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 703)));
    // 0x2efe70: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2efe70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2efe74: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2efe74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2efe78: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2efe78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2efe7c: 0x6a23018f  ldl         $v1, 0x18F($s1)
    ctx->pc = 0x2efe7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2efe80: 0x6e230188  ldr         $v1, 0x188($s1)
    ctx->pc = 0x2efe80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2efe84: 0x6a240197  ldl         $a0, 0x197($s1)
    ctx->pc = 0x2efe84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2efe88: 0x6e240190  ldr         $a0, 0x190($s1)
    ctx->pc = 0x2efe88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2efe8c: 0xb3a30067  sdl         $v1, 0x67($sp)
    ctx->pc = 0x2efe8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2efe90: 0xb7a30060  sdr         $v1, 0x60($sp)
    ctx->pc = 0x2efe90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2efe94: 0xb3a4006f  sdl         $a0, 0x6F($sp)
    ctx->pc = 0x2efe94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2efe98: 0xb7a40068  sdr         $a0, 0x68($sp)
    ctx->pc = 0x2efe98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2efe9c: 0x54520023  bnel        $v0, $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x2EFE9Cu;
    {
        const bool branch_taken_0x2efe9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2efe9c) {
            ctx->pc = 0x2EFEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFE9Cu;
            // 0x2efea0: 0x27b000e0  addiu       $s0, $sp, 0xE0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFF2Cu;
            goto label_2eff2c;
        }
    }
    ctx->pc = 0x2EFEA4u;
    // 0x2efea4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2efea4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2efea8: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2efea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2efeac: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2efeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2efeb0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2efeb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2efeb4: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2efeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2efeb8: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x2efeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2efebc: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2efebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efec0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2efec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efec4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x2efec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2efec8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2efec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2efecc: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x2efeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x2efed0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2efed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2efed4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2efed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2efed8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2efed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2efedc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2efedcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efee0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2efee0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2efee4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2efee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2efee8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2efee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2efeec: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2efeecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2efef0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2efef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2efef4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2efef4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efef8: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x2efef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2efefc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2efefcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eff00: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2eff00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2eff04: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2eff04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eff08: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2EFF08u;
    SET_GPR_U32(ctx, 31, 0x2EFF10u);
    ctx->pc = 0x2EFF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF08u;
    // 0x2eff0c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2EFF08u, 0x2EFF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFF10u;
label_2eff10:
    // 0x2eff10: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2eff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff14: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2eff14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eff18: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2eff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eff1c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2eff1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2eff20: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2eff20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2eff24: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2eff24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2eff28: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x2eff28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2eff2c:
    // 0x2eff2c: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x2EFF2Cu;
    SET_GPR_U32(ctx, 31, 0x2EFF34u);
    ctx->pc = 0x2EFF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF2Cu;
    // 0x2eff30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x2EFF2Cu, 0x2EFF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFF34u;
label_2eff34:
    // 0x2eff34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eff34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eff38: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EFF38u;
    SET_GPR_U32(ctx, 31, 0x2EFF40u);
    ctx->pc = 0x2EFF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF38u;
    // 0x2eff3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EFF38u, 0x2EFF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFF40u;
label_2eff40:
    // 0x2eff40: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x2eff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2eff44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eff44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eff48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eff48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eff4c: 0xc051f22  jal         func_147C88
    ctx->pc = 0x2EFF4Cu;
    SET_GPR_U32(ctx, 31, 0x2EFF54u);
    ctx->pc = 0x2EFF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF4Cu;
    // 0x2eff50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x2EFF4Cu, 0x2EFF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFF54u;
label_2eff54:
    // 0x2eff54: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2eff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2eff58: 0x80430197  lb          $v1, 0x197($v0)
    ctx->pc = 0x2eff58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 407)));
    // 0x2eff5c: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EFF5Cu;
    {
        const bool branch_taken_0x2eff5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eff5c) {
            ctx->pc = 0x2EFF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFF5Cu;
            // 0x2eff60: 0x962202bc  lhu         $v0, 0x2BC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFF80u;
            goto label_2eff80;
        }
    }
    ctx->pc = 0x2EFF64u;
    // 0x2eff64: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2eff64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff68: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2eff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eff6c: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2eff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eff70: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2eff70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2eff74: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2eff74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2eff78: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2eff78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2eff7c:
    // 0x2eff7c: 0x962202bc  lhu         $v0, 0x2BC($s1)
    ctx->pc = 0x2eff7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 700)));
label_2eff80:
    // 0x2eff80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eff80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eff84: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2eff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2eff88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eff88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eff8c: 0xa7a200a0  sh          $v0, 0xA0($sp)
    ctx->pc = 0x2eff8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 2));
    // 0x2eff90: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2EFF90u;
    SET_GPR_U32(ctx, 31, 0x2EFF98u);
    ctx->pc = 0x2EFF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF90u;
    // 0x2eff94: 0xafa30078  sw          $v1, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2EFF90u, 0x2EFF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFF98u;
label_2eff98:
    // 0x2eff98: 0x922202c0  lbu         $v0, 0x2C0($s1)
    ctx->pc = 0x2eff98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2eff9c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFF9Cu;
    {
        const bool branch_taken_0x2eff9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eff9c) {
            ctx->pc = 0x2EFFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFF9Cu;
            // 0x2effa0: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFFB8u;
            goto label_2effb8;
        }
    }
    ctx->pc = 0x2EFFA4u;
    // 0x2effa4: 0xc62002c4  lwc1        $f0, 0x2C4($s1)
    ctx->pc = 0x2effa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2effa8: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2effa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2effac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2effacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2effb0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2effb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2effb4: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x2effb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2effb8:
    // 0x2effb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2effb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2effbc: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EFFBCu;
    {
        const bool branch_taken_0x2effbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2effbc) {
            ctx->pc = 0x2EFFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFFBCu;
            // 0x2effc0: 0x8e2502b4  lw          $a1, 0x2B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFFFCu;
            goto label_2efffc;
        }
    }
    ctx->pc = 0x2EFFC4u;
    // 0x2effc4: 0x8e2202b4  lw          $v0, 0x2B4($s1)
    ctx->pc = 0x2effc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x2effc8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EFFC8u;
    {
        const bool branch_taken_0x2effc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFC8u;
        // 0x2effcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2effc8) {
            ctx->pc = 0x2F0018u;
            goto label_2f0018;
        }
    }
    ctx->pc = 0x2EFFD0u;
    // 0x2effd0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x2effd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x2effd4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2effd4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2effd8: 0x8624023a  lh          $a0, 0x23A($s1)
    ctx->pc = 0x2effd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 570)));
    // 0x2effdc: 0x9625023c  lhu         $a1, 0x23C($s1)
    ctx->pc = 0x2effdcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x2effe0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2effe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2effe4: 0xa3a200a4  sb          $v0, 0xA4($sp)
    ctx->pc = 0x2effe4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 164), (uint8_t)GPR_U32(ctx, 2));
    // 0x2effe8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2effe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2effec: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2EFFECu;
    SET_GPR_U32(ctx, 31, 0x2EFFF4u);
    ctx->pc = 0x2EFFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFFECu;
    // 0x2efff0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2EFFECu, 0x2EFFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFFF4u;
label_2efff4:
    // 0x2efff4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EFFF4u;
    {
        const bool branch_taken_0x2efff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFF4u;
        // 0x2efff8: 0x922202be  lbu         $v0, 0x2BE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 702)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efff4) {
            ctx->pc = 0x2F001Cu;
            goto label_2f001c;
        }
    }
    ctx->pc = 0x2EFFFCu;
label_2efffc:
    // 0x2efffc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2efffcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2f0000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0004: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2f0004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f0008: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f0008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f000c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2f000cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0010: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2F0010u;
    SET_GPR_U32(ctx, 31, 0x2F0018u);
    ctx->pc = 0x2F0014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0010u;
    // 0x2f0014: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2F0010u, 0x2F0018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0018u;
label_2f0018:
    // 0x2f0018: 0x922202be  lbu         $v0, 0x2BE($s1)
    ctx->pc = 0x2f0018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 702)));
label_2f001c:
    // 0x2f001c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F001Cu;
    {
        const bool branch_taken_0x2f001c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f001c) {
            ctx->pc = 0x2F002Cu;
            goto label_2f002c;
        }
    }
    ctx->pc = 0x2F0024u;
    // 0x2f0024: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2F0024u;
    SET_GPR_U32(ctx, 31, 0x2F002Cu);
    ctx->pc = 0x2F0028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0024u;
    // 0x2f0028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2F0024u, 0x2F002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F002Cu;
label_2f002c:
    // 0x2f002c: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2F002Cu;
    SET_GPR_U32(ctx, 31, 0x2F0034u);
    ctx->pc = 0x2F0030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F002Cu;
    // 0x2f0030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2F002Cu, 0x2F0034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0034u;
label_2f0034:
    // 0x2f0034: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x2f0034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2f0038: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x2f0038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2f003c: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x2f003cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2f0040: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x2f0040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2f0044: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x2f0044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2f0048: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x2f0048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f004c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F004Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F004Cu;
        // 0x2f0050: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F004Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0054u;
    // 0x2f0054: 0x0  nop
    ctx->pc = 0x2f0054u;
    // NOP
    ctx->pc = 0x2f0058u;
}
