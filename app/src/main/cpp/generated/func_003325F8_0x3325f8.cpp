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

// Function: func_003325F8
// Address: 0x3325f8 - 0x332670
void func_003325F8_0x3325f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003325F8_0x3325f8");
#endif

    switch (ctx->pc) {
        case 0x332638u: goto label_332638;
        case 0x33264cu: goto label_33264c;
        default: break;
    }

    ctx->pc = 0x3325f8u;

    // 0x3325f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3325f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3325fc: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3325fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x332600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x332600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x332604: 0x246384bc  addiu       $v1, $v1, -0x7B44
    ctx->pc = 0x332604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935740));
    // 0x332608: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x332608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33260c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33260cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x332610: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x332610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x332614: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x332614u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D84BCu));
    // 0x332618: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x332618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33261c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33261Cu;
    {
        const bool branch_taken_0x33261c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33261Cu;
        // 0x332620: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33261c) {
            ctx->pc = 0x332658u;
            goto label_332658;
        }
    }
    ctx->pc = 0x332624u;
    // 0x332624: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x332624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x332628: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x332628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33262c: 0x245084c0  addiu       $s0, $v0, -0x7B40
    ctx->pc = 0x33262cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935744));
    // 0x332630: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x332630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x332634: 0x0  nop
    ctx->pc = 0x332634u;
    // NOP
label_332638:
    // 0x332638: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x332638u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33263c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x33263Cu;
    {
        const bool branch_taken_0x33263c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x33263c) {
            ctx->pc = 0x332640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33263Cu;
            // 0x332640: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332650u;
            goto label_332650;
        }
    }
    ctx->pc = 0x332644u;
    // 0x332644: 0xc0cc8c4  jal         func_332310
    ctx->pc = 0x332644u;
    SET_GPR_U32(ctx, 31, 0x33264Cu);
    ctx->pc = 0x332648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332644u;
    // 0x332648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332310u, 0x332644u, 0x33264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33264Cu;
label_33264c:
    // 0x33264c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x33264cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_332650:
    // 0x332650: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x332650u;
    {
        const bool branch_taken_0x332650 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x332654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332650u;
        // 0x332654: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332650) {
            ctx->pc = 0x332638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332638;
        }
    }
    ctx->pc = 0x332658u;
label_332658:
    // 0x332658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x332658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33265c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33265cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x332660: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x332660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332664: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x332664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x332668: 0x3e00008  jr          $ra
    ctx->pc = 0x332668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332668u;
        // 0x33266c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332670u;
}
