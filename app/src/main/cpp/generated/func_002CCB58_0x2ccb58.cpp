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

// Function: func_002CCB58
// Address: 0x2ccb58 - 0x2ccbf8
void func_002CCB58_0x2ccb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CCB58_0x2ccb58");
#endif

    ctx->pc = 0x2ccb58u;

    // 0x2ccb58: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x2ccb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2ccb5c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ccb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2ccb60: 0x2447ee00  addiu       $a3, $v0, -0x1200
    ctx->pc = 0x2ccb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x2ccb64: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x2ccb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x2ccb68: 0xac8300c0  sw          $v1, 0xC0($a0)
    ctx->pc = 0x2ccb68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 3));
    // 0x2ccb6c: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x2ccb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2ccb70: 0x8ce30118  lw          $v1, 0x118($a3)
    ctx->pc = 0x2ccb70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FEF18u));
    // 0x2ccb74: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x2ccb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x2ccb78: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCB78u;
    {
        const bool branch_taken_0x2ccb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB78u;
        // 0x2ccb7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb78) {
            ctx->pc = 0x2CCB90u;
            goto label_2ccb90;
        }
    }
    ctx->pc = 0x2CCB80u;
    // 0x2ccb80: 0x8ce2011c  lw          $v0, 0x11C($a3)
    ctx->pc = 0x2ccb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 284)));
    // 0x2ccb84: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x2ccb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x2ccb88: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ccb88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ccb8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ccb8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ccb90:
    // 0x2ccb90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ccb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccb94: 0x54c50008  bnel        $a2, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CCB94u;
    {
        const bool branch_taken_0x2ccb94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ccb94) {
            ctx->pc = 0x2CCB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB94u;
            // 0x2ccb98: 0x8c830098  lw          $v1, 0x98($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCBB8u;
            goto label_2ccbb8;
        }
    }
    ctx->pc = 0x2CCB9Cu;
    // 0x2ccb9c: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x2ccb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x2ccba0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ccba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccba4: 0x8ce30120  lw          $v1, 0x120($a3)
    ctx->pc = 0x2ccba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 288)));
    // 0x2ccba8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2ccba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2ccbac: 0xac820098  sw          $v0, 0x98($a0)
    ctx->pc = 0x2ccbacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
    // 0x2ccbb0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2CCBB0u;
    {
        const bool branch_taken_0x2ccbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBB0u;
        // 0x2ccbb4: 0xac8300bc  sw          $v1, 0xBC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbb0) {
            ctx->pc = 0x2CCBF0u;
            goto label_2ccbf0;
        }
    }
    ctx->pc = 0x2CCBB8u;
label_2ccbb8:
    // 0x2ccbb8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ccbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ccbbc: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x2ccbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x2ccbc0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ccbc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccbc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ccbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ccbc8: 0x8c8500a4  lw          $a1, 0xA4($a0)
    ctx->pc = 0x2ccbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x2ccbcc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2ccbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2ccbd0: 0xac820098  sw          $v0, 0x98($a0)
    ctx->pc = 0x2ccbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
    // 0x2ccbd4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCBD4u;
    {
        const bool branch_taken_0x2ccbd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBD4u;
        // 0x2ccbd8: 0x3300a  movz        $a2, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbd4) {
            ctx->pc = 0x2CCBE4u;
            goto label_2ccbe4;
        }
    }
    ctx->pc = 0x2CCBDCu;
    // 0x2ccbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBDCu;
        // 0x2ccbe0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCBE4u;
label_2ccbe4:
    // 0x2ccbe4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ccbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ccbe8: 0xac8200bc  sw          $v0, 0xBC($a0)
    ctx->pc = 0x2ccbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 2));
    // 0x2ccbec: 0x0  nop
    ctx->pc = 0x2ccbecu;
    // NOP
label_2ccbf0:
    // 0x2ccbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBF0u;
        // 0x2ccbf4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCBF8u;
}
