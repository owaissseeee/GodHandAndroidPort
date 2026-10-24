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

// Function: cObjPtrArrayWrapper_insert
// Address: 0x312908 - 0x3129d0
void cObjPtrArrayWrapper_insert_0x312908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjPtrArrayWrapper_insert_0x312908");
#endif

    switch (ctx->pc) {
        case 0x3129b0u: goto label_3129b0;
        default: break;
    }

    ctx->pc = 0x312908u;

    // 0x312908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x312908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31290c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31290cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x312910: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x312910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x312914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x312914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x312918: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x312918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31291c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31291Cu;
    {
        const bool branch_taken_0x31291c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31291Cu;
        // 0x312920: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31291c) {
            ctx->pc = 0x312938u;
            goto label_312938;
        }
    }
    ctx->pc = 0x312924u;
    // 0x312924: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x312924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x312928: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x312928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x31292c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31292cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312930: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x312930u;
    {
        const bool branch_taken_0x312930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312930u;
        // 0x312934: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312930) {
            ctx->pc = 0x31293Cu;
            goto label_31293c;
        }
    }
    ctx->pc = 0x312938u;
label_312938:
    // 0x312938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x312938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31293c:
    // 0x31293c: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x31293cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312940: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x312940u;
    {
        const bool branch_taken_0x312940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x312940) {
            ctx->pc = 0x312944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312940u;
            // 0x312944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312958u;
            goto label_312958;
        }
    }
    ctx->pc = 0x312948u;
    // 0x312948: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x312948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31294c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x31294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x312950: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x312950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312954: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x312954u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_312958:
    // 0x312958: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x312958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31295c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31295Cu;
    {
        const bool branch_taken_0x31295c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31295c) {
            ctx->pc = 0x312960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31295Cu;
            // 0x312960: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31296Cu;
            goto label_31296c;
        }
    }
    ctx->pc = 0x312964u;
    // 0x312964: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x312964u;
    {
        const bool branch_taken_0x312964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312964u;
        // 0x312968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312964) {
            ctx->pc = 0x3129BCu;
            goto label_3129bc;
        }
    }
    ctx->pc = 0x31296Cu;
label_31296c:
    // 0x31296c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x31296cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312970: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x312970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x312974: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x312974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x312978: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x312978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x31297c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31297Cu;
    {
        const bool branch_taken_0x31297c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x312980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31297Cu;
        // 0x312980: 0x28883  sra         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31297c) {
            ctx->pc = 0x3129A8u;
            goto label_3129a8;
        }
    }
    ctx->pc = 0x312984u;
    // 0x312984: 0x14a40008  bne         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x312984u;
    {
        const bool branch_taken_0x312984 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x312984) {
            ctx->pc = 0x3129A8u;
            goto label_3129a8;
        }
    }
    ctx->pc = 0x31298Cu;
    // 0x31298c: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31298Cu;
    {
        const bool branch_taken_0x31298c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x312990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31298Cu;
        // 0x312990: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31298c) {
            ctx->pc = 0x312998u;
            goto label_312998;
        }
    }
    ctx->pc = 0x312994u;
    // 0x312994: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x312994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_312998:
    // 0x312998: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x312998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31299c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x31299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3129a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3129A0u;
    {
        const bool branch_taken_0x3129a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3129A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129A0u;
        // 0x3129a4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3129a0) {
            ctx->pc = 0x3129B0u;
            goto label_3129b0;
        }
    }
    ctx->pc = 0x3129A8u;
label_3129a8:
    // 0x3129a8: 0xc0c5ffc  jal         func_317FF0
    ctx->pc = 0x3129A8u;
    SET_GPR_U32(ctx, 31, 0x3129B0u);
    ctx->pc = 0x3129ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129A8u;
    // 0x3129ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317FF0u, 0x3129A8u, 0x3129B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129B0u;
label_3129b0:
    // 0x3129b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3129b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3129b4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3129b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3129b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3129b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3129bc:
    // 0x3129bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3129bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3129c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3129c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3129c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3129c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3129c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3129C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3129CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129C8u;
        // 0x3129cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3129C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3129D0u;
}
