#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __tf17__class_type_info
// Address: 0x7c9b30 - 0x7c9b80
void ps2___tf17__class_type_info_0x7c9b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf17__class_type_info_0x7c9b30");
#endif

    switch (ctx->pc) {
        case 0x7c9b54u: goto label_7c9b54;
        case 0x7c9b6cu: goto label_7c9b6c;
        default: break;
    }

    ctx->pc = 0x7c9b30u;

    // 0x7c9b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c9b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c9b34: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c9b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c9b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7c9b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7c9b3c: 0x8c6258d8  lw          $v0, 0x58D8($v1)
    ctx->pc = 0x7c9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D58D8u));
    // 0x7c9b40: 0x247058d8  addiu       $s0, $v1, 0x58D8
    ctx->pc = 0x7c9b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22744));
    // 0x7c9b44: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C9B44u;
    {
        const bool branch_taken_0x7c9b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C9B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9B44u;
        // 0x7c9b48: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9b44) {
            ctx->pc = 0x7C9B6Cu;
            goto label_7c9b6c;
        }
    }
    ctx->pc = 0x7C9B4Cu;
    // 0x7c9b4c: 0xc1f2712  jal         func_7C9C48
    ctx->pc = 0x7C9B4Cu;
    SET_GPR_U32(ctx, 31, 0x7C9B54u);
    ctx->pc = 0x7C9C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9C48u, 0x7C9B4Cu, 0x7C9B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9B54u;
label_7c9b54:
    // 0x7c9b54: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c9b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c9b58: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7c9b58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7c9b5c: 0x24a50fc8  addiu       $a1, $a1, 0xFC8
    ctx->pc = 0x7c9b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4040));
    // 0x7c9b60: 0x24c658e8  addiu       $a2, $a2, 0x58E8
    ctx->pc = 0x7c9b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22760));
    // 0x7c9b64: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7C9B64u;
    SET_GPR_U32(ctx, 31, 0x7C9B6Cu);
    ctx->pc = 0x7C9B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9B64u;
    // 0x7c9b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7C9B64u, 0x7C9B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9B6Cu;
label_7c9b6c:
    // 0x7c9b6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7c9b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9b70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c9b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c9b74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7c9b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9b78: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9B78u;
        // 0x7c9b7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9B80u;
}
} // namespace gh_mcport
