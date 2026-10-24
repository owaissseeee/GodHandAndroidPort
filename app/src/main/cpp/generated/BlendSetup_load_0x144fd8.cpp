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

// Function: BlendSetup_load
// Address: 0x144fd8 - 0x1450a0
void BlendSetup_load_0x144fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlendSetup_load_0x144fd8");
#endif

    switch (ctx->pc) {
        case 0x145018u: goto label_145018;
        case 0x145028u: goto label_145028;
        case 0x145038u: goto label_145038;
        case 0x145048u: goto label_145048;
        default: break;
    }

    ctx->pc = 0x144fd8u;

    // 0x144fd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x144fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x144fdc: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x144fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x144fe0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x144fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x144fe4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x144fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x144fe8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x144fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144fec: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x144fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x144ff0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x144ff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ff4: 0x8a403  sra         $s4, $t0, 16
    ctx->pc = 0x144ff4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), 16));
    // 0x144ff8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x144ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x144ffc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x144ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x145000: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x145000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145004: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x145004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145008: 0x3132ffff  andi        $s2, $t1, 0xFFFF
    ctx->pc = 0x145008u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x14500c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14500cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145010: 0xc051428  jal         func_1450A0
    ctx->pc = 0x145010u;
    SET_GPR_U32(ctx, 31, 0x145018u);
    ctx->pc = 0x145014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145010u;
    // 0x145014: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x145010u, 0x145018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145018u;
label_145018:
    // 0x145018: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x145018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14501c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14501cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145020: 0xc051440  jal         func_145100
    ctx->pc = 0x145020u;
    SET_GPR_U32(ctx, 31, 0x145028u);
    ctx->pc = 0x145024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145020u;
    // 0x145024: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145100u, 0x145020u, 0x145028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145028u;
label_145028:
    // 0x145028: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x145028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14502c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145030: 0xc051468  jal         func_1451A0
    ctx->pc = 0x145030u;
    SET_GPR_U32(ctx, 31, 0x145038u);
    ctx->pc = 0x145034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145030u;
    // 0x145034: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451A0u, 0x145030u, 0x145038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145038u;
label_145038:
    // 0x145038: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x145038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x14503c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14503cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145040: 0xc051458  jal         func_145160
    ctx->pc = 0x145040u;
    SET_GPR_U32(ctx, 31, 0x145048u);
    ctx->pc = 0x145044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145040u;
    // 0x145044: 0x24a5d6f8  addiu       $a1, $a1, -0x2908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145160u, 0x145040u, 0x145048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145048u;
label_145048:
    // 0x145048: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x145048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x14504c: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x14504Cu;
    {
        const bool branch_taken_0x14504c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x145050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14504Cu;
        // 0x145050: 0x2a420024  slti        $v0, $s2, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)36) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14504c) {
            ctx->pc = 0x145060u;
            goto label_145060;
        }
    }
    ctx->pc = 0x145054u;
    // 0x145054: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x145054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x145058: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145058u;
    {
        const bool branch_taken_0x145058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145058u;
        // 0x14505c: 0xa6620422  sh          $v0, 0x422($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1058), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145058) {
            ctx->pc = 0x145070u;
            goto label_145070;
        }
    }
    ctx->pc = 0x145060u;
label_145060:
    // 0x145060: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x145060u;
    {
        const bool branch_taken_0x145060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145060) {
            ctx->pc = 0x145064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145060u;
            // 0x145064: 0xa6720422  sh          $s2, 0x422($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 1058), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145070u;
            goto label_145070;
        }
    }
    ctx->pc = 0x145068u;
    // 0x145068: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x145068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x14506c: 0xa6620422  sh          $v0, 0x422($s3)
    ctx->pc = 0x14506cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1058), (uint16_t)GPR_U32(ctx, 2));
label_145070:
    // 0x145070: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x145070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x145074: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x145074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x145078: 0x9443d70c  lhu         $v1, -0x28F4($v0)
    ctx->pc = 0x145078u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x3BD70Cu));
    // 0x14507c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14507cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145080: 0xa66304d0  sh          $v1, 0x4D0($s3)
    ctx->pc = 0x145080u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1232), (uint16_t)GPR_U32(ctx, 3));
    // 0x145084: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x145084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145088: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x145088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14508c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x14508cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145094: 0x3e00008  jr          $ra
    ctx->pc = 0x145094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145094u;
        // 0x145098: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14509Cu;
    // 0x14509c: 0x0  nop
    ctx->pc = 0x14509cu;
    // NOP
    ctx->pc = 0x1450a0u;
}
