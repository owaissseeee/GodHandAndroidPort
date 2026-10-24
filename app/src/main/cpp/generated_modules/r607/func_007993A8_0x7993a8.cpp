#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_007993A8
// Address: 0x7993a8 - 0x799488
void func_007993A8_0x7993a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007993A8_0x7993a8");
#endif

    switch (ctx->pc) {
        case 0x7993d0u: goto label_7993d0;
        case 0x7993e4u: goto label_7993e4;
        case 0x7993f8u: goto label_7993f8;
        case 0x799408u: goto label_799408;
        case 0x799418u: goto label_799418;
        case 0x799420u: goto label_799420;
        case 0x799440u: goto label_799440;
        case 0x799454u: goto label_799454;
        default: break;
    }

    ctx->pc = 0x7993a8u;

    // 0x7993a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7993ac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7993acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7993b0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7993b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7993b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x7993b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7993b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7993bc: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x7993c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7993c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7993c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7993c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7993c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7993c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7993cc: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x7993ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_7993d0:
    // 0x7993d0: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    // 0x7993d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x7993d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7993d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993dc: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7993DCu;
    SET_GPR_U32(ctx, 31, 0x7993E4u);
    ctx->pc = 0x7993E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993DCu;
    // 0x7993e0: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7993DCu, 0x7993E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E4u;
label_7993e4:
    // 0x7993e4: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x7993E4u;
    {
        const bool branch_taken_0x7993e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7993e4) {
            ctx->pc = 0x7993E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993E4u;
            // 0x7993e8: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799458u;
            goto label_799458;
        }
    }
    ctx->pc = 0x7993ECu;
    // 0x7993ec: 0x108840  sll         $s1, $s0, 1
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x7993f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x7993f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993f4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_7993f8:
    // 0x7993f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7993f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993fc: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x7993fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799400: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799400u;
    SET_GPR_U32(ctx, 31, 0x799408u);
    ctx->pc = 0x799404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799400u;
    // 0x799404: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799400u, 0x799408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799408u;
label_799408:
    // 0x799408: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799408u;
    {
        const bool branch_taken_0x799408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799408u;
        // 0x79940c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799408) {
            ctx->pc = 0x799440u;
            goto label_799440;
        }
    }
    ctx->pc = 0x799410u;
    // 0x799410: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799410u;
    SET_GPR_U32(ctx, 31, 0x799418u);
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799410u, 0x799418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799418u;
label_799418:
    // 0x799418: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799418u;
    SET_GPR_U32(ctx, 31, 0x799420u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799418u, 0x799420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799420u;
label_799420:
    // 0x799420: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799424: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799428: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79942c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79942cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799430: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799434: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799438: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799438u;
    SET_GPR_U32(ctx, 31, 0x799440u);
    ctx->pc = 0x79943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799438u;
    // 0x79943c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799438u, 0x799440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799440u;
label_799440:
    // 0x799440: 0x1a00ffed  blez        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x799440u;
    {
        const bool branch_taken_0x799440 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x799444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799440u;
        // 0x799444: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799440) {
            ctx->pc = 0x7993F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993f8;
        }
    }
    ctx->pc = 0x799448u;
    // 0x799448: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x799448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x79944c: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79944Cu;
    SET_GPR_U32(ctx, 31, 0x799454u);
    ctx->pc = 0x799450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79944Cu;
    // 0x799450: 0x2684ea60  addiu       $a0, $s4, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79944Cu, 0x799454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799454u;
label_799454:
    // 0x799454: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x799454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799458:
    // 0x799458: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x799458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79945c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x79945Cu;
    {
        const bool branch_taken_0x79945c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79945Cu;
        // 0x799460: 0x26050009  addiu       $a1, $s0, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79945c) {
            ctx->pc = 0x7993D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993d0;
        }
    }
    ctx->pc = 0x799464u;
    // 0x799464: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x799464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799468: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79946c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79946cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799470: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x799470u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799474: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x799474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79947c: 0x3e00008  jr          $ra
    ctx->pc = 0x79947Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79947Cu;
        // 0x799480: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79947Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799484u;
    // 0x799484: 0x0  nop
    ctx->pc = 0x799484u;
    // NOP
    ctx->pc = 0x799488u;
}
} // namespace gh_r607
