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

// Function: cCollisionShape_setOffsetPos
// Address: 0x2bb258 - 0x2bb298
void cCollisionShape_setOffsetPos_0x2bb258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionShape_setOffsetPos_0x2bb258");
#endif

    switch (ctx->pc) {
        case 0x2bb288u: goto label_2bb288;
        default: break;
    }

    ctx->pc = 0x2bb258u;

    // 0x2bb258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bb258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bb25c: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x2bb25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2bb260: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB260u;
    {
        const bool branch_taken_0x2bb260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB260u;
        // 0x2bb264: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb260) {
            ctx->pc = 0x2BB280u;
            goto label_2bb280;
        }
    }
    ctx->pc = 0x2BB268u;
    // 0x2bb268: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2bb268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb26c: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x2bb26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x2bb270: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2bb270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb274: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2bb274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2bb278: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2bb278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb27c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2bb27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2bb280:
    // 0x2bb280: 0xc0aecb6  jal         func_2BB2D8
    ctx->pc = 0x2BB280u;
    SET_GPR_U32(ctx, 31, 0x2BB288u);
    ctx->pc = 0x2BB2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB2D8u, 0x2BB280u, 0x2BB288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB288u;
label_2bb288:
    // 0x2bb288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb28c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB28Cu;
        // 0x2bb290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB294u;
    // 0x2bb294: 0x0  nop
    ctx->pc = 0x2bb294u;
    // NOP
    ctx->pc = 0x2bb298u;
}
