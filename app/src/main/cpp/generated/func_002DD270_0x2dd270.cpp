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

// Function: func_002DD270
// Address: 0x2dd270 - 0x2dd300
void func_002DD270_0x2dd270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DD270_0x2dd270");
#endif

    switch (ctx->pc) {
        case 0x2dd288u: goto label_2dd288;
        case 0x2dd2a4u: goto label_2dd2a4;
        case 0x2dd2c8u: goto label_2dd2c8;
        case 0x2dd2ecu: goto label_2dd2ec;
        default: break;
    }

    ctx->pc = 0x2dd270u;

    // 0x2dd270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd274: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd278: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dd278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dd27c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd280: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DD280u;
    SET_GPR_U32(ctx, 31, 0x2DD288u);
    ctx->pc = 0x2DD284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD280u;
    // 0x2dd284: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DD280u, 0x2DD288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD288u;
label_2dd288:
    // 0x2dd288: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DD288u;
    {
        const bool branch_taken_0x2dd288 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD288u;
        // 0x2dd28c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd288) {
            ctx->pc = 0x2DD2ECu;
            goto label_2dd2ec;
        }
    }
    ctx->pc = 0x2DD290u;
    // 0x2dd290: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dd290u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dd294: 0x58400016  blezl       $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DD294u;
    {
        const bool branch_taken_0x2dd294 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dd294) {
            ctx->pc = 0x2DD298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD294u;
            // 0x2dd298: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD2F0u;
            goto label_2dd2f0;
        }
    }
    ctx->pc = 0x2DD29Cu;
    // 0x2dd29c: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DD29Cu;
    SET_GPR_U32(ctx, 31, 0x2DD2A4u);
    ctx->pc = 0x2DD2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD29Cu;
    // 0x2dd2a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DD29Cu, 0x2DD2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD2A4u;
label_2dd2a4:
    // 0x2dd2a4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DD2A4u;
    {
        const bool branch_taken_0x2dd2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd2a4) {
            ctx->pc = 0x2DD2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD2A4u;
            // 0x2dd2a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD2F0u;
            goto label_2dd2f0;
        }
    }
    ctx->pc = 0x2DD2ACu;
    // 0x2dd2ac: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dd2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dd2b0: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dd2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dd2b4: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dd2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dd2b8: 0x5c60000d  bgtzl       $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2DD2B8u;
    {
        const bool branch_taken_0x2dd2b8 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dd2b8) {
            ctx->pc = 0x2DD2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD2B8u;
            // 0x2dd2bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD2F0u;
            goto label_2dd2f0;
        }
    }
    ctx->pc = 0x2DD2C0u;
    // 0x2dd2c0: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DD2C0u;
    SET_GPR_U32(ctx, 31, 0x2DD2C8u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DD2C0u, 0x2DD2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD2C8u;
label_2dd2c8:
    // 0x2dd2c8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DD2C8u;
    {
        const bool branch_taken_0x2dd2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd2c8) {
            ctx->pc = 0x2DD2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD2C8u;
            // 0x2dd2cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD2F0u;
            goto label_2dd2f0;
        }
    }
    ctx->pc = 0x2DD2D0u;
    // 0x2dd2d0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2dd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2dd2d4: 0xae110640  sw          $s1, 0x640($s0)
    ctx->pc = 0x2dd2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1600), GPR_U32(ctx, 17));
    // 0x2dd2d8: 0xa2020648  sb          $v0, 0x648($s0)
    ctx->pc = 0x2dd2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1608), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dd2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd2e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dd2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd2e4: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2DD2E4u;
    SET_GPR_U32(ctx, 31, 0x2DD2ECu);
    ctx->pc = 0x2DD2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD2E4u;
    // 0x2dd2e8: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2DD2E4u, 0x2DD2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD2ECu;
label_2dd2ec:
    // 0x2dd2ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dd2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd2f0:
    // 0x2dd2f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd2f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD2F8u;
        // 0x2dd2fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD300u;
}
