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

// Function: func_001E9078
// Address: 0x1e9078 - 0x1e90f8
void func_001E9078_0x1e9078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E9078_0x1e9078");
#endif

    ctx->pc = 0x1e9078u;

    // 0x1e9078: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e9078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e907c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E907Cu;
    {
        const bool branch_taken_0x1e907c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e907c) {
            ctx->pc = 0x1E9080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E907Cu;
            // 0x1e9080: 0xc4800100  lwc1        $f0, 0x100($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9090u;
            goto label_1e9090;
        }
    }
    ctx->pc = 0x1E9084u;
    // 0x1e9084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e9084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9088: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9090u;
label_1e9090:
    // 0x1e9090: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1e9090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1e9094: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1e9094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1e9098: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e9098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e909c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e909cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e90a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1e90a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e90a4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1e90a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e90a8: 0x0  nop
    ctx->pc = 0x1e90a8u;
    // NOP
    // 0x1e90ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E90ACu;
    {
        const bool branch_taken_0x1e90ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e90ac) {
            ctx->pc = 0x1E90C4u;
            goto label_1e90c4;
        }
    }
    ctx->pc = 0x1E90B4u;
    // 0x1e90b4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1e90b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1e90b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e90b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e90bc: 0x0  nop
    ctx->pc = 0x1e90bcu;
    // NOP
    // 0x1e90c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e90c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e90c4:
    // 0x1e90c4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1e90c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1e90c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e90c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1e90cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e90ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e90d0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1e90d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1e90d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e90d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e90d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e90d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e90dc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1e90dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e90e0: 0x0  nop
    ctx->pc = 0x1e90e0u;
    // NOP
    // 0x1e90e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E90E4u;
    {
        const bool branch_taken_0x1e90e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e90e4) {
            ctx->pc = 0x1E90E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E90E4u;
            // 0x1e90e8: 0x46020841  sub.s       $f1, $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E90ECu;
            goto label_1e90ec;
        }
    }
    ctx->pc = 0x1E90ECu;
label_1e90ec:
    // 0x1e90ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E90ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90ECu;
        // 0x1e90f0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E90ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E90F4u;
    // 0x1e90f4: 0x0  nop
    ctx->pc = 0x1e90f4u;
    // NOP
    ctx->pc = 0x1e90f8u;
}
