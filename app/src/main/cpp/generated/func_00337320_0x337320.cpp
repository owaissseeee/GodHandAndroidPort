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

// Function: func_00337320
// Address: 0x337320 - 0x337398
void func_00337320_0x337320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00337320_0x337320");
#endif

    switch (ctx->pc) {
        case 0x337350u: goto label_337350;
        default: break;
    }

    ctx->pc = 0x337320u;

    // 0x337320: 0x3c08003e  lui         $t0, 0x3E
    ctx->pc = 0x337320u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62 << 16));
    // 0x337324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337328: 0x8d050708  lw          $a1, 0x708($t0)
    ctx->pc = 0x337328u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3E0708u));
    // 0x33732c: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x33732Cu;
    {
        const bool branch_taken_0x33732c = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x337330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33732Cu;
        // 0x337330: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33732c) {
            ctx->pc = 0x337374u;
            goto label_337374;
        }
    }
    ctx->pc = 0x337334u;
    // 0x337334: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337338: 0x24440768  addiu       $a0, $v0, 0x768
    ctx->pc = 0x337338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1896));
    // 0x33733c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x33733cu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x3E0768u));
    // 0x337340: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x337340u;
    {
        const bool branch_taken_0x337340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x337344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337340u;
        // 0x337344: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337340) {
            ctx->pc = 0x337374u;
            goto label_337374;
        }
    }
    ctx->pc = 0x337348u;
    // 0x337348: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x337348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33734c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33734cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_337350:
    // 0x337350: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x337350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x337354: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x337354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x337358: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x337358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x33735c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33735Cu;
    {
        const bool branch_taken_0x33735c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33735Cu;
        // 0x337360: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33735c) {
            ctx->pc = 0x337374u;
            goto label_337374;
        }
    }
    ctx->pc = 0x337364u;
    // 0x337364: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x337364u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x337368: 0x0  nop
    ctx->pc = 0x337368u;
    // NOP
    // 0x33736c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33736Cu;
    {
        const bool branch_taken_0x33736c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33736Cu;
        // 0x337370: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33736c) {
            ctx->pc = 0x337350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337350;
        }
    }
    ctx->pc = 0x337374u;
label_337374:
    // 0x337374: 0x8d030708  lw          $v1, 0x708($t0)
    ctx->pc = 0x337374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1800)));
    // 0x337378: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x337378u;
    {
        const bool branch_taken_0x337378 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x33737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337378u;
        // 0x33737c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337378) {
            ctx->pc = 0x33738Cu;
            goto label_33738c;
        }
    }
    ctx->pc = 0x337380u;
    // 0x337380: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x337380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337384: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x337384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337388: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x337388u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_33738c:
    // 0x33738c: 0x3e00008  jr          $ra
    ctx->pc = 0x33738Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33738Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337394u;
    // 0x337394: 0x0  nop
    ctx->pc = 0x337394u;
    // NOP
    ctx->pc = 0x337398u;
}
