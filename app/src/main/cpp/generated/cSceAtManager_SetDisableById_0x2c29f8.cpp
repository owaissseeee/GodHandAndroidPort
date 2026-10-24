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

// Function: cSceAtManager_SetDisableById
// Address: 0x2c29f8 - 0x2c2a48
void cSceAtManager_SetDisableById_0x2c29f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_SetDisableById_0x2c29f8");
#endif

    switch (ctx->pc) {
        case 0x2c2a1cu: goto label_2c2a1c;
        case 0x2c2a2cu: goto label_2c2a2c;
        default: break;
    }

    ctx->pc = 0x2c29f8u;

    // 0x2c29f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c29f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c29fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c29fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c2a00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c2a04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c2a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c2a0c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2A0Cu;
    {
        const bool branch_taken_0x2c2a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A0Cu;
        // 0x2c2a10: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a0c) {
            ctx->pc = 0x2C2A34u;
            goto label_2c2a34;
        }
    }
    ctx->pc = 0x2C2A14u;
    // 0x2c2a14: 0xc0b0c46  jal         func_2C3118
    ctx->pc = 0x2C2A14u;
    SET_GPR_U32(ctx, 31, 0x2C2A1Cu);
    ctx->pc = 0x2C2A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A14u;
    // 0x2c2a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x2C2A14u, 0x2C2A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A1Cu;
label_2c2a1c:
    // 0x2c2a1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2A1Cu;
    {
        const bool branch_taken_0x2c2a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A1Cu;
        // 0x2c2a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a1c) {
            ctx->pc = 0x2C2A34u;
            goto label_2c2a34;
        }
    }
    ctx->pc = 0x2C2A24u;
    // 0x2c2a24: 0xc0b0a68  jal         func_2C29A0
    ctx->pc = 0x2C2A24u;
    SET_GPR_U32(ctx, 31, 0x2C2A2Cu);
    ctx->pc = 0x2C2A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A24u;
    // 0x2c2a28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x2C2A24u, 0x2C2A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A2Cu;
label_2c2a2c:
    // 0x2c2a2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2A2Cu;
    {
        const bool branch_taken_0x2c2a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A2Cu;
        // 0x2c2a30: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a2c) {
            ctx->pc = 0x2C2A3Cu;
            goto label_2c2a3c;
        }
    }
    ctx->pc = 0x2C2A34u;
label_2c2a34:
    // 0x2c2a34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c2a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c2a3c:
    // 0x2c2a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2a40: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A40u;
        // 0x2c2a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2A48u;
}
