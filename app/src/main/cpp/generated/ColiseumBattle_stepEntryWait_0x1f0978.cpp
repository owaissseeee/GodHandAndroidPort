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

// Function: ColiseumBattle_stepEntryWait
// Address: 0x1f0978 - 0x1f0a20
void ColiseumBattle_stepEntryWait_0x1f0978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_stepEntryWait_0x1f0978");
#endif

    switch (ctx->pc) {
        case 0x1f09acu: goto label_1f09ac;
        case 0x1f09ccu: goto label_1f09cc;
        case 0x1f09e8u: goto label_1f09e8;
        case 0x1f0a04u: goto label_1f0a04;
        default: break;
    }

    ctx->pc = 0x1f0978u;

    // 0x1f0978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f0978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f097c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f0980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0988: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f0988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f098c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F098Cu;
    {
        const bool branch_taken_0x1f098c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F098Cu;
        // 0x1f0990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f098c) {
            ctx->pc = 0x1F09A4u;
            goto label_1f09a4;
        }
    }
    ctx->pc = 0x1F0994u;
    // 0x1f0994: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0994u;
    {
        const bool branch_taken_0x1f0994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0994) {
            ctx->pc = 0x1F0998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0994u;
            // 0x1f0998: 0x8e040c64  lw          $a0, 0xC64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F09BCu;
            goto label_1f09bc;
        }
    }
    ctx->pc = 0x1F099Cu;
    // 0x1f099c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1F099Cu;
    {
        const bool branch_taken_0x1f099c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F099Cu;
        // 0x1f09a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f099c) {
            ctx->pc = 0x1F0A10u;
            goto label_1f0a10;
        }
    }
    ctx->pc = 0x1F09A4u;
label_1f09a4:
    // 0x1f09a4: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F09A4u;
    SET_GPR_U32(ctx, 31, 0x1F09ACu);
    ctx->pc = 0x1F09A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09A4u;
    // 0x1f09a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F09A4u, 0x1F09ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09ACu;
label_1f09ac:
    // 0x1f09ac: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f09acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f09b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f09b4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F09B4u;
    {
        const bool branch_taken_0x1f09b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09B4u;
        // 0x1f09b8: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09b4) {
            ctx->pc = 0x1F0A0Cu;
            goto label_1f0a0c;
        }
    }
    ctx->pc = 0x1F09BCu;
label_1f09bc:
    // 0x1f09bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F09BCu;
    {
        const bool branch_taken_0x1f09bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f09bc) {
            ctx->pc = 0x1F09C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F09BCu;
            // 0x1f09c0: 0x8e040c68  lw          $a0, 0xC68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F09D8u;
            goto label_1f09d8;
        }
    }
    ctx->pc = 0x1F09C4u;
    // 0x1f09c4: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F09C4u;
    SET_GPR_U32(ctx, 31, 0x1F09CCu);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F09C4u, 0x1F09CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09CCu;
label_1f09cc:
    // 0x1f09cc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F09CCu;
    {
        const bool branch_taken_0x1f09cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f09cc) {
            ctx->pc = 0x1F09D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F09CCu;
            // 0x1f09d0: 0xae000c64  sw          $zero, 0xC64($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3172), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F09D4u;
            goto label_1f09d4;
        }
    }
    ctx->pc = 0x1F09D4u;
label_1f09d4:
    // 0x1f09d4: 0x8e040c68  lw          $a0, 0xC68($s0)
    ctx->pc = 0x1f09d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3176)));
label_1f09d8:
    // 0x1f09d8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F09D8u;
    {
        const bool branch_taken_0x1f09d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f09d8) {
            ctx->pc = 0x1F09DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F09D8u;
            // 0x1f09dc: 0x8e040c6c  lw          $a0, 0xC6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F09F4u;
            goto label_1f09f4;
        }
    }
    ctx->pc = 0x1F09E0u;
    // 0x1f09e0: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F09E0u;
    SET_GPR_U32(ctx, 31, 0x1F09E8u);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F09E0u, 0x1F09E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09E8u;
label_1f09e8:
    // 0x1f09e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F09E8u;
    {
        const bool branch_taken_0x1f09e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f09e8) {
            ctx->pc = 0x1F09ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F09E8u;
            // 0x1f09ec: 0xae000c68  sw          $zero, 0xC68($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3176), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F09F0u;
            goto label_1f09f0;
        }
    }
    ctx->pc = 0x1F09F0u;
label_1f09f0:
    // 0x1f09f0: 0x8e040c6c  lw          $a0, 0xC6C($s0)
    ctx->pc = 0x1f09f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3180)));
label_1f09f4:
    // 0x1f09f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F09F4u;
    {
        const bool branch_taken_0x1f09f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f09f4) {
            ctx->pc = 0x1F09F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F09F4u;
            // 0x1f09f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0A10u;
            goto label_1f0a10;
        }
    }
    ctx->pc = 0x1F09FCu;
    // 0x1f09fc: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F09FCu;
    SET_GPR_U32(ctx, 31, 0x1F0A04u);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F09FCu, 0x1F0A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A04u;
label_1f0a04:
    // 0x1f0a04: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F0A04u;
    {
        const bool branch_taken_0x1f0a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0a04) {
            ctx->pc = 0x1F0A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0A04u;
            // 0x1f0a08: 0xae000c6c  sw          $zero, 0xC6C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3180), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0A0Cu;
            goto label_1f0a0c;
        }
    }
    ctx->pc = 0x1F0A0Cu;
label_1f0a0c:
    // 0x1f0a0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f0a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f0a10:
    // 0x1f0a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A14u;
        // 0x1f0a18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0A1Cu;
    // 0x1f0a1c: 0x0  nop
    ctx->pc = 0x1f0a1cu;
    // NOP
    ctx->pc = 0x1f0a20u;
}
