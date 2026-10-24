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

// Function: ADXPS2_GetNumDataSjtmp
// Address: 0x326160 - 0x3261a8
void ADXPS2_GetNumDataSjtmp_0x326160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXPS2_GetNumDataSjtmp_0x326160");
#endif

    switch (ctx->pc) {
        case 0x326160u: goto label_326160;
        case 0x326164u: goto label_326164;
        case 0x326168u: goto label_326168;
        case 0x32616cu: goto label_32616c;
        case 0x326170u: goto label_326170;
        case 0x326174u: goto label_326174;
        case 0x326178u: goto label_326178;
        case 0x32617cu: goto label_32617c;
        case 0x326180u: goto label_326180;
        case 0x326184u: goto label_326184;
        case 0x326188u: goto label_326188;
        case 0x32618cu: goto label_32618c;
        case 0x326190u: goto label_326190;
        case 0x326194u: goto label_326194;
        case 0x326198u: goto label_326198;
        case 0x32619cu: goto label_32619c;
        case 0x3261a0u: goto label_3261a0;
        case 0x3261a4u: goto label_3261a4;
        default: break;
    }

    ctx->pc = 0x326160u;

label_326160:
    // 0x326160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_326164:
    // 0x326164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_326168:
    // 0x326168: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x326168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_32616c:
    // 0x32616c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x32616cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_326170:
    // 0x326170: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x326170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_326174:
    // 0x326174: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x326174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_326178:
    // 0x326178: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x326178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_32617c:
    // 0x32617c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x32617cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_326180:
    // 0x326180: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x326180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_326184:
    // 0x326184: 0x40f809  jalr        $v0
label_326188:
    if (ctx->pc == 0x326188u) {
        ctx->pc = 0x326188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326184u;
        // 0x326188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32618Cu;
        goto label_32618c;
    }
    ctx->pc = 0x326184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32618Cu);
        ctx->pc = 0x326188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326184u;
        // 0x326188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326184u, 0x32618Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32618Cu;
label_32618c:
    // 0x32618c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32618cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_326190:
    // 0x326190: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x326190u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_326194:
    // 0x326194: 0x3e00008  jr          $ra
label_326198:
    if (ctx->pc == 0x326198u) {
        ctx->pc = 0x326198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326194u;
        // 0x326198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32619Cu;
        goto label_32619c;
    }
    ctx->pc = 0x326194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326194u;
        // 0x326198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32619Cu;
label_32619c:
    // 0x32619c: 0x0  nop
    ctx->pc = 0x32619cu;
    // NOP
label_3261a0:
    // 0x3261a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3261a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3261a4:
    // 0x3261a4: 0x0  nop
    ctx->pc = 0x3261a4u;
    // NOP
    ctx->pc = 0x3261a8u;
}
