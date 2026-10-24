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

// Function: func_0034E1F0
// Address: 0x34e1f0 - 0x34e268
void func_0034E1F0_0x34e1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E1F0_0x34e1f0");
#endif

    switch (ctx->pc) {
        case 0x34e208u: goto label_34e208;
        case 0x34e228u: goto label_34e228;
        case 0x34e230u: goto label_34e230;
        case 0x34e24cu: goto label_34e24c;
        default: break;
    }

    ctx->pc = 0x34e1f0u;

    // 0x34e1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34e1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34e1f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34e1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34e1f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34e1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34e1fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34e1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34e200: 0xc0d3d06  jal         func_34F418
    ctx->pc = 0x34E200u;
    SET_GPR_U32(ctx, 31, 0x34E208u);
    ctx->pc = 0x34E204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E200u;
    // 0x34e204: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F418u, 0x34E200u, 0x34E208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E208u;
label_34e208:
    // 0x34e208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34e208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e20c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E20Cu;
    {
        const bool branch_taken_0x34e20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E20Cu;
        // 0x34e210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e20c) {
            ctx->pc = 0x34E220u;
            goto label_34e220;
        }
    }
    ctx->pc = 0x34E214u;
    // 0x34e214: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34E214u;
    {
        const bool branch_taken_0x34e214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E214u;
        // 0x34e218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e214) {
            ctx->pc = 0x34E250u;
            goto label_34e250;
        }
    }
    ctx->pc = 0x34E21Cu;
    // 0x34e21c: 0x0  nop
    ctx->pc = 0x34e21cu;
    // NOP
label_34e220:
    // 0x34e220: 0xc0d389a  jal         func_34E268
    ctx->pc = 0x34E220u;
    SET_GPR_U32(ctx, 31, 0x34E228u);
    ctx->pc = 0x34E268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E268u, 0x34E220u, 0x34E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E228u;
label_34e228:
    // 0x34e228: 0xc0d38b2  jal         func_34E2C8
    ctx->pc = 0x34E228u;
    SET_GPR_U32(ctx, 31, 0x34E230u);
    ctx->pc = 0x34E22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E228u;
    // 0x34e22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E2C8u, 0x34E228u, 0x34E230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E230u;
label_34e230:
    // 0x34e230: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x34e230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x34e234: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34e234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e238: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34e238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34e23c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34E23Cu;
    {
        const bool branch_taken_0x34e23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E23Cu;
        // 0x34e240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e23c) {
            ctx->pc = 0x34E24Cu;
            goto label_34e24c;
        }
    }
    ctx->pc = 0x34E244u;
    // 0x34e244: 0xc0d3db0  jal         func_34F6C0
    ctx->pc = 0x34E244u;
    SET_GPR_U32(ctx, 31, 0x34E24Cu);
    ctx->pc = 0x34F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F6C0u, 0x34E244u, 0x34E24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E24Cu;
label_34e24c:
    // 0x34e24c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34e24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34e250:
    // 0x34e250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34e250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34e254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34e258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34e258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e25c: 0x3e00008  jr          $ra
    ctx->pc = 0x34E25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E25Cu;
        // 0x34e260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E264u;
    // 0x34e264: 0x0  nop
    ctx->pc = 0x34e264u;
    // NOP
    ctx->pc = 0x34e268u;
}
