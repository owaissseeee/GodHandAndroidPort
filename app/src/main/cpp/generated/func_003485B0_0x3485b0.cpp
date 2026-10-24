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

// Function: func_003485B0
// Address: 0x3485b0 - 0x348610
void func_003485B0_0x3485b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003485B0_0x3485b0");
#endif

    switch (ctx->pc) {
        case 0x3485b0u: goto label_3485b0;
        case 0x3485b4u: goto label_3485b4;
        case 0x3485b8u: goto label_3485b8;
        case 0x3485bcu: goto label_3485bc;
        case 0x3485c0u: goto label_3485c0;
        case 0x3485c4u: goto label_3485c4;
        case 0x3485c8u: goto label_3485c8;
        case 0x3485ccu: goto label_3485cc;
        case 0x3485d0u: goto label_3485d0;
        case 0x3485d4u: goto label_3485d4;
        case 0x3485d8u: goto label_3485d8;
        case 0x3485dcu: goto label_3485dc;
        case 0x3485e0u: goto label_3485e0;
        case 0x3485e4u: goto label_3485e4;
        case 0x3485e8u: goto label_3485e8;
        case 0x3485ecu: goto label_3485ec;
        case 0x3485f0u: goto label_3485f0;
        case 0x3485f4u: goto label_3485f4;
        case 0x3485f8u: goto label_3485f8;
        case 0x3485fcu: goto label_3485fc;
        case 0x348600u: goto label_348600;
        case 0x348604u: goto label_348604;
        case 0x348608u: goto label_348608;
        case 0x34860cu: goto label_34860c;
        default: break;
    }

    ctx->pc = 0x3485b0u;

label_3485b0:
    // 0x3485b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3485b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3485b4:
    // 0x3485b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3485b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3485b8:
    // 0x3485b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3485b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3485bc:
    // 0x3485bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3485bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3485c0:
    // 0x3485c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3485c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3485c4:
    // 0x3485c4: 0xc0d225a  jal         func_348968
label_3485c8:
    if (ctx->pc == 0x3485C8u) {
        ctx->pc = 0x3485C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485C4u;
        // 0x3485c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485CCu;
        goto label_3485cc;
    }
    ctx->pc = 0x3485C4u;
    SET_GPR_U32(ctx, 31, 0x3485CCu);
    ctx->pc = 0x3485C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3485C4u;
    // 0x3485c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348968u, 0x3485C4u, 0x3485CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3485CCu;
label_3485cc:
    // 0x3485cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3485ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3485d0:
    // 0x3485d0: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_3485d4:
    if (ctx->pc == 0x3485D4u) {
        ctx->pc = 0x3485D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485D0u;
        // 0x3485d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485D8u;
        goto label_3485d8;
    }
    ctx->pc = 0x3485D0u;
    {
        const bool branch_taken_0x3485d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3485d0) {
            ctx->pc = 0x3485D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3485D0u;
            // 0x3485d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3485FCu;
            goto label_3485fc;
        }
    }
    ctx->pc = 0x3485D8u;
label_3485d8:
    // 0x3485d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3485d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3485dc:
    // 0x3485dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3485e0:
    if (ctx->pc == 0x3485E0u) {
        ctx->pc = 0x3485E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485DCu;
        // 0x3485e0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485E4u;
        goto label_3485e4;
    }
    ctx->pc = 0x3485DCu;
    {
        const bool branch_taken_0x3485dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3485E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485DCu;
        // 0x3485e0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3485dc) {
            ctx->pc = 0x3485F8u;
            goto label_3485f8;
        }
    }
    ctx->pc = 0x3485E4u;
label_3485e4:
    // 0x3485e4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3485e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3485e8:
    // 0x3485e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3485ec:
    if (ctx->pc == 0x3485ECu) {
        ctx->pc = 0x3485ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485E8u;
        // 0x3485ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485F0u;
        goto label_3485f0;
    }
    ctx->pc = 0x3485E8u;
    {
        const bool branch_taken_0x3485e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3485e8) {
            ctx->pc = 0x3485ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3485E8u;
            // 0x3485ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3485FCu;
            goto label_3485fc;
        }
    }
    ctx->pc = 0x3485F0u;
label_3485f0:
    // 0x3485f0: 0x40f809  jalr        $v0
label_3485f4:
    if (ctx->pc == 0x3485F4u) {
        ctx->pc = 0x3485F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485F0u;
        // 0x3485f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3485F8u;
        goto label_3485f8;
    }
    ctx->pc = 0x3485F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3485F8u);
        ctx->pc = 0x3485F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3485F0u;
        // 0x3485f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3485F0u, 0x3485F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3485F8u;
label_3485f8:
    // 0x3485f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3485f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3485fc:
    // 0x3485fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3485fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_348600:
    // 0x348600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x348600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_348604:
    // 0x348604: 0x3e00008  jr          $ra
label_348608:
    if (ctx->pc == 0x348608u) {
        ctx->pc = 0x348608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348604u;
        // 0x348608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34860Cu;
        goto label_34860c;
    }
    ctx->pc = 0x348604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348604u;
        // 0x348608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34860Cu;
label_34860c:
    // 0x34860c: 0x0  nop
    ctx->pc = 0x34860cu;
    // NOP
    ctx->pc = 0x348610u;
}
