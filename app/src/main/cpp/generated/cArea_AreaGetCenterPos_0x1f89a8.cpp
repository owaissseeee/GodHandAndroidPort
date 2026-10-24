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

// Function: cArea_AreaGetCenterPos
// Address: 0x1f89a8 - 0x1f8a40
void cArea_AreaGetCenterPos_0x1f89a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cArea_AreaGetCenterPos_0x1f89a8");
#endif

    ctx->pc = 0x1f89a8u;

    // 0x1f89a8: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1f89a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1f89ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f89acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f89b0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F89B0u;
    {
        const bool branch_taken_0x1f89b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89B0u;
        // 0x1f89b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89b0) {
            ctx->pc = 0x1F89C8u;
            goto label_1f89c8;
        }
    }
    ctx->pc = 0x1F89B8u;
    // 0x1f89b8: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F89B8u;
    {
        const bool branch_taken_0x1f89b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f89b8) {
            ctx->pc = 0x1F89BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F89B8u;
            // 0x1f89bc: 0xc4800010  lwc1        $f0, 0x10($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8A24u;
            goto label_1f8a24;
        }
    }
    ctx->pc = 0x1F89C0u;
    // 0x1f89c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F89C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F89C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F89C8u;
label_1f89c8:
    // 0x1f89c8: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x1f89c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f89cc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1f89ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f89d0: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x1f89d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f89d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f89d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f89d8: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x1f89d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f89dc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1f89dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1f89e0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f89e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f89e4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f89e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1f89e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f89e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1f89ec: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1f89ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1f89f0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1f89f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1f89f4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1f89f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f89f8: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1f89f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1f89fc: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x1f89fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8a00: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x1f8a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8a04: 0xc4830024  lwc1        $f3, 0x24($a0)
    ctx->pc = 0x1f8a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f8a08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f8a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f8a0c: 0xc482002c  lwc1        $f2, 0x2C($a0)
    ctx->pc = 0x1f8a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8a10: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f8a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1f8a14: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f8a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1f8a18: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1f8a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1f8a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A1Cu;
        // 0x1f8a20: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8A24u;
label_1f8a24:
    // 0x1f8a24: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1f8a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1f8a28: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1f8a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8a2c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1f8a2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1f8a30: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x1f8a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8a34: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A34u;
        // 0x1f8a38: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8A3Cu;
    // 0x1f8a3c: 0x0  nop
    ctx->pc = 0x1f8a3cu;
    // NOP
    ctx->pc = 0x1f8a40u;
}
