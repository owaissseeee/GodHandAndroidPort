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

// Function: cGameObj_setPosAndRefresh
// Address: 0x17c3a0 - 0x17c408
void cGameObj_setPosAndRefresh_0x17c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_setPosAndRefresh_0x17c3a0");
#endif

    switch (ctx->pc) {
        case 0x17c3f8u: goto label_17c3f8;
        default: break;
    }

    ctx->pc = 0x17c3a0u;

    // 0x17c3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c3a4: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x17c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x17c3a8: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17C3A8u;
    {
        const bool branch_taken_0x17c3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x17C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3A8u;
        // 0x17c3ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c3a8) {
            ctx->pc = 0x17C3C8u;
            goto label_17c3c8;
        }
    }
    ctx->pc = 0x17C3B0u;
    // 0x17c3b0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x17c3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c3b4: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x17c3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
    // 0x17c3b8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x17c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c3bc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x17c3bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x17c3c0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x17c3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c3c4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x17c3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_17c3c8:
    // 0x17c3c8: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x17c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x17c3cc: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17C3CCu;
    {
        const bool branch_taken_0x17c3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x17c3cc) {
            ctx->pc = 0x17C3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C3CCu;
            // 0x17c3d0: 0x8c8500f0  lw          $a1, 0xF0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C3F0u;
            goto label_17c3f0;
        }
    }
    ctx->pc = 0x17C3D4u;
    // 0x17c3d4: 0xc4800490  lwc1        $f0, 0x490($a0)
    ctx->pc = 0x17c3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c3d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17c3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17c3dc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x17c3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c3e0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x17c3e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17c3e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x17c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c3e8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x17c3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x17c3ec: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x17c3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_17c3f0:
    // 0x17c3f0: 0xc05f00a  jal         func_17C028
    ctx->pc = 0x17C3F0u;
    SET_GPR_U32(ctx, 31, 0x17C3F8u);
    ctx->pc = 0x17C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C3F0u;
    // 0x17c3f4: 0x24860100  addiu       $a2, $a0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C028u, 0x17C3F0u, 0x17C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3F8u;
label_17c3f8:
    // 0x17c3f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17C3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3FCu;
        // 0x17c400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C404u;
    // 0x17c404: 0x0  nop
    ctx->pc = 0x17c404u;
    // NOP
    ctx->pc = 0x17c408u;
}
