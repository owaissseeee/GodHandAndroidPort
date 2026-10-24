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

// Function: func_00150538
// Address: 0x150538 - 0x1505a8
void func_00150538_0x150538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150538_0x150538");
#endif

    switch (ctx->pc) {
        case 0x150550u: goto label_150550;
        case 0x15058cu: goto label_15058c;
        case 0x150594u: goto label_150594;
        default: break;
    }

    ctx->pc = 0x150538u;

    // 0x150538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15053c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15053cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x150540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150548: 0xc0aa5e8  jal         func_2A97A0
    ctx->pc = 0x150548u;
    SET_GPR_U32(ctx, 31, 0x150550u);
    ctx->pc = 0x15054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150548u;
    // 0x15054c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A97A0u, 0x150548u, 0x150550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150550u;
label_150550:
    // 0x150550: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x150550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150554: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x150554u;
    {
        const bool branch_taken_0x150554 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x150554) {
            ctx->pc = 0x150558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150554u;
            // 0x150558: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150564u;
            goto label_150564;
        }
    }
    ctx->pc = 0x15055Cu;
    // 0x15055c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15055Cu;
    {
        const bool branch_taken_0x15055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15055Cu;
        // 0x150560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15055c) {
            ctx->pc = 0x150594u;
            goto label_150594;
        }
    }
    ctx->pc = 0x150564u;
label_150564:
    // 0x150564: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x150564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x150568: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x150568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15056c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x15056cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x150570: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150570u;
    {
        const bool branch_taken_0x150570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150570u;
        // 0x150574: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150570) {
            ctx->pc = 0x15057Cu;
            goto label_15057c;
        }
    }
    ctx->pc = 0x150578u;
    // 0x150578: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x150578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_15057c:
    // 0x15057c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15057cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x150580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150584: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x150584u;
    SET_GPR_U32(ctx, 31, 0x15058Cu);
    ctx->pc = 0x150588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150584u;
    // 0x150588: 0x24060220  addiu       $a2, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x150584u, 0x15058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15058Cu;
label_15058c:
    // 0x15058c: 0xc053fe0  jal         func_14FF80
    ctx->pc = 0x15058Cu;
    SET_GPR_U32(ctx, 31, 0x150594u);
    ctx->pc = 0x150590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15058Cu;
    // 0x150590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF80u, 0x15058Cu, 0x150594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150594u;
label_150594:
    // 0x150594: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x150594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15059c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15059cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1505a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1505A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1505A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505A0u;
        // 0x1505a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1505A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1505A8u;
}
