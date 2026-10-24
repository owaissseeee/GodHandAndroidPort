#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: fpmul
// Address: 0x79b650 - 0x79b848
void fpmul_0x79b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpmul_0x79b650");
#endif

    switch (ctx->pc) {
        case 0x79b670u: goto label_79b670;
        case 0x79b680u: goto label_79b680;
        case 0x79b788u: goto label_79b788;
        case 0x79b7d0u: goto label_79b7d0;
        case 0x79b834u: goto label_79b834;
        default: break;
    }

    ctx->pc = 0x79b650u;

    // 0x79b650: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79b650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79b654: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x79b654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x79b658: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79b658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b65c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79b65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79b660: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79b660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b664: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x79b664u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79b668: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B668u;
    SET_GPR_U32(ctx, 31, 0x79B670u);
    ctx->pc = 0x79B66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B668u;
    // 0x79b66c: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B668u, 0x79B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B670u;
label_79b670:
    // 0x79b670: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79b670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b674: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x79b674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x79b678: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B678u;
    SET_GPR_U32(ctx, 31, 0x79B680u);
    ctx->pc = 0x79B67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B678u;
    // 0x79b67c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B678u, 0x79B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B680u;
label_79b680:
    // 0x79b680: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x79b680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b684: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x79b684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b688: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79B688u;
    {
        const bool branch_taken_0x79b688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B688u;
        // 0x79b68c: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b688) {
            ctx->pc = 0x79B6E4u;
            goto label_79b6e4;
        }
    }
    ctx->pc = 0x79B690u;
    // 0x79b690: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x79b690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b694: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79b694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b698: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x79B698u;
    {
        const bool branch_taken_0x79b698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b698) {
            ctx->pc = 0x79B69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B698u;
            // 0x79b69c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B70Cu;
            goto label_79b70c;
        }
    }
    ctx->pc = 0x79B6A0u;
    // 0x79b6a0: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x79b6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x79b6a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B6A4u;
    {
        const bool branch_taken_0x79b6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6A4u;
        // 0x79b6a8: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6a4) {
            ctx->pc = 0x79B6C0u;
            goto label_79b6c0;
        }
    }
    ctx->pc = 0x79B6ACu;
    // 0x79b6ac: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79b6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79b6b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B6B0u;
    {
        const bool branch_taken_0x79b6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6B0u;
        // 0x79b6b4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6b0) {
            ctx->pc = 0x79B6D0u;
            goto label_79b6d0;
        }
    }
    ctx->pc = 0x79B6B8u;
    // 0x79b6b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79B6B8u;
    {
        const bool branch_taken_0x79b6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6B8u;
        // 0x79b6bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6b8) {
            ctx->pc = 0x79B6ECu;
            goto label_79b6ec;
        }
    }
    ctx->pc = 0x79B6C0u;
label_79b6c0:
    // 0x79b6c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B6C0u;
    {
        const bool branch_taken_0x79b6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6C0u;
        // 0x79b6c4: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6c0) {
            ctx->pc = 0x79B6DCu;
            goto label_79b6dc;
        }
    }
    ctx->pc = 0x79B6C8u;
    // 0x79b6c8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79B6C8u;
    {
        const bool branch_taken_0x79b6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6C8u;
        // 0x79b6cc: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6c8) {
            ctx->pc = 0x79B70Cu;
            goto label_79b70c;
        }
    }
    ctx->pc = 0x79B6D0u;
label_79b6d0:
    // 0x79b6d0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b6d4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x79B6D4u;
    {
        const bool branch_taken_0x79b6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6D4u;
        // 0x79b6d8: 0x2444cda0  addiu       $a0, $v0, -0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6d4) {
            ctx->pc = 0x79B82Cu;
            goto label_79b82c;
        }
    }
    ctx->pc = 0x79B6DCu;
label_79b6dc:
    // 0x79b6dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B6DCu;
    {
        const bool branch_taken_0x79b6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6DCu;
        // 0x79b6e0: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6dc) {
            ctx->pc = 0x79B700u;
            goto label_79b700;
        }
    }
    ctx->pc = 0x79B6E4u;
label_79b6e4:
    // 0x79b6e4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79b6e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b6ec:
    // 0x79b6ec: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x79b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x79b6f0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79b6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79b6f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79b6f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79b6f8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x79B6F8u;
    {
        const bool branch_taken_0x79b6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6F8u;
        // 0x79b6fc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6f8) {
            ctx->pc = 0x79B82Cu;
            goto label_79b82c;
        }
    }
    ctx->pc = 0x79B700u;
label_79b700:
    // 0x79b700: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B700u;
    {
        const bool branch_taken_0x79b700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B700u;
        // 0x79b704: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b700) {
            ctx->pc = 0x79B724u;
            goto label_79b724;
        }
    }
    ctx->pc = 0x79B708u;
    // 0x79b708: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x79b708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_79b70c:
    // 0x79b70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b710: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79b714: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79b714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79b718: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79b718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79b71c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x79B71Cu;
    {
        const bool branch_taken_0x79b71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B71Cu;
        // 0x79b720: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b71c) {
            ctx->pc = 0x79B82Cu;
            goto label_79b82c;
        }
    }
    ctx->pc = 0x79B724u;
label_79b724:
    // 0x79b724: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x79b724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x79b728: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x79b728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x79b72c: 0x820019  multu       $a0, $v0
    ctx->pc = 0x79b72cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x79b730: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x79b730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x79b734: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79b734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79b738: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x79b738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x79b73c: 0x2812  mflo        $a1
    ctx->pc = 0x79b73cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x79b740: 0x2010  mfhi        $a0
    ctx->pc = 0x79b740u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x79b744: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x79b744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x79b748: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x79b748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x79b74c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x79b74cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x79b750: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79b750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79b754: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x79b754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x79b758: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x79b758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x79b75c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x79b75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x79b760: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x79b760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x79b764: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x79b764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x79b768: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x79b768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x79b76c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x79b76cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x79b770: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x79b770u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x79b774: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79B774u;
    {
        const bool branch_taken_0x79b774 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x79B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B774u;
        // 0x79b778: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b774) {
            ctx->pc = 0x79B7A8u;
            goto label_79b7a8;
        }
    }
    ctx->pc = 0x79B77Cu;
    // 0x79b77c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x79b77cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x79b780: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x79b780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x79b784: 0x0  nop
    ctx->pc = 0x79b784u;
    // NOP
label_79b788:
    // 0x79b788: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B788u;
    {
        const bool branch_taken_0x79b788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B788u;
        // 0x79b78c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b788) {
            ctx->pc = 0x79B798u;
            goto label_79b798;
        }
    }
    ctx->pc = 0x79B790u;
    // 0x79b790: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x79b790u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x79b794: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x79b794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_79b798:
    // 0x79b798: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x79b798u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x79b79c: 0x480fffa  bltz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79B79Cu;
    {
        const bool branch_taken_0x79b79c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B79Cu;
        // 0x79b7a0: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b79c) {
            ctx->pc = 0x79B788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b788;
        }
    }
    ctx->pc = 0x79B7A4u;
    // 0x79b7a4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x79b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_79b7a8:
    // 0x79b7a8: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x79b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x79b7ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79b7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79b7b0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x79b7b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x79b7b4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79B7B4u;
    {
        const bool branch_taken_0x79b7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7B4u;
        // 0x79b7b8: 0x3083007f  andi        $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b7b4) {
            ctx->pc = 0x79B7F8u;
            goto label_79b7f8;
        }
    }
    ctx->pc = 0x79B7BCu;
    // 0x79b7bc: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x79b7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x79b7c0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x79b7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x79b7c4: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x79b7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x79b7c8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x79b7c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x79b7cc: 0x0  nop
    ctx->pc = 0x79b7ccu;
    // NOP
label_79b7d0:
    // 0x79b7d0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x79b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x79b7d4: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x79b7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x79b7d8: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x79b7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x79b7dc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x79b7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x79b7e0: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x79b7e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x79b7e4: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x79b7e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x79b7e8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79B7E8u;
    {
        const bool branch_taken_0x79b7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7E8u;
        // 0x79b7ec: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b7e8) {
            ctx->pc = 0x79B7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b7d0;
        }
    }
    ctx->pc = 0x79B7F0u;
    // 0x79b7f0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x79b7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x79b7f4: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x79b7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
label_79b7f8:
    // 0x79b7f8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x79b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x79b7fc: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B7FCu;
    {
        const bool branch_taken_0x79b7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79b7fc) {
            ctx->pc = 0x79B800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B7FCu;
            // 0x79b800: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B820u;
            goto label_79b820;
        }
    }
    ctx->pc = 0x79B804u;
    // 0x79b804: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x79b804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x79b808: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B808u;
    {
        const bool branch_taken_0x79b808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B808u;
        // 0x79b80c: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b808) {
            ctx->pc = 0x79B818u;
            goto label_79b818;
        }
    }
    ctx->pc = 0x79B810u;
    // 0x79b810: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B810u;
    {
        const bool branch_taken_0x79b810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B810u;
        // 0x79b814: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b810) {
            ctx->pc = 0x79B81Cu;
            goto label_79b81c;
        }
    }
    ctx->pc = 0x79B818u;
label_79b818:
    // 0x79b818: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x79b818u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_79b81c:
    // 0x79b81c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x79b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_79b820:
    // 0x79b820: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79b820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b824: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x79b824u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x79b828: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x79b828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_79b82c:
    // 0x79b82c: 0xc1e6c6e  jal         func_79B1B8
    ctx->pc = 0x79B82Cu;
    SET_GPR_U32(ctx, 31, 0x79B834u);
    ctx->pc = 0x79B1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B1B8u, 0x79B82Cu, 0x79B834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B834u;
label_79b834:
    // 0x79b834: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79b834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b838: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x79b838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b83c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B83Cu;
        // 0x79b840: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B844u;
    // 0x79b844: 0x0  nop
    ctx->pc = 0x79b844u;
    // NOP
    ctx->pc = 0x79b848u;
}
} // namespace gh_r022
