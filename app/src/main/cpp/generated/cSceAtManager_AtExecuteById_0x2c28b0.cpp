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

// Function: cSceAtManager_AtExecuteById
// Address: 0x2c28b0 - 0x2c28f8
void cSceAtManager_AtExecuteById_0x2c28b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_AtExecuteById_0x2c28b0");
#endif

    switch (ctx->pc) {
        case 0x2c28b0u: goto label_2c28b0;
        case 0x2c28b4u: goto label_2c28b4;
        case 0x2c28b8u: goto label_2c28b8;
        case 0x2c28bcu: goto label_2c28bc;
        case 0x2c28c0u: goto label_2c28c0;
        case 0x2c28c4u: goto label_2c28c4;
        case 0x2c28c8u: goto label_2c28c8;
        case 0x2c28ccu: goto label_2c28cc;
        case 0x2c28d0u: goto label_2c28d0;
        case 0x2c28d4u: goto label_2c28d4;
        case 0x2c28d8u: goto label_2c28d8;
        case 0x2c28dcu: goto label_2c28dc;
        case 0x2c28e0u: goto label_2c28e0;
        case 0x2c28e4u: goto label_2c28e4;
        case 0x2c28e8u: goto label_2c28e8;
        case 0x2c28ecu: goto label_2c28ec;
        case 0x2c28f0u: goto label_2c28f0;
        case 0x2c28f4u: goto label_2c28f4;
        default: break;
    }

    ctx->pc = 0x2c28b0u;

label_2c28b0:
    // 0x2c28b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c28b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c28b4:
    // 0x2c28b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c28b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c28b8:
    // 0x2c28b8: 0xc0b0c46  jal         func_2C3118
label_2c28bc:
    if (ctx->pc == 0x2C28BCu) {
        ctx->pc = 0x2C28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28B8u;
        // 0x2c28bc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C28C0u;
        goto label_2c28c0;
    }
    ctx->pc = 0x2C28B8u;
    SET_GPR_U32(ctx, 31, 0x2C28C0u);
    ctx->pc = 0x2C28BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C28B8u;
    // 0x2c28bc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x2C28B8u, 0x2C28C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C28C0u;
label_2c28c0:
    // 0x2c28c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c28c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c28c4:
    // 0x2c28c4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2c28c8:
    if (ctx->pc == 0x2C28C8u) {
        ctx->pc = 0x2C28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28C4u;
        // 0x2c28c8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C28CCu;
        goto label_2c28cc;
    }
    ctx->pc = 0x2C28C4u;
    {
        const bool branch_taken_0x2c28c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28C4u;
        // 0x2c28c8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28c4) {
            ctx->pc = 0x2C28E8u;
            goto label_2c28e8;
        }
    }
    ctx->pc = 0x2C28CCu;
label_2c28cc:
    // 0x2c28cc: 0x90830035  lbu         $v1, 0x35($a0)
    ctx->pc = 0x2c28ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
label_2c28d0:
    // 0x2c28d0: 0x24422650  addiu       $v0, $v0, 0x2650
    ctx->pc = 0x2c28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9808));
label_2c28d4:
    // 0x2c28d4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c28d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2c28d8:
    // 0x2c28d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c28d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c28dc:
    // 0x2c28dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c28dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c28e0:
    // 0x2c28e0: 0x40f809  jalr        $v0
label_2c28e4:
    if (ctx->pc == 0x2C28E4u) {
        ctx->pc = 0x2C28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28E0u;
        // 0x2c28e4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C28E8u;
        goto label_2c28e8;
    }
    ctx->pc = 0x2C28E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C28E8u);
        ctx->pc = 0x2C28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28E0u;
        // 0x2c28e4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C28E0u, 0x2C28E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C28E8u;
label_2c28e8:
    // 0x2c28e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c28e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c28ec:
    // 0x2c28ec: 0x3e00008  jr          $ra
label_2c28f0:
    if (ctx->pc == 0x2C28F0u) {
        ctx->pc = 0x2C28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28ECu;
        // 0x2c28f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C28F4u;
        goto label_2c28f4;
    }
    ctx->pc = 0x2C28ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28ECu;
        // 0x2c28f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C28ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C28F4u;
label_2c28f4:
    // 0x2c28f4: 0x0  nop
    ctx->pc = 0x2c28f4u;
    // NOP
    ctx->pc = 0x2c28f8u;
}
