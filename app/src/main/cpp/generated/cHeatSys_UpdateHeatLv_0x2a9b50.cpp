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

// Function: cHeatSys_UpdateHeatLv
// Address: 0x2a9b50 - 0x2a9bc0
void cHeatSys_UpdateHeatLv_0x2a9b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cHeatSys_UpdateHeatLv_0x2a9b50");
#endif

    switch (ctx->pc) {
        case 0x2a9b64u: goto label_2a9b64;
        default: break;
    }

    ctx->pc = 0x2a9b50u;

    // 0x2a9b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9b54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a9b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a9b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9b5c: 0xc0aa726  jal         func_2A9C98
    ctx->pc = 0x2A9B5Cu;
    SET_GPR_U32(ctx, 31, 0x2A9B64u);
    ctx->pc = 0x2A9B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9B5Cu;
    // 0x2a9b60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C98u, 0x2A9B5Cu, 0x2A9B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9B64u;
label_2a9b64:
    // 0x2a9b64: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2a9b64u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2a9b68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a9b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a9b6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9b70: 0x0  nop
    ctx->pc = 0x2a9b70u;
    // NOP
    // 0x2a9b74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a9b74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9b78: 0x0  nop
    ctx->pc = 0x2a9b78u;
    // NOP
    // 0x2a9b7c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9B7Cu;
    {
        const bool branch_taken_0x2a9b7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a9b7c) {
            ctx->pc = 0x2A9B8Cu;
            goto label_2a9b8c;
        }
    }
    ctx->pc = 0x2A9B84u;
    // 0x2a9b84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A9B84u;
    {
        const bool branch_taken_0x2a9b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B84u;
        // 0x2a9b88: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b84) {
            ctx->pc = 0x2A9BB0u;
            goto label_2a9bb0;
        }
    }
    ctx->pc = 0x2A9B8Cu;
label_2a9b8c:
    // 0x2a9b8c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2a9b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2a9b90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9b94: 0x0  nop
    ctx->pc = 0x2a9b94u;
    // NOP
    // 0x2a9b98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a9b98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9b9c: 0x0  nop
    ctx->pc = 0x2a9b9cu;
    // NOP
    // 0x2a9ba0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9BA0u;
    {
        const bool branch_taken_0x2a9ba0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BA0u;
        // 0x2a9ba4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ba0) {
            ctx->pc = 0x2A9BACu;
            goto label_2a9bac;
        }
    }
    ctx->pc = 0x2A9BA8u;
    // 0x2a9ba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9bac:
    // 0x2a9bac: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2a9bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2a9bb0:
    // 0x2a9bb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a9bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BB8u;
        // 0x2a9bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9BC0u;
}
