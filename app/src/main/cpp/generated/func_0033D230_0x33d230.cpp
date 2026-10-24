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

// Function: func_0033D230
// Address: 0x33d230 - 0x33d278
void func_0033D230_0x33d230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033D230_0x33d230");
#endif

    switch (ctx->pc) {
        case 0x33d230u: goto label_33d230;
        case 0x33d234u: goto label_33d234;
        case 0x33d238u: goto label_33d238;
        case 0x33d23cu: goto label_33d23c;
        case 0x33d240u: goto label_33d240;
        case 0x33d244u: goto label_33d244;
        case 0x33d248u: goto label_33d248;
        case 0x33d24cu: goto label_33d24c;
        case 0x33d250u: goto label_33d250;
        case 0x33d254u: goto label_33d254;
        case 0x33d258u: goto label_33d258;
        case 0x33d25cu: goto label_33d25c;
        case 0x33d260u: goto label_33d260;
        case 0x33d264u: goto label_33d264;
        case 0x33d268u: goto label_33d268;
        case 0x33d26cu: goto label_33d26c;
        case 0x33d270u: goto label_33d270;
        case 0x33d274u: goto label_33d274;
        default: break;
    }

    ctx->pc = 0x33d230u;

label_33d230:
    // 0x33d230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33d234:
    // 0x33d234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33d238:
    // 0x33d238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33d238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33d23c:
    // 0x33d23c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33d23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_33d240:
    // 0x33d240: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x33d240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_33d244:
    // 0x33d244: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_33d248:
    if (ctx->pc == 0x33D248u) {
        ctx->pc = 0x33D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D244u;
        // 0x33d248: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D24Cu;
        goto label_33d24c;
    }
    ctx->pc = 0x33D244u;
    {
        const bool branch_taken_0x33d244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D244u;
        // 0x33d248: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d244) {
            ctx->pc = 0x33D258u;
            goto label_33d258;
        }
    }
    ctx->pc = 0x33D24Cu;
label_33d24c:
    // 0x33d24c: 0x8c439d50  lw          $v1, -0x62B0($v0)
    ctx->pc = 0x33d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942032)));
label_33d250:
    // 0x33d250: 0x60f809  jalr        $v1
label_33d254:
    if (ctx->pc == 0x33D254u) {
        ctx->pc = 0x33D258u;
        goto label_33d258;
    }
    ctx->pc = 0x33D250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33D258u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D250u, 0x33D258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D258u;
label_33d258:
    // 0x33d258: 0xc0cfec8  jal         func_33FB20
label_33d25c:
    if (ctx->pc == 0x33D25Cu) {
        ctx->pc = 0x33D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D258u;
        // 0x33d25c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D260u;
        goto label_33d260;
    }
    ctx->pc = 0x33D258u;
    SET_GPR_U32(ctx, 31, 0x33D260u);
    ctx->pc = 0x33D25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D258u;
    // 0x33d25c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FB20u, 0x33D258u, 0x33D260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D260u;
label_33d260:
    // 0x33d260: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x33d260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_33d264:
    // 0x33d264: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33d264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33d268:
    // 0x33d268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d26c:
    // 0x33d26c: 0x3e00008  jr          $ra
label_33d270:
    if (ctx->pc == 0x33D270u) {
        ctx->pc = 0x33D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D26Cu;
        // 0x33d270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D274u;
        goto label_33d274;
    }
    ctx->pc = 0x33D26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D26Cu;
        // 0x33d270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D274u;
label_33d274:
    // 0x33d274: 0x0  nop
    ctx->pc = 0x33d274u;
    // NOP
    ctx->pc = 0x33d278u;
}
