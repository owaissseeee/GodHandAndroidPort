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

// Function: func_002E9AF0
// Address: 0x2e9af0 - 0x2e9b40
void func_002E9AF0_0x2e9af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E9AF0_0x2e9af0");
#endif

    switch (ctx->pc) {
        case 0x2e9b14u: goto label_2e9b14;
        case 0x2e9b2cu: goto label_2e9b2c;
        default: break;
    }

    ctx->pc = 0x2e9af0u;

    // 0x2e9af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e9af4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2e9af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2e9af8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e9af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e9afc: 0x8c626428  lw          $v0, 0x6428($v1)
    ctx->pc = 0x2e9afcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786428u));
    // 0x2e9b00: 0x24706428  addiu       $s0, $v1, 0x6428
    ctx->pc = 0x2e9b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25640));
    // 0x2e9b04: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E9B04u;
    {
        const bool branch_taken_0x2e9b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B04u;
        // 0x2e9b08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b04) {
            ctx->pc = 0x2E9B2Cu;
            goto label_2e9b2c;
        }
    }
    ctx->pc = 0x2E9B0Cu;
    // 0x2e9b0c: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2E9B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E9B14u);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2E9B0Cu, 0x2E9B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B14u;
label_2e9b14:
    // 0x2e9b14: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e9b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e9b18: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2e9b18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2e9b1c: 0x24a5e768  addiu       $a1, $a1, -0x1898
    ctx->pc = 0x2e9b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961000));
    // 0x2e9b20: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2e9b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2e9b24: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2E9B24u;
    SET_GPR_U32(ctx, 31, 0x2E9B2Cu);
    ctx->pc = 0x2E9B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B24u;
    // 0x2e9b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2E9B24u, 0x2E9B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B2Cu;
label_2e9b2c:
    // 0x2e9b2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e9b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9b34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e9b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9b38: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B38u;
        // 0x2e9b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9B40u;
}
