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

// Function: ClearInputState_2C33D8
// Address: 0x2c33d8 - 0x2c3440
void ClearInputState_2C33D8_0x2c33d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearInputState_2C33D8_0x2c33d8");
#endif

    switch (ctx->pc) {
        case 0x2c33d8u: goto label_2c33d8;
        case 0x2c33dcu: goto label_2c33dc;
        case 0x2c33e0u: goto label_2c33e0;
        case 0x2c33e4u: goto label_2c33e4;
        case 0x2c33e8u: goto label_2c33e8;
        case 0x2c33ecu: goto label_2c33ec;
        case 0x2c33f0u: goto label_2c33f0;
        case 0x2c33f4u: goto label_2c33f4;
        case 0x2c33f8u: goto label_2c33f8;
        case 0x2c33fcu: goto label_2c33fc;
        case 0x2c3400u: goto label_2c3400;
        case 0x2c3404u: goto label_2c3404;
        case 0x2c3408u: goto label_2c3408;
        case 0x2c340cu: goto label_2c340c;
        case 0x2c3410u: goto label_2c3410;
        case 0x2c3414u: goto label_2c3414;
        case 0x2c3418u: goto label_2c3418;
        case 0x2c341cu: goto label_2c341c;
        case 0x2c3420u: goto label_2c3420;
        case 0x2c3424u: goto label_2c3424;
        case 0x2c3428u: goto label_2c3428;
        case 0x2c342cu: goto label_2c342c;
        case 0x2c3430u: goto label_2c3430;
        case 0x2c3434u: goto label_2c3434;
        case 0x2c3438u: goto label_2c3438;
        case 0x2c343cu: goto label_2c343c;
        default: break;
    }

    ctx->pc = 0x2c33d8u;

label_2c33d8:
    // 0x2c33d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c33d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c33dc:
    // 0x2c33dc: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2c33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_2c33e0:
    // 0x2c33e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c33e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2c33e4:
    // 0x2c33e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c33e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c33e8:
    // 0x2c33e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c33e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c33ec:
    // 0x2c33ec: 0xa0606ab0  sb          $zero, 0x6AB0($v1)
    ctx->pc = 0x2c33ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27312), (uint8_t)GPR_U32(ctx, 0));
label_2c33f0:
    // 0x2c33f0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2c33f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2c33f4:
    // 0x2c33f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2c33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c33f8:
    // 0x2c33f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2c33fc:
    if (ctx->pc == 0x2C33FCu) {
        ctx->pc = 0x2C33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33F8u;
        // 0x2c33fc: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3400u;
        goto label_2c3400;
    }
    ctx->pc = 0x2C33F8u;
    {
        const bool branch_taken_0x2c33f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33F8u;
        // 0x2c33fc: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33f8) {
            ctx->pc = 0x2C340Cu;
            goto label_2c340c;
        }
    }
    ctx->pc = 0x2C3400u;
label_2c3400:
    // 0x2c3400: 0x40f809  jalr        $v0
label_2c3404:
    if (ctx->pc == 0x2C3404u) {
        ctx->pc = 0x2C3408u;
        goto label_2c3408;
    }
    ctx->pc = 0x2C3400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3408u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3400u, 0x2C3408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3408u;
label_2c3408:
    // 0x2c3408: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2c3408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_2c340c:
    // 0x2c340c: 0x8c637a24  lw          $v1, 0x7A24($v1)
    ctx->pc = 0x2c340cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
label_2c3410:
    // 0x2c3410: 0x311ba  dsrl        $v0, $v1, 6
    ctx->pc = 0x2c3410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 6);
label_2c3414:
    // 0x2c3414: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c3414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c3418:
    // 0x2c3418: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2c341c:
    if (ctx->pc == 0x2C341Cu) {
        ctx->pc = 0x2C341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3418u;
        // 0x2c341c: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3420u;
        goto label_2c3420;
    }
    ctx->pc = 0x2C3418u;
    {
        const bool branch_taken_0x2c3418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3418) {
            ctx->pc = 0x2C341Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3418u;
            // 0x2c341c: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3430u;
            goto label_2c3430;
        }
    }
    ctx->pc = 0x2C3420u;
label_2c3420:
    // 0x2c3420: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2c3420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_2c3424:
    // 0x2c3424: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2c3428:
    if (ctx->pc == 0x2C3428u) {
        ctx->pc = 0x2C3428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3424u;
        // 0x2c3428: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C342Cu;
        goto label_2c342c;
    }
    ctx->pc = 0x2C3424u;
    {
        const bool branch_taken_0x2c3424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3424) {
            ctx->pc = 0x2C3428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3424u;
            // 0x2c3428: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3434u;
            goto label_2c3434;
        }
    }
    ctx->pc = 0x2C342Cu;
label_2c342c:
    // 0x2c342c: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x2c342cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
label_2c3430:
    // 0x2c3430: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c3430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3434:
    // 0x2c3434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3438:
    // 0x2c3438: 0x3e00008  jr          $ra
label_2c343c:
    if (ctx->pc == 0x2C343Cu) {
        ctx->pc = 0x2C343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3438u;
        // 0x2c343c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3440u;
        goto label_fallthrough_0x2c3438;
    }
    ctx->pc = 0x2C3438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3438u;
        // 0x2c343c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c3438:
    ctx->pc = 0x2C3440u;
}
