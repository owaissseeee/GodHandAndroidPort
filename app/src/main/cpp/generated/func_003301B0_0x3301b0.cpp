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

// Function: func_003301B0
// Address: 0x3301b0 - 0x330268
void func_003301B0_0x3301b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003301B0_0x3301b0");
#endif

    switch (ctx->pc) {
        case 0x330228u: goto label_330228;
        default: break;
    }

    ctx->pc = 0x3301b0u;

    // 0x3301b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3301b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3301b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3301b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3301b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3301b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3301bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3301bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3301c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3301c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3301c4: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x3301c4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3301c8: 0x54a20023  bnel        $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3301C8u;
    {
        const bool branch_taken_0x3301c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3301c8) {
            ctx->pc = 0x3301CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3301C8u;
            // 0x3301cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330258u;
            goto label_330258;
        }
    }
    ctx->pc = 0x3301D0u;
    // 0x3301d0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x3301d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3301d4: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3301D4u;
    {
        const bool branch_taken_0x3301d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3301D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3301D4u;
        // 0x3301d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3301d4) {
            ctx->pc = 0x3301F0u;
            goto label_3301f0;
        }
    }
    ctx->pc = 0x3301DCu;
    // 0x3301dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3301dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3301e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3301e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3301e4: 0x80cbeb6  j           func_32FAD8
    ctx->pc = 0x3301E4u;
    ctx->pc = 0x3301E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3301E4u;
    // 0x3301e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAD8u, 0x3301E4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3301ECu;
    // 0x3301ec: 0x0  nop
    ctx->pc = 0x3301ecu;
    // NOP
label_3301f0:
    // 0x3301f0: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3301F0u;
    {
        const bool branch_taken_0x3301f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3301f0) {
            ctx->pc = 0x3301F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3301F0u;
            // 0x3301f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330258u;
            goto label_330258;
        }
    }
    ctx->pc = 0x3301F8u;
    // 0x3301f8: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x3301f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3301fc: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3301FCu;
    {
        const bool branch_taken_0x3301fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3301fc) {
            ctx->pc = 0x330200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3301FCu;
            // 0x330200: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330258u;
            goto label_330258;
        }
    }
    ctx->pc = 0x330204u;
    // 0x330204: 0x8e021958  lw          $v0, 0x1958($s0)
    ctx->pc = 0x330204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6488)));
    // 0x330208: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x330208u;
    {
        const bool branch_taken_0x330208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330208) {
            ctx->pc = 0x330220u;
            goto label_330220;
        }
    }
    ctx->pc = 0x330210u;
    // 0x330210: 0x1045000d  beq         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x330210u;
    {
        const bool branch_taken_0x330210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x330214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330210u;
        // 0x330214: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330210) {
            ctx->pc = 0x330248u;
            goto label_330248;
        }
    }
    ctx->pc = 0x330218u;
    // 0x330218: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x330218u;
    {
        const bool branch_taken_0x330218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330218u;
        // 0x33021c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330218) {
            ctx->pc = 0x33025Cu;
            goto label_33025c;
        }
    }
    ctx->pc = 0x330220u;
label_330220:
    // 0x330220: 0xc0cbf0e  jal         func_32FC38
    ctx->pc = 0x330220u;
    SET_GPR_U32(ctx, 31, 0x330228u);
    ctx->pc = 0x32FC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FC38u, 0x330220u, 0x330228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330228u;
label_330228:
    // 0x330228: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x330228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33022c: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33022Cu;
    {
        const bool branch_taken_0x33022c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33022c) {
            ctx->pc = 0x330230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33022Cu;
            // 0x330230: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330258u;
            goto label_330258;
        }
    }
    ctx->pc = 0x330234u;
    // 0x330234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x330234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33023c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33023cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x330240: 0x80cbf0e  j           func_32FC38
    ctx->pc = 0x330240u;
    ctx->pc = 0x330244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330240u;
    // 0x330244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FC38u, 0x330240u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330248u;
label_330248:
    // 0x330248: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x330248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33024c: 0x80cc020  j           func_330080
    ctx->pc = 0x33024Cu;
    ctx->pc = 0x330250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33024Cu;
    // 0x330250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330080u, 0x33024Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330254u;
    // 0x330254: 0x0  nop
    ctx->pc = 0x330254u;
    // NOP
label_330258:
    // 0x330258: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x330258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33025c:
    // 0x33025c: 0x3e00008  jr          $ra
    ctx->pc = 0x33025Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33025Cu;
        // 0x330260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33025Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330264u;
    // 0x330264: 0x0  nop
    ctx->pc = 0x330264u;
    // NOP
    ctx->pc = 0x330268u;
}
