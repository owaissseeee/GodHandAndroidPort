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

// Function: func_001508F8
// Address: 0x1508f8 - 0x1509a0
void func_001508F8_0x1508f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001508F8_0x1508f8");
#endif

    switch (ctx->pc) {
        case 0x150930u: goto label_150930;
        case 0x150940u: goto label_150940;
        case 0x15094cu: goto label_15094c;
        default: break;
    }

    ctx->pc = 0x1508f8u;

    // 0x1508f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1508f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1508fc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1508fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x150900: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x150900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x150904: 0x3442dc88  ori         $v0, $v0, 0xDC88
    ctx->pc = 0x150904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56456);
    // 0x150908: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x150908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x15090c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15090cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150910: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x150910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x150914: 0x240301c1  addiu       $v1, $zero, 0x1C1
    ctx->pc = 0x150914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
    // 0x150918: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x150918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x15091c: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x15091cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x150920: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x150920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x150924: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x150924u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x150928: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x150928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15092c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15092cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_150930:
    // 0x150930: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150934: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x150934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x150938: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x150938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15093c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15093cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150940:
    // 0x150940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150944: 0xc0b541c  jal         func_2D5070
    ctx->pc = 0x150944u;
    SET_GPR_U32(ctx, 31, 0x15094Cu);
    ctx->pc = 0x150948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150944u;
    // 0x150948: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5070u, 0x150944u, 0x15094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15094Cu;
label_15094c:
    // 0x15094c: 0x0  nop
    ctx->pc = 0x15094cu;
    // NOP
    // 0x150950: 0x1635fffb  bne         $s1, $s5, . + 4 + (-0x5 << 2)
    ctx->pc = 0x150950u;
    {
        const bool branch_taken_0x150950 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x150954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150950u;
        // 0x150954: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150950) {
            ctx->pc = 0x150940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150940;
        }
    }
    ctx->pc = 0x150958u;
    // 0x150958: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x150958u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15095c: 0x1475fff4  bne         $v1, $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x15095Cu;
    {
        const bool branch_taken_0x15095c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x150960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15095Cu;
        // 0x150960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15095c) {
            ctx->pc = 0x150930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150930;
        }
    }
    ctx->pc = 0x150964u;
    // 0x150964: 0x24032600  addiu       $v1, $zero, 0x2600
    ctx->pc = 0x150964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9728));
    // 0x150968: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x150968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15096c: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x15096cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x150970: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x150970u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x150974: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x150974u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x150978: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x150978u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x15097c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x15097cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x150980: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x150980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150984: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x150984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150988: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x150988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15098c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x15098cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150990: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x150990u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150998: 0x3e00008  jr          $ra
    ctx->pc = 0x150998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150998u;
        // 0x15099c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1509A0u;
}
