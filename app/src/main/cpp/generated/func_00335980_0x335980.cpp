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

// Function: func_00335980
// Address: 0x335980 - 0x335a18
void func_00335980_0x335980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335980_0x335980");
#endif

    switch (ctx->pc) {
        case 0x3359e0u: goto label_3359e0;
        case 0x3359f0u: goto label_3359f0;
        default: break;
    }

    ctx->pc = 0x335980u;

    // 0x335980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33598c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33598Cu;
    {
        const bool branch_taken_0x33598c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x335990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33598Cu;
        // 0x335990: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33598c) {
            ctx->pc = 0x3359B0u;
            goto label_3359b0;
        }
    }
    ctx->pc = 0x335994u;
    // 0x335994: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x335994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x335998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33599c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33599cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3359a0: 0x24844cd8  addiu       $a0, $a0, 0x4CD8
    ctx->pc = 0x3359a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19672));
    // 0x3359a4: 0x80cd750  j           func_335D40
    ctx->pc = 0x3359A4u;
    ctx->pc = 0x3359A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3359A4u;
    // 0x3359a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x3359A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3359ACu;
    // 0x3359ac: 0x0  nop
    ctx->pc = 0x3359acu;
    // NOP
label_3359b0:
    // 0x3359b0: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x3359b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3359b4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3359B4u;
    {
        const bool branch_taken_0x3359b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3359b4) {
            ctx->pc = 0x3359B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3359B4u;
            // 0x3359b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3359F8u;
            goto label_3359f8;
        }
    }
    ctx->pc = 0x3359BCu;
    // 0x3359bc: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3359bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3359c0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3359C0u;
    {
        const bool branch_taken_0x3359c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3359C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359C0u;
        // 0x3359c4: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3359c0) {
            ctx->pc = 0x3359E4u;
            goto label_3359e4;
        }
    }
    ctx->pc = 0x3359C8u;
    // 0x3359c8: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x3359c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3359cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3359ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3359d0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3359D0u;
    {
        const bool branch_taken_0x3359d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3359d0) {
            ctx->pc = 0x3359D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3359D0u;
            // 0x3359d4: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3359E8u;
            goto label_3359e8;
        }
    }
    ctx->pc = 0x3359D8u;
    // 0x3359d8: 0xc0ca0da  jal         func_328368
    ctx->pc = 0x3359D8u;
    SET_GPR_U32(ctx, 31, 0x3359E0u);
    ctx->pc = 0x328368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328368u, 0x3359D8u, 0x3359E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3359E0u;
label_3359e0:
    // 0x3359e0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3359e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_3359e4:
    // 0x3359e4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3359e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_3359e8:
    // 0x3359e8: 0xc0cd612  jal         func_335848
    ctx->pc = 0x3359E8u;
    SET_GPR_U32(ctx, 31, 0x3359F0u);
    ctx->pc = 0x3359ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3359E8u;
    // 0x3359ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335848u, 0x3359E8u, 0x3359F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3359F0u;
label_3359f0:
    // 0x3359f0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x3359f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x3359f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3359f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3359f8:
    // 0x3359f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3359f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3359fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3359FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359FCu;
        // 0x335a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3359FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335A04u;
    // 0x335a04: 0x0  nop
    ctx->pc = 0x335a04u;
    // NOP
    // 0x335a08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x335a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x335a0c: 0x0  nop
    ctx->pc = 0x335a0cu;
    // NOP
    // 0x335a10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x335a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x335a14: 0x0  nop
    ctx->pc = 0x335a14u;
    // NOP
    ctx->pc = 0x335a18u;
}
