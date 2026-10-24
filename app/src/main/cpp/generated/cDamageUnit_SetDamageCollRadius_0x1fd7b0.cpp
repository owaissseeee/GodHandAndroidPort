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

// Function: cDamageUnit_SetDamageCollRadius
// Address: 0x1fd7b0 - 0x1fd820
void cDamageUnit_SetDamageCollRadius_0x1fd7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageUnit_SetDamageCollRadius_0x1fd7b0");
#endif

    switch (ctx->pc) {
        case 0x1fd7b0u: goto label_1fd7b0;
        case 0x1fd7b4u: goto label_1fd7b4;
        case 0x1fd7b8u: goto label_1fd7b8;
        case 0x1fd7bcu: goto label_1fd7bc;
        case 0x1fd7c0u: goto label_1fd7c0;
        case 0x1fd7c4u: goto label_1fd7c4;
        case 0x1fd7c8u: goto label_1fd7c8;
        case 0x1fd7ccu: goto label_1fd7cc;
        case 0x1fd7d0u: goto label_1fd7d0;
        case 0x1fd7d4u: goto label_1fd7d4;
        case 0x1fd7d8u: goto label_1fd7d8;
        case 0x1fd7dcu: goto label_1fd7dc;
        case 0x1fd7e0u: goto label_1fd7e0;
        case 0x1fd7e4u: goto label_1fd7e4;
        case 0x1fd7e8u: goto label_1fd7e8;
        case 0x1fd7ecu: goto label_1fd7ec;
        case 0x1fd7f0u: goto label_1fd7f0;
        case 0x1fd7f4u: goto label_1fd7f4;
        case 0x1fd7f8u: goto label_1fd7f8;
        case 0x1fd7fcu: goto label_1fd7fc;
        case 0x1fd800u: goto label_1fd800;
        case 0x1fd804u: goto label_1fd804;
        case 0x1fd808u: goto label_1fd808;
        case 0x1fd80cu: goto label_1fd80c;
        case 0x1fd810u: goto label_1fd810;
        case 0x1fd814u: goto label_1fd814;
        case 0x1fd818u: goto label_1fd818;
        case 0x1fd81cu: goto label_1fd81c;
        default: break;
    }

    ctx->pc = 0x1fd7b0u;

label_1fd7b0:
    // 0x1fd7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fd7b4:
    // 0x1fd7b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd7b8:
    // 0x1fd7b8: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1fd7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1fd7bc:
    // 0x1fd7bc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1fd7c0:
    if (ctx->pc == 0x1FD7C0u) {
        ctx->pc = 0x1FD7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7BCu;
        // 0x1fd7c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD7C4u;
        goto label_1fd7c4;
    }
    ctx->pc = 0x1FD7BCu;
    {
        const bool branch_taken_0x1fd7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7BCu;
        // 0x1fd7c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7bc) {
            ctx->pc = 0x1FD800u;
            goto label_1fd800;
        }
    }
    ctx->pc = 0x1FD7C4u;
label_1fd7c4:
    // 0x1fd7c4: 0x8462002c  lh          $v0, 0x2C($v1)
    ctx->pc = 0x1fd7c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
label_1fd7c8:
    // 0x1fd7c8: 0x5445000a  bnel        $v0, $a1, . + 4 + (0xA << 2)
label_1fd7cc:
    if (ctx->pc == 0x1FD7CCu) {
        ctx->pc = 0x1FD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7C8u;
        // 0x1fd7cc: 0x8c630024  lw          $v1, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD7D0u;
        goto label_1fd7d0;
    }
    ctx->pc = 0x1FD7C8u;
    {
        const bool branch_taken_0x1fd7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fd7c8) {
            ctx->pc = 0x1FD7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD7C8u;
            // 0x1fd7cc: 0x8c630024  lw          $v1, 0x24($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD7F4u;
            goto label_1fd7f4;
        }
    }
    ctx->pc = 0x1FD7D0u;
label_1fd7d0:
    // 0x1fd7d0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x1fd7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1fd7d4:
    // 0x1fd7d4: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1fd7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fd7d8:
    // 0x1fd7d8: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x1fd7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
label_1fd7dc:
    // 0x1fd7dc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1fd7dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1fd7e0:
    // 0x1fd7e0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1fd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1fd7e4:
    // 0x1fd7e4: 0x60f809  jalr        $v1
label_1fd7e8:
    if (ctx->pc == 0x1FD7E8u) {
        ctx->pc = 0x1FD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7E4u;
        // 0x1fd7e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD7ECu;
        goto label_1fd7ec;
    }
    ctx->pc = 0x1FD7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD7ECu);
        ctx->pc = 0x1FD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7E4u;
        // 0x1fd7e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD7E4u, 0x1FD7ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD7ECu;
label_1fd7ec:
    // 0x1fd7ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1fd7f0:
    if (ctx->pc == 0x1FD7F0u) {
        ctx->pc = 0x1FD7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7ECu;
        // 0x1fd7f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD7F4u;
        goto label_1fd7f4;
    }
    ctx->pc = 0x1FD7ECu;
    {
        const bool branch_taken_0x1fd7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7ECu;
        // 0x1fd7f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7ec) {
            ctx->pc = 0x1FD800u;
            goto label_1fd800;
        }
    }
    ctx->pc = 0x1FD7F4u;
label_1fd7f4:
    // 0x1fd7f4: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
label_1fd7f8:
    if (ctx->pc == 0x1FD7F8u) {
        ctx->pc = 0x1FD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7F4u;
        // 0x1fd7f8: 0x8462002c  lh          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD7FCu;
        goto label_1fd7fc;
    }
    ctx->pc = 0x1FD7F4u;
    {
        const bool branch_taken_0x1fd7f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd7f4) {
            ctx->pc = 0x1FD7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD7F4u;
            // 0x1fd7f8: 0x8462002c  lh          $v0, 0x2C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd7c8;
        }
    }
    ctx->pc = 0x1FD7FCu;
label_1fd7fc:
    // 0x1fd7fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd800:
    // 0x1fd800: 0x3e00008  jr          $ra
label_1fd804:
    if (ctx->pc == 0x1FD804u) {
        ctx->pc = 0x1FD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD800u;
        // 0x1fd804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD808u;
        goto label_1fd808;
    }
    ctx->pc = 0x1FD800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD800u;
        // 0x1fd804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD808u;
label_1fd808:
    // 0x1fd808: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fd808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fd80c:
    // 0x1fd80c: 0x0  nop
    ctx->pc = 0x1fd80cu;
    // NOP
label_1fd810:
    // 0x1fd810: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fd810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fd814:
    // 0x1fd814: 0x0  nop
    ctx->pc = 0x1fd814u;
    // NOP
label_1fd818:
    // 0x1fd818: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1fd818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fd81c:
    // 0x1fd81c: 0x0  nop
    ctx->pc = 0x1fd81cu;
    // NOP
    ctx->pc = 0x1fd820u;
}
