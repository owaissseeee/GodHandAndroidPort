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

// Function: __rs__7istreamRl
// Address: 0x3880f8 - 0x388158
void ps2___rs__7istreamRl_0x3880f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamRl_0x3880f8");
#endif

    switch (ctx->pc) {
        case 0x38811cu: goto label_38811c;
        default: break;
    }

    ctx->pc = 0x3880f8u;

    // 0x3880f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3880f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3880fc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3880fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x388100: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x388100u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x388104: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x388104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x388108: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x388108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38810c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38810cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388110: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x388110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x388114: 0xc0e1f36  jal         func_387CD8
    ctx->pc = 0x388114u;
    SET_GPR_U32(ctx, 31, 0x38811Cu);
    ctx->pc = 0x388118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388114u;
    // 0x388118: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387CD8u, 0x388114u, 0x38811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38811Cu;
label_38811c:
    // 0x38811c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38811Cu;
    {
        const bool branch_taken_0x38811c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38811Cu;
        // 0x388120: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38811c) {
            ctx->pc = 0x38813Cu;
            goto label_38813c;
        }
    }
    ctx->pc = 0x388124u;
    // 0x388124: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388124u;
    {
        const bool branch_taken_0x388124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388124u;
        // 0x388128: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388124) {
            ctx->pc = 0x388134u;
            goto label_388134;
        }
    }
    ctx->pc = 0x38812Cu;
    // 0x38812c: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x38812cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x388130: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x388130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_388134:
    // 0x388134: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x388134u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388138: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x388138u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_38813c:
    // 0x38813c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38813cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388140: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x388140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x388144: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x388144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388148: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x388148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38814c: 0x3e00008  jr          $ra
    ctx->pc = 0x38814Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38814Cu;
        // 0x388150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38814Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388154u;
    // 0x388154: 0x0  nop
    ctx->pc = 0x388154u;
    // NOP
    ctx->pc = 0x388158u;
}
