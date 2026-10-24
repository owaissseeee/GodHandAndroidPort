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

// Function: func_002FCD60
// Address: 0x2fcd60 - 0x2fcf88
void func_002FCD60_0x2fcd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FCD60_0x2fcd60");
#endif

    switch (ctx->pc) {
        case 0x2fcd80u: goto label_2fcd80;
        case 0x2fcddcu: goto label_2fcddc;
        case 0x2fcde4u: goto label_2fcde4;
        case 0x2fcdf0u: goto label_2fcdf0;
        case 0x2fce04u: goto label_2fce04;
        case 0x2fce14u: goto label_2fce14;
        case 0x2fce64u: goto label_2fce64;
        case 0x2fce88u: goto label_2fce88;
        case 0x2fce90u: goto label_2fce90;
        case 0x2fceb8u: goto label_2fceb8;
        case 0x2fcee0u: goto label_2fcee0;
        case 0x2fceecu: goto label_2fceec;
        case 0x2fcf50u: goto label_2fcf50;
        case 0x2fcf60u: goto label_2fcf60;
        case 0x2fcf6cu: goto label_2fcf6c;
        default: break;
    }

    ctx->pc = 0x2fcd60u;

    // 0x2fcd60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2fcd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2fcd64: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2fcd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2fcd68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fcd68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd6c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2fcd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2fcd70: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2fcd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2fcd74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2fcd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2fcd78: 0xc0ad794  jal         func_2B5E50
    ctx->pc = 0x2FCD78u;
    SET_GPR_U32(ctx, 31, 0x2FCD80u);
    ctx->pc = 0x2FCD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCD78u;
    // 0x2fcd7c: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E50u, 0x2FCD78u, 0x2FCD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCD80u;
label_2fcd80:
    // 0x2fcd80: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2FCD80u;
    {
        const bool branch_taken_0x2fcd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD80u;
        // 0x2fcd84: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd80) {
            ctx->pc = 0x2FCF6Cu;
            goto label_2fcf6c;
        }
    }
    ctx->pc = 0x2FCD88u;
    // 0x2fcd88: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x2fcd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2fcd8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fcd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fcd90: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2FCD90u;
    {
        const bool branch_taken_0x2fcd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCD90u;
        // 0x2fcd94: 0xa2000103  sb          $zero, 0x103($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 259), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd90) {
            ctx->pc = 0x2FCE7Cu;
            goto label_2fce7c;
        }
    }
    ctx->pc = 0x2FCD98u;
    // 0x2fcd98: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2fcd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2fcd9c: 0x54400074  bnel        $v0, $zero, . + 4 + (0x74 << 2)
    ctx->pc = 0x2FCD9Cu;
    {
        const bool branch_taken_0x2fcd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcd9c) {
            ctx->pc = 0x2FCDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCD9Cu;
            // 0x2fcda0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCF70u;
            goto label_2fcf70;
        }
    }
    ctx->pc = 0x2FCDA4u;
    // 0x2fcda4: 0xc6020124  lwc1        $f2, 0x124($s0)
    ctx->pc = 0x2fcda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fcda8: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x2fcda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2fcdac: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2fcdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcdb0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2fcdb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fcdb4: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x2fcdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcdb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fcdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcdbc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2fcdbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fcdc0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2fcdc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fcdc4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2fcdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fcdc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fcdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fcdcc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fcdccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fcdd0: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x2fcdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x2fcdd4: 0xc0ad794  jal         func_2B5E50
    ctx->pc = 0x2FCDD4u;
    SET_GPR_U32(ctx, 31, 0x2FCDDCu);
    ctx->pc = 0x2FCDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCDD4u;
    // 0x2fcdd8: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E50u, 0x2FCDD4u, 0x2FCDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCDDCu;
label_2fcddc:
    // 0x2fcddc: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x2FCDDCu;
    SET_GPR_U32(ctx, 31, 0x2FCDE4u);
    ctx->pc = 0x2FCDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCDDCu;
    // 0x2fcde0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x2FCDDCu, 0x2FCDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCDE4u;
label_2fcde4:
    // 0x2fcde4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fcde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcde8: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2FCDE8u;
    SET_GPR_U32(ctx, 31, 0x2FCDF0u);
    ctx->pc = 0x2FCDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCDE8u;
    // 0x2fcdec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2FCDE8u, 0x2FCDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCDF0u;
label_2fcdf0:
    // 0x2fcdf0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2fcdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fcdf4: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x2fcdf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fcdf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fcdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcdfc: 0xc051f10  jal         func_147C40
    ctx->pc = 0x2FCDFCu;
    SET_GPR_U32(ctx, 31, 0x2FCE04u);
    ctx->pc = 0x2FCE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCDFCu;
    // 0x2fce00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x2FCDFCu, 0x2FCE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE04u;
label_2fce04:
    // 0x2fce04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fce04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fce08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fce08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fce0c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FCE0Cu;
    SET_GPR_U32(ctx, 31, 0x2FCE14u);
    ctx->pc = 0x2FCE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCE0Cu;
    // 0x2fce10: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FCE0Cu, 0x2FCE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE14u;
label_2fce14:
    // 0x2fce14: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2fce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fce18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fce18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fce1c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2fce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fce20: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2fce20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fce24: 0x92020141  lbu         $v0, 0x141($s0)
    ctx->pc = 0x2fce24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 321)));
    // 0x2fce28: 0xe6020124  swc1        $f2, 0x124($s0)
    ctx->pc = 0x2fce28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2fce2c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2fce2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2fce30: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FCE30u;
    {
        const bool branch_taken_0x2fce30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FCE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE30u;
        // 0x2fce34: 0xe601012c  swc1        $f1, 0x12C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce30) {
            ctx->pc = 0x2FCE7Cu;
            goto label_2fce7c;
        }
    }
    ctx->pc = 0x2FCE38u;
    // 0x2fce38: 0xc6020134  lwc1        $f2, 0x134($s0)
    ctx->pc = 0x2fce38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fce3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fce3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fce40: 0xc6010138  lwc1        $f1, 0x138($s0)
    ctx->pc = 0x2fce40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fce44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fce44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fce48: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x2fce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fce4c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2fce4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fce50: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x2fce50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fce54: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2fce54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2fce58: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2fce58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2fce5c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FCE5Cu;
    SET_GPR_U32(ctx, 31, 0x2FCE64u);
    ctx->pc = 0x2FCE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCE5Cu;
    // 0x2fce60: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FCE5Cu, 0x2FCE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE64u;
label_2fce64:
    // 0x2fce64: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2fce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fce68: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2fce68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fce6c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2fce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fce70: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x2fce70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x2fce74: 0xe6010138  swc1        $f1, 0x138($s0)
    ctx->pc = 0x2fce74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x2fce78: 0xe602013c  swc1        $f2, 0x13C($s0)
    ctx->pc = 0x2fce78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
label_2fce7c:
    // 0x2fce7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fce7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fce80: 0xc0ad8be  jal         func_2B62F8
    ctx->pc = 0x2FCE80u;
    SET_GPR_U32(ctx, 31, 0x2FCE88u);
    ctx->pc = 0x2FCE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCE80u;
    // 0x2fce84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62F8u, 0x2FCE80u, 0x2FCE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE88u;
label_2fce88:
    // 0x2fce88: 0xc0ad794  jal         func_2B5E50
    ctx->pc = 0x2FCE88u;
    SET_GPR_U32(ctx, 31, 0x2FCE90u);
    ctx->pc = 0x2FCE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCE88u;
    // 0x2fce8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E50u, 0x2FCE88u, 0x2FCE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE90u;
label_2fce90:
    // 0x2fce90: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FCE90u;
    {
        const bool branch_taken_0x2fce90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCE90u;
        // 0x2fce94: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce90) {
            ctx->pc = 0x2FCED4u;
            goto label_2fced4;
        }
    }
    ctx->pc = 0x2FCE98u;
    // 0x2fce98: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x2fce98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2fce9c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2fce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2fcea0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fcea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fcea4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FCEA4u;
    {
        const bool branch_taken_0x2fcea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCEA4u;
        // 0x2fcea8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcea4) {
            ctx->pc = 0x2FCED8u;
            goto label_2fced8;
        }
    }
    ctx->pc = 0x2FCEACu;
    // 0x2fceac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fceacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fceb0: 0xc0ad834  jal         func_2B60D0
    ctx->pc = 0x2FCEB0u;
    SET_GPR_U32(ctx, 31, 0x2FCEB8u);
    ctx->pc = 0x2FCEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCEB0u;
    // 0x2fceb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B60D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60D0u, 0x2FCEB0u, 0x2FCEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCEB8u;
label_2fceb8:
    // 0x2fceb8: 0x13b10006  beq         $sp, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCEB8u;
    {
        const bool branch_taken_0x2fceb8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 17));
        ctx->pc = 0x2FCEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCEB8u;
        // 0x2fcebc: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fceb8) {
            ctx->pc = 0x2FCED4u;
            goto label_2fced4;
        }
    }
    ctx->pc = 0x2FCEC0u;
    // 0x2fcec0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2fcec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcec4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2fcec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fcec8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fcec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fcecc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2fceccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fced0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2fced0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2fced4:
    // 0x2fced4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fced4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2fced8:
    // 0x2fced8: 0xc0ad88c  jal         func_2B6230
    ctx->pc = 0x2FCED8u;
    SET_GPR_U32(ctx, 31, 0x2FCEE0u);
    ctx->pc = 0x2FCEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCED8u;
    // 0x2fcedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x2FCED8u, 0x2FCEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCEE0u;
label_2fcee0:
    // 0x2fcee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcee4: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2FCEE4u;
    SET_GPR_U32(ctx, 31, 0x2FCEECu);
    ctx->pc = 0x2FCEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCEE4u;
    // 0x2fcee8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2FCEE4u, 0x2FCEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCEECu;
label_2fceec:
    // 0x2fceec: 0x8e050114  lw          $a1, 0x114($s0)
    ctx->pc = 0x2fceecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2fcef0: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fcef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2fcef4: 0x90a602b4  lbu         $a2, 0x2B4($a1)
    ctx->pc = 0x2fcef4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x2fcef8: 0x806400be  lb          $a0, 0xBE($v1)
    ctx->pc = 0x2fcef8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 190)));
    // 0x2fcefc: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2fcefcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2fcf00: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FCF00u;
    {
        const bool branch_taken_0x2fcf00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF00u;
        // 0x2fcf04: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf00) {
            ctx->pc = 0x2FCF6Cu;
            goto label_2fcf6c;
        }
    }
    ctx->pc = 0x2FCF08u;
    // 0x2fcf08: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCF08u;
    {
        const bool branch_taken_0x2fcf08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fcf08) {
            ctx->pc = 0x2FCF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCF08u;
            // 0x2fcf0c: 0xafa60020  sw          $a2, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCF18u;
            goto label_2fcf18;
        }
    }
    ctx->pc = 0x2FCF10u;
    // 0x2fcf10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2FCF10u;
    {
        const bool branch_taken_0x2fcf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF10u;
        // 0x2fcf14: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf10) {
            ctx->pc = 0x2FCF44u;
            goto label_2fcf44;
        }
    }
    ctx->pc = 0x2FCF18u;
label_2fcf18:
    // 0x2fcf18: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FCF18u;
    {
        const bool branch_taken_0x2fcf18 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2FCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF18u;
        // 0x2fcf1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf18) {
            ctx->pc = 0x2FCF24u;
            goto label_2fcf24;
        }
    }
    ctx->pc = 0x2FCF20u;
    // 0x2fcf20: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2fcf20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2fcf24:
    // 0x2fcf24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fcf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fcf28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FCF28u;
    {
        const bool branch_taken_0x2fcf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF28u;
        // 0x2fcf2c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf28) {
            ctx->pc = 0x2FCF40u;
            goto label_2fcf40;
        }
    }
    ctx->pc = 0x2FCF30u;
    // 0x2fcf30: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x2fcf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x2fcf34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fcf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fcf38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FCF38u;
    {
        const bool branch_taken_0x2fcf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF38u;
        // 0x2fcf3c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf38) {
            ctx->pc = 0x2FCF44u;
            goto label_2fcf44;
        }
    }
    ctx->pc = 0x2FCF40u;
label_2fcf40:
    // 0x2fcf40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fcf40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fcf44:
    // 0x2fcf44: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x2fcf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2fcf48: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x2FCF48u;
    SET_GPR_U32(ctx, 31, 0x2FCF50u);
    ctx->pc = 0x2FCF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCF48u;
    // 0x2fcf4c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x2FCF48u, 0x2FCF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCF50u;
label_2fcf50:
    // 0x2fcf50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcf54: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2fcf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fcf58: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FCF58u;
    SET_GPR_U32(ctx, 31, 0x2FCF60u);
    ctx->pc = 0x2FCF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCF58u;
    // 0x2fcf5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FCF58u, 0x2FCF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCF60u;
label_2fcf60:
    // 0x2fcf60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fcf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcf64: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2FCF64u;
    SET_GPR_U32(ctx, 31, 0x2FCF6Cu);
    ctx->pc = 0x2FCF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCF64u;
    // 0x2fcf68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2FCF64u, 0x2FCF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCF6Cu;
label_2fcf6c:
    // 0x2fcf6c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2fcf6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2fcf70:
    // 0x2fcf70: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2fcf70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fcf74: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2fcf74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fcf78: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2fcf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fcf7c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2fcf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fcf80: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF80u;
        // 0x2fcf84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCF88u;
}
