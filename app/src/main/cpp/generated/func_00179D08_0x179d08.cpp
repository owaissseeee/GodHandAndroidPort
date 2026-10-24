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

// Function: func_00179D08
// Address: 0x179d08 - 0x179d58
void func_00179D08_0x179d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00179D08_0x179d08");
#endif

    switch (ctx->pc) {
        case 0x179d2cu: goto label_179d2c;
        case 0x179d44u: goto label_179d44;
        default: break;
    }

    ctx->pc = 0x179d08u;

    // 0x179d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x179d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179d0c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x179d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x179d10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x179d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x179d14: 0x8c625948  lw          $v0, 0x5948($v1)
    ctx->pc = 0x179d14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785948u));
    // 0x179d18: 0x24705948  addiu       $s0, $v1, 0x5948
    ctx->pc = 0x179d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22856));
    // 0x179d1c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x179D1Cu;
    {
        const bool branch_taken_0x179d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D1Cu;
        // 0x179d20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d1c) {
            ctx->pc = 0x179D44u;
            goto label_179d44;
        }
    }
    ctx->pc = 0x179D24u;
    // 0x179d24: 0xc0723cc  jal         func_1C8F30
    ctx->pc = 0x179D24u;
    SET_GPR_U32(ctx, 31, 0x179D2Cu);
    ctx->pc = 0x1C8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F30u, 0x179D24u, 0x179D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179D2Cu;
label_179d2c:
    // 0x179d2c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x179d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x179d30: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x179d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x179d34: 0x24a51900  addiu       $a1, $a1, 0x1900
    ctx->pc = 0x179d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6400));
    // 0x179d38: 0x24c658b8  addiu       $a2, $a2, 0x58B8
    ctx->pc = 0x179d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22712));
    // 0x179d3c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x179D3Cu;
    SET_GPR_U32(ctx, 31, 0x179D44u);
    ctx->pc = 0x179D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D3Cu;
    // 0x179d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x179D3Cu, 0x179D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179D44u;
label_179d44:
    // 0x179d44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x179d44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179d4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x179d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179d50: 0x3e00008  jr          $ra
    ctx->pc = 0x179D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D50u;
        // 0x179d54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179D58u;
}
