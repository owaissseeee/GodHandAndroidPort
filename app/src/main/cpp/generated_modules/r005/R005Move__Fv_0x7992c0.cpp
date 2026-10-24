#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r005_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r005
{
// Function: R005Move__Fv
// Address: 0x7992c0 - 0x799310
void R005Move__Fv_0x7992c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R005Move__Fv_0x7992c0");
#endif

    switch (ctx->pc) {
        case 0x7992e8u: goto label_7992e8;
        case 0x7992fcu: goto label_7992fc;
        default: break;
    }

    ctx->pc = 0x7992c0u;

    // 0x7992c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7992c4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7992c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7992c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7992cc: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x7992d0: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x7992d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7992d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7992d8: 0x8e029e80  lw          $v0, -0x6180($s0)
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799E80u));
    // 0x7992dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7992dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992e0: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7992E0u;
    SET_GPR_U32(ctx, 31, 0x7992E8u);
    ctx->pc = 0x7992E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E0u;
    // 0x7992e4: 0x944503d0  lhu         $a1, 0x3D0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7992E0u, 0x7992E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992E8u;
label_7992e8:
    // 0x7992e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7992e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7992ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7992ECu;
    {
        const bool branch_taken_0x7992ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7992ec) {
            ctx->pc = 0x7992F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7992ECu;
            // 0x7992f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799300u;
            goto label_799300;
        }
    }
    ctx->pc = 0x7992F4u;
    // 0x7992f4: 0xc079238  jal         func_1E48E0
    ctx->pc = 0x7992F4u;
    SET_GPR_U32(ctx, 31, 0x7992FCu);
    ctx->pc = 0x7992F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F4u;
    // 0x7992f8: 0x8e049e80  lw          $a0, -0x6180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E48E0u, 0x7992F4u, 0x7992FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992FCu;
label_7992fc:
    // 0x7992fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7992fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_799300:
    // 0x799300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799304: 0x3e00008  jr          $ra
    ctx->pc = 0x799304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799304u;
        // 0x799308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79930Cu;
    // 0x79930c: 0x0  nop
    ctx->pc = 0x79930cu;
    // NOP
    ctx->pc = 0x799310u;
}
} // namespace gh_r005
