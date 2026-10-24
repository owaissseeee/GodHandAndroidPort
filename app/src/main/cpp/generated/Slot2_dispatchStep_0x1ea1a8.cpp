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

// Function: Slot2_dispatchStep
// Address: 0x1ea1a8 - 0x1ea1f8
void Slot2_dispatchStep_0x1ea1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_dispatchStep_0x1ea1a8");
#endif

    switch (ctx->pc) {
        case 0x1ea1a8u: goto label_1ea1a8;
        case 0x1ea1acu: goto label_1ea1ac;
        case 0x1ea1b0u: goto label_1ea1b0;
        case 0x1ea1b4u: goto label_1ea1b4;
        case 0x1ea1b8u: goto label_1ea1b8;
        case 0x1ea1bcu: goto label_1ea1bc;
        case 0x1ea1c0u: goto label_1ea1c0;
        case 0x1ea1c4u: goto label_1ea1c4;
        case 0x1ea1c8u: goto label_1ea1c8;
        case 0x1ea1ccu: goto label_1ea1cc;
        case 0x1ea1d0u: goto label_1ea1d0;
        case 0x1ea1d4u: goto label_1ea1d4;
        case 0x1ea1d8u: goto label_1ea1d8;
        case 0x1ea1dcu: goto label_1ea1dc;
        case 0x1ea1e0u: goto label_1ea1e0;
        case 0x1ea1e4u: goto label_1ea1e4;
        case 0x1ea1e8u: goto label_1ea1e8;
        case 0x1ea1ecu: goto label_1ea1ec;
        case 0x1ea1f0u: goto label_1ea1f0;
        case 0x1ea1f4u: goto label_1ea1f4;
        default: break;
    }

    ctx->pc = 0x1ea1a8u;

label_1ea1a8:
    // 0x1ea1a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ea1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ea1ac:
    // 0x1ea1ac: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1ea1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_1ea1b0:
    // 0x1ea1b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ea1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ea1b4:
    // 0x1ea1b4: 0x2463e528  addiu       $v1, $v1, -0x1AD8
    ctx->pc = 0x1ea1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960424));
label_1ea1b8:
    // 0x1ea1b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ea1bc:
    // 0x1ea1bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ea1c0:
    // 0x1ea1c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ea1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ea1c4:
    // 0x1ea1c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ea1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ea1c8:
    // 0x1ea1c8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1ea1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea1cc:
    // 0x1ea1cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea1d0:
    // 0x1ea1d0: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1ea1d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1ea1d4:
    // 0x1ea1d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ea1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ea1d8:
    // 0x1ea1d8: 0x40f809  jalr        $v0
label_1ea1dc:
    if (ctx->pc == 0x1EA1DCu) {
        ctx->pc = 0x1EA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1D8u;
        // 0x1ea1dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1E0u;
        goto label_1ea1e0;
    }
    ctx->pc = 0x1EA1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA1E0u);
        ctx->pc = 0x1EA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1D8u;
        // 0x1ea1dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA1D8u, 0x1EA1E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA1E0u;
label_1ea1e0:
    // 0x1ea1e0: 0xc07b022  jal         func_1EC088
label_1ea1e4:
    if (ctx->pc == 0x1EA1E4u) {
        ctx->pc = 0x1EA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1E0u;
        // 0x1ea1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1E8u;
        goto label_1ea1e8;
    }
    ctx->pc = 0x1EA1E0u;
    SET_GPR_U32(ctx, 31, 0x1EA1E8u);
    ctx->pc = 0x1EA1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA1E0u;
    // 0x1ea1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC088u, 0x1EA1E0u, 0x1EA1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA1E8u;
label_1ea1e8:
    // 0x1ea1e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ea1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea1ec:
    // 0x1ea1ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea1f0:
    // 0x1ea1f0: 0x3e00008  jr          $ra
label_1ea1f4:
    if (ctx->pc == 0x1EA1F4u) {
        ctx->pc = 0x1EA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1F0u;
        // 0x1ea1f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1F8u;
        goto label_fallthrough_0x1ea1f0;
    }
    ctx->pc = 0x1EA1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1F0u;
        // 0x1ea1f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ea1f0:
    ctx->pc = 0x1EA1F8u;
}
