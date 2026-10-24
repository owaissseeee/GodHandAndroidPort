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

// Function: write
// Address: 0x3b0268 - 0x3b02e8
void write_0x3b0268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("write_0x3b0268");
#endif

    switch (ctx->pc) {
        case 0x3b02a8u: goto label_3b02a8;
        case 0x3b02c0u: goto label_3b02c0;
        default: break;
    }

    ctx->pc = 0x3b0268u;

    // 0x3b0268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b0268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b026c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3b026cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3b0270: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b0270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b0274: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x3b0274u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3b0278: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b0278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b027c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b027cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0280: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b0280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b0284: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b0284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0288: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3B0288u;
    {
        const bool branch_taken_0x3b0288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0288u;
        // 0x3b028c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0288) {
            ctx->pc = 0x3B02C8u;
            goto label_3b02c8;
        }
    }
    ctx->pc = 0x3B0290u;
    // 0x3b0290: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3b0290u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3b0294: 0x8e02ae40  lw          $v0, -0x51C0($s0)
    ctx->pc = 0x3b0294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAE40u));
    // 0x3b0298: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0298u;
    {
        const bool branch_taken_0x3b0298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0298u;
        // 0x3b029c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0298) {
            ctx->pc = 0x3B02B8u;
            goto label_3b02b8;
        }
    }
    ctx->pc = 0x3B02A0u;
    // 0x3b02a0: 0xc07db9a  jal         func_1F6E68
    ctx->pc = 0x3B02A0u;
    SET_GPR_U32(ctx, 31, 0x3B02A8u);
    ctx->pc = 0x1F6E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6E68u, 0x3B02A0u, 0x3B02A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B02A8u;
label_3b02a8:
    // 0x3b02a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B02A8u;
    {
        const bool branch_taken_0x3b02a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B02ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B02A8u;
        // 0x3b02ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b02a8) {
            ctx->pc = 0x3B02C8u;
            goto label_3b02c8;
        }
    }
    ctx->pc = 0x3B02B0u;
    // 0x3b02b0: 0xae02ae40  sw          $v0, -0x51C0($s0)
    ctx->pc = 0x3b02b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294946368), GPR_U32(ctx, 2));
    // 0x3b02b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b02b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b02b8:
    // 0x3b02b8: 0xc07dba6  jal         func_1F6E98
    ctx->pc = 0x3B02B8u;
    SET_GPR_U32(ctx, 31, 0x3B02C0u);
    ctx->pc = 0x3B02BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B02B8u;
    // 0x3b02bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6E98u, 0x3B02B8u, 0x3B02C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B02C0u;
label_3b02c0:
    // 0x3b02c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B02C0u;
    {
        const bool branch_taken_0x3b02c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B02C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B02C0u;
        // 0x3b02c4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b02c0) {
            ctx->pc = 0x3B02D0u;
            goto label_3b02d0;
        }
    }
    ctx->pc = 0x3B02C8u;
label_3b02c8:
    // 0x3b02c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b02c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b02cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b02ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b02d0:
    // 0x3b02d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b02d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b02d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b02d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b02d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b02d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b02dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B02DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B02E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B02DCu;
        // 0x3b02e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B02DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B02E4u;
    // 0x3b02e4: 0x0  nop
    ctx->pc = 0x3b02e4u;
    // NOP
    ctx->pc = 0x3b02e8u;
}
