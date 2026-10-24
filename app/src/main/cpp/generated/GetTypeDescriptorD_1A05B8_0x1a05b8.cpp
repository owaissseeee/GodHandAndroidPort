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

// Function: GetTypeDescriptorD_1A05B8
// Address: 0x1a05b8 - 0x1a0608
void GetTypeDescriptorD_1A05B8_0x1a05b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTypeDescriptorD_1A05B8_0x1a05b8");
#endif

    switch (ctx->pc) {
        case 0x1a05dcu: goto label_1a05dc;
        case 0x1a05f4u: goto label_1a05f4;
        default: break;
    }

    ctx->pc = 0x1a05b8u;

    // 0x1a05b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a05b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a05bc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a05bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a05c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a05c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a05c4: 0x8c625ee8  lw          $v0, 0x5EE8($v1)
    ctx->pc = 0x1a05c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785EE8u));
    // 0x1a05c8: 0x24705ee8  addiu       $s0, $v1, 0x5EE8
    ctx->pc = 0x1a05c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24296));
    // 0x1a05cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A05CCu;
    {
        const bool branch_taken_0x1a05cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A05D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05CCu;
        // 0x1a05d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a05cc) {
            ctx->pc = 0x1A05F4u;
            goto label_1a05f4;
        }
    }
    ctx->pc = 0x1A05D4u;
    // 0x1a05d4: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x1A05D4u;
    SET_GPR_U32(ctx, 31, 0x1A05DCu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x1A05D4u, 0x1A05DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A05DCu;
label_1a05dc:
    // 0x1a05dc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a05dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a05e0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a05e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a05e4: 0x24a56b68  addiu       $a1, $a1, 0x6B68
    ctx->pc = 0x1a05e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    // 0x1a05e8: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x1a05e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x1a05ec: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A05ECu;
    SET_GPR_U32(ctx, 31, 0x1A05F4u);
    ctx->pc = 0x1A05F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A05ECu;
    // 0x1a05f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A05ECu, 0x1A05F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A05F4u;
label_1a05f4:
    // 0x1a05f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a05f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a05f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a05f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a05fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a05fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0600: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0600u;
        // 0x1a0604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0608u;
}
