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

// Function: func_00155248
// Address: 0x155248 - 0x1552d0
void func_00155248_0x155248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00155248_0x155248");
#endif

    switch (ctx->pc) {
        case 0x155290u: goto label_155290;
        case 0x15529cu: goto label_15529c;
        default: break;
    }

    ctx->pc = 0x155248u;

    // 0x155248: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x155248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15524c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15524cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x155250: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x155250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x155254: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x155254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x155258: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x155258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15525c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x155260: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155264: 0x8e620388  lw          $v0, 0x388($s3)
    ctx->pc = 0x155264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 904)));
    // 0x155268: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x155268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15526c: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x15526cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x155270: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x155270u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155274: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x155274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x155278: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155278u;
    {
        const bool branch_taken_0x155278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155278u;
        // 0x15527c: 0xa2630385  sb          $v1, 0x385($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 901), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155278) {
            ctx->pc = 0x155288u;
            goto label_155288;
        }
    }
    ctx->pc = 0x155280u;
    // 0x155280: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x155280u;
    {
        const bool branch_taken_0x155280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155280u;
        // 0x155284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155280) {
            ctx->pc = 0x1552B4u;
            goto label_1552b4;
        }
    }
    ctx->pc = 0x155288u;
label_155288:
    // 0x155288: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x155288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15528c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15528cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155290:
    // 0x155290: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155294: 0xc0554b4  jal         func_1552D0
    ctx->pc = 0x155294u;
    SET_GPR_U32(ctx, 31, 0x15529Cu);
    ctx->pc = 0x155298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155294u;
    // 0x155298: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1552D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1552D0u, 0x155294u, 0x15529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15529Cu;
label_15529c:
    // 0x15529c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15529cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1552a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1552a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1552a4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1552a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1552a8: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1552A8u;
    {
        const bool branch_taken_0x1552a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1552ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552A8u;
        // 0x1552ac: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552a8) {
            ctx->pc = 0x155290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155290;
        }
    }
    ctx->pc = 0x1552B0u;
    // 0x1552b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1552b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1552b4:
    // 0x1552b4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1552b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1552b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1552b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1552bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1552bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1552c0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1552c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1552c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1552c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1552c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1552C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1552CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552C8u;
        // 0x1552cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1552C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1552D0u;
}
