#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: func_0079C268
// Address: 0x79c268 - 0x79c358
void func_0079C268_0x79c268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079C268_0x79c268");
#endif

    switch (ctx->pc) {
        case 0x79c2b0u: goto label_79c2b0;
        case 0x79c2bcu: goto label_79c2bc;
        case 0x79c2d0u: goto label_79c2d0;
        case 0x79c2e8u: goto label_79c2e8;
        case 0x79c308u: goto label_79c308;
        case 0x79c314u: goto label_79c314;
        case 0x79c330u: goto label_79c330;
        case 0x79c33cu: goto label_79c33c;
        default: break;
    }

    ctx->pc = 0x79c268u;

    // 0x79c268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79c268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79c26c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79c270: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79c270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79c274: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79c274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79c278: 0x24707a24  addiu       $s0, $v1, 0x7A24
    ctx->pc = 0x79c278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
    // 0x79c27c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79c27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79c280: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79c280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79c284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79c284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79c288: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x79c288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A28u));
    // 0x79c28c: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79C28Cu;
    {
        const bool branch_taken_0x79c28c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x79C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C28Cu;
        // 0x79c290: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c28c) {
            ctx->pc = 0x79C2BCu;
            goto label_79c2bc;
        }
    }
    ctx->pc = 0x79C294u;
    // 0x79c294: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79c294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79c298: 0x2405102c  addiu       $a1, $zero, 0x102C
    ctx->pc = 0x79c298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4140));
    // 0x79c29c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79c29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c2a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79c2a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c2a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79c2a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c2a8: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79C2A8u;
    SET_GPR_U32(ctx, 31, 0x79C2B0u);
    ctx->pc = 0x79C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C2A8u;
    // 0x79c2ac: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79C2A8u, 0x79C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C2B0u;
label_79c2b0:
    // 0x79c2b0: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79c2b4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79C2B4u;
    SET_GPR_U32(ctx, 31, 0x79C2BCu);
    ctx->pc = 0x79C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C2B4u;
    // 0x79c2b8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79C2B4u, 0x79C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C2BCu;
label_79c2bc:
    // 0x79c2bc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79c2c0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x79c2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79c2c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79c2c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c2c8: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79C2C8u;
    SET_GPR_U32(ctx, 31, 0x79C2D0u);
    ctx->pc = 0x79C2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C2C8u;
    // 0x79c2cc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79C2C8u, 0x79C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C2D0u;
label_79c2d0:
    // 0x79c2d0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79c2d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79c2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79c2d8: 0x8c64d930  lw          $a0, -0x26D0($v1)
    ctx->pc = 0x79c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD930u));
    // 0x79c2dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79c2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c2e0: 0xc058008  jal         func_160020
    ctx->pc = 0x79C2E0u;
    SET_GPR_U32(ctx, 31, 0x79C2E8u);
    ctx->pc = 0x79C2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C2E0u;
    // 0x79c2e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160020u, 0x79C2E0u, 0x79C2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C2E8u;
label_79c2e8:
    // 0x79c2e8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x79c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x79c2ec: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x79c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x79c2f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79c2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79c2f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79C2F4u;
    {
        const bool branch_taken_0x79c2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2F4u;
        // 0x79c2f8: 0x3c110074  lui         $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2f4) {
            ctx->pc = 0x79C324u;
            goto label_79c324;
        }
    }
    ctx->pc = 0x79C2FCu;
    // 0x79c2fc: 0x3c100800  lui         $s0, 0x800
    ctx->pc = 0x79c2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2048 << 16));
    // 0x79c300: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79c300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79c304: 0x0  nop
    ctx->pc = 0x79c304u;
    // NOP
label_79c308:
    // 0x79c308: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79c308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c30c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79C30Cu;
    SET_GPR_U32(ctx, 31, 0x79C314u);
    ctx->pc = 0x79C310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C30Cu;
    // 0x79c310: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79C30Cu, 0x79C314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C314u;
label_79c314:
    // 0x79c314: 0x8e227a84  lw          $v0, 0x7A84($s1)
    ctx->pc = 0x79c314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31364)));
    // 0x79c318: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x79c318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x79c31c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79C31Cu;
    {
        const bool branch_taken_0x79c31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C31Cu;
        // 0x79c320: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c31c) {
            ctx->pc = 0x79C308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c308;
        }
    }
    ctx->pc = 0x79C324u;
label_79c324:
    // 0x79c324: 0x2664ea60  addiu       $a0, $s3, -0x15A0
    ctx->pc = 0x79c324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    // 0x79c328: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x79C328u;
    SET_GPR_U32(ctx, 31, 0x79C330u);
    ctx->pc = 0x79C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C328u;
    // 0x79c32c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79C328u, 0x79C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C330u;
label_79c330:
    // 0x79c330: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79c330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79c334: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79C334u;
    SET_GPR_U32(ctx, 31, 0x79C33Cu);
    ctx->pc = 0x79C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C334u;
    // 0x79c338: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79C334u, 0x79C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C33Cu;
label_79c33c:
    // 0x79c33c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79c33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79c340: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79c340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79c344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79c348: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79c348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c34c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79c34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c350: 0x3e00008  jr          $ra
    ctx->pc = 0x79C350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C350u;
        // 0x79c354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C358u;
}
} // namespace gh_r000
