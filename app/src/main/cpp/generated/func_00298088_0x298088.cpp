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

// Function: func_00298088
// Address: 0x298088 - 0x2980e8
void func_00298088_0x298088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00298088_0x298088");
#endif

    switch (ctx->pc) {
        case 0x2980b0u: goto label_2980b0;
        default: break;
    }

    ctx->pc = 0x298088u;

    // 0x298088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29808c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29808cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x298090: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x298090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x298094: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x298094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298098: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x298098u;
    {
        const bool branch_taken_0x298098 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298098u;
        // 0x29809c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298098) {
            ctx->pc = 0x2980D4u;
            goto label_2980d4;
        }
    }
    ctx->pc = 0x2980A0u;
    // 0x2980a0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2980a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2980a4: 0x963002fe  lhu         $s0, 0x2FE($s1)
    ctx->pc = 0x2980a4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x2980a8: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x2980A8u;
    SET_GPR_U32(ctx, 31, 0x2980B0u);
    ctx->pc = 0x2980ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2980A8u;
    // 0x2980ac: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x2980A8u, 0x2980B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980B0u;
label_2980b0:
    // 0x2980b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2980b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980b4: 0x24020667  addiu       $v0, $zero, 0x667
    ctx->pc = 0x2980b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1639));
    // 0x2980b8: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2980B8u;
    {
        const bool branch_taken_0x2980b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2980BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980B8u;
        // 0x2980bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2980b8) {
            ctx->pc = 0x2980D8u;
            goto label_2980d8;
        }
    }
    ctx->pc = 0x2980C0u;
    // 0x2980c0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2980C0u;
    {
        const bool branch_taken_0x2980c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2980c0) {
            ctx->pc = 0x2980C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2980C0u;
            // 0x2980c4: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2980DCu;
            goto label_2980dc;
        }
    }
    ctx->pc = 0x2980C8u;
    // 0x2980c8: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x2980c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x2980cc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2980ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2980d0: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x2980d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_2980d4:
    // 0x2980d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2980d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2980d8:
    // 0x2980d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2980d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2980dc:
    // 0x2980dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2980dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2980e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2980E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2980E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980E0u;
        // 0x2980e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2980E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2980E8u;
}
