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

// Function: func_002A8718
// Address: 0x2a8718 - 0x2a87e8
void func_002A8718_0x2a8718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A8718_0x2a8718");
#endif

    switch (ctx->pc) {
        case 0x2a8758u: goto label_2a8758;
        case 0x2a877cu: goto label_2a877c;
        case 0x2a878cu: goto label_2a878c;
        case 0x2a87bcu: goto label_2a87bc;
        default: break;
    }

    ctx->pc = 0x2a8718u;

    // 0x2a8718: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a8718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a871c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2a871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2a8720: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2a8720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2a8724: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a8724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8728: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a8728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a872c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2a872cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2a8730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8734: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2a8734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2a8738: 0x8e33042c  lw          $s3, 0x42C($s1)
    ctx->pc = 0x2a8738u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1068)));
    // 0x2a873c: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A873Cu;
    {
        const bool branch_taken_0x2a873c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A873Cu;
        // 0x2a8740: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a873c) {
            ctx->pc = 0x2A87A0u;
            goto label_2a87a0;
        }
    }
    ctx->pc = 0x2A8744u;
    // 0x2a8744: 0x96630014  lhu         $v1, 0x14($s3)
    ctx->pc = 0x2a8744u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2a8748: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x2a8748u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x2a874c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A874Cu;
    {
        const bool branch_taken_0x2a874c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A874Cu;
        // 0x2a8750: 0x2638021  addu        $s0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a874c) {
            ctx->pc = 0x2A87A0u;
            goto label_2a87a0;
        }
    }
    ctx->pc = 0x2A8754u;
    // 0x2a8754: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2a8754u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a8758:
    // 0x2a8758: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a8758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a875c: 0x50b4000c  beql        $a1, $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x2A875Cu;
    {
        const bool branch_taken_0x2a875c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 20));
        if (branch_taken_0x2a875c) {
            ctx->pc = 0x2A8760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A875Cu;
            // 0x2a8760: 0x96620016  lhu         $v0, 0x16($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8790u;
            goto label_2a8790;
        }
    }
    ctx->pc = 0x2A8764u;
    // 0x2a8764: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x2a8764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2a8768: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a8768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a876c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A876Cu;
    {
        const bool branch_taken_0x2a876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A876Cu;
        // 0x2a8770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a876c) {
            ctx->pc = 0x2A8784u;
            goto label_2a8784;
        }
    }
    ctx->pc = 0x2A8774u;
    // 0x2a8774: 0xc0c1880  jal         func_306200
    ctx->pc = 0x2A8774u;
    SET_GPR_U32(ctx, 31, 0x2A877Cu);
    ctx->pc = 0x2A8778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8774u;
    // 0x2a8778: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x2A8774u, 0x2A877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A877Cu;
label_2a877c:
    // 0x2a877c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A877Cu;
    {
        const bool branch_taken_0x2a877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A877Cu;
        // 0x2a8780: 0x96620016  lhu         $v0, 0x16($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a877c) {
            ctx->pc = 0x2A8790u;
            goto label_2a8790;
        }
    }
    ctx->pc = 0x2A8784u;
label_2a8784:
    // 0x2a8784: 0xc0c1880  jal         func_306200
    ctx->pc = 0x2A8784u;
    SET_GPR_U32(ctx, 31, 0x2A878Cu);
    ctx->pc = 0x2A8788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8784u;
    // 0x2a8788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x2A8784u, 0x2A878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A878Cu;
label_2a878c:
    // 0x2a878c: 0x96620016  lhu         $v0, 0x16($s3)
    ctx->pc = 0x2a878cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_2a8790:
    // 0x2a8790: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a8790u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a8794: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2a8794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a8798: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2A8798u;
    {
        const bool branch_taken_0x2a8798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8798u;
        // 0x2a879c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8798) {
            ctx->pc = 0x2A8758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8758;
        }
    }
    ctx->pc = 0x2A87A0u;
label_2a87a0:
    // 0x2a87a0: 0x86250570  lh          $a1, 0x570($s1)
    ctx->pc = 0x2a87a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x2a87a4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2a87a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a87a8: 0x10b00005  beq         $a1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A87A8u;
    {
        const bool branch_taken_0x2a87a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x2A87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87A8u;
        // 0x2a87ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a87a8) {
            ctx->pc = 0x2A87C0u;
            goto label_2a87c0;
        }
    }
    ctx->pc = 0x2A87B0u;
    // 0x2a87b0: 0x8e260574  lw          $a2, 0x574($s1)
    ctx->pc = 0x2a87b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1396)));
    // 0x2a87b4: 0xc0c1880  jal         func_306200
    ctx->pc = 0x2A87B4u;
    SET_GPR_U32(ctx, 31, 0x2A87BCu);
    ctx->pc = 0x2A87B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A87B4u;
    // 0x2a87b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x2A87B4u, 0x2A87BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A87BCu;
label_2a87bc:
    // 0x2a87bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a87c0:
    // 0x2a87c0: 0xa6300570  sh          $s0, 0x570($s1)
    ctx->pc = 0x2a87c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1392), (uint16_t)GPR_U32(ctx, 16));
    // 0x2a87c4: 0xae220574  sw          $v0, 0x574($s1)
    ctx->pc = 0x2a87c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1396), GPR_U32(ctx, 2));
    // 0x2a87c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2a87c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a87cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2a87ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a87d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a87d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a87d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2a87d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a87d8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2a87d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a87dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a87dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a87e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A87E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A87E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87E0u;
        // 0x2a87e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A87E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A87E8u;
}
