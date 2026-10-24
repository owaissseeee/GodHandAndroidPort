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

// Function: func_0034C0E8
// Address: 0x34c0e8 - 0x34c158
void func_0034C0E8_0x34c0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034C0E8_0x34c0e8");
#endif

    switch (ctx->pc) {
        case 0x34c148u: goto label_34c148;
        default: break;
    }

    ctx->pc = 0x34c0e8u;

    // 0x34c0e8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x34c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x34c0ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34c0ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34c0f0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x34c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x34c0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34c0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34c0f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c0fc: 0x24831310  addiu       $v1, $a0, 0x1310
    ctx->pc = 0x34c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
    // 0x34c100: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x34c100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x34c104: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x34c104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34c108: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c10c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x34c10cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c110: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34c110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34c114: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34c114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34c118: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x34c118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c11c: 0x10470006  beq         $v0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x34C11Cu;
    {
        const bool branch_taken_0x34c11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x34C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C11Cu;
        // 0x34c120: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c11c) {
            ctx->pc = 0x34C138u;
            goto label_34c138;
        }
    }
    ctx->pc = 0x34C124u;
    // 0x34c124: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34c124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34c128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34c128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c12c: 0x34a50409  ori         $a1, $a1, 0x409
    ctx->pc = 0x34c12cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
    // 0x34c130: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34C130u;
    ctx->pc = 0x34C134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C130u;
    // 0x34c134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34C130u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34C138u;
label_34c138:
    // 0x34c138: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x34c138u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x34c13c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x34c13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c140: 0xc0d3056  jal         func_34C158
    ctx->pc = 0x34C140u;
    SET_GPR_U32(ctx, 31, 0x34C148u);
    ctx->pc = 0x34C144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C140u;
    // 0x34c144: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C158u, 0x34C140u, 0x34C148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C148u;
label_34c148:
    // 0x34c148: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34c148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c14c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34c14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c150: 0x3e00008  jr          $ra
    ctx->pc = 0x34C150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C150u;
        // 0x34c154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C158u;
}
