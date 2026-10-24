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

// Function: GetTypeDescriptorB_1A00D0
// Address: 0x1a00d0 - 0x1a0120
void GetTypeDescriptorB_1A00D0_0x1a00d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTypeDescriptorB_1A00D0_0x1a00d0");
#endif

    switch (ctx->pc) {
        case 0x1a00f4u: goto label_1a00f4;
        case 0x1a010cu: goto label_1a010c;
        default: break;
    }

    ctx->pc = 0x1a00d0u;

    // 0x1a00d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a00d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a00d4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a00d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a00d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a00dc: 0x8c625ec8  lw          $v0, 0x5EC8($v1)
    ctx->pc = 0x1a00dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785EC8u));
    // 0x1a00e0: 0x24705ec8  addiu       $s0, $v1, 0x5EC8
    ctx->pc = 0x1a00e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24264));
    // 0x1a00e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A00E4u;
    {
        const bool branch_taken_0x1a00e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A00E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00E4u;
        // 0x1a00e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00e4) {
            ctx->pc = 0x1A010Cu;
            goto label_1a010c;
        }
    }
    ctx->pc = 0x1A00ECu;
    // 0x1a00ec: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x1A00ECu;
    SET_GPR_U32(ctx, 31, 0x1A00F4u);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x1A00ECu, 0x1A00F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A00F4u;
label_1a00f4:
    // 0x1a00f4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a00f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a00f8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a00f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a00fc: 0x24a56998  addiu       $a1, $a1, 0x6998
    ctx->pc = 0x1a00fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27032));
    // 0x1a0100: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x1a0100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x1a0104: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A0104u;
    SET_GPR_U32(ctx, 31, 0x1A010Cu);
    ctx->pc = 0x1A0108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0104u;
    // 0x1a0108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A0104u, 0x1A010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A010Cu;
label_1a010c:
    // 0x1a010c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a010cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0114: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a0114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0118: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0118u;
        // 0x1a011c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0120u;
}
