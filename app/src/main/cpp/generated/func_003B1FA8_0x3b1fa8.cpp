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

// Function: func_003B1FA8
// Address: 0x3b1fa8 - 0x3b2028
void func_003B1FA8_0x3b1fa8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B1FA8_0x3b1fa8");
#endif

    if (__builtin_expect(ctx->pc != 0x3b1fa8u, 0)) {
        switch (ctx->pc) {
            case 0x3b1fe0u: goto label_3b1fe0;
            case 0x3b2004u: goto label_3b2004;
            case 0x3b2014u: goto label_3b2014;
            default: break;
        }
    }


    // 0x3b1fa8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3b1fac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3b1facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3b1fb0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3b1fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3b1fb4: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1fb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b1fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b1fbc: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x3b1fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x3b1fc0: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x3b1fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x3b1fc4: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x3b1fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x3b1fc8: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x3b1fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x3b1fcc: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x3b1fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x3b1fd0: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x3b1fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x3b1fd4: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x3b1fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x3b1fd8: 0xc0ed8e8  jal         func_3B63A0
    SET_GPR_U32(ctx, 31, 0x3B1FE0u);
    ctx->pc = 0x3B1FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1FD8u;
    // 0x3b1fdc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &DIntr_0x3b63a0, 0x3b63a0u, 0x3b1fe0u)) {
        return;
    }
label_3b1fe0:
    // 0x3b1fe0: 0x3c04003b  lui         $a0, 0x3B
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x3b1fe4: 0x3c06ffff  lui         $a2, 0xFFFF
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3b1fe8: 0x40882d  daddu       $s1, $v0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1fec: 0x24841e68  addiu       $a0, $a0, 0x1E68
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7784));
    // 0x3b1ff0: 0x200382d  daddu       $a3, $s0, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1ff4: 0x3a0282d  daddu       $a1, $sp, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1ff8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x3b1ffc: 0xc0ec434  jal         func_3B10D0
    SET_GPR_U32(ctx, 31, 0x3B2004u);
    ctx->pc = 0x3B2000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1FFCu;
    // 0x3b2000: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &_sceSnprintf_0x3b10d0, 0x3b10d0u, 0x3b2004u)) {
        return;
    }
label_3b2004:
    // 0x3b2004: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2004u;
    {
        const bool branch_taken_0x3b2004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2004u;
        // 0x3b2008: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2004) {
            ctx->pc = 0x3B2018u;
            goto label_3b2018;
        }
    }
    // 0x3b200c: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B200Cu;
    SET_GPR_U32(ctx, 31, 0x3B2014u);
    if (!runtime->callDirectStatic(rdram, ctx, &EIntr_0x3b63f0, 0x3b63f0u, 0x3b2014u)) {
        return;
    }
label_3b2014:
    // 0x3b2014: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b2014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b2018:
    // 0x3b2018: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3b2018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b201c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b201cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2020: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2020u;
        // 0x3b2024: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2028u;
}