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

// Function: __eh_rtime_match
// Address: 0x3206d0 - 0x320718
void ps2___eh_rtime_match_0x3206d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___eh_rtime_match_0x3206d0");
#endif

    switch (ctx->pc) {
        case 0x3206d0u: goto label_3206d0;
        case 0x3206d4u: goto label_3206d4;
        case 0x3206d8u: goto label_3206d8;
        case 0x3206dcu: goto label_3206dc;
        case 0x3206e0u: goto label_3206e0;
        case 0x3206e4u: goto label_3206e4;
        case 0x3206e8u: goto label_3206e8;
        case 0x3206ecu: goto label_3206ec;
        case 0x3206f0u: goto label_3206f0;
        case 0x3206f4u: goto label_3206f4;
        case 0x3206f8u: goto label_3206f8;
        case 0x3206fcu: goto label_3206fc;
        case 0x320700u: goto label_320700;
        case 0x320704u: goto label_320704;
        case 0x320708u: goto label_320708;
        case 0x32070cu: goto label_32070c;
        case 0x320710u: goto label_320710;
        case 0x320714u: goto label_320714;
        default: break;
    }

    ctx->pc = 0x3206d0u;

label_3206d0:
    // 0x3206d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3206d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3206d4:
    // 0x3206d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3206d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3206d8:
    // 0x3206d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3206d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3206dc:
    // 0x3206dc: 0xc0c80d8  jal         func_320360
label_3206e0:
    if (ctx->pc == 0x3206E0u) {
        ctx->pc = 0x3206E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206DCu;
        // 0x3206e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206E4u;
        goto label_3206e4;
    }
    ctx->pc = 0x3206DCu;
    SET_GPR_U32(ctx, 31, 0x3206E4u);
    ctx->pc = 0x3206E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3206DCu;
    // 0x3206e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320360u, 0x3206DCu, 0x3206E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3206E4u;
label_3206e4:
    // 0x3206e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3206e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3206e8:
    // 0x3206e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3206e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3206ec:
    // 0x3206ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3206f0:
    if (ctx->pc == 0x3206F0u) {
        ctx->pc = 0x3206F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206ECu;
        // 0x3206f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206F4u;
        goto label_3206f4;
    }
    ctx->pc = 0x3206ECu;
    {
        const bool branch_taken_0x3206ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3206F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206ECu;
        // 0x3206f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3206ec) {
            ctx->pc = 0x3206FCu;
            goto label_3206fc;
        }
    }
    ctx->pc = 0x3206F4u;
label_3206f4:
    // 0x3206f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3206f8:
    if (ctx->pc == 0x3206F8u) {
        ctx->pc = 0x3206F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206F4u;
        // 0x3206f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206FCu;
        goto label_3206fc;
    }
    ctx->pc = 0x3206F4u;
    {
        const bool branch_taken_0x3206f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3206F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206F4u;
        // 0x3206f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3206f4) {
            ctx->pc = 0x320708u;
            goto label_320708;
        }
    }
    ctx->pc = 0x3206FCu;
label_3206fc:
    // 0x3206fc: 0x40f809  jalr        $v0
label_320700:
    if (ctx->pc == 0x320700u) {
        ctx->pc = 0x320700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206FCu;
        // 0x320700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320704u;
        goto label_320704;
    }
    ctx->pc = 0x3206FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320704u);
        ctx->pc = 0x320700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206FCu;
        // 0x320700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3206FCu, 0x320704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320704u;
label_320704:
    // 0x320704: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x320704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_320708:
    // 0x320708: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x320708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32070c:
    // 0x32070c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32070cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320710:
    // 0x320710: 0x3e00008  jr          $ra
label_320714:
    if (ctx->pc == 0x320714u) {
        ctx->pc = 0x320714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320710u;
        // 0x320714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320718u;
        goto label_fallthrough_0x320710;
    }
    ctx->pc = 0x320710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320710u;
        // 0x320714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x320710:
    ctx->pc = 0x320718u;
}
