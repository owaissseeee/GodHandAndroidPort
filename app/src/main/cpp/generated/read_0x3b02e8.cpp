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

// Function: read
// Address: 0x3b02e8 - 0x3b0360
void read_0x3b02e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("read_0x3b02e8");
#endif

    switch (ctx->pc) {
        case 0x3b0320u: goto label_3b0320;
        case 0x3b0338u: goto label_3b0338;
        default: break;
    }

    ctx->pc = 0x3b02e8u;

    // 0x3b02e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b02e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b02ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b02ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b02f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b02f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b02f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b02f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b02f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b02f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b02fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b02fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0300: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3B0300u;
    {
        const bool branch_taken_0x3b0300 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0300u;
        // 0x3b0304: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0300) {
            ctx->pc = 0x3B0340u;
            goto label_3b0340;
        }
    }
    ctx->pc = 0x3B0308u;
    // 0x3b0308: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3b0308u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3b030c: 0x8e02ae40  lw          $v0, -0x51C0($s0)
    ctx->pc = 0x3b030cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAE40u));
    // 0x3b0310: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0310u;
    {
        const bool branch_taken_0x3b0310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0310u;
        // 0x3b0314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0310) {
            ctx->pc = 0x3B0330u;
            goto label_3b0330;
        }
    }
    ctx->pc = 0x3B0318u;
    // 0x3b0318: 0xc07db9a  jal         func_1F6E68
    ctx->pc = 0x3B0318u;
    SET_GPR_U32(ctx, 31, 0x3B0320u);
    ctx->pc = 0x1F6E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6E68u, 0x3B0318u, 0x3B0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0320u;
label_3b0320:
    // 0x3b0320: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0320u;
    {
        const bool branch_taken_0x3b0320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0320u;
        // 0x3b0324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0320) {
            ctx->pc = 0x3B0340u;
            goto label_3b0340;
        }
    }
    ctx->pc = 0x3B0328u;
    // 0x3b0328: 0xae02ae40  sw          $v0, -0x51C0($s0)
    ctx->pc = 0x3b0328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294946368), GPR_U32(ctx, 2));
    // 0x3b032c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b032cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0330:
    // 0x3b0330: 0xc07dbb6  jal         func_1F6ED8
    ctx->pc = 0x3B0330u;
    SET_GPR_U32(ctx, 31, 0x3B0338u);
    ctx->pc = 0x3B0334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0330u;
    // 0x3b0334: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6ED8u, 0x3B0330u, 0x3B0338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0338u;
label_3b0338:
    // 0x3b0338: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0338u;
    {
        const bool branch_taken_0x3b0338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0338u;
        // 0x3b033c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0338) {
            ctx->pc = 0x3B0348u;
            goto label_3b0348;
        }
    }
    ctx->pc = 0x3B0340u;
label_3b0340:
    // 0x3b0340: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b0340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b0344: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b0344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b0348:
    // 0x3b0348: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b0348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b034c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b034cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b0350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0354: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0354u;
        // 0x3b0358: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B035Cu;
    // 0x3b035c: 0x0  nop
    ctx->pc = 0x3b035cu;
    // NOP
    ctx->pc = 0x3b0360u;
}
