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

// Function: func_00328048
// Address: 0x328048 - 0x328098
void func_00328048_0x328048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328048_0x328048");
#endif

    switch (ctx->pc) {
        case 0x32805cu: goto label_32805c;
        case 0x328064u: goto label_328064;
        case 0x328070u: goto label_328070;
        case 0x328078u: goto label_328078;
        default: break;
    }

    ctx->pc = 0x328048u;

    // 0x328048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32804c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32804cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328050: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x328050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x328054: 0xc0ca0da  jal         func_328368
    ctx->pc = 0x328054u;
    SET_GPR_U32(ctx, 31, 0x32805Cu);
    ctx->pc = 0x328058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328054u;
    // 0x328058: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328368u, 0x328054u, 0x32805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32805Cu;
label_32805c:
    // 0x32805c: 0xc0c9fea  jal         func_327FA8
    ctx->pc = 0x32805Cu;
    SET_GPR_U32(ctx, 31, 0x328064u);
    ctx->pc = 0x328060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32805Cu;
    // 0x328060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327FA8u, 0x32805Cu, 0x328064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328064u;
label_328064:
    // 0x328064: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x328064u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x328068: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x328068u;
    {
        const bool branch_taken_0x328068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328068) {
            ctx->pc = 0x32806Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328068u;
            // 0x32806c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328088u;
            goto label_328088;
        }
    }
    ctx->pc = 0x328070u;
label_328070:
    // 0x328070: 0xc0cfd64  jal         func_33F590
    ctx->pc = 0x328070u;
    SET_GPR_U32(ctx, 31, 0x328078u);
    ctx->pc = 0x33F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F590u, 0x328070u, 0x328078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328078u;
label_328078:
    // 0x328078: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x328078u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x32807c: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x32807Cu;
    {
        const bool branch_taken_0x32807c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32807c) {
            ctx->pc = 0x328070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328070;
        }
    }
    ctx->pc = 0x328084u;
    // 0x328084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_328088:
    // 0x328088: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x328088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32808c: 0x3e00008  jr          $ra
    ctx->pc = 0x32808Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32808Cu;
        // 0x328090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32808Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328094u;
    // 0x328094: 0x0  nop
    ctx->pc = 0x328094u;
    // NOP
    ctx->pc = 0x328098u;
}
