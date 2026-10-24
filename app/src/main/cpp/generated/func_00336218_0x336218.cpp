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

// Function: func_00336218
// Address: 0x336218 - 0x3362e8
void func_00336218_0x336218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336218_0x336218");
#endif

    switch (ctx->pc) {
        case 0x33627cu: goto label_33627c;
        case 0x33629cu: goto label_33629c;
        default: break;
    }

    ctx->pc = 0x336218u;

    // 0x336218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33621c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33621cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336228: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x336228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33622c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33622cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x336230: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x336230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x336234: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x336234u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x336238: 0x10460025  beq         $v0, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x336238u;
    {
        const bool branch_taken_0x336238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x33623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336238u;
        // 0x33623c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336238) {
            ctx->pc = 0x3362D0u;
            goto label_3362d0;
        }
    }
    ctx->pc = 0x336240u;
    // 0x336240: 0x82120001  lb          $s2, 0x1($s0)
    ctx->pc = 0x336240u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x336244: 0x56420023  bnel        $s2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x336244u;
    {
        const bool branch_taken_0x336244 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x336244) {
            ctx->pc = 0x336248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336244u;
            // 0x336248: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3362D4u;
            goto label_3362d4;
        }
    }
    ctx->pc = 0x33624Cu;
    // 0x33624c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x33624cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x336250: 0x58400020  blezl       $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x336250u;
    {
        const bool branch_taken_0x336250 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x336250) {
            ctx->pc = 0x336254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336250u;
            // 0x336254: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3362D4u;
            goto label_3362d4;
        }
    }
    ctx->pc = 0x336258u;
    // 0x336258: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x336258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x33625c: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x33625cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x336260: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x336260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x336264: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x336264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x336268: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x336268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x33626c: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x33626Cu;
    {
        const bool branch_taken_0x33626c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x336270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33626Cu;
        // 0x336270: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33626c) {
            ctx->pc = 0x336284u;
            goto label_336284;
        }
    }
    ctx->pc = 0x336274u;
    // 0x336274: 0xc0cd812  jal         func_336048
    ctx->pc = 0x336274u;
    SET_GPR_U32(ctx, 31, 0x33627Cu);
    ctx->pc = 0x336048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336048u, 0x336274u, 0x33627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33627Cu;
label_33627c:
    // 0x33627c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x33627cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x336280: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x336280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_336284:
    // 0x336284: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x336284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x336288: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x336288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x33628c: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x33628Cu;
    {
        const bool branch_taken_0x33628c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x336290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33628Cu;
        // 0x336290: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33628c) {
            ctx->pc = 0x3362A4u;
            goto label_3362a4;
        }
    }
    ctx->pc = 0x336294u;
    // 0x336294: 0xc0cd844  jal         func_336110
    ctx->pc = 0x336294u;
    SET_GPR_U32(ctx, 31, 0x33629Cu);
    ctx->pc = 0x336298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336294u;
    // 0x336298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336110u, 0x336294u, 0x33629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33629Cu;
label_33629c:
    // 0x33629c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x33629cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3362a0: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x3362a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3362a4:
    // 0x3362a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3362a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3362a8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3362a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x3362ac: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3362ACu;
    {
        const bool branch_taken_0x3362ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3362ac) {
            ctx->pc = 0x3362B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3362ACu;
            // 0x3362b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3362D4u;
            goto label_3362d4;
        }
    }
    ctx->pc = 0x3362B4u;
    // 0x3362b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3362b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3362b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3362b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3362bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3362bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3362c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3362c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3362c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3362c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3362c8: 0x80cd7c8  j           func_335F20
    ctx->pc = 0x3362C8u;
    ctx->pc = 0x3362CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3362C8u;
    // 0x3362cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F20u, 0x3362C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3362D0u;
label_3362d0:
    // 0x3362d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3362d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3362d4:
    // 0x3362d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3362d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3362d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3362d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3362dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3362dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3362e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3362E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3362E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362E0u;
        // 0x3362e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3362E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3362E8u;
}
