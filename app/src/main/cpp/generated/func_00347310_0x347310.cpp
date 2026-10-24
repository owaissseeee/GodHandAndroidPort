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

// Function: func_00347310
// Address: 0x347310 - 0x347370
void func_00347310_0x347310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347310_0x347310");
#endif

    switch (ctx->pc) {
        case 0x347328u: goto label_347328;
        case 0x347340u: goto label_347340;
        case 0x347354u: goto label_347354;
        case 0x34735cu: goto label_34735c;
        default: break;
    }

    ctx->pc = 0x347310u;

    // 0x347310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347318: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34731c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x347320: 0xc0d1cba  jal         func_3472E8
    ctx->pc = 0x347320u;
    SET_GPR_U32(ctx, 31, 0x347328u);
    ctx->pc = 0x347324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347320u;
    // 0x347324: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3472E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3472E8u, 0x347320u, 0x347328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347328u;
label_347328:
    // 0x347328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x347328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34732c: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x34732Cu;
    {
        const bool branch_taken_0x34732c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x347330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34732Cu;
        // 0x347330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34732c) {
            ctx->pc = 0x34735Cu;
            goto label_34735c;
        }
    }
    ctx->pc = 0x347334u;
    // 0x347334: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x347334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x347338: 0xc0ce568  jal         func_3395A0
    ctx->pc = 0x347338u;
    SET_GPR_U32(ctx, 31, 0x347340u);
    ctx->pc = 0x34733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347338u;
    // 0x34733c: 0x8e050184  lw          $a1, 0x184($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395A0u, 0x347338u, 0x347340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347340u;
label_347340:
    // 0x347340: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x347340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x347344: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347344u;
    {
        const bool branch_taken_0x347344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347344u;
        // 0x347348: 0x24848c68  addiu       $a0, $a0, -0x7398 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347344) {
            ctx->pc = 0x347360u;
            goto label_347360;
        }
    }
    ctx->pc = 0x34734Cu;
    // 0x34734c: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x34734Cu;
    SET_GPR_U32(ctx, 31, 0x347354u);
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x34734Cu, 0x347354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347354u;
label_347354:
    // 0x347354: 0xc0d10f2  jal         func_3443C8
    ctx->pc = 0x347354u;
    SET_GPR_U32(ctx, 31, 0x34735Cu);
    ctx->pc = 0x347358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347354u;
    // 0x347358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3443C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3443C8u, 0x347354u, 0x34735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34735Cu;
label_34735c:
    // 0x34735c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34735cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347360:
    // 0x347360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347364: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x347364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347368: 0x3e00008  jr          $ra
    ctx->pc = 0x347368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347368u;
        // 0x34736c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347370u;
}
