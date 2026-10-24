#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: fpmul
// Address: 0x79c3c0 - 0x79c5b8
void fpmul_0x79c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpmul_0x79c3c0");
#endif

    switch (ctx->pc) {
        case 0x79c3e0u: goto label_79c3e0;
        case 0x79c3f0u: goto label_79c3f0;
        case 0x79c4f8u: goto label_79c4f8;
        case 0x79c540u: goto label_79c540;
        case 0x79c5a4u: goto label_79c5a4;
        default: break;
    }

    ctx->pc = 0x79c3c0u;

    // 0x79c3c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79c3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79c3c4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x79c3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x79c3c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79c3cc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79c3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79c3d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79c3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c3d4: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x79c3d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79c3d8: 0xc1e700e  jal         func_79C038
    ctx->pc = 0x79C3D8u;
    SET_GPR_U32(ctx, 31, 0x79C3E0u);
    ctx->pc = 0x79C3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C3D8u;
    // 0x79c3dc: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C038u, 0x79C3D8u, 0x79C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C3E0u;
label_79c3e0:
    // 0x79c3e0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79c3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79c3e4: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x79c3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x79c3e8: 0xc1e700e  jal         func_79C038
    ctx->pc = 0x79C3E8u;
    SET_GPR_U32(ctx, 31, 0x79C3F0u);
    ctx->pc = 0x79C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C3E8u;
    // 0x79c3ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C038u, 0x79C3E8u, 0x79C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C3F0u;
label_79c3f0:
    // 0x79c3f0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x79c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c3f4: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x79c3f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c3f8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79C3F8u;
    {
        const bool branch_taken_0x79c3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C3F8u;
        // 0x79c3fc: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c3f8) {
            ctx->pc = 0x79C454u;
            goto label_79c454;
        }
    }
    ctx->pc = 0x79C400u;
    // 0x79c400: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x79c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c404: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79c404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c408: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x79C408u;
    {
        const bool branch_taken_0x79c408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c408) {
            ctx->pc = 0x79C40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C408u;
            // 0x79c40c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C47Cu;
            goto label_79c47c;
        }
    }
    ctx->pc = 0x79C410u;
    // 0x79c410: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x79c410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x79c414: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79C414u;
    {
        const bool branch_taken_0x79c414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C414u;
        // 0x79c418: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c414) {
            ctx->pc = 0x79C430u;
            goto label_79c430;
        }
    }
    ctx->pc = 0x79C41Cu;
    // 0x79c41c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79c41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79c420: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79C420u;
    {
        const bool branch_taken_0x79c420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C420u;
        // 0x79c424: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c420) {
            ctx->pc = 0x79C440u;
            goto label_79c440;
        }
    }
    ctx->pc = 0x79C428u;
    // 0x79c428: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79C428u;
    {
        const bool branch_taken_0x79c428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C428u;
        // 0x79c42c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c428) {
            ctx->pc = 0x79C45Cu;
            goto label_79c45c;
        }
    }
    ctx->pc = 0x79C430u;
label_79c430:
    // 0x79c430: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79C430u;
    {
        const bool branch_taken_0x79c430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C430u;
        // 0x79c434: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c430) {
            ctx->pc = 0x79C44Cu;
            goto label_79c44c;
        }
    }
    ctx->pc = 0x79C438u;
    // 0x79c438: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79C438u;
    {
        const bool branch_taken_0x79c438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C438u;
        // 0x79c43c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c438) {
            ctx->pc = 0x79C47Cu;
            goto label_79c47c;
        }
    }
    ctx->pc = 0x79C440u;
label_79c440:
    // 0x79c440: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79c440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79c444: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x79C444u;
    {
        const bool branch_taken_0x79c444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C444u;
        // 0x79c448: 0x244409e8  addiu       $a0, $v0, 0x9E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c444) {
            ctx->pc = 0x79C59Cu;
            goto label_79c59c;
        }
    }
    ctx->pc = 0x79C44Cu;
label_79c44c:
    // 0x79c44c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79C44Cu;
    {
        const bool branch_taken_0x79c44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C44Cu;
        // 0x79c450: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c44c) {
            ctx->pc = 0x79C470u;
            goto label_79c470;
        }
    }
    ctx->pc = 0x79C454u;
label_79c454:
    // 0x79c454: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79c458: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79c458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79c45c:
    // 0x79c45c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x79c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x79c460: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79c460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79c464: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79c464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79c468: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x79C468u;
    {
        const bool branch_taken_0x79c468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C468u;
        // 0x79c46c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c468) {
            ctx->pc = 0x79C59Cu;
            goto label_79c59c;
        }
    }
    ctx->pc = 0x79C470u;
label_79c470:
    // 0x79c470: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79C470u;
    {
        const bool branch_taken_0x79c470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C470u;
        // 0x79c474: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c470) {
            ctx->pc = 0x79C494u;
            goto label_79c494;
        }
    }
    ctx->pc = 0x79C478u;
    // 0x79c478: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x79c478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_79c47c:
    // 0x79c47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79c47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c480: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79c480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79c484: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79c484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79c488: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79c488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79c48c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x79C48Cu;
    {
        const bool branch_taken_0x79c48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C48Cu;
        // 0x79c490: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c48c) {
            ctx->pc = 0x79C59Cu;
            goto label_79c59c;
        }
    }
    ctx->pc = 0x79C494u;
label_79c494:
    // 0x79c494: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x79c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x79c498: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x79c498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x79c49c: 0x820019  multu       $a0, $v0
    ctx->pc = 0x79c49cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x79c4a0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x79c4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x79c4a4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79c4a8: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x79c4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x79c4ac: 0x2812  mflo        $a1
    ctx->pc = 0x79c4acu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x79c4b0: 0x2010  mfhi        $a0
    ctx->pc = 0x79c4b0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x79c4b4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x79c4b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x79c4b8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x79c4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x79c4bc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x79c4bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x79c4c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79c4c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79c4c4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x79c4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x79c4c8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x79c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x79c4cc: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x79c4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x79c4d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x79c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x79c4d4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x79c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x79c4d8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x79c4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x79c4dc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x79c4dcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x79c4e0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x79c4e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x79c4e4: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79C4E4u;
    {
        const bool branch_taken_0x79c4e4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x79C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C4E4u;
        // 0x79c4e8: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c4e4) {
            ctx->pc = 0x79C518u;
            goto label_79c518;
        }
    }
    ctx->pc = 0x79C4ECu;
    // 0x79c4ec: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x79c4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x79c4f0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x79c4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x79c4f4: 0x0  nop
    ctx->pc = 0x79c4f4u;
    // NOP
label_79c4f8:
    // 0x79c4f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C4F8u;
    {
        const bool branch_taken_0x79c4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C4F8u;
        // 0x79c4fc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c4f8) {
            ctx->pc = 0x79C508u;
            goto label_79c508;
        }
    }
    ctx->pc = 0x79C500u;
    // 0x79c500: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x79c500u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x79c504: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x79c504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_79c508:
    // 0x79c508: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x79c508u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x79c50c: 0x480fffa  bltz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79C50Cu;
    {
        const bool branch_taken_0x79c50c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C50Cu;
        // 0x79c510: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c50c) {
            ctx->pc = 0x79C4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c4f8;
        }
    }
    ctx->pc = 0x79C514u;
    // 0x79c514: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x79c514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_79c518:
    // 0x79c518: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x79c518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x79c51c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79c51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79c520: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x79c520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x79c524: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79C524u;
    {
        const bool branch_taken_0x79c524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C524u;
        // 0x79c528: 0x3083007f  andi        $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c524) {
            ctx->pc = 0x79C568u;
            goto label_79c568;
        }
    }
    ctx->pc = 0x79C52Cu;
    // 0x79c52c: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x79c52cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x79c530: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x79c530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x79c534: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x79c534u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x79c538: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x79c538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x79c53c: 0x0  nop
    ctx->pc = 0x79c53cu;
    // NOP
label_79c540:
    // 0x79c540: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x79c540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x79c544: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x79c544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x79c548: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x79c548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x79c54c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x79c54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x79c550: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x79c550u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x79c554: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x79c554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x79c558: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79C558u;
    {
        const bool branch_taken_0x79c558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C558u;
        // 0x79c55c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c558) {
            ctx->pc = 0x79C540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c540;
        }
    }
    ctx->pc = 0x79C560u;
    // 0x79c560: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x79c560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x79c564: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x79c564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
label_79c568:
    // 0x79c568: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x79c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x79c56c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79C56Cu;
    {
        const bool branch_taken_0x79c56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79c56c) {
            ctx->pc = 0x79C570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C56Cu;
            // 0x79c570: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C590u;
            goto label_79c590;
        }
    }
    ctx->pc = 0x79C574u;
    // 0x79c574: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x79c574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x79c578: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C578u;
    {
        const bool branch_taken_0x79c578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C578u;
        // 0x79c57c: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c578) {
            ctx->pc = 0x79C588u;
            goto label_79c588;
        }
    }
    ctx->pc = 0x79C580u;
    // 0x79c580: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79C580u;
    {
        const bool branch_taken_0x79c580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C580u;
        // 0x79c584: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c580) {
            ctx->pc = 0x79C58Cu;
            goto label_79c58c;
        }
    }
    ctx->pc = 0x79C588u;
label_79c588:
    // 0x79c588: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x79c588u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_79c58c:
    // 0x79c58c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x79c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_79c590:
    // 0x79c590: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79c590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79c594: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x79c594u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x79c598: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x79c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_79c59c:
    // 0x79c59c: 0xc1e6fca  jal         func_79BF28
    ctx->pc = 0x79C59Cu;
    SET_GPR_U32(ctx, 31, 0x79C5A4u);
    ctx->pc = 0x79BF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BF28u, 0x79C59Cu, 0x79C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C5A4u;
label_79c5a4:
    // 0x79c5a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79c5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79c5a8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x79c5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79c5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x79C5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5ACu;
        // 0x79c5b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C5B4u;
    // 0x79c5b4: 0x0  nop
    ctx->pc = 0x79c5b4u;
    // NOP
    ctx->pc = 0x79c5b8u;
}
} // namespace gh_r501
