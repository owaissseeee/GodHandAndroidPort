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

// Function: KeySlotTable_set
// Address: 0x2bb0c8 - 0x2bb138
void KeySlotTable_set_0x2bb0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeySlotTable_set_0x2bb0c8");
#endif

    switch (ctx->pc) {
        case 0x2bb0ecu: goto label_2bb0ec;
        case 0x2bb104u: goto label_2bb104;
        default: break;
    }

    ctx->pc = 0x2bb0c8u;

    // 0x2bb0c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bb0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bb0cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bb0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2bb0d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2bb0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2bb0d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bb0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb0d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bb0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb0dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bb0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bb0e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bb0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bb0e4: 0xc0aec1a  jal         func_2BB068
    ctx->pc = 0x2BB0E4u;
    SET_GPR_U32(ctx, 31, 0x2BB0ECu);
    ctx->pc = 0x2BB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0E4u;
    // 0x2bb0e8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB068u, 0x2BB0E4u, 0x2BB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB0ECu;
label_2bb0ec:
    // 0x2bb0ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB0ECu;
    {
        const bool branch_taken_0x2bb0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb0ec) {
            ctx->pc = 0x2BB0FCu;
            goto label_2bb0fc;
        }
    }
    ctx->pc = 0x2BB0F4u;
    // 0x2bb0f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB0F4u;
    {
        const bool branch_taken_0x2bb0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0F4u;
        // 0x2bb0f8: 0xac510004  sw          $s1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0f4) {
            ctx->pc = 0x2BB118u;
            goto label_2bb118;
        }
    }
    ctx->pc = 0x2BB0FCu;
label_2bb0fc:
    // 0x2bb0fc: 0xc0aec26  jal         func_2BB098
    ctx->pc = 0x2BB0FCu;
    SET_GPR_U32(ctx, 31, 0x2BB104u);
    ctx->pc = 0x2BB100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0FCu;
    // 0x2bb100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB098u, 0x2BB0FCu, 0x2BB104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB104u;
label_2bb104:
    // 0x2bb104: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB104u;
    {
        const bool branch_taken_0x2bb104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb104) {
            ctx->pc = 0x2BB108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB104u;
            // 0x2bb108: 0xac510004  sw          $s1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB114u;
            goto label_2bb114;
        }
    }
    ctx->pc = 0x2BB10Cu;
    // 0x2bb10c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB10Cu;
    {
        const bool branch_taken_0x2bb10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB10Cu;
        // 0x2bb110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb10c) {
            ctx->pc = 0x2BB11Cu;
            goto label_2bb11c;
        }
    }
    ctx->pc = 0x2BB114u;
label_2bb114:
    // 0x2bb114: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2bb114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_2bb118:
    // 0x2bb118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bb118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb11c:
    // 0x2bb11c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2bb11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb120: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bb120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb124: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2bb124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb12c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB12Cu;
        // 0x2bb130: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB134u;
    // 0x2bb134: 0x0  nop
    ctx->pc = 0x2bb134u;
    // NOP
    ctx->pc = 0x2bb138u;
}
