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

// Function: func_001B4460
// Address: 0x1b4460 - 0x1b4528
void func_001B4460_0x1b4460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B4460_0x1b4460");
#endif

    ctx->pc = 0x1b4460u;

    // 0x1b4460: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x1b4460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x1b4464: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b4464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4468: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B4468u;
    {
        const bool branch_taken_0x1b4468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4468u;
        // 0x1b446c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4468) {
            ctx->pc = 0x1B44A8u;
            goto label_1b44a8;
        }
    }
    ctx->pc = 0x1B4470u;
    // 0x1b4470: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4470u;
    {
        const bool branch_taken_0x1b4470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4470) {
            ctx->pc = 0x1B4474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4470u;
            // 0x1b4474: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4488u;
            goto label_1b4488;
        }
    }
    ctx->pc = 0x1B4478u;
    // 0x1b4478: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4478u;
    {
        const bool branch_taken_0x1b4478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4478) {
            ctx->pc = 0x1B447Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4478u;
            // 0x1b447c: 0xc4800104  lwc1        $f0, 0x104($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4498u;
            goto label_1b4498;
        }
    }
    ctx->pc = 0x1B4480u;
    // 0x1b4480: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4488u;
label_1b4488:
    // 0x1b4488: 0x50620023  beql        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B4488u;
    {
        const bool branch_taken_0x1b4488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4488) {
            ctx->pc = 0x1B448Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4488u;
            // 0x1b448c: 0xc4800640  lwc1        $f0, 0x640($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4518u;
            goto label_1b4518;
        }
    }
    ctx->pc = 0x1B4490u;
    // 0x1b4490: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4498u;
label_1b4498:
    // 0x1b4498: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1b4498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b449c: 0xac82063c  sw          $v0, 0x63C($a0)
    ctx->pc = 0x1b449cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1596), GPR_U32(ctx, 2));
    // 0x1b44a0: 0xe4800640  swc1        $f0, 0x640($a0)
    ctx->pc = 0x1b44a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1600), bits); }
    // 0x1b44a4: 0xa08502f5  sb          $a1, 0x2F5($a0)
    ctx->pc = 0x1b44a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 5));
label_1b44a8:
    // 0x1b44a8: 0x8c82063c  lw          $v0, 0x63C($a0)
    ctx->pc = 0x1b44a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1596)));
    // 0x1b44ac: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B44ACu;
    {
        const bool branch_taken_0x1b44ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44ACu;
        // 0x1b44b0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44ac) {
            ctx->pc = 0x1B450Cu;
            goto label_1b450c;
        }
    }
    ctx->pc = 0x1B44B4u;
    // 0x1b44b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B44B4u;
    {
        const bool branch_taken_0x1b44b4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1b44b4) {
            ctx->pc = 0x1B44D0u;
            goto label_1b44d0;
        }
    }
    ctx->pc = 0x1B44BCu;
    // 0x1b44bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b44bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b44c0: 0x0  nop
    ctx->pc = 0x1b44c0u;
    // NOP
    // 0x1b44c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b44c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b44c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B44C8u;
    {
        const bool branch_taken_0x1b44c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b44c8) {
            ctx->pc = 0x1B44E0u;
            goto label_1b44e0;
        }
    }
    ctx->pc = 0x1B44D0u;
label_1b44d0:
    // 0x1b44d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b44d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b44d4: 0x0  nop
    ctx->pc = 0x1b44d4u;
    // NOP
    // 0x1b44d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b44d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b44dc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b44dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b44e0:
    // 0x1b44e0: 0x3c013d8e  lui         $at, 0x3D8E
    ctx->pc = 0x1b44e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15758 << 16));
    // 0x1b44e4: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1b44e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1b44e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b44e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b44ec: 0xc4810640  lwc1        $f1, 0x640($a0)
    ctx->pc = 0x1b44ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b44f0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b44f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b44f4: 0x8c82063c  lw          $v0, 0x63C($a0)
    ctx->pc = 0x1b44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1596)));
    // 0x1b44f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b44fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b44fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b4500: 0xac82063c  sw          $v0, 0x63C($a0)
    ctx->pc = 0x1b4500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1596), GPR_U32(ctx, 2));
    // 0x1b4504: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4504u;
        // 0x1b4508: 0xe4810104  swc1        $f1, 0x104($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B450Cu;
label_1b450c:
    // 0x1b450c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4510: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4510u;
        // 0x1b4514: 0xa08202f5  sb          $v0, 0x2F5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4518u;
label_1b4518:
    // 0x1b4518: 0xa08302f4  sb          $v1, 0x2F4($a0)
    ctx->pc = 0x1b4518u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b451c: 0xe4800104  swc1        $f0, 0x104($a0)
    ctx->pc = 0x1b451cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 260), bits); }
    // 0x1b4520: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4520u;
        // 0x1b4524: 0xa08002f5  sb          $zero, 0x2F5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4528u;
}
