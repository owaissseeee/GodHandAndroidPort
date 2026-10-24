#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: func_007A8180
// Address: 0x7a8180 - 0x7a8240
void func_007A8180_0x7a8180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007A8180_0x7a8180");
#endif

    ctx->pc = 0x7a8180u;

    // 0x7a8180: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x7A8180u;
    {
        const bool branch_taken_0x7a8180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8180u;
        // 0x7a8184: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8180) {
            ctx->pc = 0x7A8230u;
            goto label_7a8230;
        }
    }
    ctx->pc = 0x7A8188u;
    // 0x7a8188: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x7A8188u;
    {
        const bool branch_taken_0x7a8188 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8188u;
        // 0x7a818c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8188) {
            ctx->pc = 0x7A8230u;
            goto label_7a8230;
        }
    }
    ctx->pc = 0x7A8190u;
    // 0x7a8190: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x7a8190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x7a8194: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x7a8194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7a8198: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7A8198u;
    {
        const bool branch_taken_0x7a8198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8198u;
        // 0x7a819c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8198) {
            ctx->pc = 0x7A81D4u;
            goto label_7a81d4;
        }
    }
    ctx->pc = 0x7A81A0u;
    // 0x7a81a0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x7a81a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x7a81a4: 0x4a00002  bltz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x7A81A4u;
    {
        const bool branch_taken_0x7a81a4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7A81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A81A4u;
        // 0x7a81a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a81a4) {
            ctx->pc = 0x7A81B0u;
            goto label_7a81b0;
        }
    }
    ctx->pc = 0x7A81ACu;
    // 0x7a81ac: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x7a81acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_7a81b0:
    // 0x7a81b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7a81b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7a81b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7A81B4u;
    {
        const bool branch_taken_0x7a81b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A81B4u;
        // 0x7a81b8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a81b4) {
            ctx->pc = 0x7A81CCu;
            goto label_7a81cc;
        }
    }
    ctx->pc = 0x7A81BCu;
    // 0x7a81bc: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x7a81bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x7a81c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7a81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7a81c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7A81C4u;
    {
        const bool branch_taken_0x7a81c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A81C4u;
        // 0x7a81c8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a81c4) {
            ctx->pc = 0x7A81D0u;
            goto label_7a81d0;
        }
    }
    ctx->pc = 0x7A81CCu;
label_7a81cc:
    // 0x7a81cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7a81ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a81d0:
    // 0x7a81d0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x7a81d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7a81d4:
    // 0x7a81d4: 0x90c302b4  lbu         $v1, 0x2B4($a2)
    ctx->pc = 0x7a81d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 692)));
    // 0x7a81d8: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x7a81d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7a81dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7A81DCu;
    {
        const bool branch_taken_0x7a81dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a81dc) {
            ctx->pc = 0x7A8218u;
            goto label_7a8218;
        }
    }
    ctx->pc = 0x7A81E4u;
    // 0x7a81e4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x7a81e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x7a81e8: 0x4e00002  bltz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x7A81E8u;
    {
        const bool branch_taken_0x7a81e8 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x7A81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A81E8u;
        // 0x7a81ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a81e8) {
            ctx->pc = 0x7A81F4u;
            goto label_7a81f4;
        }
    }
    ctx->pc = 0x7A81F0u;
    // 0x7a81f0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x7a81f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_7a81f4:
    // 0x7a81f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7a81f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7a81f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7A81F8u;
    {
        const bool branch_taken_0x7a81f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A81F8u;
        // 0x7a81fc: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a81f8) {
            ctx->pc = 0x7A8210u;
            goto label_7a8210;
        }
    }
    ctx->pc = 0x7A8200u;
    // 0x7a8200: 0x8cc30278  lw          $v1, 0x278($a2)
    ctx->pc = 0x7a8200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
    // 0x7a8204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7a8204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7a8208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7A8208u;
    {
        const bool branch_taken_0x7a8208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8208u;
        // 0x7a820c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8208) {
            ctx->pc = 0x7A8214u;
            goto label_7a8214;
        }
    }
    ctx->pc = 0x7A8210u;
label_7a8210:
    // 0x7a8210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7a8210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a8214:
    // 0x7a8214: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x7a8214u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7a8218:
    // 0x7a8218: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7A8218u;
    {
        const bool branch_taken_0x7a8218 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8218u;
        // 0x7a821c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8218) {
            ctx->pc = 0x7A8234u;
            goto label_7a8234;
        }
    }
    ctx->pc = 0x7A8220u;
    // 0x7a8220: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A8220u;
    {
        const bool branch_taken_0x7a8220 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8220u;
        // 0x7a8224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8220) {
            ctx->pc = 0x7A8230u;
            goto label_7a8230;
        }
    }
    ctx->pc = 0x7A8228u;
    // 0x7a8228: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7A8228u;
    {
        const bool branch_taken_0x7a8228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8228u;
        // 0x7a822c: 0xad090148  sw          $t1, 0x148($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8228) {
            ctx->pc = 0x7A8234u;
            goto label_7a8234;
        }
    }
    ctx->pc = 0x7A8230u;
label_7a8230:
    // 0x7a8230: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7a8230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a8234:
    // 0x7a8234: 0x3e00008  jr          $ra
    ctx->pc = 0x7A8234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8234u;
        // 0x7a8238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A8234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A823Cu;
    // 0x7a823c: 0x0  nop
    ctx->pc = 0x7a823cu;
    // NOP
    ctx->pc = 0x7a8240u;
}
} // namespace gh_event
