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

// Function: InitObjectSetVtable_4E820_2FFC20
// Address: 0x2ffc20 - 0x2ffc60
void InitObjectSetVtable_4E820_2FFC20_0x2ffc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectSetVtable_4E820_2FFC20_0x2ffc20");
#endif

    switch (ctx->pc) {
        case 0x2ffc3cu: goto label_2ffc3c;
        default: break;
    }

    ctx->pc = 0x2ffc20u;

    // 0x2ffc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffc24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ffc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ffc28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ffc28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc2c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFC2Cu;
    {
        const bool branch_taken_0x2ffc2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC2Cu;
        // 0x2ffc30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc2c) {
            ctx->pc = 0x2FFC48u;
            goto label_2ffc48;
        }
    }
    ctx->pc = 0x2FFC34u;
    // 0x2ffc34: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2FFC34u;
    SET_GPR_U32(ctx, 31, 0x2FFC3Cu);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2FFC34u, 0x2FFC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC3Cu;
label_2ffc3c:
    // 0x2ffc3c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ffc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ffc40: 0x2463e820  addiu       $v1, $v1, -0x17E0
    ctx->pc = 0x2ffc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961184));
    // 0x2ffc44: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2ffc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_2ffc48:
    // 0x2ffc48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ffc48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffc50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ffc50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffc54: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC54u;
        // 0x2ffc58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFC5Cu;
    // 0x2ffc5c: 0x0  nop
    ctx->pc = 0x2ffc5cu;
    // NOP
    ctx->pc = 0x2ffc60u;
}
