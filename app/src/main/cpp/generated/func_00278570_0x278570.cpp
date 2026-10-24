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

// Function: func_00278570
// Address: 0x278570 - 0x2785e0
void func_00278570_0x278570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00278570_0x278570");
#endif

    ctx->pc = 0x278570u;

    // 0x278570: 0x8c820564  lw          $v0, 0x564($a0)
    ctx->pc = 0x278570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x278574: 0x24030232  addiu       $v1, $zero, 0x232
    ctx->pc = 0x278574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 562));
    // 0x278578: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x278578u;
    {
        const bool branch_taken_0x278578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x278578) {
            ctx->pc = 0x2785D4u;
            goto label_2785d4;
        }
    }
    ctx->pc = 0x278580u;
    // 0x278580: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x278580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x278584: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x278584u;
    {
        const bool branch_taken_0x278584 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x278584) {
            ctx->pc = 0x2785D4u;
            goto label_2785d4;
        }
    }
    ctx->pc = 0x27858Cu;
    // 0x27858c: 0x8c820670  lw          $v0, 0x670($a0)
    ctx->pc = 0x27858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x278590: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x278590u;
    {
        const bool branch_taken_0x278590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278590) {
            ctx->pc = 0x2785D4u;
            goto label_2785d4;
        }
    }
    ctx->pc = 0x278598u;
    // 0x278598: 0x9c420060  lwu         $v0, 0x60($v0)
    ctx->pc = 0x278598u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x27859c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27859cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2785a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2785A0u;
    {
        const bool branch_taken_0x2785a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2785a0) {
            ctx->pc = 0x2785D4u;
            goto label_2785d4;
        }
    }
    ctx->pc = 0x2785A8u;
    // 0x2785a8: 0xc481054c  lwc1        $f1, 0x54C($a0)
    ctx->pc = 0x2785a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2785ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2785acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2785b0: 0x0  nop
    ctx->pc = 0x2785b0u;
    // NOP
    // 0x2785b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2785b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2785b8: 0x0  nop
    ctx->pc = 0x2785b8u;
    // NOP
    // 0x2785bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2785BCu;
    {
        const bool branch_taken_0x2785bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2785C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785BCu;
        // 0x2785c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2785bc) {
            ctx->pc = 0x2785D4u;
            goto label_2785d4;
        }
    }
    ctx->pc = 0x2785C4u;
    // 0x2785c4: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x2785c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2785c8: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2785c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2785cc: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x2785ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2785d0: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x2785d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_2785d4:
    // 0x2785d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2785D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2785D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2785DCu;
    // 0x2785dc: 0x0  nop
    ctx->pc = 0x2785dcu;
    // NOP
    ctx->pc = 0x2785e0u;
}
