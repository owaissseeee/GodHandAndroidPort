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

// Function: WaitObj_stepCountdown
// Address: 0x1b43c8 - 0x1b4460
void WaitObj_stepCountdown_0x1b43c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WaitObj_stepCountdown_0x1b43c8");
#endif

    switch (ctx->pc) {
        case 0x1b4438u: goto label_1b4438;
        default: break;
    }

    ctx->pc = 0x1b43c8u;

    // 0x1b43c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b43c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b43cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b43ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b43d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b43d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b43d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b43d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43d8: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x1b43d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
    // 0x1b43dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B43DCu;
    {
        const bool branch_taken_0x1b43dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43DCu;
        // 0x1b43e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43dc) {
            ctx->pc = 0x1B43F4u;
            goto label_1b43f4;
        }
    }
    ctx->pc = 0x1B43E4u;
    // 0x1b43e4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B43E4u;
    {
        const bool branch_taken_0x1b43e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b43e4) {
            ctx->pc = 0x1B43E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B43E4u;
            // 0x1b43e8: 0xc6010630  lwc1        $f1, 0x630($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4408u;
            goto label_1b4408;
        }
    }
    ctx->pc = 0x1B43ECu;
    // 0x1b43ec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B43ECu;
    {
        const bool branch_taken_0x1b43ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43ECu;
        // 0x1b43f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43ec) {
            ctx->pc = 0x1B4454u;
            goto label_1b4454;
        }
    }
    ctx->pc = 0x1B43F4u;
label_1b43f4:
    // 0x1b43f4: 0xc600062c  lwc1        $f0, 0x62C($s0)
    ctx->pc = 0x1b43f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b43f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b43fc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1b43fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4400: 0xe6000630  swc1        $f0, 0x630($s0)
    ctx->pc = 0x1b4400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
    // 0x1b4404: 0xc6010630  lwc1        $f1, 0x630($s0)
    ctx->pc = 0x1b4404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4408:
    // 0x1b4408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b440c: 0x0  nop
    ctx->pc = 0x1b440cu;
    // NOP
    // 0x1b4410: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b4410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4414: 0x0  nop
    ctx->pc = 0x1b4414u;
    // NOP
    // 0x1b4418: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4418u;
    {
        const bool branch_taken_0x1b4418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4418u;
        // 0x1b441c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4418) {
            ctx->pc = 0x1B442Cu;
            goto label_1b442c;
        }
    }
    ctx->pc = 0x1B4420u;
    // 0x1b4420: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1b4420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4424: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B4424u;
    {
        const bool branch_taken_0x1b4424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4424u;
        // 0x1b4428: 0xa20202f4  sb          $v0, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4424) {
            ctx->pc = 0x1B4450u;
            goto label_1b4450;
        }
    }
    ctx->pc = 0x1B442Cu;
label_1b442c:
    // 0x1b442c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1b442cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1b4430: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B4430u;
    SET_GPR_U32(ctx, 31, 0x1B4438u);
    ctx->pc = 0x1B4434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4430u;
    // 0x1b4434: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B4430u, 0x1B4438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4438u;
label_1b4438:
    // 0x1b4438: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1b4438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1b443c: 0xc6010630  lwc1        $f1, 0x630($s0)
    ctx->pc = 0x1b443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4440: 0xc4427a14  lwc1        $f2, 0x7A14($v0)
    ctx->pc = 0x1b4440u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4444: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b4444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b4448: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b4448u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b444c: 0xe6010630  swc1        $f1, 0x630($s0)
    ctx->pc = 0x1b444cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
label_1b4450:
    // 0x1b4450: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b4450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4454:
    // 0x1b4454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4458: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4458u;
        // 0x1b445c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4460u;
}
