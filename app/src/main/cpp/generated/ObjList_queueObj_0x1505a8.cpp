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

// Function: ObjList_queueObj
// Address: 0x1505a8 - 0x150608
void ObjList_queueObj_0x1505a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ObjList_queueObj_0x1505a8");
#endif

    switch (ctx->pc) {
        case 0x1505a8u: goto label_1505a8;
        case 0x1505acu: goto label_1505ac;
        case 0x1505b0u: goto label_1505b0;
        case 0x1505b4u: goto label_1505b4;
        case 0x1505b8u: goto label_1505b8;
        case 0x1505bcu: goto label_1505bc;
        case 0x1505c0u: goto label_1505c0;
        case 0x1505c4u: goto label_1505c4;
        case 0x1505c8u: goto label_1505c8;
        case 0x1505ccu: goto label_1505cc;
        case 0x1505d0u: goto label_1505d0;
        case 0x1505d4u: goto label_1505d4;
        case 0x1505d8u: goto label_1505d8;
        case 0x1505dcu: goto label_1505dc;
        case 0x1505e0u: goto label_1505e0;
        case 0x1505e4u: goto label_1505e4;
        case 0x1505e8u: goto label_1505e8;
        case 0x1505ecu: goto label_1505ec;
        case 0x1505f0u: goto label_1505f0;
        case 0x1505f4u: goto label_1505f4;
        case 0x1505f8u: goto label_1505f8;
        case 0x1505fcu: goto label_1505fc;
        case 0x150600u: goto label_150600;
        case 0x150604u: goto label_150604;
        default: break;
    }

    ctx->pc = 0x1505a8u;

label_1505a8:
    // 0x1505a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1505a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1505ac:
    // 0x1505ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1505acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1505b0:
    // 0x1505b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1505b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1505b4:
    // 0x1505b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1505b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1505b8:
    // 0x1505b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1505b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1505bc:
    // 0x1505bc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1505c0:
    if (ctx->pc == 0x1505C0u) {
        ctx->pc = 0x1505C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505BCu;
        // 0x1505c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1505C4u;
        goto label_1505c4;
    }
    ctx->pc = 0x1505BCu;
    {
        const bool branch_taken_0x1505bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1505C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505BCu;
        // 0x1505c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505bc) {
            ctx->pc = 0x1505F4u;
            goto label_1505f4;
        }
    }
    ctx->pc = 0x1505C4u;
label_1505c4:
    // 0x1505c4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1505c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1505c8:
    // 0x1505c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1505c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1505cc:
    // 0x1505cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1505ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1505d0:
    // 0x1505d0: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1505d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_1505d4:
    // 0x1505d4: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1505d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1505d8:
    // 0x1505d8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1505d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1505dc:
    // 0x1505dc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1505dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1505e0:
    // 0x1505e0: 0x40f809  jalr        $v0
label_1505e4:
    if (ctx->pc == 0x1505E4u) {
        ctx->pc = 0x1505E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505E0u;
        // 0x1505e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1505E8u;
        goto label_1505e8;
    }
    ctx->pc = 0x1505E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1505E8u);
        ctx->pc = 0x1505E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505E0u;
        // 0x1505e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1505E0u, 0x1505E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1505E8u;
label_1505e8:
    // 0x1505e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1505e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1505ec:
    // 0x1505ec: 0xc0aa600  jal         func_2A9800
label_1505f0:
    if (ctx->pc == 0x1505F0u) {
        ctx->pc = 0x1505F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505ECu;
        // 0x1505f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1505F4u;
        goto label_1505f4;
    }
    ctx->pc = 0x1505ECu;
    SET_GPR_U32(ctx, 31, 0x1505F4u);
    ctx->pc = 0x1505F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1505ECu;
    // 0x1505f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9800u, 0x1505ECu, 0x1505F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505F4u;
label_1505f4:
    // 0x1505f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1505f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1505f8:
    // 0x1505f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1505f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1505fc:
    // 0x1505fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1505fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150600:
    // 0x150600: 0x3e00008  jr          $ra
label_150604:
    if (ctx->pc == 0x150604u) {
        ctx->pc = 0x150604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150600u;
        // 0x150604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150608u;
        goto label_fallthrough_0x150600;
    }
    ctx->pc = 0x150600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150600u;
        // 0x150604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x150600:
    ctx->pc = 0x150608u;
}
