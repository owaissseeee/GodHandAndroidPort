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

// Function: ColiseumUi_StartFade
// Address: 0x1f4428 - 0x1f44e0
void ColiseumUi_StartFade_0x1f4428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumUi_StartFade_0x1f4428");
#endif

    switch (ctx->pc) {
        case 0x1f4460u: goto label_1f4460;
        case 0x1f44b8u: goto label_1f44b8;
        default: break;
    }

    ctx->pc = 0x1f4428u;

    // 0x1f4428: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f4428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f442c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f442cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f4430: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f4430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f4434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4438: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f4438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f443c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1f443cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f4440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4444: 0x9e020054  lwu         $v0, 0x54($s0)
    ctx->pc = 0x1f4444u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1f4448: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1f4448u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1f444c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f444cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f4450: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4450u;
    {
        const bool branch_taken_0x1f4450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4450u;
        // 0x1f4454: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4450) {
            ctx->pc = 0x1F4470u;
            goto label_1f4470;
        }
    }
    ctx->pc = 0x1F4458u;
    // 0x1f4458: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x1F4458u;
    SET_GPR_U32(ctx, 31, 0x1F4460u);
    ctx->pc = 0x1F445Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4458u;
    // 0x1f445c: 0x26447470  addiu       $a0, $s2, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x1F4458u, 0x1F4460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4460u;
label_1f4460:
    // 0x1f4460: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1f4460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1f4464: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1f4464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f4468: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f4468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f446c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1f446cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1f4470:
    // 0x1f4470: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4470u;
    {
        const bool branch_taken_0x1f4470 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4470u;
        // 0x1f4474: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4470) {
            ctx->pc = 0x1F4480u;
            goto label_1f4480;
        }
    }
    ctx->pc = 0x1F4478u;
    // 0x1f4478: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F4478u;
    {
        const bool branch_taken_0x1f4478 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4478u;
        // 0x1f447c: 0x26447470  addiu       $a0, $s2, 0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4478) {
            ctx->pc = 0x1F449Cu;
            goto label_1f449c;
        }
    }
    ctx->pc = 0x1F4480u;
label_1f4480:
    // 0x1f4480: 0x26447470  addiu       $a0, $s2, 0x7470
    ctx->pc = 0x1f4480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29808));
    // 0x1f4484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4488: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1f4488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f448c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f448cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4490: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1f4490u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x1f4494: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4494u;
    {
        const bool branch_taken_0x1f4494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4494u;
        // 0x1f4498: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4494) {
            ctx->pc = 0x1F44B0u;
            goto label_1f44b0;
        }
    }
    ctx->pc = 0x1F449Cu;
label_1f449c:
    // 0x1f449c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f449cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44a0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1f44a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f44a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f44a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f44a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44ac: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1f44acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_1f44b0:
    // 0x1f44b0: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1F44B0u;
    SET_GPR_U32(ctx, 31, 0x1F44B8u);
    ctx->pc = 0x1F44B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F44B0u;
    // 0x1f44b4: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1F44B0u, 0x1F44B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F44B8u;
label_1f44b8:
    // 0x1f44b8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1f44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1f44bc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1f44bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1f44c0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1f44c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1f44c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f44c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f44c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f44c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f44cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f44ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f44d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f44d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f44d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F44D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F44D4u;
        // 0x1f44d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F44D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F44DCu;
    // 0x1f44dc: 0x0  nop
    ctx->pc = 0x1f44dcu;
    // NOP
    ctx->pc = 0x1f44e0u;
}
