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

// Function: func_001B15C8
// Address: 0x1b15c8 - 0x1b1620
void func_001B15C8_0x1b15c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B15C8_0x1b15c8");
#endif

    ctx->pc = 0x1b15c8u;

    // 0x1b15c8: 0x24820610  addiu       $v0, $a0, 0x610
    ctx->pc = 0x1b15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1552));
    // 0x1b15cc: 0xac850600  sw          $a1, 0x600($a0)
    ctx->pc = 0x1b15ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1536), GPR_U32(ctx, 5));
    // 0x1b15d0: 0x10470007  beq         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B15D0u;
    {
        const bool branch_taken_0x1b15d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1B15D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15D0u;
        // 0x1b15d4: 0xac860604  sw          $a2, 0x604($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1540), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15d0) {
            ctx->pc = 0x1B15F0u;
            goto label_1b15f0;
        }
    }
    ctx->pc = 0x1B15D8u;
    // 0x1b15d8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1b15d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b15dc: 0xe4800610  swc1        $f0, 0x610($a0)
    ctx->pc = 0x1b15dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1552), bits); }
    // 0x1b15e0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1b15e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b15e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1b15e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b15e8: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1b15e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b15ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b15ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b15f0:
    // 0x1b15f0: 0x24820620  addiu       $v0, $a0, 0x620
    ctx->pc = 0x1b15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1568));
    // 0x1b15f4: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B15F4u;
    {
        const bool branch_taken_0x1b15f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1b15f4) {
            ctx->pc = 0x1B1614u;
            goto label_1b1614;
        }
    }
    ctx->pc = 0x1B15FCu;
    // 0x1b15fc: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1b15fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1600: 0xe4800620  swc1        $f0, 0x620($a0)
    ctx->pc = 0x1b1600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1568), bits); }
    // 0x1b1604: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x1b1604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1608: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1b1608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b160c: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1b160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1610: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b1610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b1614:
    // 0x1b1614: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B161Cu;
    // 0x1b161c: 0x0  nop
    ctx->pc = 0x1b161cu;
    // NOP
    ctx->pc = 0x1b1620u;
}
