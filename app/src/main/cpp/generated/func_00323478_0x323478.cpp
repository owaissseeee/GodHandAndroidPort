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

// Function: func_00323478
// Address: 0x323478 - 0x3234d0
void func_00323478_0x323478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323478_0x323478");
#endif

    switch (ctx->pc) {
        case 0x32349cu: goto label_32349c;
        default: break;
    }

    ctx->pc = 0x323478u;

    // 0x323478: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x323478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x32347c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32347cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323480: 0x24c3aec8  addiu       $v1, $a2, -0x5138
    ctx->pc = 0x323480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946504));
    // 0x323484: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x323484u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3EAEC8u));
    // 0x323488: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x323488u;
    {
        const bool branch_taken_0x323488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323488u;
        // 0x32348c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323488) {
            ctx->pc = 0x323498u;
            goto label_323498;
        }
    }
    ctx->pc = 0x323490u;
    // 0x323490: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x323490u;
    {
        const bool branch_taken_0x323490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323490u;
        // 0x323494: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323490) {
            ctx->pc = 0x3234C8u;
            goto label_3234c8;
        }
    }
    ctx->pc = 0x323498u;
label_323498:
    // 0x323498: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x323498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_32349c:
    // 0x32349c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x32349cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3234a0: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x3234a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3234a4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3234A4u;
    {
        const bool branch_taken_0x3234a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3234A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3234A4u;
        // 0x3234a8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3234a4) {
            ctx->pc = 0x3234C8u;
            goto label_3234c8;
        }
    }
    ctx->pc = 0x3234ACu;
    // 0x3234ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3234acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3234b0: 0x24c3aec8  addiu       $v1, $a2, -0x5138
    ctx->pc = 0x3234b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946504));
    // 0x3234b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3234b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3234b8: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x3234b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3234bc: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3234BCu;
    {
        const bool branch_taken_0x3234bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3234bc) {
            ctx->pc = 0x3234C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3234BCu;
            // 0x3234c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32349Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32349c;
        }
    }
    ctx->pc = 0x3234C4u;
    // 0x3234c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3234c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3234c8:
    // 0x3234c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3234C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3234CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3234C8u;
        // 0x3234cc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3234C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3234D0u;
}
