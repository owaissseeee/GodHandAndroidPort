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

// Function: func_001C8F30
// Address: 0x1c8f30 - 0x1c8f80
void func_001C8F30_0x1c8f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C8F30_0x1c8f30");
#endif

    switch (ctx->pc) {
        case 0x1c8f54u: goto label_1c8f54;
        case 0x1c8f6cu: goto label_1c8f6c;
        default: break;
    }

    ctx->pc = 0x1c8f30u;

    // 0x1c8f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8f34: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1c8f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1c8f38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c8f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c8f3c: 0x8c6258b8  lw          $v0, 0x58B8($v1)
    ctx->pc = 0x1c8f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7858B8u));
    // 0x1c8f40: 0x247058b8  addiu       $s0, $v1, 0x58B8
    ctx->pc = 0x1c8f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22712));
    // 0x1c8f44: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8F44u;
    {
        const bool branch_taken_0x1c8f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F44u;
        // 0x1c8f48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f44) {
            ctx->pc = 0x1C8F6Cu;
            goto label_1c8f6c;
        }
    }
    ctx->pc = 0x1C8F4Cu;
    // 0x1c8f4c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1C8F4Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F54u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1C8F4Cu, 0x1C8F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F54u;
label_1c8f54:
    // 0x1c8f54: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1c8f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1c8f58: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1c8f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1c8f5c: 0x24a59e90  addiu       $a1, $a1, -0x6170
    ctx->pc = 0x1c8f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942352));
    // 0x1c8f60: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1c8f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1c8f64: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1C8F64u;
    SET_GPR_U32(ctx, 31, 0x1C8F6Cu);
    ctx->pc = 0x1C8F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F64u;
    // 0x1c8f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1C8F64u, 0x1C8F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F6Cu;
label_1c8f6c:
    // 0x1c8f6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c8f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c8f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8f78: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F78u;
        // 0x1c8f7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F80u;
}
