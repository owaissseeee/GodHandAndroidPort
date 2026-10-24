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

// Function: func_002B4188
// Address: 0x2b4188 - 0x2b41f0
void func_002B4188_0x2b4188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4188_0x2b4188");
#endif

    switch (ctx->pc) {
        case 0x2b41bcu: goto label_2b41bc;
        case 0x2b41d0u: goto label_2b41d0;
        case 0x2b41e0u: goto label_2b41e0;
        default: break;
    }

    ctx->pc = 0x2b4188u;

    // 0x2b4188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b418c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b418cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b4190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4198: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x2b4198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2b419c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B419Cu;
    {
        const bool branch_taken_0x2b419c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B41A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B419Cu;
        // 0x2b41a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b419c) {
            ctx->pc = 0x2B41B4u;
            goto label_2b41b4;
        }
    }
    ctx->pc = 0x2B41A4u;
    // 0x2b41a4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B41A4u;
    {
        const bool branch_taken_0x2b41a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b41a4) {
            ctx->pc = 0x2B41C8u;
            goto label_2b41c8;
        }
    }
    ctx->pc = 0x2B41ACu;
    // 0x2b41ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B41ACu;
    {
        const bool branch_taken_0x2b41ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41ACu;
        // 0x2b41b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41ac) {
            ctx->pc = 0x2B41E4u;
            goto label_2b41e4;
        }
    }
    ctx->pc = 0x2B41B4u;
label_2b41b4:
    // 0x2b41b4: 0xc0ad07c  jal         func_2B41F0
    ctx->pc = 0x2B41B4u;
    SET_GPR_U32(ctx, 31, 0x2B41BCu);
    ctx->pc = 0x2B41B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B41B4u;
    // 0x2b41b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B41F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B41F0u, 0x2B41B4u, 0x2B41BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41BCu;
label_2b41bc:
    // 0x2b41bc: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x2b41bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2b41c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b41c4: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2b41c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
label_2b41c8:
    // 0x2b41c8: 0xc0ad08a  jal         func_2B4228
    ctx->pc = 0x2B41C8u;
    SET_GPR_U32(ctx, 31, 0x2B41D0u);
    ctx->pc = 0x2B41CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B41C8u;
    // 0x2b41cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4228u, 0x2B41C8u, 0x2B41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41D0u;
label_2b41d0:
    // 0x2b41d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B41D0u;
    {
        const bool branch_taken_0x2b41d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b41d0) {
            ctx->pc = 0x2B41D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B41D0u;
            // 0x2b41d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B41E4u;
            goto label_2b41e4;
        }
    }
    ctx->pc = 0x2B41D8u;
    // 0x2b41d8: 0xc0ad0bc  jal         func_2B42F0
    ctx->pc = 0x2B41D8u;
    SET_GPR_U32(ctx, 31, 0x2B41E0u);
    ctx->pc = 0x2B41DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B41D8u;
    // 0x2b41dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B42F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B42F0u, 0x2B41D8u, 0x2B41E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41E0u;
label_2b41e0:
    // 0x2b41e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b41e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b41e4:
    // 0x2b41e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b41e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b41e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B41E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41E8u;
        // 0x2b41ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B41E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B41F0u;
}
