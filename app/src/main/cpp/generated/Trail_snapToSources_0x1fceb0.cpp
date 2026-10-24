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

// Function: Trail_snapToSources
// Address: 0x1fceb0 - 0x1fcf20
void Trail_snapToSources_0x1fceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trail_snapToSources_0x1fceb0");
#endif

    switch (ctx->pc) {
        case 0x1fcec0u: goto label_1fcec0;
        default: break;
    }

    ctx->pc = 0x1fceb0u;

    // 0x1fceb0: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x1fceb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1fceb4: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FCEB4u;
    {
        const bool branch_taken_0x1fceb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEB4u;
        // 0x1fceb8: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fceb4) {
            ctx->pc = 0x1FCF18u;
            goto label_1fcf18;
        }
    }
    ctx->pc = 0x1FCEBCu;
    // 0x1fcebc: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1fcebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_1fcec0:
    // 0x1fcec0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fcec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1fcec4: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1fcec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1fcec8: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCEC8u;
    {
        const bool branch_taken_0x1fcec8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fcec8) {
            ctx->pc = 0x1FCECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCEC8u;
            // 0x1fcecc: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCEECu;
            goto label_1fceec;
        }
    }
    ctx->pc = 0x1FCED0u;
    // 0x1fced0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fced4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1fced4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1fced8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1fced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcedc: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1fcedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1fcee0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1fcee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcee4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1fcee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1fcee8: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1fcee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1fceec:
    // 0x1fceec: 0x50450008  beql        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCEECu;
    {
        const bool branch_taken_0x1fceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1fceec) {
            ctx->pc = 0x1FCEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCEECu;
            // 0x1fcef0: 0x8ca50024  lw          $a1, 0x24($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCF10u;
            goto label_1fcf10;
        }
    }
    ctx->pc = 0x1FCEF4u;
    // 0x1fcef4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1fcef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcef8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1fcef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcefc: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x1fcefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x1fcf00: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1fcf00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1fcf04: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1fcf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcf08: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1fcf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1fcf0c: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1fcf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1fcf10:
    // 0x1fcf10: 0x54a0ffeb  bnel        $a1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1FCF10u;
    {
        const bool branch_taken_0x1fcf10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcf10) {
            ctx->pc = 0x1FCF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCF10u;
            // 0x1fcf14: 0x8ca20028  lw          $v0, 0x28($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcec0;
        }
    }
    ctx->pc = 0x1FCF18u;
label_1fcf18:
    // 0x1fcf18: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCF20u;
}
