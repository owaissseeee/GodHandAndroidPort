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

// Function: func_001B3978
// Address: 0x1b3978 - 0x1b39d0
void func_001B3978_0x1b3978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B3978_0x1b3978");
#endif

    switch (ctx->pc) {
        case 0x1b399cu: goto label_1b399c;
        case 0x1b39b4u: goto label_1b39b4;
        default: break;
    }

    ctx->pc = 0x1b3978u;

    // 0x1b3978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b397c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1b397cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1b3980: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b3980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b3984: 0x8c6260a8  lw          $v0, 0x60A8($v1)
    ctx->pc = 0x1b3984u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7860A8u));
    // 0x1b3988: 0x247060a8  addiu       $s0, $v1, 0x60A8
    ctx->pc = 0x1b3988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24744));
    // 0x1b398c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B398Cu;
    {
        const bool branch_taken_0x1b398c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B398Cu;
        // 0x1b3990: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b398c) {
            ctx->pc = 0x1B39B4u;
            goto label_1b39b4;
        }
    }
    ctx->pc = 0x1B3994u;
    // 0x1b3994: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1B3994u;
    SET_GPR_U32(ctx, 31, 0x1B399Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1B3994u, 0x1B399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B399Cu;
label_1b399c:
    // 0x1b399c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b399cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b39a0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1b39a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1b39a4: 0x24a58700  addiu       $a1, $a1, -0x7900
    ctx->pc = 0x1b39a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936320));
    // 0x1b39a8: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1b39a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1b39ac: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1B39ACu;
    SET_GPR_U32(ctx, 31, 0x1B39B4u);
    ctx->pc = 0x1B39B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B39ACu;
    // 0x1b39b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1B39ACu, 0x1B39B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39B4u;
label_1b39b4:
    // 0x1b39b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b39b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b39b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b39bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b39bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b39c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B39C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B39C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39C0u;
        // 0x1b39c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B39C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B39C8u;
    // 0x1b39c8: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x1b39c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b39cc: 0x0  nop
    ctx->pc = 0x1b39ccu;
    // NOP
    ctx->pc = 0x1b39d0u;
}
