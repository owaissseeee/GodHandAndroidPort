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

// Function: func_002B4428
// Address: 0x2b4428 - 0x2b4518
void func_002B4428_0x2b4428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4428_0x2b4428");
#endif

    switch (ctx->pc) {
        case 0x2b4484u: goto label_2b4484;
        case 0x2b4498u: goto label_2b4498;
        case 0x2b44d8u: goto label_2b44d8;
        default: break;
    }

    ctx->pc = 0x2b4428u;

    // 0x2b4428: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b4428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b442c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b442cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b4430: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b4430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b4434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4438: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b4438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b443c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b443cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4444: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x2b4444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2b4448: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4448u;
    {
        const bool branch_taken_0x2b4448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4448u;
        // 0x2b444c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4448) {
            ctx->pc = 0x2B445Cu;
            goto label_2b445c;
        }
    }
    ctx->pc = 0x2B4450u;
    // 0x2b4450: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2b4450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2b4454: 0x1052002a  beq         $v0, $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2B4454u;
    {
        const bool branch_taken_0x2b4454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2B4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4454u;
        // 0x2b4458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4454) {
            ctx->pc = 0x2B4500u;
            goto label_2b4500;
        }
    }
    ctx->pc = 0x2B445Cu;
label_2b445c:
    // 0x2b445c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2b445cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2b4460: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2b4460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x2b4464: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2b4464u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2b4468: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b4468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b446c: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B446Cu;
    {
        const bool branch_taken_0x2b446c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B446Cu;
        // 0x2b4470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b446c) {
            ctx->pc = 0x2B4500u;
            goto label_2b4500;
        }
    }
    ctx->pc = 0x2B4474u;
    // 0x2b4474: 0x56200011  bnel        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B4474u;
    {
        const bool branch_taken_0x2b4474 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4474) {
            ctx->pc = 0x2B4478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4474u;
            // 0x2b4478: 0x8e0200b4  lw          $v0, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B44BCu;
            goto label_2b44bc;
        }
    }
    ctx->pc = 0x2B447Cu;
    // 0x2b447c: 0xc0ad16c  jal         func_2B45B0
    ctx->pc = 0x2B447Cu;
    SET_GPR_U32(ctx, 31, 0x2B4484u);
    ctx->pc = 0x2B4480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B447Cu;
    // 0x2b4480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B45B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B45B0u, 0x2B447Cu, 0x2B4484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4484u;
label_2b4484:
    // 0x2b4484: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2b4484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2b4488: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x2b4488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x2b448c: 0x244275b0  addiu       $v0, $v0, 0x75B0
    ctx->pc = 0x2b448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30128));
    // 0x2b4490: 0x8c63aff0  lw          $v1, -0x5010($v1)
    ctx->pc = 0x2b4490u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2b4494: 0x24440360  addiu       $a0, $v0, 0x360
    ctx->pc = 0x2b4494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
label_2b4498:
    // 0x2b4498: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x2b4498u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b449c: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x2b449cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b44a0: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2b44a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2b44a4: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x2b44a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x2b44a8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2b44a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b44ac: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B44ACu;
    {
        const bool branch_taken_0x2b44ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44ACu;
        // 0x2b44b0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b44ac) {
            ctx->pc = 0x2B4498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4498;
        }
    }
    ctx->pc = 0x2B44B4u;
    // 0x2b44b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B44B4u;
    {
        const bool branch_taken_0x2b44b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44B4u;
        // 0x2b44b8: 0xae1100b4  sw          $s1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b44b4) {
            ctx->pc = 0x2B44F8u;
            goto label_2b44f8;
        }
    }
    ctx->pc = 0x2B44BCu;
label_2b44bc:
    // 0x2b44bc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2B44BCu;
    {
        const bool branch_taken_0x2b44bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b44bc) {
            ctx->pc = 0x2B44C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B44BCu;
            // 0x2b44c0: 0xae1100b4  sw          $s1, 0xB4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B44F8u;
            goto label_2b44f8;
        }
    }
    ctx->pc = 0x2B44C4u;
    // 0x2b44c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2b44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2b44c8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x2b44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x2b44cc: 0x8c42aff0  lw          $v0, -0x5010($v0)
    ctx->pc = 0x2b44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2b44d0: 0x246375b0  addiu       $v1, $v1, 0x75B0
    ctx->pc = 0x2b44d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30128));
    // 0x2b44d4: 0x24440360  addiu       $a0, $v0, 0x360
    ctx->pc = 0x2b44d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
label_2b44d8:
    // 0x2b44d8: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x2b44d8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b44dc: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x2b44dcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b44e0: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2b44e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2b44e4: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x2b44e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x2b44e8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2b44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b44ec: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B44ECu;
    {
        const bool branch_taken_0x2b44ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44ECu;
        // 0x2b44f0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b44ec) {
            ctx->pc = 0x2B44D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b44d8;
        }
    }
    ctx->pc = 0x2B44F4u;
    // 0x2b44f4: 0xae1100b4  sw          $s1, 0xB4($s0)
    ctx->pc = 0x2b44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 17));
label_2b44f8:
    // 0x2b44f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b44fc: 0xae120040  sw          $s2, 0x40($s0)
    ctx->pc = 0x2b44fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 18));
label_2b4500:
    // 0x2b4500: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b4500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4504: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b4504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4508: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b4508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b450c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b450cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4510: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4510u;
        // 0x2b4514: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4518u;
}
