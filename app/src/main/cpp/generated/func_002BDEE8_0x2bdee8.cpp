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

// Function: func_002BDEE8
// Address: 0x2bdee8 - 0x2bdf30
void func_002BDEE8_0x2bdee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BDEE8_0x2bdee8");
#endif

    switch (ctx->pc) {
        case 0x2bdef8u: goto label_2bdef8;
        default: break;
    }

    ctx->pc = 0x2bdee8u;

    // 0x2bdee8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2bdee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2bdeec: 0x4c0000e  bltz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2BDEECu;
    {
        const bool branch_taken_0x2bdeec = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2BDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDEECu;
        // 0x2bdef0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdeec) {
            ctx->pc = 0x2BDF28u;
            goto label_2bdf28;
        }
    }
    ctx->pc = 0x2BDEF4u;
    // 0x2bdef4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2bdef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2bdef8:
    // 0x2bdef8: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x2bdef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2bdefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdf00: 0x0  nop
    ctx->pc = 0x2bdf00u;
    // NOP
    // 0x2bdf04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bdf04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bdf08: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2bdf08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdf0c: 0x0  nop
    ctx->pc = 0x2bdf0cu;
    // NOP
    // 0x2bdf10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDF10u;
    {
        const bool branch_taken_0x2bdf10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF10u;
        // 0x2bdf14: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf10) {
            ctx->pc = 0x2BDF20u;
            goto label_2bdf20;
        }
    }
    ctx->pc = 0x2BDF18u;
    // 0x2bdf18: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF18u;
        // 0x2bdf1c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDF20u;
label_2bdf20:
    // 0x2bdf20: 0x4c1fff5  bgez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x2BDF20u;
    {
        const bool branch_taken_0x2bdf20 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x2BDF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF20u;
        // 0x2bdf24: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf20) {
            ctx->pc = 0x2BDEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bdef8;
        }
    }
    ctx->pc = 0x2BDF28u;
label_2bdf28:
    // 0x2bdf28: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF28u;
        // 0x2bdf2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDF30u;
}
