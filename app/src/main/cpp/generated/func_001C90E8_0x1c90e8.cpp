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

// Function: func_001C90E8
// Address: 0x1c90e8 - 0x1c9140
void func_001C90E8_0x1c90e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C90E8_0x1c90e8");
#endif

    switch (ctx->pc) {
        case 0x1c910cu: goto label_1c910c;
        case 0x1c9124u: goto label_1c9124;
        default: break;
    }

    ctx->pc = 0x1c90e8u;

    // 0x1c90e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c90e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c90ec: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1c90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1c90f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c90f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c90f4: 0x8c626168  lw          $v0, 0x6168($v1)
    ctx->pc = 0x1c90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786168u));
    // 0x1c90f8: 0x24706168  addiu       $s0, $v1, 0x6168
    ctx->pc = 0x1c90f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24936));
    // 0x1c90fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C90FCu;
    {
        const bool branch_taken_0x1c90fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90FCu;
        // 0x1c9100: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90fc) {
            ctx->pc = 0x1C9124u;
            goto label_1c9124;
        }
    }
    ctx->pc = 0x1C9104u;
    // 0x1c9104: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1C9104u;
    SET_GPR_U32(ctx, 31, 0x1C910Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1C9104u, 0x1C910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C910Cu;
label_1c910c:
    // 0x1c910c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1c910cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1c9110: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1c9110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1c9114: 0x24a59f78  addiu       $a1, $a1, -0x6088
    ctx->pc = 0x1c9114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942584));
    // 0x1c9118: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1c9118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1c911c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1C911Cu;
    SET_GPR_U32(ctx, 31, 0x1C9124u);
    ctx->pc = 0x1C9120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C911Cu;
    // 0x1c9120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1C911Cu, 0x1C9124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9124u;
label_1c9124:
    // 0x1c9124: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c9124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c912c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c912cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9130: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9130u;
        // 0x1c9134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9138u;
    // 0x1c9138: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x1c9138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
    // 0x1c913c: 0x0  nop
    ctx->pc = 0x1c913cu;
    // NOP
    ctx->pc = 0x1c9140u;
}
