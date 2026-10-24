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

// Function: func_003320F8
// Address: 0x3320f8 - 0x332178
void func_003320F8_0x3320f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003320F8_0x3320f8");
#endif

    switch (ctx->pc) {
        case 0x332118u: goto label_332118;
        case 0x33214cu: goto label_33214c;
        default: break;
    }

    ctx->pc = 0x3320f8u;

    // 0x3320f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3320f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3320fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3320fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332100: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x332100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x332104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x332104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332108: 0x18c0000a  blez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x332108u;
    {
        const bool branch_taken_0x332108 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x33210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332108u;
        // 0x33210c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332108) {
            ctx->pc = 0x332134u;
            goto label_332134;
        }
    }
    ctx->pc = 0x332110u;
    // 0x332110: 0x2407ffaa  addiu       $a3, $zero, -0x56
    ctx->pc = 0x332110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x332114: 0x0  nop
    ctx->pc = 0x332114u;
    // NOP
label_332118:
    // 0x332118: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x332118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33211c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x33211cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x332120: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x332120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x332124: 0x0  nop
    ctx->pc = 0x332124u;
    // NOP
    // 0x332128: 0x0  nop
    ctx->pc = 0x332128u;
    // NOP
    // 0x33212c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33212Cu;
    {
        const bool branch_taken_0x33212c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33212Cu;
        // 0x332130: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33212c) {
            ctx->pc = 0x332118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332118;
        }
    }
    ctx->pc = 0x332134u;
label_332134:
    // 0x332134: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x332134u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x332138: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x332138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33213c: 0x261084b4  addiu       $s0, $s0, -0x7B4C
    ctx->pc = 0x33213cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935732));
    // 0x332140: 0x24a541c0  addiu       $a1, $a1, 0x41C0
    ctx->pc = 0x332140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16832));
    // 0x332144: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x332144u;
    SET_GPR_U32(ctx, 31, 0x33214Cu);
    ctx->pc = 0x332148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332144u;
    // 0x332148: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x332144u, 0x33214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33214Cu;
label_33214c:
    // 0x33214c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332150: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x332150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x332154: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x332154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x332158: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x332158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x33215c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33215cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332160: 0x3e00008  jr          $ra
    ctx->pc = 0x332160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332160u;
        // 0x332164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332168u;
    // 0x332168: 0x0  nop
    ctx->pc = 0x332168u;
    // NOP
    // 0x33216c: 0x0  nop
    ctx->pc = 0x33216cu;
    // NOP
    // 0x332170: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x332170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x332174: 0x0  nop
    ctx->pc = 0x332174u;
    // NOP
    ctx->pc = 0x332178u;
}
