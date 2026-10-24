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

// Function: cFont_setMessageTextures
// Address: 0x2a4c38 - 0x2a4cb0
void cFont_setMessageTextures_0x2a4c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cFont_setMessageTextures_0x2a4c38");
#endif

    switch (ctx->pc) {
        case 0x2a4c6cu: goto label_2a4c6c;
        case 0x2a4c84u: goto label_2a4c84;
        case 0x2a4c98u: goto label_2a4c98;
        default: break;
    }

    ctx->pc = 0x2a4c38u;

    // 0x2a4c38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a4c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a4c3c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2a4c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2a4c40: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a4c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2a4c44: 0x24a5ace0  addiu       $a1, $a1, -0x5320
    ctx->pc = 0x2a4c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946016));
    // 0x2a4c48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a4c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a4c4c: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x2a4c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x2a4c50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2a4c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2a4c54: 0x261074a0  addiu       $s0, $s0, 0x74A0
    ctx->pc = 0x2a4c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
    // 0x2a4c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a4c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a4c5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a4c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c60: 0x8e0405ac  lw          $a0, 0x5AC($s0)
    ctx->pc = 0x2a4c60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A4Cu));
    // 0x2a4c64: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A4C64u;
    SET_GPR_U32(ctx, 31, 0x2A4C6Cu);
    ctx->pc = 0x2A4C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C64u;
    // 0x2a4c68: 0x8e06056c  lw          $a2, 0x56C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A4C64u, 0x2A4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C6Cu;
label_2a4c6c:
    // 0x2a4c6c: 0x8e06056c  lw          $a2, 0x56C($s0)
    ctx->pc = 0x2a4c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1388)));
    // 0x2a4c70: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2a4c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2a4c74: 0x8e0405ac  lw          $a0, 0x5AC($s0)
    ctx->pc = 0x2a4c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1452)));
    // 0x2a4c78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a4c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c7c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A4C7Cu;
    SET_GPR_U32(ctx, 31, 0x2A4C84u);
    ctx->pc = 0x2A4C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C7Cu;
    // 0x2a4c80: 0x24a5ace8  addiu       $a1, $a1, -0x5318 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A4C7Cu, 0x2A4C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C84u;
label_2a4c84:
    // 0x2a4c84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a4c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a4c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c8c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a4c8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c90: 0xc0a932c  jal         func_2A4CB0
    ctx->pc = 0x2A4C90u;
    SET_GPR_U32(ctx, 31, 0x2A4C98u);
    ctx->pc = 0x2A4C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C90u;
    // 0x2a4c94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4CB0u, 0x2A4C90u, 0x2A4C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C98u;
label_2a4c98:
    // 0x2a4c98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a4c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4c9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a4c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4ca0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2a4ca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a4ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CA8u;
        // 0x2a4cac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4CB0u;
}
