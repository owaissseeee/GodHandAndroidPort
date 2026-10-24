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

// Function: func_001B1AE8
// Address: 0x1b1ae8 - 0x1b1b38
void func_001B1AE8_0x1b1ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B1AE8_0x1b1ae8");
#endif

    switch (ctx->pc) {
        case 0x1b1b0cu: goto label_1b1b0c;
        case 0x1b1b24u: goto label_1b1b24;
        default: break;
    }

    ctx->pc = 0x1b1ae8u;

    // 0x1b1ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1aec: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1b1aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1b1af0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b1af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b1af4: 0x8c626068  lw          $v0, 0x6068($v1)
    ctx->pc = 0x1b1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786068u));
    // 0x1b1af8: 0x24706068  addiu       $s0, $v1, 0x6068
    ctx->pc = 0x1b1af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24680));
    // 0x1b1afc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1AFCu;
    {
        const bool branch_taken_0x1b1afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AFCu;
        // 0x1b1b00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1afc) {
            ctx->pc = 0x1B1B24u;
            goto label_1b1b24;
        }
    }
    ctx->pc = 0x1B1B04u;
    // 0x1b1b04: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1B1B04u;
    SET_GPR_U32(ctx, 31, 0x1B1B0Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1B1B04u, 0x1B1B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B0Cu;
label_1b1b0c:
    // 0x1b1b0c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b1b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b1b10: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1b1b10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1b1b14: 0x24a583a0  addiu       $a1, $a1, -0x7C60
    ctx->pc = 0x1b1b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935456));
    // 0x1b1b18: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1b1b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1b1b1c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1B1B1Cu;
    SET_GPR_U32(ctx, 31, 0x1B1B24u);
    ctx->pc = 0x1B1B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B1Cu;
    // 0x1b1b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1B1B1Cu, 0x1B1B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B24u;
label_1b1b24:
    // 0x1b1b24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1b2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b1b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1b30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B30u;
        // 0x1b1b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1B38u;
}
