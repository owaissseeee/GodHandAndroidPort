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

// Function: func_003341B8
// Address: 0x3341b8 - 0x334230
void func_003341B8_0x3341b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003341B8_0x3341b8");
#endif

    switch (ctx->pc) {
        case 0x3341dcu: goto label_3341dc;
        case 0x3341f0u: goto label_3341f0;
        case 0x334204u: goto label_334204;
        default: break;
    }

    ctx->pc = 0x3341b8u;

    // 0x3341b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3341b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3341bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3341bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3341c0: 0x3c13003e  lui         $s3, 0x3E
    ctx->pc = 0x3341c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
    // 0x3341c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3341c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3341c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3341c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3341cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3341ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3341d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3341d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3341d4: 0xc0cefc6  jal         func_33BF18
    ctx->pc = 0x3341D4u;
    SET_GPR_U32(ctx, 31, 0x3341DCu);
    ctx->pc = 0x3341D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3341D4u;
    // 0x3341d8: 0x26649f74  addiu       $a0, $s3, -0x608C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942580));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BF18u, 0x3341D4u, 0x3341DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3341DCu;
label_3341dc:
    // 0x3341dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3341DCu;
    {
        const bool branch_taken_0x3341dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3341E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341DCu;
        // 0x3341e0: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3341dc) {
            ctx->pc = 0x334214u;
            goto label_334214;
        }
    }
    ctx->pc = 0x3341E4u;
    // 0x3341e4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3341e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3341e8: 0x24509fe0  addiu       $s0, $v0, -0x6020
    ctx->pc = 0x3341e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942688));
    // 0x3341ec: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x3341ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3341f0:
    // 0x3341f0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3341f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3341f4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3341F4u;
    {
        const bool branch_taken_0x3341f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3341f4) {
            ctx->pc = 0x3341F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3341F4u;
            // 0x3341f8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334208u;
            goto label_334208;
        }
    }
    ctx->pc = 0x3341FCu;
    // 0x3341fc: 0xc0cd03c  jal         func_3340F0
    ctx->pc = 0x3341FCu;
    SET_GPR_U32(ctx, 31, 0x334204u);
    ctx->pc = 0x334200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3341FCu;
    // 0x334200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3340F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3340F0u, 0x3341FCu, 0x334204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334204u;
label_334204:
    // 0x334204: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x334204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_334208:
    // 0x334208: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x334208u;
    {
        const bool branch_taken_0x334208 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x33420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334208u;
        // 0x33420c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334208) {
            ctx->pc = 0x3341F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3341f0;
        }
    }
    ctx->pc = 0x334210u;
    // 0x334210: 0xae609f74  sw          $zero, -0x608C($s3)
    ctx->pc = 0x334210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294942580), GPR_U32(ctx, 0));
label_334214:
    // 0x334214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x334218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33421c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33421cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334220: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x334220u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334224: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x334224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334228: 0x3e00008  jr          $ra
    ctx->pc = 0x334228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334228u;
        // 0x33422c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334230u;
}
